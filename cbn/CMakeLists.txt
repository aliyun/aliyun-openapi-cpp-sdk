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

set(cbn_public_header 
	include/alibabacloud/cbn/CbnClient.h
	include/alibabacloud/cbn/CbnExport.h )

set(cbn_public_header_model 
	include/alibabacloud/cbn/model/ActiveFlowLogRequest.h
	include/alibabacloud/cbn/model/ActiveFlowLogResult.h
	include/alibabacloud/cbn/model/AssociateCenBandwidthPackageRequest.h
	include/alibabacloud/cbn/model/AssociateCenBandwidthPackageResult.h
	include/alibabacloud/cbn/model/AttachCenChildInstanceRequest.h
	include/alibabacloud/cbn/model/AttachCenChildInstanceResult.h
	include/alibabacloud/cbn/model/CreateCenRequest.h
	include/alibabacloud/cbn/model/CreateCenResult.h
	include/alibabacloud/cbn/model/CreateCenBandwidthPackageRequest.h
	include/alibabacloud/cbn/model/CreateCenBandwidthPackageResult.h
	include/alibabacloud/cbn/model/CreateCenChildInstanceRouteEntryToCenRequest.h
	include/alibabacloud/cbn/model/CreateCenChildInstanceRouteEntryToCenResult.h
	include/alibabacloud/cbn/model/CreateCenRouteMapRequest.h
	include/alibabacloud/cbn/model/CreateCenRouteMapResult.h
	include/alibabacloud/cbn/model/CreateFlowlogRequest.h
	include/alibabacloud/cbn/model/CreateFlowlogResult.h
	include/alibabacloud/cbn/model/DeactiveFlowLogRequest.h
	include/alibabacloud/cbn/model/DeactiveFlowLogResult.h
	include/alibabacloud/cbn/model/DeleteCenRequest.h
	include/alibabacloud/cbn/model/DeleteCenResult.h
	include/alibabacloud/cbn/model/DeleteCenBandwidthPackageRequest.h
	include/alibabacloud/cbn/model/DeleteCenBandwidthPackageResult.h
	include/alibabacloud/cbn/model/DeleteCenChildInstanceRouteEntryToCenRequest.h
	include/alibabacloud/cbn/model/DeleteCenChildInstanceRouteEntryToCenResult.h
	include/alibabacloud/cbn/model/DeleteCenRouteMapRequest.h
	include/alibabacloud/cbn/model/DeleteCenRouteMapResult.h
	include/alibabacloud/cbn/model/DeleteFlowlogRequest.h
	include/alibabacloud/cbn/model/DeleteFlowlogResult.h
	include/alibabacloud/cbn/model/DeleteRouteServiceInCenRequest.h
	include/alibabacloud/cbn/model/DeleteRouteServiceInCenResult.h
	include/alibabacloud/cbn/model/DescribeCenAttachedChildInstanceAttributeRequest.h
	include/alibabacloud/cbn/model/DescribeCenAttachedChildInstanceAttributeResult.h
	include/alibabacloud/cbn/model/DescribeCenAttachedChildInstancesRequest.h
	include/alibabacloud/cbn/model/DescribeCenAttachedChildInstancesResult.h
	include/alibabacloud/cbn/model/DescribeCenBandwidthPackagesRequest.h
	include/alibabacloud/cbn/model/DescribeCenBandwidthPackagesResult.h
	include/alibabacloud/cbn/model/DescribeCenChildInstanceRouteEntriesRequest.h
	include/alibabacloud/cbn/model/DescribeCenChildInstanceRouteEntriesResult.h
	include/alibabacloud/cbn/model/DescribeCenGeographicSpanRemainingBandwidthRequest.h
	include/alibabacloud/cbn/model/DescribeCenGeographicSpanRemainingBandwidthResult.h
	include/alibabacloud/cbn/model/DescribeCenGeographicSpansRequest.h
	include/alibabacloud/cbn/model/DescribeCenGeographicSpansResult.h
	include/alibabacloud/cbn/model/DescribeCenInterRegionBandwidthLimitsRequest.h
	include/alibabacloud/cbn/model/DescribeCenInterRegionBandwidthLimitsResult.h
	include/alibabacloud/cbn/model/DescribeCenPrivateZoneRoutesRequest.h
	include/alibabacloud/cbn/model/DescribeCenPrivateZoneRoutesResult.h
	include/alibabacloud/cbn/model/DescribeCenRegionDomainRouteEntriesRequest.h
	include/alibabacloud/cbn/model/DescribeCenRegionDomainRouteEntriesResult.h
	include/alibabacloud/cbn/model/DescribeCenRouteMapsRequest.h
	include/alibabacloud/cbn/model/DescribeCenRouteMapsResult.h
	include/alibabacloud/cbn/model/DescribeCenVbrHealthCheckRequest.h
	include/alibabacloud/cbn/model/DescribeCenVbrHealthCheckResult.h
	include/alibabacloud/cbn/model/DescribeCensRequest.h
	include/alibabacloud/cbn/model/DescribeCensResult.h
	include/alibabacloud/cbn/model/DescribeChildInstanceRegionsRequest.h
	include/alibabacloud/cbn/model/DescribeChildInstanceRegionsResult.h
	include/alibabacloud/cbn/model/DescribeFlowlogsRequest.h
	include/alibabacloud/cbn/model/DescribeFlowlogsResult.h
	include/alibabacloud/cbn/model/DescribeGeographicRegionMembershipRequest.h
	include/alibabacloud/cbn/model/DescribeGeographicRegionMembershipResult.h
	include/alibabacloud/cbn/model/DescribeGrantRulesToCenRequest.h
	include/alibabacloud/cbn/model/DescribeGrantRulesToCenResult.h
	include/alibabacloud/cbn/model/DescribePublishedRouteEntriesRequest.h
	include/alibabacloud/cbn/model/DescribePublishedRouteEntriesResult.h
	include/alibabacloud/cbn/model/DescribeRouteConflictRequest.h
	include/alibabacloud/cbn/model/DescribeRouteConflictResult.h
	include/alibabacloud/cbn/model/DescribeRouteServicesInCenRequest.h
	include/alibabacloud/cbn/model/DescribeRouteServicesInCenResult.h
	include/alibabacloud/cbn/model/DetachCenChildInstanceRequest.h
	include/alibabacloud/cbn/model/DetachCenChildInstanceResult.h
	include/alibabacloud/cbn/model/DisableCenVbrHealthCheckRequest.h
	include/alibabacloud/cbn/model/DisableCenVbrHealthCheckResult.h
	include/alibabacloud/cbn/model/EnableCenVbrHealthCheckRequest.h
	include/alibabacloud/cbn/model/EnableCenVbrHealthCheckResult.h
	include/alibabacloud/cbn/model/ListTagResourcesRequest.h
	include/alibabacloud/cbn/model/ListTagResourcesResult.h
	include/alibabacloud/cbn/model/ModifyCenAttributeRequest.h
	include/alibabacloud/cbn/model/ModifyCenAttributeResult.h
	include/alibabacloud/cbn/model/ModifyCenBandwidthPackageAttributeRequest.h
	include/alibabacloud/cbn/model/ModifyCenBandwidthPackageAttributeResult.h
	include/alibabacloud/cbn/model/ModifyCenBandwidthPackageSpecRequest.h
	include/alibabacloud/cbn/model/ModifyCenBandwidthPackageSpecResult.h
	include/alibabacloud/cbn/model/ModifyCenRouteMapRequest.h
	include/alibabacloud/cbn/model/ModifyCenRouteMapResult.h
	include/alibabacloud/cbn/model/ModifyFlowLogAttributeRequest.h
	include/alibabacloud/cbn/model/ModifyFlowLogAttributeResult.h
	include/alibabacloud/cbn/model/PublishRouteEntriesRequest.h
	include/alibabacloud/cbn/model/PublishRouteEntriesResult.h
	include/alibabacloud/cbn/model/ResolveAndRouteServiceInCenRequest.h
	include/alibabacloud/cbn/model/ResolveAndRouteServiceInCenResult.h
	include/alibabacloud/cbn/model/RoutePrivateZoneInCenToVpcRequest.h
	include/alibabacloud/cbn/model/RoutePrivateZoneInCenToVpcResult.h
	include/alibabacloud/cbn/model/SetCenInterRegionBandwidthLimitRequest.h
	include/alibabacloud/cbn/model/SetCenInterRegionBandwidthLimitResult.h
	include/alibabacloud/cbn/model/TagResourcesRequest.h
	include/alibabacloud/cbn/model/TagResourcesResult.h
	include/alibabacloud/cbn/model/TempUpgradeCenBandwidthPackageSpecRequest.h
	include/alibabacloud/cbn/model/TempUpgradeCenBandwidthPackageSpecResult.h
	include/alibabacloud/cbn/model/UnassociateCenBandwidthPackageRequest.h
	include/alibabacloud/cbn/model/UnassociateCenBandwidthPackageResult.h
	include/alibabacloud/cbn/model/UnroutePrivateZoneInCenToVpcRequest.h
	include/alibabacloud/cbn/model/UnroutePrivateZoneInCenToVpcResult.h
	include/alibabacloud/cbn/model/UntagResourcesRequest.h
	include/alibabacloud/cbn/model/UntagResourcesResult.h
	include/alibabacloud/cbn/model/WithdrawPublishedRouteEntriesRequest.h
	include/alibabacloud/cbn/model/WithdrawPublishedRouteEntriesResult.h )

