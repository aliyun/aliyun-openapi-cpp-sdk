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

set(teambition-aliyun_public_header 
	include/alibabacloud/teambition-aliyun/Teambition_aliyunClient.h
	include/alibabacloud/teambition-aliyun/Teambition_aliyunExport.h )

set(teambition-aliyun_public_header_model 
	include/alibabacloud/teambition-aliyun/model/AddProjectMembersRequest.h
	include/alibabacloud/teambition-aliyun/model/AddProjectMembersResult.h
	include/alibabacloud/teambition-aliyun/model/ApplySmallMicroRequest.h
	include/alibabacloud/teambition-aliyun/model/ApplySmallMicroResult.h
	include/alibabacloud/teambition-aliyun/model/BactchInsertMembersRequest.h
	include/alibabacloud/teambition-aliyun/model/BactchInsertMembersResult.h
	include/alibabacloud/teambition-aliyun/model/CheckAliyunUserExistsRequest.h
	include/alibabacloud/teambition-aliyun/model/CheckAliyunUserExistsResult.h
	include/alibabacloud/teambition-aliyun/model/CreateDevopsOrgRequest.h
	include/alibabacloud/teambition-aliyun/model/CreateDevopsOrgResult.h
	include/alibabacloud/teambition-aliyun/model/CreateProjectRequest.h
	include/alibabacloud/teambition-aliyun/model/CreateProjectResult.h
	include/alibabacloud/teambition-aliyun/model/CreateProjectSprintRequest.h
	include/alibabacloud/teambition-aliyun/model/CreateProjectSprintResult.h
	include/alibabacloud/teambition-aliyun/model/CreateProjectTaskRequest.h
	include/alibabacloud/teambition-aliyun/model/CreateProjectTaskResult.h
	include/alibabacloud/teambition-aliyun/model/DeleteMembersForOrgRequest.h
	include/alibabacloud/teambition-aliyun/model/DeleteMembersForOrgResult.h
	include/alibabacloud/teambition-aliyun/model/DeleteProjectRequest.h
	include/alibabacloud/teambition-aliyun/model/DeleteProjectResult.h
	include/alibabacloud/teambition-aliyun/model/DeleteProjectMembersRequest.h
	include/alibabacloud/teambition-aliyun/model/DeleteProjectMembersResult.h
	include/alibabacloud/teambition-aliyun/model/DeleteProjectSprintRequest.h
	include/alibabacloud/teambition-aliyun/model/DeleteProjectSprintResult.h
	include/alibabacloud/teambition-aliyun/model/DeleteProjectTaskRequest.h
	include/alibabacloud/teambition-aliyun/model/DeleteProjectTaskResult.h
	include/alibabacloud/teambition-aliyun/model/GetOrganizationMembersRequest.h
	include/alibabacloud/teambition-aliyun/model/GetOrganizationMembersResult.h
	include/alibabacloud/teambition-aliyun/model/GetProjectInfoRequest.h
	include/alibabacloud/teambition-aliyun/model/GetProjectInfoResult.h
	include/alibabacloud/teambition-aliyun/model/GetProjectMembersRequest.h
	include/alibabacloud/teambition-aliyun/model/GetProjectMembersResult.h
	include/alibabacloud/teambition-aliyun/model/GetProjectSprintInfoRequest.h
	include/alibabacloud/teambition-aliyun/model/GetProjectSprintInfoResult.h
	include/alibabacloud/teambition-aliyun/model/GetProjectTaskInfoRequest.h
	include/alibabacloud/teambition-aliyun/model/GetProjectTaskInfoResult.h
	include/alibabacloud/teambition-aliyun/model/GetUserByUidRequest.h
	include/alibabacloud/teambition-aliyun/model/GetUserByUidResult.h
	include/alibabacloud/teambition-aliyun/model/InsertDevopsMemberRequest.h
	include/alibabacloud/teambition-aliyun/model/InsertDevopsMemberResult.h
	include/alibabacloud/teambition-aliyun/model/ListProjectSprintsRequest.h
	include/alibabacloud/teambition-aliyun/model/ListProjectSprintsResult.h
	include/alibabacloud/teambition-aliyun/model/ListProjectTaskFlowRequest.h
	include/alibabacloud/teambition-aliyun/model/ListProjectTaskFlowResult.h
	include/alibabacloud/teambition-aliyun/model/ListProjectTaskFlowStatusRequest.h
	include/alibabacloud/teambition-aliyun/model/ListProjectTaskFlowStatusResult.h
	include/alibabacloud/teambition-aliyun/model/ListProjectTasksRequest.h
	include/alibabacloud/teambition-aliyun/model/ListProjectTasksResult.h
	include/alibabacloud/teambition-aliyun/model/ListScenarioFieldConfigRequest.h
	include/alibabacloud/teambition-aliyun/model/ListScenarioFieldConfigResult.h
	include/alibabacloud/teambition-aliyun/model/UpdateProjectRequest.h
	include/alibabacloud/teambition-aliyun/model/UpdateProjectResult.h
	include/alibabacloud/teambition-aliyun/model/UpdateProjectSprintRequest.h
	include/alibabacloud/teambition-aliyun/model/UpdateProjectSprintResult.h
	include/alibabacloud/teambition-aliyun/model/UpdateProjectTaskRequest.h
	include/alibabacloud/teambition-aliyun/model/UpdateProjectTaskResult.h )

