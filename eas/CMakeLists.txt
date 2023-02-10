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

set(eas_public_header 
	include/alibabacloud/eas/EasClient.h
	include/alibabacloud/eas/EasExport.h )

set(eas_public_header_model 
	include/alibabacloud/eas/model/CommitServiceRequest.h
	include/alibabacloud/eas/model/CommitServiceResult.h
	include/alibabacloud/eas/model/CreateBenchmarkTaskRequest.h
	include/alibabacloud/eas/model/CreateBenchmarkTaskResult.h
	include/alibabacloud/eas/model/CreateResourceRequest.h
	include/alibabacloud/eas/model/CreateResourceResult.h
	include/alibabacloud/eas/model/CreateResourceInstancesRequest.h
	include/alibabacloud/eas/model/CreateResourceInstancesResult.h
	include/alibabacloud/eas/model/CreateResourceLogRequest.h
	include/alibabacloud/eas/model/CreateResourceLogResult.h
	include/alibabacloud/eas/model/CreateServiceRequest.h
	include/alibabacloud/eas/model/CreateServiceResult.h
	include/alibabacloud/eas/model/CreateServiceAutoScalerRequest.h
	include/alibabacloud/eas/model/CreateServiceAutoScalerResult.h
	include/alibabacloud/eas/model/CreateServiceCronScalerRequest.h
	include/alibabacloud/eas/model/CreateServiceCronScalerResult.h
	include/alibabacloud/eas/model/CreateServiceMirrorRequest.h
	include/alibabacloud/eas/model/CreateServiceMirrorResult.h
	include/alibabacloud/eas/model/DeleteBenchmarkTaskRequest.h
	include/alibabacloud/eas/model/DeleteBenchmarkTaskResult.h
	include/alibabacloud/eas/model/DeleteResourceRequest.h
	include/alibabacloud/eas/model/DeleteResourceResult.h
	include/alibabacloud/eas/model/DeleteResourceDLinkRequest.h
	include/alibabacloud/eas/model/DeleteResourceDLinkResult.h
	include/alibabacloud/eas/model/DeleteResourceInstancesRequest.h
	include/alibabacloud/eas/model/DeleteResourceInstancesResult.h
	include/alibabacloud/eas/model/DeleteResourceLogRequest.h
	include/alibabacloud/eas/model/DeleteResourceLogResult.h
	include/alibabacloud/eas/model/DeleteServiceRequest.h
	include/alibabacloud/eas/model/DeleteServiceResult.h
	include/alibabacloud/eas/model/DeleteServiceAutoScalerRequest.h
	include/alibabacloud/eas/model/DeleteServiceAutoScalerResult.h
	include/alibabacloud/eas/model/DeleteServiceCronScalerRequest.h
	include/alibabacloud/eas/model/DeleteServiceCronScalerResult.h
	include/alibabacloud/eas/model/DeleteServiceInstancesRequest.h
	include/alibabacloud/eas/model/DeleteServiceInstancesResult.h
	include/alibabacloud/eas/model/DeleteServiceLabelRequest.h
	include/alibabacloud/eas/model/DeleteServiceLabelResult.h
	include/alibabacloud/eas/model/DeleteServiceMirrorRequest.h
	include/alibabacloud/eas/model/DeleteServiceMirrorResult.h
	include/alibabacloud/eas/model/DescribeBenchmarkTaskRequest.h
	include/alibabacloud/eas/model/DescribeBenchmarkTaskResult.h
	include/alibabacloud/eas/model/DescribeBenchmarkTaskReportRequest.h
	include/alibabacloud/eas/model/DescribeBenchmarkTaskReportResult.h
	include/alibabacloud/eas/model/DescribeGroupRequest.h
	include/alibabacloud/eas/model/DescribeGroupResult.h
	include/alibabacloud/eas/model/DescribeResourceRequest.h
	include/alibabacloud/eas/model/DescribeResourceResult.h
	include/alibabacloud/eas/model/DescribeResourceDLinkRequest.h
	include/alibabacloud/eas/model/DescribeResourceDLinkResult.h
	include/alibabacloud/eas/model/DescribeResourceLogRequest.h
	include/alibabacloud/eas/model/DescribeResourceLogResult.h
	include/alibabacloud/eas/model/DescribeServiceRequest.h
	include/alibabacloud/eas/model/DescribeServiceResult.h
	include/alibabacloud/eas/model/DescribeServiceAutoScalerRequest.h
	include/alibabacloud/eas/model/DescribeServiceAutoScalerResult.h
	include/alibabacloud/eas/model/DescribeServiceCronScalerRequest.h
	include/alibabacloud/eas/model/DescribeServiceCronScalerResult.h
	include/alibabacloud/eas/model/DescribeServiceEventRequest.h
	include/alibabacloud/eas/model/DescribeServiceEventResult.h
	include/alibabacloud/eas/model/DescribeServiceLogRequest.h
	include/alibabacloud/eas/model/DescribeServiceLogResult.h
	include/alibabacloud/eas/model/DescribeServiceMirrorRequest.h
	include/alibabacloud/eas/model/DescribeServiceMirrorResult.h
	include/alibabacloud/eas/model/DevelopServiceRequest.h
	include/alibabacloud/eas/model/DevelopServiceResult.h
	include/alibabacloud/eas/model/ListBenchmarkTaskRequest.h
	include/alibabacloud/eas/model/ListBenchmarkTaskResult.h
	include/alibabacloud/eas/model/ListGroupsRequest.h
	include/alibabacloud/eas/model/ListGroupsResult.h
	include/alibabacloud/eas/model/ListResourceInstanceWorkerRequest.h
	include/alibabacloud/eas/model/ListResourceInstanceWorkerResult.h
	include/alibabacloud/eas/model/ListResourceInstancesRequest.h
	include/alibabacloud/eas/model/ListResourceInstancesResult.h
	include/alibabacloud/eas/model/ListResourceServicesRequest.h
	include/alibabacloud/eas/model/ListResourceServicesResult.h
	include/alibabacloud/eas/model/ListResourcesRequest.h
	include/alibabacloud/eas/model/ListResourcesResult.h
	include/alibabacloud/eas/model/ListServiceInstancesRequest.h
	include/alibabacloud/eas/model/ListServiceInstancesResult.h
	include/alibabacloud/eas/model/ListServiceVersionsRequest.h
	include/alibabacloud/eas/model/ListServiceVersionsResult.h
	include/alibabacloud/eas/model/ListServicesRequest.h
	include/alibabacloud/eas/model/ListServicesResult.h
	include/alibabacloud/eas/model/ReleaseServiceRequest.h
	include/alibabacloud/eas/model/ReleaseServiceResult.h
	include/alibabacloud/eas/model/StartBenchmarkTaskRequest.h
	include/alibabacloud/eas/model/StartBenchmarkTaskResult.h
	include/alibabacloud/eas/model/StartServiceRequest.h
	include/alibabacloud/eas/model/StartServiceResult.h
	include/alibabacloud/eas/model/StopBenchmarkTaskRequest.h
	include/alibabacloud/eas/model/StopBenchmarkTaskResult.h
	include/alibabacloud/eas/model/StopServiceRequest.h
	include/alibabacloud/eas/model/StopServiceResult.h
	include/alibabacloud/eas/model/UpdateBenchmarkTaskRequest.h
	include/alibabacloud/eas/model/UpdateBenchmarkTaskResult.h
	include/alibabacloud/eas/model/UpdateResourceRequest.h
	include/alibabacloud/eas/model/UpdateResourceResult.h
	include/alibabacloud/eas/model/UpdateResourceDLinkRequest.h
	include/alibabacloud/eas/model/UpdateResourceDLinkResult.h
	include/alibabacloud/eas/model/UpdateResourceInstanceRequest.h
	include/alibabacloud/eas/model/UpdateResourceInstanceResult.h
	include/alibabacloud/eas/model/UpdateServiceRequest.h
	include/alibabacloud/eas/model/UpdateServiceResult.h
	include/alibabacloud/eas/model/UpdateServiceAutoScalerRequest.h
	include/alibabacloud/eas/model/UpdateServiceAutoScalerResult.h
	include/alibabacloud/eas/model/UpdateServiceCronScalerRequest.h
	include/alibabacloud/eas/model/UpdateServiceCronScalerResult.h
	include/alibabacloud/eas/model/UpdateServiceLabelRequest.h
	include/alibabacloud/eas/model/UpdateServiceLabelResult.h
	include/alibabacloud/eas/model/UpdateServiceMirrorRequest.h
	include/alibabacloud/eas/model/UpdateServiceMirrorResult.h
	include/alibabacloud/eas/model/UpdateServiceSafetyLockRequest.h
	include/alibabacloud/eas/model/UpdateServiceSafetyLockResult.h
	include/alibabacloud/eas/model/UpdateServiceVersionRequest.h
	include/alibabacloud/eas/model/UpdateServiceVersionResult.h )

