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

set(moguan-sdk_public_header 
	include/alibabacloud/moguan-sdk/Moguan_sdkClient.h
	include/alibabacloud/moguan-sdk/Moguan_sdkExport.h )

set(moguan-sdk_public_header_model 
	include/alibabacloud/moguan-sdk/model/RegisterDeviceRequest.h
	include/alibabacloud/moguan-sdk/model/RegisterDeviceResult.h )

set(moguan-sdk_src 
	src/Moguan-sdkClient.cc
	src/model/RegisterDeviceRequest.cc
	src/model/RegisterDeviceResult.cc )

add_library(moguan-sdk ${LIB_TYPE}
	${moguan-sdk_public_header}
	${moguan-sdk_public_header_model}
	${moguan-sdk_src})

set_target_properties(moguan-sdk
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}moguan-sdk
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(moguan-sdk
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_MOGUAN_SDK_LIBRARY)
endif()

target_include_directories(moguan-sdk
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(moguan-sdk
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(moguan-sdk
		jsoncpp)
	target_include_directories(moguan-sdk
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(moguan-sdk
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(moguan-sdk
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(moguan-sdk
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(moguan-sdk
		jsoncpp)
endif()

install(FILES ${moguan-sdk_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/moguan-sdk)
install(FILES ${moguan-sdk_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/moguan-sdk/model)
install(TARGETS moguan-sdk
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)