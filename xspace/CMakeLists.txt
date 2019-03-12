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

set(xspace_public_header 
	include/alibabacloud/xspace/XspaceClient.h
	include/alibabacloud/xspace/XspaceExport.h )

set(xspace_public_header_model 
	include/alibabacloud/xspace/model/QueryCustomerByIdRequest.h
	include/alibabacloud/xspace/model/QueryCustomerByIdResult.h
	include/alibabacloud/xspace/model/QueryCustomerByPhoneRequest.h
	include/alibabacloud/xspace/model/QueryCustomerByPhoneResult.h )

set(xspace_src 
	src/XspaceClient.cc
	src/model/QueryCustomerByIdRequest.cc
	src/model/QueryCustomerByIdResult.cc
	src/model/QueryCustomerByPhoneRequest.cc
	src/model/QueryCustomerByPhoneResult.cc )

add_library(xspace ${LIB_TYPE}
	${xspace_public_header}
	${xspace_public_header_model}
	${xspace_src})

set_target_properties(xspace
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}xspace
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(xspace
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_XSPACE_LIBRARY)
endif()

target_include_directories(xspace
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(xspace
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(xspace
		jsoncpp)
	target_include_directories(xspace
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(xspace
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(xspace
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(xspace
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(xspace
		jsoncpp)
endif()

install(FILES ${xspace_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/xspace)
install(FILES ${xspace_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/xspace/model)
install(TARGETS xspace
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)