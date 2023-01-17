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

set(scdn_public_header 
	include/alibabacloud/scdn/ScdnClient.h
	include/alibabacloud/scdn/ScdnExport.h )

set(scdn_public_header_model 
	include/alibabacloud/scdn/model/AddScdnDomainRequest.h
	include/alibabacloud/scdn/model/AddScdnDomainResult.h
	include/alibabacloud/scdn/model/BatchDeleteScdnDomainConfigsRequest.h
	include/alibabacloud/scdn/model/BatchDeleteScdnDomainConfigsResult.h
	include/alibabacloud/scdn/model/BatchSetScdnDomainConfigsRequest.h
	include/alibabacloud/scdn/model/BatchSetScdnDomainConfigsResult.h
	include/alibabacloud/scdn/model/BatchStartScdnDomainRequest.h
	include/alibabacloud/scdn/model/BatchStartScdnDomainResult.h
	include/alibabacloud/scdn/model/BatchStopScdnDomainRequest.h
	include/alibabacloud/scdn/model/BatchStopScdnDomainResult.h
	include/alibabacloud/scdn/model/BatchUpdateScdnDomainRequest.h
	include/alibabacloud/scdn/model/BatchUpdateScdnDomainResult.h
	include/alibabacloud/scdn/model/CheckScdnServiceRequest.h
	include/alibabacloud/scdn/model/CheckScdnServiceResult.h
	include/alibabacloud/scdn/model/DeleteScdnDomainRequest.h
	include/alibabacloud/scdn/model/DeleteScdnDomainResult.h
	include/alibabacloud/scdn/model/DeleteScdnSpecificConfigRequest.h
	include/alibabacloud/scdn/model/DeleteScdnSpecificConfigResult.h
	include/alibabacloud/scdn/model/DescribeScdnCcInfoRequest.h
	include/alibabacloud/scdn/model/DescribeScdnCcInfoResult.h
	include/alibabacloud/scdn/model/DescribeScdnCcQpsInfoRequest.h
	include/alibabacloud/scdn/model/DescribeScdnCcQpsInfoResult.h
	include/alibabacloud/scdn/model/DescribeScdnCcTopIpRequest.h
	include/alibabacloud/scdn/model/DescribeScdnCcTopIpResult.h
	include/alibabacloud/scdn/model/DescribeScdnCcTopUrlRequest.h
	include/alibabacloud/scdn/model/DescribeScdnCcTopUrlResult.h
	include/alibabacloud/scdn/model/DescribeScdnCertificateDetailRequest.h
	include/alibabacloud/scdn/model/DescribeScdnCertificateDetailResult.h
	include/alibabacloud/scdn/model/DescribeScdnCertificateListRequest.h
	include/alibabacloud/scdn/model/DescribeScdnCertificateListResult.h
	include/alibabacloud/scdn/model/DescribeScdnDDoSInfoRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDDoSInfoResult.h
	include/alibabacloud/scdn/model/DescribeScdnDDoSTrafficInfoRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDDoSTrafficInfoResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainBpsDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainBpsDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainCertificateInfoRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainCertificateInfoResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainCnameRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainCnameResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainConfigsRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainConfigsResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainDetailRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainDetailResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainHitRateDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainHitRateDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainHttpCodeDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainHttpCodeDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainIspDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainIspDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainLogRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainLogResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainOriginBpsDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainOriginBpsDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainOriginTrafficDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainOriginTrafficDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainPvDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainPvDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainQpsDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainQpsDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeBpsDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeBpsDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeByteHitRateDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeByteHitRateDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeHttpCodeDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeHttpCodeDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeQpsDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeQpsDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeReqHitRateDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeReqHitRateDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeSrcBpsDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeSrcBpsDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeSrcTrafficDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeSrcTrafficDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeTrafficDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRealTimeTrafficDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRegionDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainRegionDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainTopReferVisitRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainTopReferVisitResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainTopUrlVisitRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainTopUrlVisitResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainTrafficDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainTrafficDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnDomainUvDataRequest.h
	include/alibabacloud/scdn/model/DescribeScdnDomainUvDataResult.h
	include/alibabacloud/scdn/model/DescribeScdnRefreshQuotaRequest.h
	include/alibabacloud/scdn/model/DescribeScdnRefreshQuotaResult.h
	include/alibabacloud/scdn/model/DescribeScdnRefreshTasksRequest.h
	include/alibabacloud/scdn/model/DescribeScdnRefreshTasksResult.h
	include/alibabacloud/scdn/model/DescribeScdnServiceRequest.h
	include/alibabacloud/scdn/model/DescribeScdnServiceResult.h
	include/alibabacloud/scdn/model/DescribeScdnTopDomainsByFlowRequest.h
	include/alibabacloud/scdn/model/DescribeScdnTopDomainsByFlowResult.h
	include/alibabacloud/scdn/model/DescribeScdnUserDomainsRequest.h
	include/alibabacloud/scdn/model/DescribeScdnUserDomainsResult.h
	include/alibabacloud/scdn/model/DescribeScdnUserProtectInfoRequest.h
	include/alibabacloud/scdn/model/DescribeScdnUserProtectInfoResult.h
	include/alibabacloud/scdn/model/DescribeScdnUserQuotaRequest.h
	include/alibabacloud/scdn/model/DescribeScdnUserQuotaResult.h
	include/alibabacloud/scdn/model/DescribeScdnVerifyContentRequest.h
	include/alibabacloud/scdn/model/DescribeScdnVerifyContentResult.h
	include/alibabacloud/scdn/model/PreloadScdnObjectCachesRequest.h
	include/alibabacloud/scdn/model/PreloadScdnObjectCachesResult.h
	include/alibabacloud/scdn/model/RefreshScdnObjectCachesRequest.h
	include/alibabacloud/scdn/model/RefreshScdnObjectCachesResult.h
	include/alibabacloud/scdn/model/SetScdnBotInfoRequest.h
	include/alibabacloud/scdn/model/SetScdnBotInfoResult.h
	include/alibabacloud/scdn/model/SetScdnCcInfoRequest.h
	include/alibabacloud/scdn/model/SetScdnCcInfoResult.h
	include/alibabacloud/scdn/model/SetScdnDDoSInfoRequest.h
	include/alibabacloud/scdn/model/SetScdnDDoSInfoResult.h
	include/alibabacloud/scdn/model/SetScdnDomainCertificateRequest.h
	include/alibabacloud/scdn/model/SetScdnDomainCertificateResult.h
	include/alibabacloud/scdn/model/StartScdnDomainRequest.h
	include/alibabacloud/scdn/model/StartScdnDomainResult.h
	include/alibabacloud/scdn/model/StopScdnDomainRequest.h
	include/alibabacloud/scdn/model/StopScdnDomainResult.h
	include/alibabacloud/scdn/model/UpdateScdnDomainRequest.h
	include/alibabacloud/scdn/model/UpdateScdnDomainResult.h
	include/alibabacloud/scdn/model/VerifyScdnDomainOwnerRequest.h
	include/alibabacloud/scdn/model/VerifyScdnDomainOwnerResult.h )

