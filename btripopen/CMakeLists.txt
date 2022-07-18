#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(btripopen_public_header 
	include/alibabacloud/btripopen/BtripOpenClient.h
	include/alibabacloud/btripopen/BtripOpenExport.h )

set(btripopen_public_header_model 
	include/alibabacloud/btripopen/model/AccessTokenRequest.h
	include/alibabacloud/btripopen/model/AccessTokenResult.h )

set(btripopen_src 
	src/BtripOpenClient.cc
	src/model/AccessTokenRequest.cc
	src/model/AccessTokenResult.cc )

add_library(btripopen ${LIB_TYPE}
	${btripopen_public_header}
	${btripopen_public_header_model}
	${btripopen_src})

set_target_properties(btripopen
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}btripopen
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(btripopen
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_BTRIPOPEN_LIBRARY)
endif()

target_include_directories(btripopen
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(btripopen
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(btripopen
		jsoncpp)
	target_include_directories(btripopen
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(btripopen
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(btripopen
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(btripopen
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(btripopen
		jsoncpp)
endif()

install(FILES ${btripopen_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/btripopen)
install(FILES ${btripopen_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/btripopen/model)
install(TARGETS btripopen
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)