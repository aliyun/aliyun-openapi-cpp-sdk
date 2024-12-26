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

set(schedulerx3_public_header 
	include/alibabacloud/schedulerx3/SchedulerX3Client.h
	include/alibabacloud/schedulerx3/SchedulerX3Export.h )

set(schedulerx3_public_header_model 
	include/alibabacloud/schedulerx3/model/CreateAppRequest.h
	include/alibabacloud/schedulerx3/model/CreateAppResult.h
	include/alibabacloud/schedulerx3/model/CreateClusterRequest.h
	include/alibabacloud/schedulerx3/model/CreateClusterResult.h
	include/alibabacloud/schedulerx3/model/CreateJobRequest.h
	include/alibabacloud/schedulerx3/model/CreateJobResult.h
	include/alibabacloud/schedulerx3/model/DeleteAppRequest.h
	include/alibabacloud/schedulerx3/model/DeleteAppResult.h
	include/alibabacloud/schedulerx3/model/DeleteClusterRequest.h
	include/alibabacloud/schedulerx3/model/DeleteClusterResult.h
	include/alibabacloud/schedulerx3/model/DeleteJobsRequest.h
	include/alibabacloud/schedulerx3/model/DeleteJobsResult.h
	include/alibabacloud/schedulerx3/model/ExportJobsRequest.h
	include/alibabacloud/schedulerx3/model/ExportJobsResult.h
	include/alibabacloud/schedulerx3/model/GetClusterRequest.h
	include/alibabacloud/schedulerx3/model/GetClusterResult.h
	include/alibabacloud/schedulerx3/model/GetDesigateInfoRequest.h
	include/alibabacloud/schedulerx3/model/GetDesigateInfoResult.h
	include/alibabacloud/schedulerx3/model/GetJobExecutionProgressRequest.h
	include/alibabacloud/schedulerx3/model/GetJobExecutionProgressResult.h
	include/alibabacloud/schedulerx3/model/GetLogRequest.h
	include/alibabacloud/schedulerx3/model/GetLogResult.h
	include/alibabacloud/schedulerx3/model/ImportCalendarRequest.h
	include/alibabacloud/schedulerx3/model/ImportCalendarResult.h
	include/alibabacloud/schedulerx3/model/ImportJobsRequest.h
	include/alibabacloud/schedulerx3/model/ImportJobsResult.h
	include/alibabacloud/schedulerx3/model/ListAlarmEventRequest.h
	include/alibabacloud/schedulerx3/model/ListAlarmEventResult.h
	include/alibabacloud/schedulerx3/model/ListAppNamesRequest.h
	include/alibabacloud/schedulerx3/model/ListAppNamesResult.h
	include/alibabacloud/schedulerx3/model/ListAppsRequest.h
	include/alibabacloud/schedulerx3/model/ListAppsResult.h
	include/alibabacloud/schedulerx3/model/ListCalendarNamesRequest.h
	include/alibabacloud/schedulerx3/model/ListCalendarNamesResult.h
	include/alibabacloud/schedulerx3/model/ListClustersRequest.h
	include/alibabacloud/schedulerx3/model/ListClustersResult.h
	include/alibabacloud/schedulerx3/model/ListExecutorsRequest.h
	include/alibabacloud/schedulerx3/model/ListExecutorsResult.h
	include/alibabacloud/schedulerx3/model/ListJobExecutionsRequest.h
	include/alibabacloud/schedulerx3/model/ListJobExecutionsResult.h
	include/alibabacloud/schedulerx3/model/ListJobsRequest.h
	include/alibabacloud/schedulerx3/model/ListJobsResult.h
	include/alibabacloud/schedulerx3/model/ListLablesRequest.h
	include/alibabacloud/schedulerx3/model/ListLablesResult.h
	include/alibabacloud/schedulerx3/model/ListRegionZoneRequest.h
	include/alibabacloud/schedulerx3/model/ListRegionZoneResult.h
	include/alibabacloud/schedulerx3/model/ListRegionsRequest.h
	include/alibabacloud/schedulerx3/model/ListRegionsResult.h
	include/alibabacloud/schedulerx3/model/ListScheduleEventRequest.h
	include/alibabacloud/schedulerx3/model/ListScheduleEventResult.h
	include/alibabacloud/schedulerx3/model/ListScheduleTimesRequest.h
	include/alibabacloud/schedulerx3/model/ListScheduleTimesResult.h
	include/alibabacloud/schedulerx3/model/OperateDesignateExecutorsRequest.h
	include/alibabacloud/schedulerx3/model/OperateDesignateExecutorsResult.h
	include/alibabacloud/schedulerx3/model/OperateDisableJobsRequest.h
	include/alibabacloud/schedulerx3/model/OperateDisableJobsResult.h
	include/alibabacloud/schedulerx3/model/OperateEnableJobsRequest.h
	include/alibabacloud/schedulerx3/model/OperateEnableJobsResult.h
	include/alibabacloud/schedulerx3/model/OperateExecuteJobRequest.h
	include/alibabacloud/schedulerx3/model/OperateExecuteJobResult.h
	include/alibabacloud/schedulerx3/model/OperateRerunJobRequest.h
	include/alibabacloud/schedulerx3/model/OperateRerunJobResult.h
	include/alibabacloud/schedulerx3/model/OperateRetryJobExecutionRequest.h
	include/alibabacloud/schedulerx3/model/OperateRetryJobExecutionResult.h
	include/alibabacloud/schedulerx3/model/OperateStopJobExecutionRequest.h
	include/alibabacloud/schedulerx3/model/OperateStopJobExecutionResult.h
	include/alibabacloud/schedulerx3/model/UpdateAppRequest.h
	include/alibabacloud/schedulerx3/model/UpdateAppResult.h
	include/alibabacloud/schedulerx3/model/UpdateClusterRequest.h
	include/alibabacloud/schedulerx3/model/UpdateClusterResult.h
	include/alibabacloud/schedulerx3/model/UpdateJobRequest.h
	include/alibabacloud/schedulerx3/model/UpdateJobResult.h )

