### Se deberá crear una carpeta para gestionar los archivos creados automaticamente
        mkdir gtk-build
### Entrar a esa carpeta
        cd gtk-build
### Crear los archivos de configuración
        ../configure --with-gtk=3
### Copilar la libreria
        make
### Instalar la libreria
        make install
### uso ld para configurar flags
        sudo ldconfig
### Para copilar se deberá hacer de la siguiente manera
        g++ archivos_de_entrada.cpp -o salida.exe `wx-config --cppflags --libs`

#### Notese que wx-config --cppflags --libs se encuentra entre ` tilde inversa 

#### La instalación quedará en el directorio /usr/local/lib/wx
#### Se deben agregar estas direcciones al intellisense
                "/usr/local/include/wx-3.2",
                "/usr/local/lib/wx/include/gtk3-unicode-3.2"
                
#### Documentación encontrada en
        https://wiki.wxwidgets.org/Compiling_and_getting_started


## A continuación el README de parte de wxWidgets Team

About
-----

wxWidgets is a free and open source cross-platform C++ framework
for writing advanced GUI applications using native controls.

![wxWidgets Logo](https://www.wxwidgets.org/assets/img/header-logo.png)

wxWidgets allows you to write native-looking GUI applications for
all the major desktop platforms and also helps with abstracting
the differences in the non-GUI aspects between them. It is free
for the use in both open source and commercial applications, comes
with the full, easy to read and modify, source and extensive
documentation and a collection of more than a hundred examples.
You can learn more about wxWidgets at https://www.wxwidgets.org/
and read its documentation online at https://docs.wxwidgets.org/


Platforms
---------

[![AppVeyor](https://img.shields.io/appveyor/build/wxWidgets/wxWidgets/master?label=AppVeyor&logo=appveyor)](https://ci.appveyor.com/project/wxWidgets/wxwidgets)
[![Unix (make)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci.yml/badge.svg)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci.yml)
[![Unix (CMake)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci_cmake.yml/badge.svg)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci_cmake.yml)
[![MSW (MSVC)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci_msw.yml/badge.svg)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci_msw.yml)
[![MSW (gcc)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci_msw_cross.yml/badge.svg)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci_msw_cross.yml)
[![Mac](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci_mac.yml/badge.svg)](https://github.com/wxWidgets/wxWidgets/actions/workflows/ci_mac.yml)
[![OSS-Fuzz](https://oss-fuzz-build-logs.storage.googleapis.com/badges/wxwidgets.svg)](https://bugs.chromium.org/p/oss-fuzz/issues/list?sort=-opened&can=1&q=proj:wxwidgets)

This version of wxWidgets supports the following primary platforms:

- Windows XP, Vista, 7, 8, 10 and 11 (32/64 bits).
- Most Unix variants using the GTK+ toolkit (version 2.6 or newer or 3.x).
- macOS (10.10 or newer) using Cocoa under both amd64 and ARM platforms.

Most popular C++ compilers are supported including but not limited to:

- Microsoft Visual C++ 2005 or later (up to 2022).
- g++ 4 or later (up to 12), including MinGW/MinGW-64/TDM under Windows.
- Clang (up to 14).
- Intel icc compiler.
- Oracle (ex-Sun) CC.


Licence
-------

[wxWidgets licence](https://github.com/wxWidgets/wxWidgets/blob/master/docs/licence.txt)
is a modified version of LGPL explicitly allowing not distributing the sources
of an application using the library even in the case of static linking.


Building
--------

For building the library, please see platform-specific documentation under
`docs/<port>` directory, e.g. here are the instructions for
[wxGTK](docs/gtk/install.md), [wxMSW](docs/msw/install.md) and
[wxOSX](docs/osx/install.md).

If you're building the sources checked out from Git, and not from a released
version, please see these additional [Git-specific notes](README-GIT.md).


Further information
-------------------

If you are looking for community support, you can get it from

- [Mailing Lists](https://www.wxwidgets.org/support/mailing-lists/)
- [Discussion Forums](https://forums.wxwidgets.org/)
- [#wxwidgets IRC channel](https://www.wxwidgets.org/support/irc/)
- [Stack Overflow](https://stackoverflow.com/questions/tagged/wxwidgets)
  (tag your questions with `wxwidgets`)
- And you can report bugs at [GitHub](https://github.com/wxWidgets/wxWidgets/issues/new/choose)

[Commercial support](https://www.wxwidgets.org/support/commercial/) is also
available.

Finally, keep in mind that wxWidgets is an open source project collaboratively
developed by its users and your contributions to it are always welcome. Please
check [our guidelines](.github/CONTRIBUTING.md) if you'd like to do it.


Have fun!

The wxWidgets Team.
