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

set(cusanalytic_sc_online_public_header 
	include/alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineClient.h
	include/alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineExport.h )

set(cusanalytic_sc_online_public_header_model 
	include/alibabacloud/cusanalytic_sc_online/model/DescribeActionDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/DescribeActionDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/DescribeHistoryActionDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/DescribeHistoryActionDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/DescribeLocationsRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/DescribeLocationsResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetActionCursorRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetActionCursorResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetAnalyzeCommodityDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetAnalyzeCommodityDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetAnalyzePlaceDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetAnalyzePlaceDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetBaseAgeDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetBaseAgeDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetCameraStatisticRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetCameraStatisticResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetDailyStatisticsDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetDailyStatisticsDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetEMapRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetEMapResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetHeatMapDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetHeatMapDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetHourlyStatisticsDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetHourlyStatisticsDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetImageUrlRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetImageUrlResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetLocationsRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetLocationsResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetMin5StatisticsDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetMin5StatisticsDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetOverviewDataRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetOverviewDataResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetPersonInStore5MinRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetPersonInStore5MinResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetPortrayalRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetPortrayalResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetRoiRankingRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetRoiRankingResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetStayDistributionRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetStayDistributionResult.h
	include/alibabacloud/cusanalytic_sc_online/model/GetSupportStoreRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/GetSupportStoreResult.h
	include/alibabacloud/cusanalytic_sc_online/model/ListVisitorsRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/ListVisitorsResult.h
	include/alibabacloud/cusanalytic_sc_online/model/MemberSynchronousRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/MemberSynchronousResult.h
	include/alibabacloud/cusanalytic_sc_online/model/SearchPersonByImgRequest.h
	include/alibabacloud/cusanalytic_sc_online/model/SearchPersonByImgResult.h )

set(cusanalytic_sc_online_src 
	src/Cusanalytic_sc_onlineClient.cc
	src/model/DescribeActionDataRequest.cc
	src/model/DescribeActionDataResult.cc
	src/model/DescribeHistoryActionDataRequest.cc
	src/model/DescribeHistoryActionDataResult.cc
	src/model/DescribeLocationsRequest.cc
	src/model/DescribeLocationsResult.cc
	src/model/GetActionCursorRequest.cc
	src/model/GetActionCursorResult.cc
	src/model/GetAnalyzeCommodityDataRequest.cc
	src/model/GetAnalyzeCommodityDataResult.cc
	src/model/GetAnalyzePlaceDataRequest.cc
	src/model/GetAnalyzePlaceDataResult.cc
	src/model/GetBaseAgeDataRequest.cc
	src/model/GetBaseAgeDataResult.cc
	src/model/GetCameraStatisticRequest.cc
	src/model/GetCameraStatisticResult.cc
	src/model/GetDailyStatisticsDataRequest.cc
	src/model/GetDailyStatisticsDataResult.cc
	src/model/GetEMapRequest.cc
	src/model/GetEMapResult.cc
	src/model/GetHeatMapDataRequest.cc
	src/model/GetHeatMapDataResult.cc
	src/model/GetHourlyStatisticsDataRequest.cc
	src/model/GetHourlyStatisticsDataResult.cc
	src/model/GetImageUrlRequest.cc
	src/model/GetImageUrlResult.cc
	src/model/GetLocationsRequest.cc
	src/model/GetLocationsResult.cc
	src/model/GetMin5StatisticsDataRequest.cc
	src/model/GetMin5StatisticsDataResult.cc
	src/model/GetOverviewDataRequest.cc
	src/model/GetOverviewDataResult.cc
	src/model/GetPersonInStore5MinRequest.cc
	src/model/GetPersonInStore5MinResult.cc
	src/model/GetPortrayalRequest.cc
	src/model/GetPortrayalResult.cc
	src/model/GetRoiRankingRequest.cc
	src/model/GetRoiRankingResult.cc
	src/model/GetStayDistributionRequest.cc
	src/model/GetStayDistributionResult.cc
	src/model/GetSupportStoreRequest.cc
	src/model/GetSupportStoreResult.cc
	src/model/ListVisitorsRequest.cc
	src/model/ListVisitorsResult.cc
	src/model/MemberSynchronousRequest.cc
	src/model/MemberSynchronousResult.cc
	src/model/SearchPersonByImgRequest.cc
	src/model/SearchPersonByImgResult.cc )

add_library(cusanalytic_sc_online ${LIB_TYPE}
	${cusanalytic_sc_online_public_header}
	${cusanalytic_sc_online_public_header_model}
	${cusanalytic_sc_online_src})

set_target_properties(cusanalytic_sc_online
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cusanalytic_sc_online
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cusanalytic_sc_online
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_LIBRARY)
endif()

target_include_directories(cusanalytic_sc_online
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cusanalytic_sc_online
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cusanalytic_sc_online
		jsoncpp)
	target_include_directories(cusanalytic_sc_online
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cusanalytic_sc_online
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cusanalytic_sc_online
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cusanalytic_sc_online
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cusanalytic_sc_online
		jsoncpp)
endif()

install(FILES ${cusanalytic_sc_online_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cusanalytic_sc_online)
install(FILES ${cusanalytic_sc_online_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cusanalytic_sc_online/model)
install(TARGETS cusanalytic_sc_online
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)