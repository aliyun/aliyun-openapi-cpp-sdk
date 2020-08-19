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

set(smarthosting_public_header 
	include/alibabacloud/smarthosting/SmartHostingClient.h
	include/alibabacloud/smarthosting/SmartHostingExport.h )

set(smarthosting_public_header_model 
	include/alibabacloud/smarthosting/model/ListManagedHostsRequest.h
	include/alibabacloud/smarthosting/model/ListManagedHostsResult.h
	include/alibabacloud/smarthosting/model/ListManagedPrivateSpacesRequest.h
	include/alibabacloud/smarthosting/model/ListManagedPrivateSpacesResult.h
	include/alibabacloud/smarthosting/model/ListManagedRacksRequest.h
	include/alibabacloud/smarthosting/model/ListManagedRacksResult.h
	include/alibabacloud/smarthosting/model/UpdateManagedHostAttributesRequest.h
	include/alibabacloud/smarthosting/model/UpdateManagedHostAttributesResult.h )

set(smarthosting_src 
	src/SmartHostingClient.cc
	src/model/ListManagedHostsRequest.cc
	src/model/ListManagedHostsResult.cc
	src/model/ListManagedPrivateSpacesRequest.cc
	src/model/ListManagedPrivateSpacesResult.cc
	src/model/ListManagedRacksRequest.cc
	src/model/ListManagedRacksResult.cc
	src/model/UpdateManagedHostAttributesRequest.cc
	src/model/UpdateManagedHostAttributesResult.cc )

add_library(smarthosting ${LIB_TYPE}
	${smarthosting_public_header}
	${smarthosting_public_header_model}
	${smarthosting_src})

set_target_properties(smarthosting
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}smarthosting
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(smarthosting
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SMARTHOSTING_LIBRARY)
endif()

target_include_directories(smarthosting
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(smarthosting
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(smarthosting
		jsoncpp)
	target_include_directories(smarthosting
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(smarthosting
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(smarthosting
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(smarthosting
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(smarthosting
		jsoncpp)
endif()

install(FILES ${smarthosting_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/smarthosting)
install(FILES ${smarthosting_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/smarthosting/model)
install(TARGETS smarthosting
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)