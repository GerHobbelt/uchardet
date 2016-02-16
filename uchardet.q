define32:
  build_dir=build-nmake2008-win32
define64:
  build_dir=build-nmake2008-win64

into lib:
  $(build_dir)\src\uchardet.lib

into include\uchardet:
  src\*.h
