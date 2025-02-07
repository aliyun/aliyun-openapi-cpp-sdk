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

set(wss_public_header 
	include/alibabacloud/wss/WssClient.h
	include/alibabacloud/wss/WssExport.h )

set(wss_public_header_model 
	include/alibabacloud/wss/model/DescribeDeliveryAddressRequest.h
	include/alibabacloud/wss/model/DescribeDeliveryAddressResult.h
	include/alibabacloud/wss/model/DescribePackageDeductionsRequest.h
	include/alibabacloud/wss/model/DescribePackageDeductionsResult.h
	include/alibabacloud/wss/model/ModifyInstancePropertiesRequest.h
	include/alibabacloud/wss/model/ModifyInstancePropertiesResult.h )

set(wss_src 
	src/WssClient.cc
	src/model/DescribeDeliveryAddressRequest.cc
	src/model/DescribeDeliveryAddressResult.cc
	src/model/DescribePackageDeductionsRequest.cc
	src/model/DescribePackageDeductionsResult.cc
	src/model/ModifyInstancePropertiesRequest.cc
	src/model/ModifyInstancePropertiesResult.cc )

add_library(wss ${LIB_TYPE}
	${wss_public_header}
	${wss_public_header_model}
	${wss_src})

set_target_properties(wss
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wss
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(wss
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_WSS_LIBRARY)
endif()

target_include_directories(wss
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(wss
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(wss
		jsoncpp)
	target_include_directories(wss
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(wss
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(wss
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(wss
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(wss
		jsoncpp)
endif()

install(FILES ${wss_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/wss)
install(FILES ${wss_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/wss/model)
install(TARGETS wss
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)