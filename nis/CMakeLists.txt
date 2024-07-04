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

set(nis_public_header 
	include/alibabacloud/nis/NisClient.h
	include/alibabacloud/nis/NisExport.h )

set(nis_public_header_model 
	include/alibabacloud/nis/model/CreateAndAnalyzeNetworkPathRequest.h
	include/alibabacloud/nis/model/CreateAndAnalyzeNetworkPathResult.h
	include/alibabacloud/nis/model/CreateNetworkPathRequest.h
	include/alibabacloud/nis/model/CreateNetworkPathResult.h
	include/alibabacloud/nis/model/CreateNetworkReachableAnalysisRequest.h
	include/alibabacloud/nis/model/CreateNetworkReachableAnalysisResult.h
	include/alibabacloud/nis/model/DeleteNetworkPathRequest.h
	include/alibabacloud/nis/model/DeleteNetworkPathResult.h
	include/alibabacloud/nis/model/DeleteNetworkReachableAnalysisRequest.h
	include/alibabacloud/nis/model/DeleteNetworkReachableAnalysisResult.h
	include/alibabacloud/nis/model/GetInternetTupleRequest.h
	include/alibabacloud/nis/model/GetInternetTupleResult.h
	include/alibabacloud/nis/model/GetNatTopNRequest.h
	include/alibabacloud/nis/model/GetNatTopNResult.h
	include/alibabacloud/nis/model/GetNetworkReachableAnalysisRequest.h
	include/alibabacloud/nis/model/GetNetworkReachableAnalysisResult.h
	include/alibabacloud/nis/model/GetNisNetworkMetricsRequest.h
	include/alibabacloud/nis/model/GetNisNetworkMetricsResult.h
	include/alibabacloud/nis/model/GetNisNetworkRankingRequest.h
	include/alibabacloud/nis/model/GetNisNetworkRankingResult.h
	include/alibabacloud/nis/model/GetTransitRouterFlowTopNRequest.h
	include/alibabacloud/nis/model/GetTransitRouterFlowTopNResult.h
	include/alibabacloud/nis/model/GetVbrFlowTopNRequest.h
	include/alibabacloud/nis/model/GetVbrFlowTopNResult.h )

set(nis_src 
	src/NisClient.cc
	src/model/CreateAndAnalyzeNetworkPathRequest.cc
	src/model/CreateAndAnalyzeNetworkPathResult.cc
	src/model/CreateNetworkPathRequest.cc
	src/model/CreateNetworkPathResult.cc
	src/model/CreateNetworkReachableAnalysisRequest.cc
	src/model/CreateNetworkReachableAnalysisResult.cc
	src/model/DeleteNetworkPathRequest.cc
	src/model/DeleteNetworkPathResult.cc
	src/model/DeleteNetworkReachableAnalysisRequest.cc
	src/model/DeleteNetworkReachableAnalysisResult.cc
	src/model/GetInternetTupleRequest.cc
	src/model/GetInternetTupleResult.cc
	src/model/GetNatTopNRequest.cc
	src/model/GetNatTopNResult.cc
	src/model/GetNetworkReachableAnalysisRequest.cc
	src/model/GetNetworkReachableAnalysisResult.cc
	src/model/GetNisNetworkMetricsRequest.cc
	src/model/GetNisNetworkMetricsResult.cc
	src/model/GetNisNetworkRankingRequest.cc
	src/model/GetNisNetworkRankingResult.cc
	src/model/GetTransitRouterFlowTopNRequest.cc
	src/model/GetTransitRouterFlowTopNResult.cc
	src/model/GetVbrFlowTopNRequest.cc
	src/model/GetVbrFlowTopNResult.cc )

add_library(nis ${LIB_TYPE}
	${nis_public_header}
	${nis_public_header_model}
	${nis_src})

set_target_properties(nis
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}nis
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(nis
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_NIS_LIBRARY)
endif()

target_include_directories(nis
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(nis
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(nis
		jsoncpp)
	target_include_directories(nis
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(nis
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(nis
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(nis
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(nis
		jsoncpp)
endif()

install(FILES ${nis_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/nis)
install(FILES ${nis_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/nis/model)
install(TARGETS nis
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)