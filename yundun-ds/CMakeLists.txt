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

set(yundun-ds_public_header 
	include/alibabacloud/yundun-ds/Yundun_dsClient.h
	include/alibabacloud/yundun-ds/Yundun_dsExport.h )

set(yundun-ds_public_header_model  )

set(yundun-ds_src 
	src/Yundun-dsClient.cc )

add_library(yundun-ds ${LIB_TYPE}
	${yundun-ds_public_header}
	${yundun-ds_public_header_model}
	${yundun-ds_src})

set_target_properties(yundun-ds
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}yundun-ds
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(yundun-ds
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_YUNDUN_DS_LIBRARY)
endif()

target_include_directories(yundun-ds
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(yundun-ds
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(yundun-ds
		jsoncpp)
	target_include_directories(yundun-ds
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(yundun-ds
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(yundun-ds
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(yundun-ds
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(yundun-ds
		jsoncpp)
endif()

install(FILES ${yundun-ds_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/yundun-ds)
install(FILES ${yundun-ds_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/yundun-ds/model)
install(TARGETS yundun-ds
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)