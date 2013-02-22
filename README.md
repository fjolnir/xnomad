xnomad
======

A tiling window manager for OS X; written in [tranquil](https://github.com/fjolnir/tranquil).

[A screenshot of it running on my machine](http://d.asgeirsson.is/E9jb) (Along with a couple of other hacks to get rid of distractions such as the menubar & rounded corners)

[Another one ](https://lh.rs/wSYYdAtpt2Xk) (With even more hacks, that aren't ready for public consumption yet; even has focus following mouse :)

##setup

[Download](http://d.asgeirsson.is/sfEI) a binary, then copy `xnomad.default` to your home directory & rename it to `.xnomad` (Resulting path is `~/.xnomad`)

And then just execute xnomad, your windows will be snapped in place. (Make sure "Access for Assistive Devices" is enabled in Accessibility Preferences)

To learn the hotkeys, read xnomad.default

OS X 10.8 or newer is required.

##included layouts

 * Multi column
 * Tall
 * Wide
 * Fullscreen
 * Additional ones are easy to write

## protip

In order to make the most of xnomad, I recommend you also install [afloat](http://infinite-labs.net/afloat/). It will add shortcuts for making windows floating (and therefore ignored by xnomad) and resizing/moving windows without having to spend precious milliseconds looking for the window edges.

The rounded corner hack is discussed under this issue: https://github.com/fjolnir/xnomad/issues/6

##building

In order to build xnomad you'll first need to install [tranquil](https://github.com/fjolnir/tranquil). Then you can simply write (assuming you added /usr/local/tranquil/bin to your PATH) `tqc Main.tq -framework Carbon -framework ApplicationServices -o xnomad` and a binary will appear.
