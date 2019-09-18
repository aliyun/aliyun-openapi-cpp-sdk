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

set(ros_public_header 
	include/alibabacloud/ros/ROSClient.h
	include/alibabacloud/ros/ROSExport.h )

set(ros_public_header_model 
	include/alibabacloud/ros/model/AbandonStackRequest.h
	include/alibabacloud/ros/model/AbandonStackResult.h
	include/alibabacloud/ros/model/CancelUpdateStackRequest.h
	include/alibabacloud/ros/model/CancelUpdateStackResult.h
	include/alibabacloud/ros/model/ContinueCreateStackRequest.h
	include/alibabacloud/ros/model/ContinueCreateStackResult.h
	include/alibabacloud/ros/model/CreateChangeSetRequest.h
	include/alibabacloud/ros/model/CreateChangeSetResult.h
	include/alibabacloud/ros/model/CreateStacksRequest.h
	include/alibabacloud/ros/model/CreateStacksResult.h
	include/alibabacloud/ros/model/DeleteChangeSetRequest.h
	include/alibabacloud/ros/model/DeleteChangeSetResult.h
	include/alibabacloud/ros/model/DeleteStackRequest.h
	include/alibabacloud/ros/model/DeleteStackResult.h
	include/alibabacloud/ros/model/DescribeChangeSetDetailRequest.h
	include/alibabacloud/ros/model/DescribeChangeSetDetailResult.h
	include/alibabacloud/ros/model/DescribeChangeSetsRequest.h
	include/alibabacloud/ros/model/DescribeChangeSetsResult.h
	include/alibabacloud/ros/model/DescribeEventsRequest.h
	include/alibabacloud/ros/model/DescribeEventsResult.h
	include/alibabacloud/ros/model/DescribeRegionsRequest.h
	include/alibabacloud/ros/model/DescribeRegionsResult.h
	include/alibabacloud/ros/model/DescribeResourceDetailRequest.h
	include/alibabacloud/ros/model/DescribeResourceDetailResult.h
	include/alibabacloud/ros/model/DescribeResourceTypeDetailRequest.h
	include/alibabacloud/ros/model/DescribeResourceTypeDetailResult.h
	include/alibabacloud/ros/model/DescribeResourceTypeTemplateRequest.h
	include/alibabacloud/ros/model/DescribeResourceTypeTemplateResult.h
	include/alibabacloud/ros/model/DescribeResourceTypesRequest.h
	include/alibabacloud/ros/model/DescribeResourceTypesResult.h
	include/alibabacloud/ros/model/DescribeResourcesRequest.h
	include/alibabacloud/ros/model/DescribeResourcesResult.h
	include/alibabacloud/ros/model/DescribeStackDetailRequest.h
	include/alibabacloud/ros/model/DescribeStackDetailResult.h
	include/alibabacloud/ros/model/DescribeStacksRequest.h
	include/alibabacloud/ros/model/DescribeStacksResult.h
	include/alibabacloud/ros/model/DescribeTemplateRequest.h
	include/alibabacloud/ros/model/DescribeTemplateResult.h
	include/alibabacloud/ros/model/DoActionsRequest.h
	include/alibabacloud/ros/model/DoActionsResult.h
	include/alibabacloud/ros/model/ExecuteChangeSetRequest.h
	include/alibabacloud/ros/model/ExecuteChangeSetResult.h
	include/alibabacloud/ros/model/GetStackPolicyRequest.h
	include/alibabacloud/ros/model/GetStackPolicyResult.h
	include/alibabacloud/ros/model/InquiryStackRequest.h
	include/alibabacloud/ros/model/InquiryStackResult.h
	include/alibabacloud/ros/model/PreviewStackRequest.h
	include/alibabacloud/ros/model/PreviewStackResult.h
	include/alibabacloud/ros/model/SetStackPolicyRequest.h
	include/alibabacloud/ros/model/SetStackPolicyResult.h
	include/alibabacloud/ros/model/UpdateStackRequest.h
	include/alibabacloud/ros/model/UpdateStackResult.h
	include/alibabacloud/ros/model/ValidateTemplateRequest.h
	include/alibabacloud/ros/model/ValidateTemplateResult.h
	include/alibabacloud/ros/model/WaitConditionsRequest.h
	include/alibabacloud/ros/model/WaitConditionsResult.h )

set(ros_src 
	src/ROSClient.cc
	src/model/AbandonStackRequest.cc
	src/model/AbandonStackResult.cc
	src/model/CancelUpdateStackRequest.cc
	src/model/CancelUpdateStackResult.cc
	src/model/ContinueCreateStackRequest.cc
	src/model/ContinueCreateStackResult.cc
	src/model/CreateChangeSetRequest.cc
	src/model/CreateChangeSetResult.cc
	src/model/CreateStacksRequest.cc
	src/model/CreateStacksResult.cc
	src/model/DeleteChangeSetRequest.cc
	src/model/DeleteChangeSetResult.cc
	src/model/DeleteStackRequest.cc
	src/model/DeleteStackResult.cc
	src/model/DescribeChangeSetDetailRequest.cc
	src/model/DescribeChangeSetDetailResult.cc
	src/model/DescribeChangeSetsRequest.cc
	src/model/DescribeChangeSetsResult.cc
	src/model/DescribeEventsRequest.cc
	src/model/DescribeEventsResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeResourceDetailRequest.cc
	src/model/DescribeResourceDetailResult.cc
	src/model/DescribeResourceTypeDetailRequest.cc
	src/model/DescribeResourceTypeDetailResult.cc
	src/model/DescribeResourceTypeTemplateRequest.cc
	src/model/DescribeResourceTypeTemplateResult.cc
	src/model/DescribeResourceTypesRequest.cc
	src/model/DescribeResourceTypesResult.cc
	src/model/DescribeResourcesRequest.cc
	src/model/DescribeResourcesResult.cc
	src/model/DescribeStackDetailRequest.cc
	src/model/DescribeStackDetailResult.cc
	src/model/DescribeStacksRequest.cc
	src/model/DescribeStacksResult.cc
	src/model/DescribeTemplateRequest.cc
	src/model/DescribeTemplateResult.cc
	src/model/DoActionsRequest.cc
	src/model/DoActionsResult.cc
	src/model/ExecuteChangeSetRequest.cc
	src/model/ExecuteChangeSetResult.cc
	src/model/GetStackPolicyRequest.cc
	src/model/GetStackPolicyResult.cc
	src/model/InquiryStackRequest.cc
	src/model/InquiryStackResult.cc
	src/model/PreviewStackRequest.cc
	src/model/PreviewStackResult.cc
	src/model/SetStackPolicyRequest.cc
	src/model/SetStackPolicyResult.cc
	src/model/UpdateStackRequest.cc
	src/model/UpdateStackResult.cc
	src/model/ValidateTemplateRequest.cc
	src/model/ValidateTemplateResult.cc
	src/model/WaitConditionsRequest.cc
	src/model/WaitConditionsResult.cc )

add_library(ros ${LIB_TYPE}
	${ros_public_header}
	${ros_public_header_model}
	${ros_src})

set_target_properties(ros
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ros
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ros
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ROS_LIBRARY)
endif()

target_include_directories(ros
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ros
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ros
		jsoncpp)
	target_include_directories(ros
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ros
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ros
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ros
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ros
		jsoncpp)
endif()

install(FILES ${ros_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ros)
install(FILES ${ros_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ros/model)
install(TARGETS ros
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)