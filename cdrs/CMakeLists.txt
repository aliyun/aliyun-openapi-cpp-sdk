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

set(cdrs_public_header 
	include/alibabacloud/cdrs/CDRSClient.h
	include/alibabacloud/cdrs/CDRSExport.h )

set(cdrs_public_header_model 
	include/alibabacloud/cdrs/model/AddCdrsMonitorRequest.h
	include/alibabacloud/cdrs/model/AddCdrsMonitorResult.h
	include/alibabacloud/cdrs/model/AddMonitorRequest.h
	include/alibabacloud/cdrs/model/AddMonitorResult.h
	include/alibabacloud/cdrs/model/BindDeviceRequest.h
	include/alibabacloud/cdrs/model/BindDeviceResult.h
	include/alibabacloud/cdrs/model/CreateProjectRequest.h
	include/alibabacloud/cdrs/model/CreateProjectResult.h
	include/alibabacloud/cdrs/model/GetCdrsMonitorListRequest.h
	include/alibabacloud/cdrs/model/GetCdrsMonitorListResult.h
	include/alibabacloud/cdrs/model/GetCdrsMonitorResultRequest.h
	include/alibabacloud/cdrs/model/GetCdrsMonitorResultResult.h
	include/alibabacloud/cdrs/model/GetMonitorListRequest.h
	include/alibabacloud/cdrs/model/GetMonitorListResult.h
	include/alibabacloud/cdrs/model/GetMonitorResultRequest.h
	include/alibabacloud/cdrs/model/GetMonitorResultResult.h
	include/alibabacloud/cdrs/model/ListAreaHotSpotMetricsRequest.h
	include/alibabacloud/cdrs/model/ListAreaHotSpotMetricsResult.h
	include/alibabacloud/cdrs/model/ListCityMapAoisRequest.h
	include/alibabacloud/cdrs/model/ListCityMapAoisResult.h
	include/alibabacloud/cdrs/model/ListCityMapCameraResultsRequest.h
	include/alibabacloud/cdrs/model/ListCityMapCameraResultsResult.h
	include/alibabacloud/cdrs/model/ListCityMapCameraStatisticsRequest.h
	include/alibabacloud/cdrs/model/ListCityMapCameraStatisticsResult.h
	include/alibabacloud/cdrs/model/ListCityMapImageDetailsRequest.h
	include/alibabacloud/cdrs/model/ListCityMapImageDetailsResult.h
	include/alibabacloud/cdrs/model/ListCityMapPersonFlowRequest.h
	include/alibabacloud/cdrs/model/ListCityMapPersonFlowResult.h
	include/alibabacloud/cdrs/model/ListCityMapRangeStatisticRequest.h
	include/alibabacloud/cdrs/model/ListCityMapRangeStatisticResult.h
	include/alibabacloud/cdrs/model/ListCorpMetricsStatisticRequest.h
	include/alibabacloud/cdrs/model/ListCorpMetricsStatisticResult.h
	include/alibabacloud/cdrs/model/ListDataStatisticsRequest.h
	include/alibabacloud/cdrs/model/ListDataStatisticsResult.h
	include/alibabacloud/cdrs/model/ListDataStatisticsByDayRequest.h
	include/alibabacloud/cdrs/model/ListDataStatisticsByDayResult.h
	include/alibabacloud/cdrs/model/ListDeviceDetailRequest.h
	include/alibabacloud/cdrs/model/ListDeviceDetailResult.h
	include/alibabacloud/cdrs/model/ListDeviceGenderStatisticsRequest.h
	include/alibabacloud/cdrs/model/ListDeviceGenderStatisticsResult.h
	include/alibabacloud/cdrs/model/ListDevicePersonRequest.h
	include/alibabacloud/cdrs/model/ListDevicePersonResult.h
	include/alibabacloud/cdrs/model/ListDevicePersonStatisticsRequest.h
	include/alibabacloud/cdrs/model/ListDevicePersonStatisticsResult.h
	include/alibabacloud/cdrs/model/ListDeviceRelationRequest.h
	include/alibabacloud/cdrs/model/ListDeviceRelationResult.h
	include/alibabacloud/cdrs/model/ListMapRouteDetailsRequest.h
	include/alibabacloud/cdrs/model/ListMapRouteDetailsResult.h
	include/alibabacloud/cdrs/model/ListPersonDetailsRequest.h
	include/alibabacloud/cdrs/model/ListPersonDetailsResult.h
	include/alibabacloud/cdrs/model/ListPersonResultRequest.h
	include/alibabacloud/cdrs/model/ListPersonResultResult.h
	include/alibabacloud/cdrs/model/ListPersonTagRequest.h
	include/alibabacloud/cdrs/model/ListPersonTagResult.h
	include/alibabacloud/cdrs/model/ListPersonTopRequest.h
	include/alibabacloud/cdrs/model/ListPersonTopResult.h
	include/alibabacloud/cdrs/model/ListPersonTrackRequest.h
	include/alibabacloud/cdrs/model/ListPersonTrackResult.h
	include/alibabacloud/cdrs/model/ListRangeDeviceRequest.h
	include/alibabacloud/cdrs/model/ListRangeDeviceResult.h
	include/alibabacloud/cdrs/model/ListStorageStatisticsRequest.h
	include/alibabacloud/cdrs/model/ListStorageStatisticsResult.h
	include/alibabacloud/cdrs/model/ListStructureStatisticsRequest.h
	include/alibabacloud/cdrs/model/ListStructureStatisticsResult.h
	include/alibabacloud/cdrs/model/ListTagMetricsRequest.h
	include/alibabacloud/cdrs/model/ListTagMetricsResult.h
	include/alibabacloud/cdrs/model/ListVehicleDetailsRequest.h
	include/alibabacloud/cdrs/model/ListVehicleDetailsResult.h
	include/alibabacloud/cdrs/model/ListVehicleResultsRequest.h
	include/alibabacloud/cdrs/model/ListVehicleResultsResult.h
	include/alibabacloud/cdrs/model/ListVehicleTagDistributeRequest.h
	include/alibabacloud/cdrs/model/ListVehicleTagDistributeResult.h
	include/alibabacloud/cdrs/model/ListVehicleTopRequest.h
	include/alibabacloud/cdrs/model/ListVehicleTopResult.h
	include/alibabacloud/cdrs/model/ListVehicleTrackRequest.h
	include/alibabacloud/cdrs/model/ListVehicleTrackResult.h
	include/alibabacloud/cdrs/model/PaginateDeviceRequest.h
	include/alibabacloud/cdrs/model/PaginateDeviceResult.h
	include/alibabacloud/cdrs/model/PaginateProjectRequest.h
	include/alibabacloud/cdrs/model/PaginateProjectResult.h
	include/alibabacloud/cdrs/model/RecognizeImageRequest.h
	include/alibabacloud/cdrs/model/RecognizeImageResult.h
	include/alibabacloud/cdrs/model/SearchAggregateObjectRequest.h
	include/alibabacloud/cdrs/model/SearchAggregateObjectResult.h
	include/alibabacloud/cdrs/model/SearchObjectRequest.h
	include/alibabacloud/cdrs/model/SearchObjectResult.h
	include/alibabacloud/cdrs/model/StopCdrsMonitorRequest.h
	include/alibabacloud/cdrs/model/StopCdrsMonitorResult.h
	include/alibabacloud/cdrs/model/StopMonitorRequest.h
	include/alibabacloud/cdrs/model/StopMonitorResult.h
	include/alibabacloud/cdrs/model/UnbindDeviceRequest.h
	include/alibabacloud/cdrs/model/UnbindDeviceResult.h
	include/alibabacloud/cdrs/model/UpdateCdrsMonitorRequest.h
	include/alibabacloud/cdrs/model/UpdateCdrsMonitorResult.h
	include/alibabacloud/cdrs/model/UpdateMonitorRequest.h
	include/alibabacloud/cdrs/model/UpdateMonitorResult.h
	include/alibabacloud/cdrs/model/UpdateProjectRequest.h
	include/alibabacloud/cdrs/model/UpdateProjectResult.h )

