The pydio-sync repository is providing a headless python script for running the synchro.
It's based on the Qt (see http://qt-project.org) library.

Since some changes have occurred with Qt 5, we recommend to install Qt 5.2.1  !

## Build instructions

To run it, you must 
 * Install Qt 5.2
 * Clone the project
```
git clone git://github.com/pydio/pydio-sync-ui
```
 * Open the .pro file in Qt Creator and build the project or :
```
export PATH=$PATH:/your/path/to/qmake
```
 * Generate a makefile from your project file
```
qmake -r -spec macx-clang /your/path/to/pydio-sync-ui/src/systray/systray.pro
```
 * Compile
```
make all
```
* Launch the UI
```
open systray.app
```

Currently tested on Mac and Linux.

## Contributing

Please <a href="http://pyd.io/contribute/cla">sign the Contributor License Agreement</a> before contributing.
