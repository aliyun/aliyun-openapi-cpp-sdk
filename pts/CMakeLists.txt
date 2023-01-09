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

set(pts_public_header 
	include/alibabacloud/pts/PTSClient.h
	include/alibabacloud/pts/PTSExport.h )

set(pts_public_header_model 
	include/alibabacloud/pts/model/AdjustJMeterSceneSpeedRequest.h
	include/alibabacloud/pts/model/AdjustJMeterSceneSpeedResult.h
	include/alibabacloud/pts/model/CreatePtsSceneRequest.h
	include/alibabacloud/pts/model/CreatePtsSceneResult.h
	include/alibabacloud/pts/model/CreatePtsSceneBaseLineFromReportRequest.h
	include/alibabacloud/pts/model/CreatePtsSceneBaseLineFromReportResult.h
	include/alibabacloud/pts/model/DeletePtsSceneRequest.h
	include/alibabacloud/pts/model/DeletePtsSceneResult.h
	include/alibabacloud/pts/model/DeletePtsSceneBaseLineRequest.h
	include/alibabacloud/pts/model/DeletePtsSceneBaseLineResult.h
	include/alibabacloud/pts/model/DeletePtsScenesRequest.h
	include/alibabacloud/pts/model/DeletePtsScenesResult.h
	include/alibabacloud/pts/model/GetAllRegionsRequest.h
	include/alibabacloud/pts/model/GetAllRegionsResult.h
	include/alibabacloud/pts/model/GetJMeterLogsRequest.h
	include/alibabacloud/pts/model/GetJMeterLogsResult.h
	include/alibabacloud/pts/model/GetJMeterSampleMetricsRequest.h
	include/alibabacloud/pts/model/GetJMeterSampleMetricsResult.h
	include/alibabacloud/pts/model/GetJMeterSamplingLogsRequest.h
	include/alibabacloud/pts/model/GetJMeterSamplingLogsResult.h
	include/alibabacloud/pts/model/GetJMeterSceneRunningDataRequest.h
	include/alibabacloud/pts/model/GetJMeterSceneRunningDataResult.h
	include/alibabacloud/pts/model/GetOpenJMeterSceneRequest.h
	include/alibabacloud/pts/model/GetOpenJMeterSceneResult.h
	include/alibabacloud/pts/model/GetPtsReportDetailsRequest.h
	include/alibabacloud/pts/model/GetPtsReportDetailsResult.h
	include/alibabacloud/pts/model/GetPtsReportsBySceneIdRequest.h
	include/alibabacloud/pts/model/GetPtsReportsBySceneIdResult.h
	include/alibabacloud/pts/model/GetPtsSceneRequest.h
	include/alibabacloud/pts/model/GetPtsSceneResult.h
	include/alibabacloud/pts/model/GetPtsSceneBaseLineRequest.h
	include/alibabacloud/pts/model/GetPtsSceneBaseLineResult.h
	include/alibabacloud/pts/model/GetPtsSceneRunningDataRequest.h
	include/alibabacloud/pts/model/GetPtsSceneRunningDataResult.h
	include/alibabacloud/pts/model/GetPtsSceneRunningStatusRequest.h
	include/alibabacloud/pts/model/GetPtsSceneRunningStatusResult.h
	include/alibabacloud/pts/model/GetUserVpcSecurityGroupRequest.h
	include/alibabacloud/pts/model/GetUserVpcSecurityGroupResult.h
	include/alibabacloud/pts/model/GetUserVpcVSwitchRequest.h
	include/alibabacloud/pts/model/GetUserVpcVSwitchResult.h
	include/alibabacloud/pts/model/GetUserVpcsRequest.h
	include/alibabacloud/pts/model/GetUserVpcsResult.h
	include/alibabacloud/pts/model/ListEnvsRequest.h
	include/alibabacloud/pts/model/ListEnvsResult.h
	include/alibabacloud/pts/model/ListJMeterReportsRequest.h
	include/alibabacloud/pts/model/ListJMeterReportsResult.h
	include/alibabacloud/pts/model/ListOpenJMeterScenesRequest.h
	include/alibabacloud/pts/model/ListOpenJMeterScenesResult.h
	include/alibabacloud/pts/model/ListPtsSceneRequest.h
	include/alibabacloud/pts/model/ListPtsSceneResult.h
	include/alibabacloud/pts/model/ModifyPtsSceneRequest.h
	include/alibabacloud/pts/model/ModifyPtsSceneResult.h
	include/alibabacloud/pts/model/RemoveEnvRequest.h
	include/alibabacloud/pts/model/RemoveEnvResult.h
	include/alibabacloud/pts/model/RemoveOpenJMeterSceneRequest.h
	include/alibabacloud/pts/model/RemoveOpenJMeterSceneResult.h
	include/alibabacloud/pts/model/SaveEnvRequest.h
	include/alibabacloud/pts/model/SaveEnvResult.h
	include/alibabacloud/pts/model/SaveOpenJMeterSceneRequest.h
	include/alibabacloud/pts/model/SaveOpenJMeterSceneResult.h
	include/alibabacloud/pts/model/SavePtsSceneRequest.h
	include/alibabacloud/pts/model/SavePtsSceneResult.h
	include/alibabacloud/pts/model/StartDebugPtsSceneRequest.h
	include/alibabacloud/pts/model/StartDebugPtsSceneResult.h
	include/alibabacloud/pts/model/StartDebuggingJMeterSceneRequest.h
	include/alibabacloud/pts/model/StartDebuggingJMeterSceneResult.h
	include/alibabacloud/pts/model/StartPtsSceneRequest.h
	include/alibabacloud/pts/model/StartPtsSceneResult.h
	include/alibabacloud/pts/model/StartTestingJMeterSceneRequest.h
	include/alibabacloud/pts/model/StartTestingJMeterSceneResult.h
	include/alibabacloud/pts/model/StopDebugPtsSceneRequest.h
	include/alibabacloud/pts/model/StopDebugPtsSceneResult.h
	include/alibabacloud/pts/model/StopDebuggingJMeterSceneRequest.h
	include/alibabacloud/pts/model/StopDebuggingJMeterSceneResult.h
	include/alibabacloud/pts/model/StopPtsSceneRequest.h
	include/alibabacloud/pts/model/StopPtsSceneResult.h
	include/alibabacloud/pts/model/StopTestingJMeterSceneRequest.h
	include/alibabacloud/pts/model/StopTestingJMeterSceneResult.h
	include/alibabacloud/pts/model/UpdatePtsSceneBaseLineRequest.h
	include/alibabacloud/pts/model/UpdatePtsSceneBaseLineResult.h )

