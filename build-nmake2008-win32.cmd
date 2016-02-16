@echo off
if "%VCINSTALLDIR%" == "" (call "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\bin\vcvars32.bat")
mkdir build-nmake2008-win32
cd build-nmake2008-win32
set
"%CMAKE_EXE%" -G "NMake Makefiles" -DCMAKE_BUILD_TYPE=RelWithDebInfo ..
nmake libuchardet_static
cd ..