set(teambition-aliyun_src 
	src/Teambition-aliyunClient.cc
	src/model/AddProjectMembersRequest.cc
	src/model/AddProjectMembersResult.cc
	src/model/ApplySmallMicroRequest.cc
	src/model/ApplySmallMicroResult.cc
	src/model/BactchInsertMembersRequest.cc
	src/model/BactchInsertMembersResult.cc
	src/model/CheckAliyunUserExistsRequest.cc
	src/model/CheckAliyunUserExistsResult.cc
	src/model/CreateDevopsOrgRequest.cc
	src/model/CreateDevopsOrgResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/CreateProjectSprintRequest.cc
	src/model/CreateProjectSprintResult.cc
	src/model/CreateProjectTaskRequest.cc
	src/model/CreateProjectTaskResult.cc
	src/model/DeleteMembersForOrgRequest.cc
	src/model/DeleteMembersForOrgResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/DeleteProjectMembersRequest.cc
	src/model/DeleteProjectMembersResult.cc
	src/model/DeleteProjectSprintRequest.cc
	src/model/DeleteProjectSprintResult.cc
	src/model/DeleteProjectTaskRequest.cc
	src/model/DeleteProjectTaskResult.cc
	src/model/GetOrganizationMembersRequest.cc
	src/model/GetOrganizationMembersResult.cc
	src/model/GetProjectInfoRequest.cc
	src/model/GetProjectInfoResult.cc
	src/model/GetProjectMembersRequest.cc
	src/model/GetProjectMembersResult.cc
	src/model/GetProjectSprintInfoRequest.cc
	src/model/GetProjectSprintInfoResult.cc
	src/model/GetProjectTaskInfoRequest.cc
	src/model/GetProjectTaskInfoResult.cc
	src/model/GetUserByUidRequest.cc
	src/model/GetUserByUidResult.cc
	src/model/InsertDevopsMemberRequest.cc
	src/model/InsertDevopsMemberResult.cc
	src/model/ListProjectSprintsRequest.cc
	src/model/ListProjectSprintsResult.cc
	src/model/ListProjectTaskFlowRequest.cc
	src/model/ListProjectTaskFlowResult.cc
	src/model/ListProjectTaskFlowStatusRequest.cc
	src/model/ListProjectTaskFlowStatusResult.cc
	src/model/ListProjectTasksRequest.cc
	src/model/ListProjectTasksResult.cc
	src/model/ListScenarioFieldConfigRequest.cc
	src/model/ListScenarioFieldConfigResult.cc
	src/model/UpdateProjectRequest.cc
	src/model/UpdateProjectResult.cc
	src/model/UpdateProjectSprintRequest.cc
	src/model/UpdateProjectSprintResult.cc
	src/model/UpdateProjectTaskRequest.cc
	src/model/UpdateProjectTaskResult.cc )

add_library(teambition-aliyun ${LIB_TYPE}
	${teambition-aliyun_public_header}
	${teambition-aliyun_public_header_model}
	${teambition-aliyun_src})

set_target_properties(teambition-aliyun
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}teambition-aliyun
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(teambition-aliyun
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_TEAMBITION_ALIYUN_LIBRARY)
endif()

target_include_directories(teambition-aliyun
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(teambition-aliyun
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(teambition-aliyun
		jsoncpp)
	target_include_directories(teambition-aliyun
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(teambition-aliyun
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(teambition-aliyun
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(teambition-aliyun
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(teambition-aliyun
		jsoncpp)
endif()

install(FILES ${teambition-aliyun_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/teambition-aliyun)
install(FILES ${teambition-aliyun_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/teambition-aliyun/model)
install(TARGETS teambition-aliyun
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)