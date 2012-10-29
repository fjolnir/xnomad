xnomad
======

A tiling window manager for OS X; written in [tranquil](https://github.com/fjolnir/tranquil).

[A screenshot of it running on my machine](http://d.asgeirsson.is/h9rH) (Along with a couple of other hacks to get rid of distractions such as the menubar & rounded corners)

##setup

[Download](https://github.com/fjolnir/xnomad/downloads) a binary and copy `xnomad.default` to `~/.xnomad`

And then just execute xnomad, your windows will be snapped in place

To learn the hotkeys, read xnomad.default

**Note** that OS X 10.8 is required!

## protip

In order to make the most of xnomad, I recommend you also install [afloat](http://infinite-labs.net/afloat/). It will add shortcuts for making windows floating (and therefore ignored by xnomad) and resizing/moving windows without having to spend precious milliseconds looking for the window edges.

##building

In order to build xnomad you'll first need to install [tranquil](https://github.com/fjolnir/tranquil). Then you can simply write (assuming you added /usr/local/tranquil/bin to your PATH) `tqc Main.tq -framework Carbon -o xnomad` and a binary will appear.
