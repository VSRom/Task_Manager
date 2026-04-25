# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TaskManager_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TaskManager_autogen.dir\\ParseCache.txt"
  "TaskManager_autogen"
  )
endif()
