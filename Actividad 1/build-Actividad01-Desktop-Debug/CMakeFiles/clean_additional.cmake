# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Actividad01_autogen"
  "CMakeFiles/Actividad01_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Actividad01_autogen.dir/ParseCache.txt"
  )
endif()
