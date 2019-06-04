Example of reader-like application

Connect device to PC via USB, open directory system/config. Create file extensions.cfg (in UNIX format) and add string:

xxx:XXX_file:1:FakeReader:ICON_XXX

xxx - own extension
XXX_file - description; not used
1 - files with .xxx extension must be visible in Library app.
FakeReader - an application, which is configured in such a way to open files with .xxx extension. Must be executable or script and should be placed to system/bin/ directory; path to open is a argv[1]
ICON_XXX - not used


To build application:
cmake -DCMAKE_TOOLCHAIN_FILE=/path/to/arm_conf.cmake
make

And copy FakeReader to system/bin/ on device.
