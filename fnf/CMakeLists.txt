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

set(fnf_public_header 
	include/alibabacloud/fnf/FnfClient.h
	include/alibabacloud/fnf/FnfExport.h )

set(fnf_public_header_model 
	include/alibabacloud/fnf/model/CreateFlowRequest.h
	include/alibabacloud/fnf/model/CreateFlowResult.h
	include/alibabacloud/fnf/model/CreateScheduleRequest.h
	include/alibabacloud/fnf/model/CreateScheduleResult.h
	include/alibabacloud/fnf/model/DeleteFlowRequest.h
	include/alibabacloud/fnf/model/DeleteFlowResult.h
	include/alibabacloud/fnf/model/DeleteScheduleRequest.h
	include/alibabacloud/fnf/model/DeleteScheduleResult.h
	include/alibabacloud/fnf/model/DescribeExecutionRequest.h
	include/alibabacloud/fnf/model/DescribeExecutionResult.h
	include/alibabacloud/fnf/model/DescribeFlowRequest.h
	include/alibabacloud/fnf/model/DescribeFlowResult.h
	include/alibabacloud/fnf/model/DescribeScheduleRequest.h
	include/alibabacloud/fnf/model/DescribeScheduleResult.h
	include/alibabacloud/fnf/model/GetExecutionHistoryRequest.h
	include/alibabacloud/fnf/model/GetExecutionHistoryResult.h
	include/alibabacloud/fnf/model/ListExecutionsRequest.h
	include/alibabacloud/fnf/model/ListExecutionsResult.h
	include/alibabacloud/fnf/model/ListFlowsRequest.h
	include/alibabacloud/fnf/model/ListFlowsResult.h
	include/alibabacloud/fnf/model/ListSchedulesRequest.h
	include/alibabacloud/fnf/model/ListSchedulesResult.h
	include/alibabacloud/fnf/model/ReportTaskFailedRequest.h
	include/alibabacloud/fnf/model/ReportTaskFailedResult.h
	include/alibabacloud/fnf/model/ReportTaskSucceededRequest.h
	include/alibabacloud/fnf/model/ReportTaskSucceededResult.h
	include/alibabacloud/fnf/model/StartExecutionRequest.h
	include/alibabacloud/fnf/model/StartExecutionResult.h
	include/alibabacloud/fnf/model/StartSyncExecutionRequest.h
	include/alibabacloud/fnf/model/StartSyncExecutionResult.h
	include/alibabacloud/fnf/model/StopExecutionRequest.h
	include/alibabacloud/fnf/model/StopExecutionResult.h
	include/alibabacloud/fnf/model/UpdateFlowRequest.h
	include/alibabacloud/fnf/model/UpdateFlowResult.h
	include/alibabacloud/fnf/model/UpdateScheduleRequest.h
	include/alibabacloud/fnf/model/UpdateScheduleResult.h )

set(fnf_src 
	src/FnfClient.cc
	src/model/CreateFlowRequest.cc
	src/model/CreateFlowResult.cc
	src/model/CreateScheduleRequest.cc
	src/model/CreateScheduleResult.cc
	src/model/DeleteFlowRequest.cc
	src/model/DeleteFlowResult.cc
	src/model/DeleteScheduleRequest.cc
	src/model/DeleteScheduleResult.cc
	src/model/DescribeExecutionRequest.cc
	src/model/DescribeExecutionResult.cc
	src/model/DescribeFlowRequest.cc
	src/model/DescribeFlowResult.cc
	src/model/DescribeScheduleRequest.cc
	src/model/DescribeScheduleResult.cc
	src/model/GetExecutionHistoryRequest.cc
	src/model/GetExecutionHistoryResult.cc
	src/model/ListExecutionsRequest.cc
	src/model/ListExecutionsResult.cc
	src/model/ListFlowsRequest.cc
	src/model/ListFlowsResult.cc
	src/model/ListSchedulesRequest.cc
	src/model/ListSchedulesResult.cc
	src/model/ReportTaskFailedRequest.cc
	src/model/ReportTaskFailedResult.cc
	src/model/ReportTaskSucceededRequest.cc
	src/model/ReportTaskSucceededResult.cc
	src/model/StartExecutionRequest.cc
	src/model/StartExecutionResult.cc
	src/model/StartSyncExecutionRequest.cc
	src/model/StartSyncExecutionResult.cc
	src/model/StopExecutionRequest.cc
	src/model/StopExecutionResult.cc
	src/model/UpdateFlowRequest.cc
	src/model/UpdateFlowResult.cc
	src/model/UpdateScheduleRequest.cc
	src/model/UpdateScheduleResult.cc )

add_library(fnf ${LIB_TYPE}
	${fnf_public_header}
	${fnf_public_header_model}
	${fnf_src})

set_target_properties(fnf
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}fnf
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(fnf
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_FNF_LIBRARY)
endif()

target_include_directories(fnf
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(fnf
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(fnf
		jsoncpp)
	target_include_directories(fnf
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(fnf
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(fnf
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(fnf
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(fnf
		jsoncpp)
endif()

install(FILES ${fnf_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/fnf)
install(FILES ${fnf_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/fnf/model)
install(TARGETS fnf
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)