set(cdrs_src 
	src/CDRSClient.cc
	src/model/AddCdrsMonitorRequest.cc
	src/model/AddCdrsMonitorResult.cc
	src/model/AddMonitorRequest.cc
	src/model/AddMonitorResult.cc
	src/model/BindDeviceRequest.cc
	src/model/BindDeviceResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/GetCdrsMonitorListRequest.cc
	src/model/GetCdrsMonitorListResult.cc
	src/model/GetCdrsMonitorResultRequest.cc
	src/model/GetCdrsMonitorResultResult.cc
	src/model/GetMonitorListRequest.cc
	src/model/GetMonitorListResult.cc
	src/model/GetMonitorResultRequest.cc
	src/model/GetMonitorResultResult.cc
	src/model/ListAreaHotSpotMetricsRequest.cc
	src/model/ListAreaHotSpotMetricsResult.cc
	src/model/ListCityMapAoisRequest.cc
	src/model/ListCityMapAoisResult.cc
	src/model/ListCityMapCameraResultsRequest.cc
	src/model/ListCityMapCameraResultsResult.cc
	src/model/ListCityMapCameraStatisticsRequest.cc
	src/model/ListCityMapCameraStatisticsResult.cc
	src/model/ListCityMapImageDetailsRequest.cc
	src/model/ListCityMapImageDetailsResult.cc
	src/model/ListCityMapPersonFlowRequest.cc
	src/model/ListCityMapPersonFlowResult.cc
	src/model/ListCityMapRangeStatisticRequest.cc
	src/model/ListCityMapRangeStatisticResult.cc
	src/model/ListCorpMetricsStatisticRequest.cc
	src/model/ListCorpMetricsStatisticResult.cc
	src/model/ListDataStatisticsRequest.cc
	src/model/ListDataStatisticsResult.cc
	src/model/ListDataStatisticsByDayRequest.cc
	src/model/ListDataStatisticsByDayResult.cc
	src/model/ListDeviceDetailRequest.cc
	src/model/ListDeviceDetailResult.cc
	src/model/ListDeviceGenderStatisticsRequest.cc
	src/model/ListDeviceGenderStatisticsResult.cc
	src/model/ListDevicePersonRequest.cc
	src/model/ListDevicePersonResult.cc
	src/model/ListDevicePersonStatisticsRequest.cc
	src/model/ListDevicePersonStatisticsResult.cc
	src/model/ListDeviceRelationRequest.cc
	src/model/ListDeviceRelationResult.cc
	src/model/ListMapRouteDetailsRequest.cc
	src/model/ListMapRouteDetailsResult.cc
	src/model/ListPersonDetailsRequest.cc
	src/model/ListPersonDetailsResult.cc
	src/model/ListPersonResultRequest.cc
	src/model/ListPersonResultResult.cc
	src/model/ListPersonTagRequest.cc
	src/model/ListPersonTagResult.cc
	src/model/ListPersonTopRequest.cc
	src/model/ListPersonTopResult.cc
	src/model/ListPersonTrackRequest.cc
	src/model/ListPersonTrackResult.cc
	src/model/ListRangeDeviceRequest.cc
	src/model/ListRangeDeviceResult.cc
	src/model/ListStorageStatisticsRequest.cc
	src/model/ListStorageStatisticsResult.cc
	src/model/ListStructureStatisticsRequest.cc
	src/model/ListStructureStatisticsResult.cc
	src/model/ListTagMetricsRequest.cc
	src/model/ListTagMetricsResult.cc
	src/model/ListVehicleDetailsRequest.cc
	src/model/ListVehicleDetailsResult.cc
	src/model/ListVehicleResultsRequest.cc
	src/model/ListVehicleResultsResult.cc
	src/model/ListVehicleTagDistributeRequest.cc
	src/model/ListVehicleTagDistributeResult.cc
	src/model/ListVehicleTopRequest.cc
	src/model/ListVehicleTopResult.cc
	src/model/ListVehicleTrackRequest.cc
	src/model/ListVehicleTrackResult.cc
	src/model/PaginateDeviceRequest.cc
	src/model/PaginateDeviceResult.cc
	src/model/PaginateProjectRequest.cc
	src/model/PaginateProjectResult.cc
	src/model/RecognizeImageRequest.cc
	src/model/RecognizeImageResult.cc
	src/model/SearchAggregateObjectRequest.cc
	src/model/SearchAggregateObjectResult.cc
	src/model/SearchObjectRequest.cc
	src/model/SearchObjectResult.cc
	src/model/StopCdrsMonitorRequest.cc
	src/model/StopCdrsMonitorResult.cc
	src/model/StopMonitorRequest.cc
	src/model/StopMonitorResult.cc
	src/model/UnbindDeviceRequest.cc
	src/model/UnbindDeviceResult.cc
	src/model/UpdateCdrsMonitorRequest.cc
	src/model/UpdateCdrsMonitorResult.cc
	src/model/UpdateMonitorRequest.cc
	src/model/UpdateMonitorResult.cc
	src/model/UpdateProjectRequest.cc
	src/model/UpdateProjectResult.cc )

add_library(cdrs ${LIB_TYPE}
	${cdrs_public_header}
	${cdrs_public_header_model}
	${cdrs_src})

set_target_properties(cdrs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdrs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cdrs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CDRS_LIBRARY)
endif()

target_include_directories(cdrs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cdrs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cdrs
		jsoncpp)
	target_include_directories(cdrs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cdrs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cdrs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cdrs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cdrs
		jsoncpp)
endif()

install(FILES ${cdrs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cdrs)
install(FILES ${cdrs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cdrs/model)
install(TARGETS cdrs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)