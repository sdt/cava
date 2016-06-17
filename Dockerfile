FROM sdt4docker/raspberry-pi-cross-compiler

RUN install-debian automake git libtool make

RUN install-raspbian libasound2-dev libfftw3-dev libncursesw5-dev libpulse-dev

# CFLAGS=--sysroot=$SYSROOT
# CPPFLAGS=-I$SYSROOT/usr/include/ncursesw/
# ./configure --host=$HOST
