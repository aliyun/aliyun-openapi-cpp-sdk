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
	include/alibabacloud/market/model/NotifyContractEventRequest.h
	include/alibabacloud/market/model/NotifyContractEventResult.h
	include/alibabacloud/market/model/PushMeteringDataRequest.h
	include/alibabacloud/market/model/PushMeteringDataResult.h
	include/alibabacloud/market/model/DescribeOrderRequest.h
	include/alibabacloud/market/model/DescribeOrderResult.h
	include/alibabacloud/market/model/BindImagePackageRequest.h
	include/alibabacloud/market/model/BindImagePackageResult.h
	include/alibabacloud/market/model/QueryMarketImagesRequest.h
	include/alibabacloud/market/model/QueryMarketImagesResult.h
	include/alibabacloud/market/model/DescribeProductsRequest.h
	include/alibabacloud/market/model/DescribeProductsResult.h
	include/alibabacloud/market/model/CreateOrderRequest.h
	include/alibabacloud/market/model/CreateOrderResult.h
	include/alibabacloud/market/model/DescribePriceRequest.h
	include/alibabacloud/market/model/DescribePriceResult.h
	include/alibabacloud/market/model/DescribeRateRequest.h
	include/alibabacloud/market/model/DescribeRateResult.h
	include/alibabacloud/market/model/QueryMarketCategoriesRequest.h
	include/alibabacloud/market/model/QueryMarketCategoriesResult.h
	include/alibabacloud/market/model/CreateRateRequest.h
	include/alibabacloud/market/model/CreateRateResult.h
	include/alibabacloud/market/model/DescribeInstanceRequest.h
	include/alibabacloud/market/model/DescribeInstanceResult.h
	include/alibabacloud/market/model/DescribeLicenseRequest.h
	include/alibabacloud/market/model/DescribeLicenseResult.h
	include/alibabacloud/market/model/DescribeInstancesRequest.h
	include/alibabacloud/market/model/DescribeInstancesResult.h
	include/alibabacloud/market/model/ActivateLicenseRequest.h
	include/alibabacloud/market/model/ActivateLicenseResult.h
	include/alibabacloud/market/model/DescribeCommodityRequest.h
	include/alibabacloud/market/model/DescribeCommodityResult.h
	include/alibabacloud/market/model/DescribeProductRequest.h
	include/alibabacloud/market/model/DescribeProductResult.h
	include/alibabacloud/market/model/CreateCommodityRequest.h
	include/alibabacloud/market/model/CreateCommodityResult.h
	include/alibabacloud/market/model/DeleteCommodityRequest.h
	include/alibabacloud/market/model/DeleteCommodityResult.h
	include/alibabacloud/market/model/UpdateCommodityRequest.h
	include/alibabacloud/market/model/UpdateCommodityResult.h
	include/alibabacloud/market/model/DescribeCommoditiesRequest.h
	include/alibabacloud/market/model/DescribeCommoditiesResult.h
	include/alibabacloud/market/model/UploadCommodityFileRequest.h
	include/alibabacloud/market/model/UploadCommodityFileResult.h )

set(market_src 
	src/com.aliyun.pop.sdk.domain.Product@6f1c29b7Client.cc
	src/model/NotifyContractEventRequest.cc
	src/model/NotifyContractEventResult.cc
	src/model/PushMeteringDataRequest.cc
	src/model/PushMeteringDataResult.cc
	src/model/DescribeOrderRequest.cc
	src/model/DescribeOrderResult.cc
	src/model/BindImagePackageRequest.cc
	src/model/BindImagePackageResult.cc
	src/model/QueryMarketImagesRequest.cc
	src/model/QueryMarketImagesResult.cc
	src/model/DescribeProductsRequest.cc
	src/model/DescribeProductsResult.cc
	src/model/CreateOrderRequest.cc
	src/model/CreateOrderResult.cc
	src/model/DescribePriceRequest.cc
	src/model/DescribePriceResult.cc
	src/model/DescribeRateRequest.cc
	src/model/DescribeRateResult.cc
	src/model/QueryMarketCategoriesRequest.cc
	src/model/QueryMarketCategoriesResult.cc
	src/model/CreateRateRequest.cc
	src/model/CreateRateResult.cc
	src/model/DescribeInstanceRequest.cc
	src/model/DescribeInstanceResult.cc
	src/model/DescribeLicenseRequest.cc
	src/model/DescribeLicenseResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/ActivateLicenseRequest.cc
	src/model/ActivateLicenseResult.cc
	src/model/DescribeCommodityRequest.cc
	src/model/DescribeCommodityResult.cc
	src/model/DescribeProductRequest.cc
	src/model/DescribeProductResult.cc
	src/model/CreateCommodityRequest.cc
	src/model/CreateCommodityResult.cc
	src/model/DeleteCommodityRequest.cc
	src/model/DeleteCommodityResult.cc
	src/model/UpdateCommodityRequest.cc
	src/model/UpdateCommodityResult.cc
	src/model/DescribeCommoditiesRequest.cc
	src/model/DescribeCommoditiesResult.cc
	src/model/UploadCommodityFileRequest.cc
	src/model/UploadCommodityFileResult.cc )

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