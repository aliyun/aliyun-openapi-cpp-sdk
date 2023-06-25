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

set(ddosbgp_public_header 
	include/alibabacloud/ddosbgp/DdosbgpClient.h
	include/alibabacloud/ddosbgp/DdosbgpExport.h )

set(ddosbgp_public_header_model 
	include/alibabacloud/ddosbgp/model/AddIpRequest.h
	include/alibabacloud/ddosbgp/model/AddIpResult.h
	include/alibabacloud/ddosbgp/model/CheckAccessLogAuthRequest.h
	include/alibabacloud/ddosbgp/model/CheckAccessLogAuthResult.h
	include/alibabacloud/ddosbgp/model/CheckGrantRequest.h
	include/alibabacloud/ddosbgp/model/CheckGrantResult.h
	include/alibabacloud/ddosbgp/model/ConfigSchedruleOnDemandRequest.h
	include/alibabacloud/ddosbgp/model/ConfigSchedruleOnDemandResult.h
	include/alibabacloud/ddosbgp/model/CreateSchedruleOnDemandRequest.h
	include/alibabacloud/ddosbgp/model/CreateSchedruleOnDemandResult.h
	include/alibabacloud/ddosbgp/model/DeleteBlackholeRequest.h
	include/alibabacloud/ddosbgp/model/DeleteBlackholeResult.h
	include/alibabacloud/ddosbgp/model/DeleteIpRequest.h
	include/alibabacloud/ddosbgp/model/DeleteIpResult.h
	include/alibabacloud/ddosbgp/model/DeleteSchedruleOnDemandRequest.h
	include/alibabacloud/ddosbgp/model/DeleteSchedruleOnDemandResult.h
	include/alibabacloud/ddosbgp/model/DescribeDdosEventRequest.h
	include/alibabacloud/ddosbgp/model/DescribeDdosEventResult.h
	include/alibabacloud/ddosbgp/model/DescribeExcpetionCountRequest.h
	include/alibabacloud/ddosbgp/model/DescribeExcpetionCountResult.h
	include/alibabacloud/ddosbgp/model/DescribeInstanceListRequest.h
	include/alibabacloud/ddosbgp/model/DescribeInstanceListResult.h
	include/alibabacloud/ddosbgp/model/DescribeInstanceSpecsRequest.h
	include/alibabacloud/ddosbgp/model/DescribeInstanceSpecsResult.h
	include/alibabacloud/ddosbgp/model/DescribeOnDemandDdosEventRequest.h
	include/alibabacloud/ddosbgp/model/DescribeOnDemandDdosEventResult.h
	include/alibabacloud/ddosbgp/model/DescribeOnDemandInstanceStatusRequest.h
	include/alibabacloud/ddosbgp/model/DescribeOnDemandInstanceStatusResult.h
	include/alibabacloud/ddosbgp/model/DescribeOpEntitiesRequest.h
	include/alibabacloud/ddosbgp/model/DescribeOpEntitiesResult.h
	include/alibabacloud/ddosbgp/model/DescribePackIpListRequest.h
	include/alibabacloud/ddosbgp/model/DescribePackIpListResult.h
	include/alibabacloud/ddosbgp/model/DescribeRegionsRequest.h
	include/alibabacloud/ddosbgp/model/DescribeRegionsResult.h
	include/alibabacloud/ddosbgp/model/DescribeTrafficRequest.h
	include/alibabacloud/ddosbgp/model/DescribeTrafficResult.h
	include/alibabacloud/ddosbgp/model/GetSlsOpenStatusRequest.h
	include/alibabacloud/ddosbgp/model/GetSlsOpenStatusResult.h
	include/alibabacloud/ddosbgp/model/ListOpenedAccessLogInstancesRequest.h
	include/alibabacloud/ddosbgp/model/ListOpenedAccessLogInstancesResult.h
	include/alibabacloud/ddosbgp/model/ListTagKeysRequest.h
	include/alibabacloud/ddosbgp/model/ListTagKeysResult.h
	include/alibabacloud/ddosbgp/model/ListTagResourcesRequest.h
	include/alibabacloud/ddosbgp/model/ListTagResourcesResult.h
	include/alibabacloud/ddosbgp/model/ModifyRemarkRequest.h
	include/alibabacloud/ddosbgp/model/ModifyRemarkResult.h
	include/alibabacloud/ddosbgp/model/QuerySchedruleOnDemandRequest.h
	include/alibabacloud/ddosbgp/model/QuerySchedruleOnDemandResult.h
	include/alibabacloud/ddosbgp/model/SetInstanceModeOnDemandRequest.h
	include/alibabacloud/ddosbgp/model/SetInstanceModeOnDemandResult.h
	include/alibabacloud/ddosbgp/model/TagResourcesRequest.h
	include/alibabacloud/ddosbgp/model/TagResourcesResult.h
	include/alibabacloud/ddosbgp/model/UntagResourcesRequest.h
	include/alibabacloud/ddosbgp/model/UntagResourcesResult.h )

