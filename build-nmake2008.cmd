@echo off
rem These two batch files have to be run in separate command shells to
rem avoid the 32-bit and 64-bit compiler environments clashing.
call cmd /C build-nmake2008-win32.cmd
call cmd /C build-nmake2008-win64.cmd
