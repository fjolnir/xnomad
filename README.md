xnomad
======

A tiling window manager for OS X; written in [tranquil](https://github.com/fjolnir/tranquil).

[A screenshot of it running on my machine](http://d.asgeirsson.is/E9jb) (Along with a couple of other hacks to get rid of distractions such as the menubar & rounded corners)

[Another one ](https://lh.rs/wSYYdAtpt2Xk) (With even more hacks, that aren't ready for public consumption yet; even has focus following mouse :)

## setup

* Download & install [tranquil](https://github.com/fjolnir/Tranquil)
* Make sure "Access for Assistive Devices" is enabled in Accessibility Preferences
* Clone xnomad, and execute `./xnomad`

OS X 10.8 or newer is required.

## included layouts

 * Multi column
 * Tall
 * Wide
 * Fullscreen
 * Additional ones are easy to write

## protips

In order to make the most of xnomad, I recommend you also install [afloat](http://infinite-labs.net/afloat/). It will add shortcuts for making windows floating (and therefore ignored by xnomad) and resizing/moving windows without having to spend precious milliseconds looking for the window edges.

Another nice addition is [menufela](http://github.com/fjolnir/menufela) which hides the menubar)

The rounded corner hack is discussed under this issue: https://github.com/fjolnir/xnomad/issues/6

## keyboard shortcuts

By default xnomad uses `ctrl + option` as `mod1` and `ctrl + shift + option` as `mod2`.
You can change all these by editing `./xnomad`.

* `mod1 + j` — focus the next window clockwise
* `mod1 + k` — focus the next window anticlockwise
* `mod1 + return` — move the focused window to or from the main pane
* `mod1 + l` — make the main pane wider
* `mod1 + h` — make the main pane narrower
* `mod1 + .` — add the focused window to the main pane
* `mod1 + ,` — remove the focused window from the main pane
* `mod1 + w` — focus the primary display
* `mod1 + e` — focus the secondary display
* `mod2 + w` — move the focused window to the primary display
* `mod2 + e` — move the focused window to the secondary display
* `mod2 + j` — move the focused window one place clockwise
* `mod2 + k` — move the focused window one place anticlockwise
* `mod2 + space` — change layout