set(ddosbgp_src 
	src/DdosbgpClient.cc
	src/model/AddIpRequest.cc
	src/model/AddIpResult.cc
	src/model/CheckAccessLogAuthRequest.cc
	src/model/CheckAccessLogAuthResult.cc
	src/model/CheckGrantRequest.cc
	src/model/CheckGrantResult.cc
	src/model/ConfigSchedruleOnDemandRequest.cc
	src/model/ConfigSchedruleOnDemandResult.cc
	src/model/CreateSchedruleOnDemandRequest.cc
	src/model/CreateSchedruleOnDemandResult.cc
	src/model/DeleteBlackholeRequest.cc
	src/model/DeleteBlackholeResult.cc
	src/model/DeleteIpRequest.cc
	src/model/DeleteIpResult.cc
	src/model/DeleteSchedruleOnDemandRequest.cc
	src/model/DeleteSchedruleOnDemandResult.cc
	src/model/DescribeDdosEventRequest.cc
	src/model/DescribeDdosEventResult.cc
	src/model/DescribeExcpetionCountRequest.cc
	src/model/DescribeExcpetionCountResult.cc
	src/model/DescribeInstanceListRequest.cc
	src/model/DescribeInstanceListResult.cc
	src/model/DescribeInstanceSpecsRequest.cc
	src/model/DescribeInstanceSpecsResult.cc
	src/model/DescribeOnDemandDdosEventRequest.cc
	src/model/DescribeOnDemandDdosEventResult.cc
	src/model/DescribeOnDemandInstanceStatusRequest.cc
	src/model/DescribeOnDemandInstanceStatusResult.cc
	src/model/DescribeOpEntitiesRequest.cc
	src/model/DescribeOpEntitiesResult.cc
	src/model/DescribePackIpListRequest.cc
	src/model/DescribePackIpListResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeTrafficRequest.cc
	src/model/DescribeTrafficResult.cc
	src/model/GetSlsOpenStatusRequest.cc
	src/model/GetSlsOpenStatusResult.cc
	src/model/ListOpenedAccessLogInstancesRequest.cc
	src/model/ListOpenedAccessLogInstancesResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyRemarkRequest.cc
	src/model/ModifyRemarkResult.cc
	src/model/QuerySchedruleOnDemandRequest.cc
	src/model/QuerySchedruleOnDemandResult.cc
	src/model/SetInstanceModeOnDemandRequest.cc
	src/model/SetInstanceModeOnDemandResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(ddosbgp ${LIB_TYPE}
	${ddosbgp_public_header}
	${ddosbgp_public_header_model}
	${ddosbgp_src})

set_target_properties(ddosbgp
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ddosbgp
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ddosbgp
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DDOSBGP_LIBRARY)
endif()

target_include_directories(ddosbgp
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ddosbgp
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ddosbgp
		jsoncpp)
	target_include_directories(ddosbgp
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ddosbgp
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ddosbgp
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ddosbgp
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ddosbgp
		jsoncpp)
endif()

install(FILES ${ddosbgp_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ddosbgp)
install(FILES ${ddosbgp_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ddosbgp/model)
install(TARGETS ddosbgp
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)