set(cbn_src 
	src/CbnClient.cc
	src/model/ActiveFlowLogRequest.cc
	src/model/ActiveFlowLogResult.cc
	src/model/AssociateCenBandwidthPackageRequest.cc
	src/model/AssociateCenBandwidthPackageResult.cc
	src/model/AttachCenChildInstanceRequest.cc
	src/model/AttachCenChildInstanceResult.cc
	src/model/CreateCenRequest.cc
	src/model/CreateCenResult.cc
	src/model/CreateCenBandwidthPackageRequest.cc
	src/model/CreateCenBandwidthPackageResult.cc
	src/model/CreateCenChildInstanceRouteEntryToCenRequest.cc
	src/model/CreateCenChildInstanceRouteEntryToCenResult.cc
	src/model/CreateCenRouteMapRequest.cc
	src/model/CreateCenRouteMapResult.cc
	src/model/CreateFlowlogRequest.cc
	src/model/CreateFlowlogResult.cc
	src/model/DeactiveFlowLogRequest.cc
	src/model/DeactiveFlowLogResult.cc
	src/model/DeleteCenRequest.cc
	src/model/DeleteCenResult.cc
	src/model/DeleteCenBandwidthPackageRequest.cc
	src/model/DeleteCenBandwidthPackageResult.cc
	src/model/DeleteCenChildInstanceRouteEntryToCenRequest.cc
	src/model/DeleteCenChildInstanceRouteEntryToCenResult.cc
	src/model/DeleteCenRouteMapRequest.cc
	src/model/DeleteCenRouteMapResult.cc
	src/model/DeleteFlowlogRequest.cc
	src/model/DeleteFlowlogResult.cc
	src/model/DeleteRouteServiceInCenRequest.cc
	src/model/DeleteRouteServiceInCenResult.cc
	src/model/DescribeCenAttachedChildInstanceAttributeRequest.cc
	src/model/DescribeCenAttachedChildInstanceAttributeResult.cc
	src/model/DescribeCenAttachedChildInstancesRequest.cc
	src/model/DescribeCenAttachedChildInstancesResult.cc
	src/model/DescribeCenBandwidthPackagesRequest.cc
	src/model/DescribeCenBandwidthPackagesResult.cc
	src/model/DescribeCenChildInstanceRouteEntriesRequest.cc
	src/model/DescribeCenChildInstanceRouteEntriesResult.cc
	src/model/DescribeCenGeographicSpanRemainingBandwidthRequest.cc
	src/model/DescribeCenGeographicSpanRemainingBandwidthResult.cc
	src/model/DescribeCenGeographicSpansRequest.cc
	src/model/DescribeCenGeographicSpansResult.cc
	src/model/DescribeCenInterRegionBandwidthLimitsRequest.cc
	src/model/DescribeCenInterRegionBandwidthLimitsResult.cc
	src/model/DescribeCenPrivateZoneRoutesRequest.cc
	src/model/DescribeCenPrivateZoneRoutesResult.cc
	src/model/DescribeCenRegionDomainRouteEntriesRequest.cc
	src/model/DescribeCenRegionDomainRouteEntriesResult.cc
	src/model/DescribeCenRouteMapsRequest.cc
	src/model/DescribeCenRouteMapsResult.cc
	src/model/DescribeCenVbrHealthCheckRequest.cc
	src/model/DescribeCenVbrHealthCheckResult.cc
	src/model/DescribeCensRequest.cc
	src/model/DescribeCensResult.cc
	src/model/DescribeChildInstanceRegionsRequest.cc
	src/model/DescribeChildInstanceRegionsResult.cc
	src/model/DescribeFlowlogsRequest.cc
	src/model/DescribeFlowlogsResult.cc
	src/model/DescribeGeographicRegionMembershipRequest.cc
	src/model/DescribeGeographicRegionMembershipResult.cc
	src/model/DescribeGrantRulesToCenRequest.cc
	src/model/DescribeGrantRulesToCenResult.cc
	src/model/DescribePublishedRouteEntriesRequest.cc
	src/model/DescribePublishedRouteEntriesResult.cc
	src/model/DescribeRouteConflictRequest.cc
	src/model/DescribeRouteConflictResult.cc
	src/model/DescribeRouteServicesInCenRequest.cc
	src/model/DescribeRouteServicesInCenResult.cc
	src/model/DetachCenChildInstanceRequest.cc
	src/model/DetachCenChildInstanceResult.cc
	src/model/DisableCenVbrHealthCheckRequest.cc
	src/model/DisableCenVbrHealthCheckResult.cc
	src/model/EnableCenVbrHealthCheckRequest.cc
	src/model/EnableCenVbrHealthCheckResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyCenAttributeRequest.cc
	src/model/ModifyCenAttributeResult.cc
	src/model/ModifyCenBandwidthPackageAttributeRequest.cc
	src/model/ModifyCenBandwidthPackageAttributeResult.cc
	src/model/ModifyCenBandwidthPackageSpecRequest.cc
	src/model/ModifyCenBandwidthPackageSpecResult.cc
	src/model/ModifyCenRouteMapRequest.cc
	src/model/ModifyCenRouteMapResult.cc
	src/model/ModifyFlowLogAttributeRequest.cc
	src/model/ModifyFlowLogAttributeResult.cc
	src/model/PublishRouteEntriesRequest.cc
	src/model/PublishRouteEntriesResult.cc
	src/model/ResolveAndRouteServiceInCenRequest.cc
	src/model/ResolveAndRouteServiceInCenResult.cc
	src/model/RoutePrivateZoneInCenToVpcRequest.cc
	src/model/RoutePrivateZoneInCenToVpcResult.cc
	src/model/SetCenInterRegionBandwidthLimitRequest.cc
	src/model/SetCenInterRegionBandwidthLimitResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/TempUpgradeCenBandwidthPackageSpecRequest.cc
	src/model/TempUpgradeCenBandwidthPackageSpecResult.cc
	src/model/UnassociateCenBandwidthPackageRequest.cc
	src/model/UnassociateCenBandwidthPackageResult.cc
	src/model/UnroutePrivateZoneInCenToVpcRequest.cc
	src/model/UnroutePrivateZoneInCenToVpcResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/WithdrawPublishedRouteEntriesRequest.cc
	src/model/WithdrawPublishedRouteEntriesResult.cc )

add_library(cbn ${LIB_TYPE}
	${cbn_public_header}
	${cbn_public_header_model}
	${cbn_src})

set_target_properties(cbn
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cbn
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cbn
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CBN_LIBRARY)
endif()

target_include_directories(cbn
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cbn
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cbn
		jsoncpp)
	target_include_directories(cbn
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cbn
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cbn
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cbn
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cbn
		jsoncpp)
endif()

install(FILES ${cbn_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cbn)
install(FILES ${cbn_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cbn/model)
install(TARGETS cbn
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)