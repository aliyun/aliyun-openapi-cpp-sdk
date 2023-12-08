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

set(ddosdiversion_public_header 
	include/alibabacloud/ddosdiversion/DdosDiversionClient.h
	include/alibabacloud/ddosdiversion/DdosDiversionExport.h )

set(ddosdiversion_public_header_model 
	include/alibabacloud/ddosdiversion/model/ConfigNetStatusRequest.h
	include/alibabacloud/ddosdiversion/model/ConfigNetStatusResult.h
	include/alibabacloud/ddosdiversion/model/ListInstanceRequest.h
	include/alibabacloud/ddosdiversion/model/ListInstanceResult.h
	include/alibabacloud/ddosdiversion/model/QueryNetListRequest.h
	include/alibabacloud/ddosdiversion/model/QueryNetListResult.h )

set(ddosdiversion_src 
	src/DdosDiversionClient.cc
	src/model/ConfigNetStatusRequest.cc
	src/model/ConfigNetStatusResult.cc
	src/model/ListInstanceRequest.cc
	src/model/ListInstanceResult.cc
	src/model/QueryNetListRequest.cc
	src/model/QueryNetListResult.cc )

add_library(ddosdiversion ${LIB_TYPE}
	${ddosdiversion_public_header}
	${ddosdiversion_public_header_model}
	${ddosdiversion_src})

set_target_properties(ddosdiversion
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ddosdiversion
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ddosdiversion
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DDOSDIVERSION_LIBRARY)
endif()

target_include_directories(ddosdiversion
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ddosdiversion
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ddosdiversion
		jsoncpp)
	target_include_directories(ddosdiversion
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ddosdiversion
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ddosdiversion
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ddosdiversion
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ddosdiversion
		jsoncpp)
endif()

install(FILES ${ddosdiversion_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ddosdiversion)
install(FILES ${ddosdiversion_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ddosdiversion/model)
install(TARGETS ddosdiversion
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)