set(scdn_src 
	src/ScdnClient.cc
	src/model/AddScdnDomainRequest.cc
	src/model/AddScdnDomainResult.cc
	src/model/BatchDeleteScdnDomainConfigsRequest.cc
	src/model/BatchDeleteScdnDomainConfigsResult.cc
	src/model/BatchSetScdnDomainConfigsRequest.cc
	src/model/BatchSetScdnDomainConfigsResult.cc
	src/model/BatchStartScdnDomainRequest.cc
	src/model/BatchStartScdnDomainResult.cc
	src/model/BatchStopScdnDomainRequest.cc
	src/model/BatchStopScdnDomainResult.cc
	src/model/BatchUpdateScdnDomainRequest.cc
	src/model/BatchUpdateScdnDomainResult.cc
	src/model/CheckScdnServiceRequest.cc
	src/model/CheckScdnServiceResult.cc
	src/model/DeleteScdnDomainRequest.cc
	src/model/DeleteScdnDomainResult.cc
	src/model/DeleteScdnSpecificConfigRequest.cc
	src/model/DeleteScdnSpecificConfigResult.cc
	src/model/DescribeScdnCcInfoRequest.cc
	src/model/DescribeScdnCcInfoResult.cc
	src/model/DescribeScdnCcQpsInfoRequest.cc
	src/model/DescribeScdnCcQpsInfoResult.cc
	src/model/DescribeScdnCcTopIpRequest.cc
	src/model/DescribeScdnCcTopIpResult.cc
	src/model/DescribeScdnCcTopUrlRequest.cc
	src/model/DescribeScdnCcTopUrlResult.cc
	src/model/DescribeScdnCertificateDetailRequest.cc
	src/model/DescribeScdnCertificateDetailResult.cc
	src/model/DescribeScdnCertificateListRequest.cc
	src/model/DescribeScdnCertificateListResult.cc
	src/model/DescribeScdnDDoSInfoRequest.cc
	src/model/DescribeScdnDDoSInfoResult.cc
	src/model/DescribeScdnDDoSTrafficInfoRequest.cc
	src/model/DescribeScdnDDoSTrafficInfoResult.cc
	src/model/DescribeScdnDomainBpsDataRequest.cc
	src/model/DescribeScdnDomainBpsDataResult.cc
	src/model/DescribeScdnDomainCertificateInfoRequest.cc
	src/model/DescribeScdnDomainCertificateInfoResult.cc
	src/model/DescribeScdnDomainCnameRequest.cc
	src/model/DescribeScdnDomainCnameResult.cc
	src/model/DescribeScdnDomainConfigsRequest.cc
	src/model/DescribeScdnDomainConfigsResult.cc
	src/model/DescribeScdnDomainDetailRequest.cc
	src/model/DescribeScdnDomainDetailResult.cc
	src/model/DescribeScdnDomainHitRateDataRequest.cc
	src/model/DescribeScdnDomainHitRateDataResult.cc
	src/model/DescribeScdnDomainHttpCodeDataRequest.cc
	src/model/DescribeScdnDomainHttpCodeDataResult.cc
	src/model/DescribeScdnDomainIspDataRequest.cc
	src/model/DescribeScdnDomainIspDataResult.cc
	src/model/DescribeScdnDomainLogRequest.cc
	src/model/DescribeScdnDomainLogResult.cc
	src/model/DescribeScdnDomainOriginBpsDataRequest.cc
	src/model/DescribeScdnDomainOriginBpsDataResult.cc
	src/model/DescribeScdnDomainOriginTrafficDataRequest.cc
	src/model/DescribeScdnDomainOriginTrafficDataResult.cc
	src/model/DescribeScdnDomainPvDataRequest.cc
	src/model/DescribeScdnDomainPvDataResult.cc
	src/model/DescribeScdnDomainQpsDataRequest.cc
	src/model/DescribeScdnDomainQpsDataResult.cc
	src/model/DescribeScdnDomainRealTimeBpsDataRequest.cc
	src/model/DescribeScdnDomainRealTimeBpsDataResult.cc
	src/model/DescribeScdnDomainRealTimeByteHitRateDataRequest.cc
	src/model/DescribeScdnDomainRealTimeByteHitRateDataResult.cc
	src/model/DescribeScdnDomainRealTimeHttpCodeDataRequest.cc
	src/model/DescribeScdnDomainRealTimeHttpCodeDataResult.cc
	src/model/DescribeScdnDomainRealTimeQpsDataRequest.cc
	src/model/DescribeScdnDomainRealTimeQpsDataResult.cc
	src/model/DescribeScdnDomainRealTimeReqHitRateDataRequest.cc
	src/model/DescribeScdnDomainRealTimeReqHitRateDataResult.cc
	src/model/DescribeScdnDomainRealTimeSrcBpsDataRequest.cc
	src/model/DescribeScdnDomainRealTimeSrcBpsDataResult.cc
	src/model/DescribeScdnDomainRealTimeSrcTrafficDataRequest.cc
	src/model/DescribeScdnDomainRealTimeSrcTrafficDataResult.cc
	src/model/DescribeScdnDomainRealTimeTrafficDataRequest.cc
	src/model/DescribeScdnDomainRealTimeTrafficDataResult.cc
	src/model/DescribeScdnDomainRegionDataRequest.cc
	src/model/DescribeScdnDomainRegionDataResult.cc
	src/model/DescribeScdnDomainTopReferVisitRequest.cc
	src/model/DescribeScdnDomainTopReferVisitResult.cc
	src/model/DescribeScdnDomainTopUrlVisitRequest.cc
	src/model/DescribeScdnDomainTopUrlVisitResult.cc
	src/model/DescribeScdnDomainTrafficDataRequest.cc
	src/model/DescribeScdnDomainTrafficDataResult.cc
	src/model/DescribeScdnDomainUvDataRequest.cc
	src/model/DescribeScdnDomainUvDataResult.cc
	src/model/DescribeScdnRefreshQuotaRequest.cc
	src/model/DescribeScdnRefreshQuotaResult.cc
	src/model/DescribeScdnRefreshTasksRequest.cc
	src/model/DescribeScdnRefreshTasksResult.cc
	src/model/DescribeScdnServiceRequest.cc
	src/model/DescribeScdnServiceResult.cc
	src/model/DescribeScdnTopDomainsByFlowRequest.cc
	src/model/DescribeScdnTopDomainsByFlowResult.cc
	src/model/DescribeScdnUserDomainsRequest.cc
	src/model/DescribeScdnUserDomainsResult.cc
	src/model/DescribeScdnUserProtectInfoRequest.cc
	src/model/DescribeScdnUserProtectInfoResult.cc
	src/model/DescribeScdnUserQuotaRequest.cc
	src/model/DescribeScdnUserQuotaResult.cc
	src/model/DescribeScdnVerifyContentRequest.cc
	src/model/DescribeScdnVerifyContentResult.cc
	src/model/PreloadScdnObjectCachesRequest.cc
	src/model/PreloadScdnObjectCachesResult.cc
	src/model/RefreshScdnObjectCachesRequest.cc
	src/model/RefreshScdnObjectCachesResult.cc
	src/model/SetScdnBotInfoRequest.cc
	src/model/SetScdnBotInfoResult.cc
	src/model/SetScdnCcInfoRequest.cc
	src/model/SetScdnCcInfoResult.cc
	src/model/SetScdnDDoSInfoRequest.cc
	src/model/SetScdnDDoSInfoResult.cc
	src/model/SetScdnDomainCertificateRequest.cc
	src/model/SetScdnDomainCertificateResult.cc
	src/model/StartScdnDomainRequest.cc
	src/model/StartScdnDomainResult.cc
	src/model/StopScdnDomainRequest.cc
	src/model/StopScdnDomainResult.cc
	src/model/UpdateScdnDomainRequest.cc
	src/model/UpdateScdnDomainResult.cc
	src/model/VerifyScdnDomainOwnerRequest.cc
	src/model/VerifyScdnDomainOwnerResult.cc )

add_library(scdn ${LIB_TYPE}
	${scdn_public_header}
	${scdn_public_header_model}
	${scdn_src})

set_target_properties(scdn
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}scdn
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(scdn
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SCDN_LIBRARY)
endif()

target_include_directories(scdn
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(scdn
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(scdn
		jsoncpp)
	target_include_directories(scdn
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(scdn
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(scdn
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(scdn
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(scdn
		jsoncpp)
endif()

install(FILES ${scdn_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/scdn)
install(FILES ${scdn_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/scdn/model)
install(TARGETS scdn
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)