set(pts_src 
	src/PTSClient.cc
	src/model/AdjustJMeterSceneSpeedRequest.cc
	src/model/AdjustJMeterSceneSpeedResult.cc
	src/model/CreatePtsSceneRequest.cc
	src/model/CreatePtsSceneResult.cc
	src/model/CreatePtsSceneBaseLineFromReportRequest.cc
	src/model/CreatePtsSceneBaseLineFromReportResult.cc
	src/model/DeletePtsSceneRequest.cc
	src/model/DeletePtsSceneResult.cc
	src/model/DeletePtsSceneBaseLineRequest.cc
	src/model/DeletePtsSceneBaseLineResult.cc
	src/model/DeletePtsScenesRequest.cc
	src/model/DeletePtsScenesResult.cc
	src/model/GetAllRegionsRequest.cc
	src/model/GetAllRegionsResult.cc
	src/model/GetJMeterLogsRequest.cc
	src/model/GetJMeterLogsResult.cc
	src/model/GetJMeterSampleMetricsRequest.cc
	src/model/GetJMeterSampleMetricsResult.cc
	src/model/GetJMeterSamplingLogsRequest.cc
	src/model/GetJMeterSamplingLogsResult.cc
	src/model/GetJMeterSceneRunningDataRequest.cc
	src/model/GetJMeterSceneRunningDataResult.cc
	src/model/GetOpenJMeterSceneRequest.cc
	src/model/GetOpenJMeterSceneResult.cc
	src/model/GetPtsReportDetailsRequest.cc
	src/model/GetPtsReportDetailsResult.cc
	src/model/GetPtsReportsBySceneIdRequest.cc
	src/model/GetPtsReportsBySceneIdResult.cc
	src/model/GetPtsSceneRequest.cc
	src/model/GetPtsSceneResult.cc
	src/model/GetPtsSceneBaseLineRequest.cc
	src/model/GetPtsSceneBaseLineResult.cc
	src/model/GetPtsSceneRunningDataRequest.cc
	src/model/GetPtsSceneRunningDataResult.cc
	src/model/GetPtsSceneRunningStatusRequest.cc
	src/model/GetPtsSceneRunningStatusResult.cc
	src/model/GetUserVpcSecurityGroupRequest.cc
	src/model/GetUserVpcSecurityGroupResult.cc
	src/model/GetUserVpcVSwitchRequest.cc
	src/model/GetUserVpcVSwitchResult.cc
	src/model/GetUserVpcsRequest.cc
	src/model/GetUserVpcsResult.cc
	src/model/ListEnvsRequest.cc
	src/model/ListEnvsResult.cc
	src/model/ListJMeterReportsRequest.cc
	src/model/ListJMeterReportsResult.cc
	src/model/ListOpenJMeterScenesRequest.cc
	src/model/ListOpenJMeterScenesResult.cc
	src/model/ListPtsSceneRequest.cc
	src/model/ListPtsSceneResult.cc
	src/model/ModifyPtsSceneRequest.cc
	src/model/ModifyPtsSceneResult.cc
	src/model/RemoveEnvRequest.cc
	src/model/RemoveEnvResult.cc
	src/model/RemoveOpenJMeterSceneRequest.cc
	src/model/RemoveOpenJMeterSceneResult.cc
	src/model/SaveEnvRequest.cc
	src/model/SaveEnvResult.cc
	src/model/SaveOpenJMeterSceneRequest.cc
	src/model/SaveOpenJMeterSceneResult.cc
	src/model/SavePtsSceneRequest.cc
	src/model/SavePtsSceneResult.cc
	src/model/StartDebugPtsSceneRequest.cc
	src/model/StartDebugPtsSceneResult.cc
	src/model/StartDebuggingJMeterSceneRequest.cc
	src/model/StartDebuggingJMeterSceneResult.cc
	src/model/StartPtsSceneRequest.cc
	src/model/StartPtsSceneResult.cc
	src/model/StartTestingJMeterSceneRequest.cc
	src/model/StartTestingJMeterSceneResult.cc
	src/model/StopDebugPtsSceneRequest.cc
	src/model/StopDebugPtsSceneResult.cc
	src/model/StopDebuggingJMeterSceneRequest.cc
	src/model/StopDebuggingJMeterSceneResult.cc
	src/model/StopPtsSceneRequest.cc
	src/model/StopPtsSceneResult.cc
	src/model/StopTestingJMeterSceneRequest.cc
	src/model/StopTestingJMeterSceneResult.cc
	src/model/UpdatePtsSceneBaseLineRequest.cc
	src/model/UpdatePtsSceneBaseLineResult.cc )

add_library(pts ${LIB_TYPE}
	${pts_public_header}
	${pts_public_header_model}
	${pts_src})

set_target_properties(pts
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}pts
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(pts
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_PTS_LIBRARY)
endif()

target_include_directories(pts
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(pts
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(pts
		jsoncpp)
	target_include_directories(pts
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(pts
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(pts
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(pts
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(pts
		jsoncpp)
endif()

install(FILES ${pts_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/pts)
install(FILES ${pts_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/pts/model)
install(TARGETS pts
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)