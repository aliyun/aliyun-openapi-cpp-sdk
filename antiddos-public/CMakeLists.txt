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

set(antiddos-public_public_header 
	include/alibabacloud/antiddos-public/Antiddos_publicClient.h
	include/alibabacloud/antiddos-public/Antiddos_publicExport.h )

set(antiddos-public_public_header_model 
	include/alibabacloud/antiddos-public/model/DescribeBgpPackByIpRequest.h
	include/alibabacloud/antiddos-public/model/DescribeBgpPackByIpResult.h
	include/alibabacloud/antiddos-public/model/DescribeCapRequest.h
	include/alibabacloud/antiddos-public/model/DescribeCapResult.h
	include/alibabacloud/antiddos-public/model/DescribeDdosCountRequest.h
	include/alibabacloud/antiddos-public/model/DescribeDdosCountResult.h
	include/alibabacloud/antiddos-public/model/DescribeDdosCreditRequest.h
	include/alibabacloud/antiddos-public/model/DescribeDdosCreditResult.h
	include/alibabacloud/antiddos-public/model/DescribeDdosEventListRequest.h
	include/alibabacloud/antiddos-public/model/DescribeDdosEventListResult.h
	include/alibabacloud/antiddos-public/model/DescribeDdosThresholdRequest.h
	include/alibabacloud/antiddos-public/model/DescribeDdosThresholdResult.h
	include/alibabacloud/antiddos-public/model/DescribeInstanceRequest.h
	include/alibabacloud/antiddos-public/model/DescribeInstanceResult.h
	include/alibabacloud/antiddos-public/model/DescribeInstanceIpAddressRequest.h
	include/alibabacloud/antiddos-public/model/DescribeInstanceIpAddressResult.h
	include/alibabacloud/antiddos-public/model/DescribeIpDdosThresholdRequest.h
	include/alibabacloud/antiddos-public/model/DescribeIpDdosThresholdResult.h
	include/alibabacloud/antiddos-public/model/DescribeIpLocationServiceRequest.h
	include/alibabacloud/antiddos-public/model/DescribeIpLocationServiceResult.h
	include/alibabacloud/antiddos-public/model/DescribeRegionsRequest.h
	include/alibabacloud/antiddos-public/model/DescribeRegionsResult.h
	include/alibabacloud/antiddos-public/model/ModifyDdosStatusRequest.h
	include/alibabacloud/antiddos-public/model/ModifyDdosStatusResult.h
	include/alibabacloud/antiddos-public/model/ModifyDefenseThresholdRequest.h
	include/alibabacloud/antiddos-public/model/ModifyDefenseThresholdResult.h
	include/alibabacloud/antiddos-public/model/ModifyIpDefenseThresholdRequest.h
	include/alibabacloud/antiddos-public/model/ModifyIpDefenseThresholdResult.h )

set(antiddos-public_src 
	src/Antiddos-publicClient.cc
	src/model/DescribeBgpPackByIpRequest.cc
	src/model/DescribeBgpPackByIpResult.cc
	src/model/DescribeCapRequest.cc
	src/model/DescribeCapResult.cc
	src/model/DescribeDdosCountRequest.cc
	src/model/DescribeDdosCountResult.cc
	src/model/DescribeDdosCreditRequest.cc
	src/model/DescribeDdosCreditResult.cc
	src/model/DescribeDdosEventListRequest.cc
	src/model/DescribeDdosEventListResult.cc
	src/model/DescribeDdosThresholdRequest.cc
	src/model/DescribeDdosThresholdResult.cc
	src/model/DescribeInstanceRequest.cc
	src/model/DescribeInstanceResult.cc
	src/model/DescribeInstanceIpAddressRequest.cc
	src/model/DescribeInstanceIpAddressResult.cc
	src/model/DescribeIpDdosThresholdRequest.cc
	src/model/DescribeIpDdosThresholdResult.cc
	src/model/DescribeIpLocationServiceRequest.cc
	src/model/DescribeIpLocationServiceResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/ModifyDdosStatusRequest.cc
	src/model/ModifyDdosStatusResult.cc
	src/model/ModifyDefenseThresholdRequest.cc
	src/model/ModifyDefenseThresholdResult.cc
	src/model/ModifyIpDefenseThresholdRequest.cc
	src/model/ModifyIpDefenseThresholdResult.cc )

add_library(antiddos-public ${LIB_TYPE}
	${antiddos-public_public_header}
	${antiddos-public_public_header_model}
	${antiddos-public_src})

set_target_properties(antiddos-public
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}antiddos-public
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(antiddos-public
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ANTIDDOS_PUBLIC_LIBRARY)
endif()

target_include_directories(antiddos-public
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(antiddos-public
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(antiddos-public
		jsoncpp)
	target_include_directories(antiddos-public
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(antiddos-public
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(antiddos-public
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(antiddos-public
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(antiddos-public
		jsoncpp)
endif()

install(FILES ${antiddos-public_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/antiddos-public)
install(FILES ${antiddos-public_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/antiddos-public/model)
install(TARGETS antiddos-public
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)