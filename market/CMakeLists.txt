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

set(market_public_header 
	include/alibabacloud/market/MarketClient.h
	include/alibabacloud/market/MarketExport.h )

set(market_public_header_model 
	include/alibabacloud/market/model/ActivateLicenseRequest.h
	include/alibabacloud/market/model/ActivateLicenseResult.h
	include/alibabacloud/market/model/AutoRenewInstanceRequest.h
	include/alibabacloud/market/model/AutoRenewInstanceResult.h
	include/alibabacloud/market/model/CreateOrderRequest.h
	include/alibabacloud/market/model/CreateOrderResult.h
	include/alibabacloud/market/model/CrossAccountVerifyTokenRequest.h
	include/alibabacloud/market/model/CrossAccountVerifyTokenResult.h
	include/alibabacloud/market/model/DescribeApiMeteringRequest.h
	include/alibabacloud/market/model/DescribeApiMeteringResult.h
	include/alibabacloud/market/model/DescribeCurrentNodeInfoRequest.h
	include/alibabacloud/market/model/DescribeCurrentNodeInfoResult.h
	include/alibabacloud/market/model/DescribeDistributionProductsRequest.h
	include/alibabacloud/market/model/DescribeDistributionProductsResult.h
	include/alibabacloud/market/model/DescribeDistributionProductsLinkRequest.h
	include/alibabacloud/market/model/DescribeDistributionProductsLinkResult.h
	include/alibabacloud/market/model/DescribeInstanceRequest.h
	include/alibabacloud/market/model/DescribeInstanceResult.h
	include/alibabacloud/market/model/DescribeInstancesRequest.h
	include/alibabacloud/market/model/DescribeInstancesResult.h
	include/alibabacloud/market/model/DescribeLicenseRequest.h
	include/alibabacloud/market/model/DescribeLicenseResult.h
	include/alibabacloud/market/model/DescribeOrderRequest.h
	include/alibabacloud/market/model/DescribeOrderResult.h
	include/alibabacloud/market/model/DescribePriceRequest.h
	include/alibabacloud/market/model/DescribePriceResult.h
	include/alibabacloud/market/model/DescribeProductRequest.h
	include/alibabacloud/market/model/DescribeProductResult.h
	include/alibabacloud/market/model/DescribeProductsRequest.h
	include/alibabacloud/market/model/DescribeProductsResult.h
	include/alibabacloud/market/model/DescribeProjectAttachmentsRequest.h
	include/alibabacloud/market/model/DescribeProjectAttachmentsResult.h
	include/alibabacloud/market/model/DescribeProjectInfoRequest.h
	include/alibabacloud/market/model/DescribeProjectInfoResult.h
	include/alibabacloud/market/model/DescribeProjectMessagesRequest.h
	include/alibabacloud/market/model/DescribeProjectMessagesResult.h
	include/alibabacloud/market/model/DescribeProjectNodesRequest.h
	include/alibabacloud/market/model/DescribeProjectNodesResult.h
	include/alibabacloud/market/model/DescribeProjectOperateLogsRequest.h
	include/alibabacloud/market/model/DescribeProjectOperateLogsResult.h
	include/alibabacloud/market/model/FinishCurrentProjectNodeRequest.h
	include/alibabacloud/market/model/FinishCurrentProjectNodeResult.h
	include/alibabacloud/market/model/PauseProjectRequest.h
	include/alibabacloud/market/model/PauseProjectResult.h
	include/alibabacloud/market/model/PushMeteringDataRequest.h
	include/alibabacloud/market/model/PushMeteringDataResult.h
	include/alibabacloud/market/model/ResumeProjectRequest.h
	include/alibabacloud/market/model/ResumeProjectResult.h
	include/alibabacloud/market/model/RollbackCurrentProjectNodeRequest.h
	include/alibabacloud/market/model/RollbackCurrentProjectNodeResult.h )

set(market_src 
	src/MarketClient.cc
	src/model/ActivateLicenseRequest.cc
	src/model/ActivateLicenseResult.cc
	src/model/AutoRenewInstanceRequest.cc
	src/model/AutoRenewInstanceResult.cc
	src/model/CreateOrderRequest.cc
	src/model/CreateOrderResult.cc
	src/model/CrossAccountVerifyTokenRequest.cc
	src/model/CrossAccountVerifyTokenResult.cc
	src/model/DescribeApiMeteringRequest.cc
	src/model/DescribeApiMeteringResult.cc
	src/model/DescribeCurrentNodeInfoRequest.cc
	src/model/DescribeCurrentNodeInfoResult.cc
	src/model/DescribeDistributionProductsRequest.cc
	src/model/DescribeDistributionProductsResult.cc
	src/model/DescribeDistributionProductsLinkRequest.cc
	src/model/DescribeDistributionProductsLinkResult.cc
	src/model/DescribeInstanceRequest.cc
	src/model/DescribeInstanceResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/DescribeLicenseRequest.cc
	src/model/DescribeLicenseResult.cc
	src/model/DescribeOrderRequest.cc
	src/model/DescribeOrderResult.cc
	src/model/DescribePriceRequest.cc
	src/model/DescribePriceResult.cc
	src/model/DescribeProductRequest.cc
	src/model/DescribeProductResult.cc
	src/model/DescribeProductsRequest.cc
	src/model/DescribeProductsResult.cc
	src/model/DescribeProjectAttachmentsRequest.cc
	src/model/DescribeProjectAttachmentsResult.cc
	src/model/DescribeProjectInfoRequest.cc
	src/model/DescribeProjectInfoResult.cc
	src/model/DescribeProjectMessagesRequest.cc
	src/model/DescribeProjectMessagesResult.cc
	src/model/DescribeProjectNodesRequest.cc
	src/model/DescribeProjectNodesResult.cc
	src/model/DescribeProjectOperateLogsRequest.cc
	src/model/DescribeProjectOperateLogsResult.cc
	src/model/FinishCurrentProjectNodeRequest.cc
	src/model/FinishCurrentProjectNodeResult.cc
	src/model/PauseProjectRequest.cc
	src/model/PauseProjectResult.cc
	src/model/PushMeteringDataRequest.cc
	src/model/PushMeteringDataResult.cc
	src/model/ResumeProjectRequest.cc
	src/model/ResumeProjectResult.cc
	src/model/RollbackCurrentProjectNodeRequest.cc
	src/model/RollbackCurrentProjectNodeResult.cc )

add_library(market ${LIB_TYPE}
	${market_public_header}
	${market_public_header_model}
	${market_src})

set_target_properties(market
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}market
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(market
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_MARKET_LIBRARY)
endif()

target_include_directories(market
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(market
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(market
		jsoncpp)
	target_include_directories(market
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(market
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(market
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(market
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(market
		jsoncpp)
endif()

install(FILES ${market_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/market)
install(FILES ${market_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/market/model)
install(TARGETS market
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)