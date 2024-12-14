#! /usr/bin/env bash

set -e
set -u

prefix=/opt/stratego
builddir=build

rm -rf $builddir

export PKG_CONFIG_PATH=$prefix/lib/x86_64-linux-gnu/pkgconfig

set -x
meson setup $builddir --prefix=$prefix --buildtype=release

pushd $builddir
meson compile --verbose
meson test
meson install
popd