set(schedulerx3_src 
	src/SchedulerX3Client.cc
	src/model/CreateAppRequest.cc
	src/model/CreateAppResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/CreateJobRequest.cc
	src/model/CreateJobResult.cc
	src/model/DeleteAppRequest.cc
	src/model/DeleteAppResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DeleteJobsRequest.cc
	src/model/DeleteJobsResult.cc
	src/model/ExportJobsRequest.cc
	src/model/ExportJobsResult.cc
	src/model/GetClusterRequest.cc
	src/model/GetClusterResult.cc
	src/model/GetDesigateInfoRequest.cc
	src/model/GetDesigateInfoResult.cc
	src/model/GetJobExecutionProgressRequest.cc
	src/model/GetJobExecutionProgressResult.cc
	src/model/GetLogRequest.cc
	src/model/GetLogResult.cc
	src/model/ImportCalendarRequest.cc
	src/model/ImportCalendarResult.cc
	src/model/ImportJobsRequest.cc
	src/model/ImportJobsResult.cc
	src/model/ListAlarmEventRequest.cc
	src/model/ListAlarmEventResult.cc
	src/model/ListAppNamesRequest.cc
	src/model/ListAppNamesResult.cc
	src/model/ListAppsRequest.cc
	src/model/ListAppsResult.cc
	src/model/ListCalendarNamesRequest.cc
	src/model/ListCalendarNamesResult.cc
	src/model/ListClustersRequest.cc
	src/model/ListClustersResult.cc
	src/model/ListExecutorsRequest.cc
	src/model/ListExecutorsResult.cc
	src/model/ListJobExecutionsRequest.cc
	src/model/ListJobExecutionsResult.cc
	src/model/ListJobsRequest.cc
	src/model/ListJobsResult.cc
	src/model/ListLablesRequest.cc
	src/model/ListLablesResult.cc
	src/model/ListRegionZoneRequest.cc
	src/model/ListRegionZoneResult.cc
	src/model/ListRegionsRequest.cc
	src/model/ListRegionsResult.cc
	src/model/ListScheduleEventRequest.cc
	src/model/ListScheduleEventResult.cc
	src/model/ListScheduleTimesRequest.cc
	src/model/ListScheduleTimesResult.cc
	src/model/OperateDesignateExecutorsRequest.cc
	src/model/OperateDesignateExecutorsResult.cc
	src/model/OperateDisableJobsRequest.cc
	src/model/OperateDisableJobsResult.cc
	src/model/OperateEnableJobsRequest.cc
	src/model/OperateEnableJobsResult.cc
	src/model/OperateExecuteJobRequest.cc
	src/model/OperateExecuteJobResult.cc
	src/model/OperateRerunJobRequest.cc
	src/model/OperateRerunJobResult.cc
	src/model/OperateRetryJobExecutionRequest.cc
	src/model/OperateRetryJobExecutionResult.cc
	src/model/OperateStopJobExecutionRequest.cc
	src/model/OperateStopJobExecutionResult.cc
	src/model/UpdateAppRequest.cc
	src/model/UpdateAppResult.cc
	src/model/UpdateClusterRequest.cc
	src/model/UpdateClusterResult.cc
	src/model/UpdateJobRequest.cc
	src/model/UpdateJobResult.cc )

add_library(schedulerx3 ${LIB_TYPE}
	${schedulerx3_public_header}
	${schedulerx3_public_header_model}
	${schedulerx3_src})

set_target_properties(schedulerx3
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}schedulerx3
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(schedulerx3
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SCHEDULERX3_LIBRARY)
endif()

target_include_directories(schedulerx3
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(schedulerx3
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(schedulerx3
		jsoncpp)
	target_include_directories(schedulerx3
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(schedulerx3
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(schedulerx3
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(schedulerx3
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(schedulerx3
		jsoncpp)
endif()

install(FILES ${schedulerx3_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/schedulerx3)
install(FILES ${schedulerx3_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/schedulerx3/model)
install(TARGETS schedulerx3
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)