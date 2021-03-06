check_and_add_c_flags("-pedantic")
check_and_add_c_flags("-Wall")
check_and_add_c_flags("-Wextra")
check_and_add_c_flags("-pedantic-errors")

if(CMAKE_BUILD_TYPE STREQUAL "Release")
	check_and_add_c_flags("-march=native")
	check_and_add_c_flags("-funroll-loops")
elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
	check_and_add_c_flags("-Og")
	check_and_add_c_flags("-fbounds-check")
endif()
