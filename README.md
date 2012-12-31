xnomad
======

A tiling window manager for OS X; written in [tranquil](https://github.com/fjolnir/tranquil).

[A screenshot of it running on my machine](http://d.asgeirsson.is/MIUS) (Along with a couple of other hacks to get rid of distractions such as the menubar & [rounded corners](http://macthemes.net/forum/viewtopic.php?f=8&t=16812620&sid=5cb0846289bdac319e9d29a732faae35))

##setup

[Download](https://github.com/fjolnir/xnomad/downloads) a binary and copy `xnomad.default` to `~/.xnomad`

And then just execute xnomad, your windows will be snapped in place

To learn the hotkeys, read xnomad.default

OS X 10.8 or newer is required.

## protip

In order to make the most of xnomad, I recommend you also install [afloat](http://infinite-labs.net/afloat/). It will add shortcuts for making windows floating (and therefore ignored by xnomad) and resizing/moving windows without having to spend precious milliseconds looking for the window edges.

The rounded corner hack is discussed under this issue: https://github.com/fjolnir/xnomad/issues/6

##building

In order to build xnomad you'll first need to install [tranquil](https://github.com/fjolnir/tranquil). Then you can simply write (assuming you added /usr/local/tranquil/bin to your PATH) `tqc Main.tq -framework Carbon -framework ApplicationServices -o xnomad` and a binary will appear.
