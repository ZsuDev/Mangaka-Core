
Debian
====================
This directory contains files used to package mangakad/mangaka-qt
for Debian-based Linux systems. If you compile mangakad/mangaka-qt yourself, there are some useful files here.

## mangaka: URI support ##


mangaka-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mangaka-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mangakaqt binary to `/usr/bin`
and the `../../share/pixmaps/mangaka128.png` to `/usr/share/pixmaps`

mangaka-qt.protocol (KDE)

