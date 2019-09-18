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

set(sas-api_public_header 
	include/alibabacloud/sas-api/Sas_apiClient.h
	include/alibabacloud/sas-api/Sas_apiExport.h )

set(sas-api_public_header_model 
	include/alibabacloud/sas-api/model/DescribeAccountProfileByKeyRequest.h
	include/alibabacloud/sas-api/model/DescribeAccountProfileByKeyResult.h
	include/alibabacloud/sas-api/model/DescribeAccountProfileByKeyWordRequest.h
	include/alibabacloud/sas-api/model/DescribeAccountProfileByKeyWordResult.h
	include/alibabacloud/sas-api/model/DescribeHitRateColumnRequest.h
	include/alibabacloud/sas-api/model/DescribeHitRateColumnResult.h
	include/alibabacloud/sas-api/model/DescribeHitRatePieRequest.h
	include/alibabacloud/sas-api/model/DescribeHitRatePieResult.h
	include/alibabacloud/sas-api/model/DescribePerDateDataRequest.h
	include/alibabacloud/sas-api/model/DescribePerDateDataResult.h
	include/alibabacloud/sas-api/model/DescribeThreatDistributeRequest.h
	include/alibabacloud/sas-api/model/DescribeThreatDistributeResult.h
	include/alibabacloud/sas-api/model/DescribeThreatTypeLinesRequest.h
	include/alibabacloud/sas-api/model/DescribeThreatTypeLinesResult.h
	include/alibabacloud/sas-api/model/DescribeTotalAndRateLineRequest.h
	include/alibabacloud/sas-api/model/DescribeTotalAndRateLineResult.h
	include/alibabacloud/sas-api/model/GetAccountProfileRequest.h
	include/alibabacloud/sas-api/model/GetAccountProfileResult.h
	include/alibabacloud/sas-api/model/GetInstanceCountRequest.h
	include/alibabacloud/sas-api/model/GetInstanceCountResult.h
	include/alibabacloud/sas-api/model/GetIpProfileRequest.h
	include/alibabacloud/sas-api/model/GetIpProfileResult.h
	include/alibabacloud/sas-api/model/GetPhoneProfileRequest.h
	include/alibabacloud/sas-api/model/GetPhoneProfileResult.h )

set(sas-api_src 
	src/Sas-apiClient.cc
	src/model/DescribeAccountProfileByKeyRequest.cc
	src/model/DescribeAccountProfileByKeyResult.cc
	src/model/DescribeAccountProfileByKeyWordRequest.cc
	src/model/DescribeAccountProfileByKeyWordResult.cc
	src/model/DescribeHitRateColumnRequest.cc
	src/model/DescribeHitRateColumnResult.cc
	src/model/DescribeHitRatePieRequest.cc
	src/model/DescribeHitRatePieResult.cc
	src/model/DescribePerDateDataRequest.cc
	src/model/DescribePerDateDataResult.cc
	src/model/DescribeThreatDistributeRequest.cc
	src/model/DescribeThreatDistributeResult.cc
	src/model/DescribeThreatTypeLinesRequest.cc
	src/model/DescribeThreatTypeLinesResult.cc
	src/model/DescribeTotalAndRateLineRequest.cc
	src/model/DescribeTotalAndRateLineResult.cc
	src/model/GetAccountProfileRequest.cc
	src/model/GetAccountProfileResult.cc
	src/model/GetInstanceCountRequest.cc
	src/model/GetInstanceCountResult.cc
	src/model/GetIpProfileRequest.cc
	src/model/GetIpProfileResult.cc
	src/model/GetPhoneProfileRequest.cc
	src/model/GetPhoneProfileResult.cc )

add_library(sas-api ${LIB_TYPE}
	${sas-api_public_header}
	${sas-api_public_header_model}
	${sas-api_src})

set_target_properties(sas-api
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sas-api
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sas-api
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SAS_API_LIBRARY)
endif()

target_include_directories(sas-api
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sas-api
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sas-api
		jsoncpp)
	target_include_directories(sas-api
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sas-api
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sas-api
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sas-api
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sas-api
		jsoncpp)
endif()

install(FILES ${sas-api_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sas-api)
install(FILES ${sas-api_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sas-api/model)
install(TARGETS sas-api
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)