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

set(dcdn_public_header 
	include/alibabacloud/dcdn/DcdnClient.h
	include/alibabacloud/dcdn/DcdnExport.h )

set(dcdn_public_header_model 
	include/alibabacloud/dcdn/model/DescribeDcdnUserResourcePackageRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserResourcePackageResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnRefreshQuotaRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnRefreshQuotaResult.h
	include/alibabacloud/dcdn/model/SetDcdnDomainCertificateRequest.h
	include/alibabacloud/dcdn/model/SetDcdnDomainCertificateResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainLogRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainLogResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainOriginBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainOriginBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnRefreshTasksRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnRefreshTasksResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnServiceRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnServiceResult.h
	include/alibabacloud/dcdn/model/UpdateDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/UpdateDcdnDomainResult.h
	include/alibabacloud/dcdn/model/DeleteDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/DeleteDcdnDomainResult.h
	include/alibabacloud/dcdn/model/BatchDeleteDcdnDomainConfigsRequest.h
	include/alibabacloud/dcdn/model/BatchDeleteDcdnDomainConfigsResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainDetailRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainDetailResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainHitRateDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainHitRateDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainConfigsRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainConfigsResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnCertificateListRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnCertificateListResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnCertificateDetailRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnCertificateDetailResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainOriginTrafficDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainOriginTrafficDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainTrafficDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainTrafficDataResult.h
	include/alibabacloud/dcdn/model/RefreshDcdnObjectCachesRequest.h
	include/alibabacloud/dcdn/model/RefreshDcdnObjectCachesResult.h
	include/alibabacloud/dcdn/model/DescribeUserDcdnStatusRequest.h
	include/alibabacloud/dcdn/model/DescribeUserDcdnStatusResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainQpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainQpsDataResult.h
	include/alibabacloud/dcdn/model/StartDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/StartDcdnDomainResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserDomainsRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserDomainsResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainHttpCodeDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainHttpCodeDataResult.h
	include/alibabacloud/dcdn/model/AddDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/AddDcdnDomainResult.h
	include/alibabacloud/dcdn/model/PreloadDcdnObjectCachesRequest.h
	include/alibabacloud/dcdn/model/PreloadDcdnObjectCachesResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainCnameRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainCnameResult.h
	include/alibabacloud/dcdn/model/StopDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/StopDcdnDomainResult.h )

set(dcdn_src 
	src/DcdnClient.cc
	src/model/DescribeDcdnUserResourcePackageRequest.cc
	src/model/DescribeDcdnUserResourcePackageResult.cc
	src/model/DescribeDcdnRefreshQuotaRequest.cc
	src/model/DescribeDcdnRefreshQuotaResult.cc
	src/model/SetDcdnDomainCertificateRequest.cc
	src/model/SetDcdnDomainCertificateResult.cc
	src/model/DescribeDcdnDomainLogRequest.cc
	src/model/DescribeDcdnDomainLogResult.cc
	src/model/DescribeDcdnDomainOriginBpsDataRequest.cc
	src/model/DescribeDcdnDomainOriginBpsDataResult.cc
	src/model/DescribeDcdnRefreshTasksRequest.cc
	src/model/DescribeDcdnRefreshTasksResult.cc
	src/model/DescribeDcdnServiceRequest.cc
	src/model/DescribeDcdnServiceResult.cc
	src/model/UpdateDcdnDomainRequest.cc
	src/model/UpdateDcdnDomainResult.cc
	src/model/DeleteDcdnDomainRequest.cc
	src/model/DeleteDcdnDomainResult.cc
	src/model/BatchDeleteDcdnDomainConfigsRequest.cc
	src/model/BatchDeleteDcdnDomainConfigsResult.cc
	src/model/DescribeDcdnDomainDetailRequest.cc
	src/model/DescribeDcdnDomainDetailResult.cc
	src/model/DescribeDcdnDomainHitRateDataRequest.cc
	src/model/DescribeDcdnDomainHitRateDataResult.cc
	src/model/DescribeDcdnDomainConfigsRequest.cc
	src/model/DescribeDcdnDomainConfigsResult.cc
	src/model/DescribeDcdnDomainBpsDataRequest.cc
	src/model/DescribeDcdnDomainBpsDataResult.cc
	src/model/DescribeDcdnCertificateListRequest.cc
	src/model/DescribeDcdnCertificateListResult.cc
	src/model/DescribeDcdnCertificateDetailRequest.cc
	src/model/DescribeDcdnCertificateDetailResult.cc
	src/model/DescribeDcdnDomainOriginTrafficDataRequest.cc
	src/model/DescribeDcdnDomainOriginTrafficDataResult.cc
	src/model/DescribeDcdnDomainTrafficDataRequest.cc
	src/model/DescribeDcdnDomainTrafficDataResult.cc
	src/model/RefreshDcdnObjectCachesRequest.cc
	src/model/RefreshDcdnObjectCachesResult.cc
	src/model/DescribeUserDcdnStatusRequest.cc
	src/model/DescribeUserDcdnStatusResult.cc
	src/model/DescribeDcdnDomainQpsDataRequest.cc
	src/model/DescribeDcdnDomainQpsDataResult.cc
	src/model/StartDcdnDomainRequest.cc
	src/model/StartDcdnDomainResult.cc
	src/model/DescribeDcdnUserDomainsRequest.cc
	src/model/DescribeDcdnUserDomainsResult.cc
	src/model/DescribeDcdnDomainHttpCodeDataRequest.cc
	src/model/DescribeDcdnDomainHttpCodeDataResult.cc
	src/model/AddDcdnDomainRequest.cc
	src/model/AddDcdnDomainResult.cc
	src/model/PreloadDcdnObjectCachesRequest.cc
	src/model/PreloadDcdnObjectCachesResult.cc
	src/model/DescribeDcdnDomainCnameRequest.cc
	src/model/DescribeDcdnDomainCnameResult.cc
	src/model/StopDcdnDomainRequest.cc
	src/model/StopDcdnDomainResult.cc )

add_library(dcdn ${LIB_TYPE}
	${dcdn_public_header}
	${dcdn_public_header_model}
	${dcdn_src})

set_target_properties(dcdn
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dcdn
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dcdn
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DCDN_LIBRARY)
endif()

target_include_directories(dcdn
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dcdn
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dcdn
		jsoncpp)
	target_include_directories(dcdn
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dcdn
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dcdn
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dcdn
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dcdn
		jsoncpp)
endif()

install(FILES ${dcdn_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dcdn)
install(FILES ${dcdn_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dcdn/model)
install(TARGETS dcdn
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)