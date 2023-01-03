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

set(eflo_public_header 
	include/alibabacloud/eflo/EfloClient.h
	include/alibabacloud/eflo/EfloExport.h )

set(eflo_public_header_model 
	include/alibabacloud/eflo/model/CreateSubnetRequest.h
	include/alibabacloud/eflo/model/CreateSubnetResult.h
	include/alibabacloud/eflo/model/CreateVccRequest.h
	include/alibabacloud/eflo/model/CreateVccResult.h
	include/alibabacloud/eflo/model/CreateVpdRequest.h
	include/alibabacloud/eflo/model/CreateVpdResult.h
	include/alibabacloud/eflo/model/DeleteSubnetRequest.h
	include/alibabacloud/eflo/model/DeleteSubnetResult.h
	include/alibabacloud/eflo/model/DeleteVpdRequest.h
	include/alibabacloud/eflo/model/DeleteVpdResult.h
	include/alibabacloud/eflo/model/GetSubnetRequest.h
	include/alibabacloud/eflo/model/GetSubnetResult.h
	include/alibabacloud/eflo/model/GetVccRequest.h
	include/alibabacloud/eflo/model/GetVccResult.h
	include/alibabacloud/eflo/model/GetVpdRequest.h
	include/alibabacloud/eflo/model/GetVpdResult.h
	include/alibabacloud/eflo/model/InitializeVccRequest.h
	include/alibabacloud/eflo/model/InitializeVccResult.h
	include/alibabacloud/eflo/model/ListSubnetsRequest.h
	include/alibabacloud/eflo/model/ListSubnetsResult.h
	include/alibabacloud/eflo/model/ListVccsRequest.h
	include/alibabacloud/eflo/model/ListVccsResult.h
	include/alibabacloud/eflo/model/ListVpdsRequest.h
	include/alibabacloud/eflo/model/ListVpdsResult.h
	include/alibabacloud/eflo/model/UpdateSubnetRequest.h
	include/alibabacloud/eflo/model/UpdateSubnetResult.h
	include/alibabacloud/eflo/model/UpdateVccRequest.h
	include/alibabacloud/eflo/model/UpdateVccResult.h
	include/alibabacloud/eflo/model/UpdateVpdRequest.h
	include/alibabacloud/eflo/model/UpdateVpdResult.h )

set(eflo_src 
	src/EfloClient.cc
	src/model/CreateSubnetRequest.cc
	src/model/CreateSubnetResult.cc
	src/model/CreateVccRequest.cc
	src/model/CreateVccResult.cc
	src/model/CreateVpdRequest.cc
	src/model/CreateVpdResult.cc
	src/model/DeleteSubnetRequest.cc
	src/model/DeleteSubnetResult.cc
	src/model/DeleteVpdRequest.cc
	src/model/DeleteVpdResult.cc
	src/model/GetSubnetRequest.cc
	src/model/GetSubnetResult.cc
	src/model/GetVccRequest.cc
	src/model/GetVccResult.cc
	src/model/GetVpdRequest.cc
	src/model/GetVpdResult.cc
	src/model/InitializeVccRequest.cc
	src/model/InitializeVccResult.cc
	src/model/ListSubnetsRequest.cc
	src/model/ListSubnetsResult.cc
	src/model/ListVccsRequest.cc
	src/model/ListVccsResult.cc
	src/model/ListVpdsRequest.cc
	src/model/ListVpdsResult.cc
	src/model/UpdateSubnetRequest.cc
	src/model/UpdateSubnetResult.cc
	src/model/UpdateVccRequest.cc
	src/model/UpdateVccResult.cc
	src/model/UpdateVpdRequest.cc
	src/model/UpdateVpdResult.cc )

add_library(eflo ${LIB_TYPE}
	${eflo_public_header}
	${eflo_public_header_model}
	${eflo_src})

set_target_properties(eflo
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eflo
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(eflo
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EFLO_LIBRARY)
endif()

target_include_directories(eflo
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(eflo
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(eflo
		jsoncpp)
	target_include_directories(eflo
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(eflo
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(eflo
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(eflo
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(eflo
		jsoncpp)
endif()

install(FILES ${eflo_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eflo)
install(FILES ${eflo_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eflo/model)
install(TARGETS eflo
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)