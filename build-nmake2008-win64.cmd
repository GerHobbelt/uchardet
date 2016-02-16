@echo off
if "%VCINSTALLDIR%" == "" (call "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\bin\amd64\vcvarsamd64.bat")
mkdir build-nmake2008-win64
cd build-nmake2008-win64
set
"%CMAKE_EXE%" -G "NMake Makefiles" -DCMAKE_BUILD_TYPE=RelWithDebInfo ..
nmake libuchardet_static
cd ..
