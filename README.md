xnomad
======

A tiling window manager for OS X; written in [tranquil](https://github.com/fjolnir/tranquil).

##setup

Download the binary ("Downloads" in the top left)
copy xnomad.default to ~/.xnomad

And then just execute xnomad, your windows will be snapped in place

To learn the hotkeys, read xnomad.default

**Note** that OS X 10.8 is required!

##building

In order to build xnomad you'll first need to install [tranquil](https://github.com/fjolnir/tranquil). Then you can simply write (assuming you added /usr/local/tranquil/bin to your PATH) `tqc Main.tq -framework Carbon -o xnomad` and a binary will appear.

##todo

* Multi-monitor support
* Additional layouts (Widescreen, etc..)
* Probably some other things I can't recall right now