set(eas_src 
	src/EasClient.cc
	src/model/CommitServiceRequest.cc
	src/model/CommitServiceResult.cc
	src/model/CreateBenchmarkTaskRequest.cc
	src/model/CreateBenchmarkTaskResult.cc
	src/model/CreateResourceRequest.cc
	src/model/CreateResourceResult.cc
	src/model/CreateResourceInstancesRequest.cc
	src/model/CreateResourceInstancesResult.cc
	src/model/CreateResourceLogRequest.cc
	src/model/CreateResourceLogResult.cc
	src/model/CreateServiceRequest.cc
	src/model/CreateServiceResult.cc
	src/model/CreateServiceAutoScalerRequest.cc
	src/model/CreateServiceAutoScalerResult.cc
	src/model/CreateServiceCronScalerRequest.cc
	src/model/CreateServiceCronScalerResult.cc
	src/model/CreateServiceMirrorRequest.cc
	src/model/CreateServiceMirrorResult.cc
	src/model/DeleteBenchmarkTaskRequest.cc
	src/model/DeleteBenchmarkTaskResult.cc
	src/model/DeleteResourceRequest.cc
	src/model/DeleteResourceResult.cc
	src/model/DeleteResourceDLinkRequest.cc
	src/model/DeleteResourceDLinkResult.cc
	src/model/DeleteResourceInstancesRequest.cc
	src/model/DeleteResourceInstancesResult.cc
	src/model/DeleteResourceLogRequest.cc
	src/model/DeleteResourceLogResult.cc
	src/model/DeleteServiceRequest.cc
	src/model/DeleteServiceResult.cc
	src/model/DeleteServiceAutoScalerRequest.cc
	src/model/DeleteServiceAutoScalerResult.cc
	src/model/DeleteServiceCronScalerRequest.cc
	src/model/DeleteServiceCronScalerResult.cc
	src/model/DeleteServiceInstancesRequest.cc
	src/model/DeleteServiceInstancesResult.cc
	src/model/DeleteServiceLabelRequest.cc
	src/model/DeleteServiceLabelResult.cc
	src/model/DeleteServiceMirrorRequest.cc
	src/model/DeleteServiceMirrorResult.cc
	src/model/DescribeBenchmarkTaskRequest.cc
	src/model/DescribeBenchmarkTaskResult.cc
	src/model/DescribeBenchmarkTaskReportRequest.cc
	src/model/DescribeBenchmarkTaskReportResult.cc
	src/model/DescribeGroupRequest.cc
	src/model/DescribeGroupResult.cc
	src/model/DescribeResourceRequest.cc
	src/model/DescribeResourceResult.cc
	src/model/DescribeResourceDLinkRequest.cc
	src/model/DescribeResourceDLinkResult.cc
	src/model/DescribeResourceLogRequest.cc
	src/model/DescribeResourceLogResult.cc
	src/model/DescribeServiceRequest.cc
	src/model/DescribeServiceResult.cc
	src/model/DescribeServiceAutoScalerRequest.cc
	src/model/DescribeServiceAutoScalerResult.cc
	src/model/DescribeServiceCronScalerRequest.cc
	src/model/DescribeServiceCronScalerResult.cc
	src/model/DescribeServiceEventRequest.cc
	src/model/DescribeServiceEventResult.cc
	src/model/DescribeServiceLogRequest.cc
	src/model/DescribeServiceLogResult.cc
	src/model/DescribeServiceMirrorRequest.cc
	src/model/DescribeServiceMirrorResult.cc
	src/model/DevelopServiceRequest.cc
	src/model/DevelopServiceResult.cc
	src/model/ListBenchmarkTaskRequest.cc
	src/model/ListBenchmarkTaskResult.cc
	src/model/ListGroupsRequest.cc
	src/model/ListGroupsResult.cc
	src/model/ListResourceInstanceWorkerRequest.cc
	src/model/ListResourceInstanceWorkerResult.cc
	src/model/ListResourceInstancesRequest.cc
	src/model/ListResourceInstancesResult.cc
	src/model/ListResourceServicesRequest.cc
	src/model/ListResourceServicesResult.cc
	src/model/ListResourcesRequest.cc
	src/model/ListResourcesResult.cc
	src/model/ListServiceInstancesRequest.cc
	src/model/ListServiceInstancesResult.cc
	src/model/ListServiceVersionsRequest.cc
	src/model/ListServiceVersionsResult.cc
	src/model/ListServicesRequest.cc
	src/model/ListServicesResult.cc
	src/model/ReleaseServiceRequest.cc
	src/model/ReleaseServiceResult.cc
	src/model/StartBenchmarkTaskRequest.cc
	src/model/StartBenchmarkTaskResult.cc
	src/model/StartServiceRequest.cc
	src/model/StartServiceResult.cc
	src/model/StopBenchmarkTaskRequest.cc
	src/model/StopBenchmarkTaskResult.cc
	src/model/StopServiceRequest.cc
	src/model/StopServiceResult.cc
	src/model/UpdateBenchmarkTaskRequest.cc
	src/model/UpdateBenchmarkTaskResult.cc
	src/model/UpdateResourceRequest.cc
	src/model/UpdateResourceResult.cc
	src/model/UpdateResourceDLinkRequest.cc
	src/model/UpdateResourceDLinkResult.cc
	src/model/UpdateResourceInstanceRequest.cc
	src/model/UpdateResourceInstanceResult.cc
	src/model/UpdateServiceRequest.cc
	src/model/UpdateServiceResult.cc
	src/model/UpdateServiceAutoScalerRequest.cc
	src/model/UpdateServiceAutoScalerResult.cc
	src/model/UpdateServiceCronScalerRequest.cc
	src/model/UpdateServiceCronScalerResult.cc
	src/model/UpdateServiceLabelRequest.cc
	src/model/UpdateServiceLabelResult.cc
	src/model/UpdateServiceMirrorRequest.cc
	src/model/UpdateServiceMirrorResult.cc
	src/model/UpdateServiceSafetyLockRequest.cc
	src/model/UpdateServiceSafetyLockResult.cc
	src/model/UpdateServiceVersionRequest.cc
	src/model/UpdateServiceVersionResult.cc )

add_library(eas ${LIB_TYPE}
	${eas_public_header}
	${eas_public_header_model}
	${eas_src})

set_target_properties(eas
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eas
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(eas
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EAS_LIBRARY)
endif()

target_include_directories(eas
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(eas
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(eas
		jsoncpp)
	target_include_directories(eas
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(eas
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(eas
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(eas
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(eas
		jsoncpp)
endif()

install(FILES ${eas_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eas)
install(FILES ${eas_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eas/model)
install(TARGETS eas
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)