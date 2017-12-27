add_executable(core-tests
	main.cc
	httpmessage.cc
	signer.cc
	url.cc )

set_target_properties(core-tests
	PROPERTIES
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}core-tests
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

target_link_libraries(core-tests
	core
	)
	
ExternalProject_Get_Property(catch INSTALL_DIR)
set(catch_install_dir ${INSTALL_DIR})
add_dependencies(core-tests catch)

target_include_directories(core-tests
	PRIVATE ${catch_install_dir}
		${CMAKE_SOURCE_DIR}/core/include
	)

add_test(NAME core-tests COMMAND core-tests)
