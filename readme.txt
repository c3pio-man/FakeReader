Example of reader-like application

In file /mnt/ext1/system/config/extensions.cfg (in UNIX format) add string:

xxx:XXX_file:1:FakeReader:ICON_XXX

xxx - own extension
XXX_file - description; not used
1 - files with .xxx extension must be visible in library
FakeReader - application, must open files with .xxx extension. Must be executable or script  in /mnt/ext1/system/bin/; path to open is a argv[1]
ICON_XXX - not used


To build application:
cmake -DCMAKE_TOOLCHAIN_FILE=/path/to/arm_conf.cmake
make

And copy FakeReader to /mnt/ext1/system/bin/ on device.
