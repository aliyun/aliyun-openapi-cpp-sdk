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

set(address-purification_public_header 
	include/alibabacloud/address-purification/Address_purificationClient.h
	include/alibabacloud/address-purification/Address_purificationExport.h )

set(address-purification_public_header_model 
	include/alibabacloud/address-purification/model/DescribeProductRequest.h
	include/alibabacloud/address-purification/model/DescribeProductResult.h
	include/alibabacloud/address-purification/model/GetAlgorithmResultRequest.h
	include/alibabacloud/address-purification/model/GetAlgorithmResultResult.h
	include/alibabacloud/address-purification/model/GetConsoleResultRequest.h
	include/alibabacloud/address-purification/model/GetConsoleResultResult.h
	include/alibabacloud/address-purification/model/GetReportRequest.h
	include/alibabacloud/address-purification/model/GetReportResult.h
	include/alibabacloud/address-purification/model/GetUserInfomationRequest.h
	include/alibabacloud/address-purification/model/GetUserInfomationResult.h )

set(address-purification_src 
	src/Address-purificationClient.cc
	src/model/DescribeProductRequest.cc
	src/model/DescribeProductResult.cc
	src/model/GetAlgorithmResultRequest.cc
	src/model/GetAlgorithmResultResult.cc
	src/model/GetConsoleResultRequest.cc
	src/model/GetConsoleResultResult.cc
	src/model/GetReportRequest.cc
	src/model/GetReportResult.cc
	src/model/GetUserInfomationRequest.cc
	src/model/GetUserInfomationResult.cc )

add_library(address-purification ${LIB_TYPE}
	${address-purification_public_header}
	${address-purification_public_header_model}
	${address-purification_src})

set_target_properties(address-purification
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}address-purification
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(address-purification
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ADDRESS_PURIFICATION_LIBRARY)
endif()

target_include_directories(address-purification
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(address-purification
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(address-purification
		jsoncpp)
	target_include_directories(address-purification
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(address-purification
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(address-purification
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(address-purification
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(address-purification
		jsoncpp)
endif()

install(FILES ${address-purification_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/address-purification)
install(FILES ${address-purification_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/address-purification/model)
install(TARGETS address-purification
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)