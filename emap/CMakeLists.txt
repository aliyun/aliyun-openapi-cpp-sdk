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

set(emap_public_header 
	include/alibabacloud/emap/EmapClient.h
	include/alibabacloud/emap/EmapExport.h )

set(emap_public_header_model 
	include/alibabacloud/emap/model/QueryMapInfoOpenRequest.h
	include/alibabacloud/emap/model/QueryMapInfoOpenResult.h )

set(emap_src 
	src/EmapClient.cc
	src/model/QueryMapInfoOpenRequest.cc
	src/model/QueryMapInfoOpenResult.cc )

add_library(emap ${LIB_TYPE}
	${emap_public_header}
	${emap_public_header_model}
	${emap_src})

set_target_properties(emap
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}emap
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(emap
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EMAP_LIBRARY)
endif()

target_include_directories(emap
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(emap
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(emap
		jsoncpp)
	target_include_directories(emap
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(emap
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(emap
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(emap
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(emap
		jsoncpp)
endif()

install(FILES ${emap_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/emap)
install(FILES ${emap_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/emap/model)
install(TARGETS emap
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)