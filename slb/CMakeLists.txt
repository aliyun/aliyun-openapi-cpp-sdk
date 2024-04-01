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

set(slb_public_header 
	include/alibabacloud/slb/SlbClient.h
	include/alibabacloud/slb/SlbExport.h )

set(slb_public_header_model 
	include/alibabacloud/slb/model/AddBackendServersRequest.h
	include/alibabacloud/slb/model/AddBackendServersResult.h
	include/alibabacloud/slb/model/CreateLoadBalancerRequest.h
	include/alibabacloud/slb/model/CreateLoadBalancerResult.h
	include/alibabacloud/slb/model/CreateLoadBalancerHTTPListenerRequest.h
	include/alibabacloud/slb/model/CreateLoadBalancerHTTPListenerResult.h
	include/alibabacloud/slb/model/CreateLoadBalancerTCPListenerRequest.h
	include/alibabacloud/slb/model/CreateLoadBalancerTCPListenerResult.h
	include/alibabacloud/slb/model/DeleteLoadBalancerRequest.h
	include/alibabacloud/slb/model/DeleteLoadBalancerResult.h
	include/alibabacloud/slb/model/DeleteLoadBalancerListenerRequest.h
	include/alibabacloud/slb/model/DeleteLoadBalancerListenerResult.h
	include/alibabacloud/slb/model/DescribeBackendServersRequest.h
	include/alibabacloud/slb/model/DescribeBackendServersResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerAttributeRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerHTTPListenerAttributeRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerHTTPListenerAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerTCPListenerAttributeRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerTCPListenerAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancersRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancersResult.h
	include/alibabacloud/slb/model/DescribeRegionsRequest.h
	include/alibabacloud/slb/model/DescribeRegionsResult.h
	include/alibabacloud/slb/model/RemoveBackendServersRequest.h
	include/alibabacloud/slb/model/RemoveBackendServersResult.h
	include/alibabacloud/slb/model/SetLoadBalancerHTTPListenerAttributeRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerHTTPListenerAttributeResult.h
	include/alibabacloud/slb/model/SetLoadBalancerListenerStatusRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerListenerStatusResult.h
	include/alibabacloud/slb/model/SetLoadBalancerNameRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerNameResult.h
	include/alibabacloud/slb/model/SetLoadBalancerStatusRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerStatusResult.h
	include/alibabacloud/slb/model/SetLoadBalancerTCPListenerAttributeRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerTCPListenerAttributeResult.h )

set(slb_src 
	src/SlbClient.cc
	src/model/AddBackendServersRequest.cc
	src/model/AddBackendServersResult.cc
	src/model/CreateLoadBalancerRequest.cc
	src/model/CreateLoadBalancerResult.cc
	src/model/CreateLoadBalancerHTTPListenerRequest.cc
	src/model/CreateLoadBalancerHTTPListenerResult.cc
	src/model/CreateLoadBalancerTCPListenerRequest.cc
	src/model/CreateLoadBalancerTCPListenerResult.cc
	src/model/DeleteLoadBalancerRequest.cc
	src/model/DeleteLoadBalancerResult.cc
	src/model/DeleteLoadBalancerListenerRequest.cc
	src/model/DeleteLoadBalancerListenerResult.cc
	src/model/DescribeBackendServersRequest.cc
	src/model/DescribeBackendServersResult.cc
	src/model/DescribeLoadBalancerAttributeRequest.cc
	src/model/DescribeLoadBalancerAttributeResult.cc
	src/model/DescribeLoadBalancerHTTPListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerHTTPListenerAttributeResult.cc
	src/model/DescribeLoadBalancerTCPListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerTCPListenerAttributeResult.cc
	src/model/DescribeLoadBalancersRequest.cc
	src/model/DescribeLoadBalancersResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/RemoveBackendServersRequest.cc
	src/model/RemoveBackendServersResult.cc
	src/model/SetLoadBalancerHTTPListenerAttributeRequest.cc
	src/model/SetLoadBalancerHTTPListenerAttributeResult.cc
	src/model/SetLoadBalancerListenerStatusRequest.cc
	src/model/SetLoadBalancerListenerStatusResult.cc
	src/model/SetLoadBalancerNameRequest.cc
	src/model/SetLoadBalancerNameResult.cc
	src/model/SetLoadBalancerStatusRequest.cc
	src/model/SetLoadBalancerStatusResult.cc
	src/model/SetLoadBalancerTCPListenerAttributeRequest.cc
	src/model/SetLoadBalancerTCPListenerAttributeResult.cc )

add_library(slb ${LIB_TYPE}
	${slb_public_header}
	${slb_public_header_model}
	${slb_src})

set_target_properties(slb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}slb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(slb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SLB_LIBRARY)
endif()

target_include_directories(slb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(slb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(slb
		jsoncpp)
	target_include_directories(slb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(slb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(slb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(slb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(slb
		jsoncpp)
endif()

install(FILES ${slb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/slb)
install(FILES ${slb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/slb/model)
install(TARGETS slb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)