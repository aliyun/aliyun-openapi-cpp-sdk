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

set(cdn_public_header 
	include/alibabacloud/cdn/CdnClient.h
	include/alibabacloud/cdn/CdnExport.h )

set(cdn_public_header_model 
	include/alibabacloud/cdn/model/AddCdnDomainRequest.h
	include/alibabacloud/cdn/model/AddCdnDomainResult.h
	include/alibabacloud/cdn/model/DescribeCdnDomainDetailRequest.h
	include/alibabacloud/cdn/model/DescribeCdnDomainDetailResult.h
	include/alibabacloud/cdn/model/DescribeCdnDomainLogsRequest.h
	include/alibabacloud/cdn/model/DescribeCdnDomainLogsResult.h
	include/alibabacloud/cdn/model/DescribeCdnServiceRequest.h
	include/alibabacloud/cdn/model/DescribeCdnServiceResult.h
	include/alibabacloud/cdn/model/DescribeDomainBpsDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainBpsDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainBpsDataByTimeStampRequest.h
	include/alibabacloud/cdn/model/DescribeDomainBpsDataByTimeStampResult.h
	include/alibabacloud/cdn/model/DescribeDomainFileSizeProportionDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainFileSizeProportionDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainFlowDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainFlowDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainHitRateDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainHitRateDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainHttpCodeDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainHttpCodeDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainISPDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainISPDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainQpsDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainQpsDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainRegionDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainRegionDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainReqHitRateDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainReqHitRateDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainSrcBpsDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainSrcBpsDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainSrcFlowDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainSrcFlowDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainUvDataRequest.h
	include/alibabacloud/cdn/model/DescribeDomainUvDataResult.h
	include/alibabacloud/cdn/model/DescribeDomainsBySourceRequest.h
	include/alibabacloud/cdn/model/DescribeDomainsBySourceResult.h
	include/alibabacloud/cdn/model/DescribeDomainsUsageByDayRequest.h
	include/alibabacloud/cdn/model/DescribeDomainsUsageByDayResult.h
	include/alibabacloud/cdn/model/DescribeRefreshQuotaRequest.h
	include/alibabacloud/cdn/model/DescribeRefreshQuotaResult.h
	include/alibabacloud/cdn/model/DescribeTopDomainsByFlowRequest.h
	include/alibabacloud/cdn/model/DescribeTopDomainsByFlowResult.h
	include/alibabacloud/cdn/model/DescribeUserDomainsRequest.h
	include/alibabacloud/cdn/model/DescribeUserDomainsResult.h
	include/alibabacloud/cdn/model/OpenCdnServiceRequest.h
	include/alibabacloud/cdn/model/OpenCdnServiceResult.h
	include/alibabacloud/cdn/model/PushObjectCacheRequest.h
	include/alibabacloud/cdn/model/PushObjectCacheResult.h
	include/alibabacloud/cdn/model/RefreshObjectCachesRequest.h
	include/alibabacloud/cdn/model/RefreshObjectCachesResult.h
	include/alibabacloud/cdn/model/TestDescribeDomainBpsDataRequest.h
	include/alibabacloud/cdn/model/TestDescribeDomainBpsDataResult.h )

set(cdn_src 
	src/CdnClient.cc
	src/model/AddCdnDomainRequest.cc
	src/model/AddCdnDomainResult.cc
	src/model/DescribeCdnDomainDetailRequest.cc
	src/model/DescribeCdnDomainDetailResult.cc
	src/model/DescribeCdnDomainLogsRequest.cc
	src/model/DescribeCdnDomainLogsResult.cc
	src/model/DescribeCdnServiceRequest.cc
	src/model/DescribeCdnServiceResult.cc
	src/model/DescribeDomainBpsDataRequest.cc
	src/model/DescribeDomainBpsDataResult.cc
	src/model/DescribeDomainBpsDataByTimeStampRequest.cc
	src/model/DescribeDomainBpsDataByTimeStampResult.cc
	src/model/DescribeDomainFileSizeProportionDataRequest.cc
	src/model/DescribeDomainFileSizeProportionDataResult.cc
	src/model/DescribeDomainFlowDataRequest.cc
	src/model/DescribeDomainFlowDataResult.cc
	src/model/DescribeDomainHitRateDataRequest.cc
	src/model/DescribeDomainHitRateDataResult.cc
	src/model/DescribeDomainHttpCodeDataRequest.cc
	src/model/DescribeDomainHttpCodeDataResult.cc
	src/model/DescribeDomainISPDataRequest.cc
	src/model/DescribeDomainISPDataResult.cc
	src/model/DescribeDomainQpsDataRequest.cc
	src/model/DescribeDomainQpsDataResult.cc
	src/model/DescribeDomainRegionDataRequest.cc
	src/model/DescribeDomainRegionDataResult.cc
	src/model/DescribeDomainReqHitRateDataRequest.cc
	src/model/DescribeDomainReqHitRateDataResult.cc
	src/model/DescribeDomainSrcBpsDataRequest.cc
	src/model/DescribeDomainSrcBpsDataResult.cc
	src/model/DescribeDomainSrcFlowDataRequest.cc
	src/model/DescribeDomainSrcFlowDataResult.cc
	src/model/DescribeDomainUvDataRequest.cc
	src/model/DescribeDomainUvDataResult.cc
	src/model/DescribeDomainsBySourceRequest.cc
	src/model/DescribeDomainsBySourceResult.cc
	src/model/DescribeDomainsUsageByDayRequest.cc
	src/model/DescribeDomainsUsageByDayResult.cc
	src/model/DescribeRefreshQuotaRequest.cc
	src/model/DescribeRefreshQuotaResult.cc
	src/model/DescribeTopDomainsByFlowRequest.cc
	src/model/DescribeTopDomainsByFlowResult.cc
	src/model/DescribeUserDomainsRequest.cc
	src/model/DescribeUserDomainsResult.cc
	src/model/OpenCdnServiceRequest.cc
	src/model/OpenCdnServiceResult.cc
	src/model/PushObjectCacheRequest.cc
	src/model/PushObjectCacheResult.cc
	src/model/RefreshObjectCachesRequest.cc
	src/model/RefreshObjectCachesResult.cc
	src/model/TestDescribeDomainBpsDataRequest.cc
	src/model/TestDescribeDomainBpsDataResult.cc )

add_library(cdn ${LIB_TYPE}
	${cdn_public_header}
	${cdn_public_header_model}
	${cdn_src})

set_target_properties(cdn
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdn
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cdn
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CDN_LIBRARY)
endif()

target_include_directories(cdn
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cdn
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cdn
		jsoncpp)
	target_include_directories(cdn
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cdn
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cdn
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cdn
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cdn
		jsoncpp)
endif()

install(FILES ${cdn_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cdn)
install(FILES ${cdn_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cdn/model)
install(TARGETS cdn
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)