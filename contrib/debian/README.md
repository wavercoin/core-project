
Debian
====================
This directory contains files used to package wavercoind/wavercoin-qt
for Debian-based Linux systems. If you compile wavercoind/wavercoin-qt yourself, there are some useful files here.

## wavercoin: URI support ##


wavercoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install wavercoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your wavercoinqt binary to `/usr/bin`
and the `../../share/pixmaps/wavercoin128.png` to `/usr/share/pixmaps`

wavercoin-qt.protocol (KDE)

