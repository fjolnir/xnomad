#include <Carbon/Carbon.h>

/* These functions all return a status code. Typical CoreGraphics replies are:
    kCGErrorSuccess = 0,
    kCGErrorFirst = 1000,
    kCGErrorFailure = kCGErrorFirst,
    kCGErrorIllegalArgument = 1001,
    kCGErrorInvalidConnection = 1002,
*/

// Internal CoreGraphics typedefs
typedef int CGSConnection;
typedef int CGSWindow;
typedef int CGSValue;


// Get the default connection for the current process.
extern CGSConnection _CGSDefaultConnection(void);

// Get on-screen window counts and lists.
extern OSStatus CGSGetWindowCount(const CGSConnection cid, CGSConnection targetCID, int* outCount); 
extern OSStatus CGSGetWindowList(const CGSConnection cid, CGSConnection targetCID, 
  int count, int* list, int* outCount);

// Get on-screen window counts and lists.
extern OSStatus CGSGetOnScreenWindowCount(const CGSConnection cid, CGSConnection targetCID, int* outCount); 
extern OSStatus CGSGetOnScreenWindowList(const CGSConnection cid, CGSConnection targetCID, 
  int count, int* list, int* outCount);

// Gets the level of a window
extern OSStatus CGSGetWindowLevel(const CGSConnection cid, CGSWindow wid,  int *level);

// Gets the screen rect for a window.
extern OSStatus CGSGetScreenRectForWindow(const CGSConnection cid, CGSWindow wid, CGRect *outRect);

extern OSStatus CGSGetWindowOwner(const CGSConnection cid, const CGSWindow wid, CGSConnection *ownerCid);
extern OSStatus CGSConnectionGetPID(const CGSConnection cid, pid_t *pid, const CGSConnection ownerCid);
extern OSStatus CGSGetConnectionIDForPSN(const CGSConnection cid, ProcessSerialNumber *psn, CGSConnection *out);

#pragma mark - Spaces (Reverse engineered by Brian McKenna - github.com/pufuwozu)

typedef uint64_t CGSSpace;
typedef enum _CGSSpaceType {
    kCGSSpaceUser,
    kCGSSpaceFullscreen,
    kCGSSpaceSystem,
    kCGSSpaceUnknown
} CGSSpaceType;
typedef enum _CGSSpaceSelector {
    kCGSSpaceCurrent = 5,
    kCGSSpaceOther = 6,
    kCGSSpaceAll = 7
} CGSSpaceSelector;

extern CFArrayRef CGSCopySpaces(const CGSConnection cid, CGSSpaceSelector type);
extern CFArrayRef CGSCopySpacesForWindows(const CGSConnection cid, CGSSpaceSelector type, CFArrayRef windows);
extern CGSSpaceType CGSSpaceGetType(const CGSConnection cid, CGSSpace space);

extern CFNumberRef CGSWillSwitchSpaces(const CGSConnection cid, CFArrayRef a);
extern void CGSHideSpaces(const CGSConnection cid, CFArrayRef spaces);
extern void CGSShowSpaces(const CGSConnection cid, CFArrayRef spaces);

extern void CGSAddWindowsToSpaces(const CGSConnection cid, CFArrayRef windows, CFArrayRef spaces);
extern void CGSRemoveWindowsFromSpaces(const CGSConnection cid, CFArrayRef windows, CFArrayRef spaces);

typedef uint64_t CGSManagedDisplay;
extern CGSManagedDisplay kCGSPackagesMainDisplayIdentifier;

extern void CGSManagedDisplaySetCurrentSpace(const CGSConnection cid, CGSManagedDisplay display, CGSSpace space);

#pragma mark - Accessibility

AXError _AXUIElementGetWindow(AXUIElementRef, CGWindowID* out);
