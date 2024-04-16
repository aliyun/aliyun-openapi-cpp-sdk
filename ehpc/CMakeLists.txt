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

set(ehpc_public_header 
	include/alibabacloud/ehpc/EHPCClient.h
	include/alibabacloud/ehpc/EHPCExport.h )

set(ehpc_public_header_model 
	include/alibabacloud/ehpc/model/AddImageRequest.h
	include/alibabacloud/ehpc/model/AddImageResult.h
	include/alibabacloud/ehpc/model/CreateJobRequest.h
	include/alibabacloud/ehpc/model/CreateJobResult.h
	include/alibabacloud/ehpc/model/DeleteJobsRequest.h
	include/alibabacloud/ehpc/model/DeleteJobsResult.h
	include/alibabacloud/ehpc/model/DescribeJobMetricDataRequest.h
	include/alibabacloud/ehpc/model/DescribeJobMetricDataResult.h
	include/alibabacloud/ehpc/model/DescribeJobMetricLastRequest.h
	include/alibabacloud/ehpc/model/DescribeJobMetricLastResult.h
	include/alibabacloud/ehpc/model/GetImageRequest.h
	include/alibabacloud/ehpc/model/GetImageResult.h
	include/alibabacloud/ehpc/model/GetJobRequest.h
	include/alibabacloud/ehpc/model/GetJobResult.h
	include/alibabacloud/ehpc/model/ListExecutorsRequest.h
	include/alibabacloud/ehpc/model/ListExecutorsResult.h
	include/alibabacloud/ehpc/model/ListImagesRequest.h
	include/alibabacloud/ehpc/model/ListImagesResult.h
	include/alibabacloud/ehpc/model/ListJobExecutorsRequest.h
	include/alibabacloud/ehpc/model/ListJobExecutorsResult.h
	include/alibabacloud/ehpc/model/ListJobsRequest.h
	include/alibabacloud/ehpc/model/ListJobsResult.h
	include/alibabacloud/ehpc/model/RemoveImageRequest.h
	include/alibabacloud/ehpc/model/RemoveImageResult.h )

set(ehpc_src 
	src/EHPCClient.cc
	src/model/AddImageRequest.cc
	src/model/AddImageResult.cc
	src/model/CreateJobRequest.cc
	src/model/CreateJobResult.cc
	src/model/DeleteJobsRequest.cc
	src/model/DeleteJobsResult.cc
	src/model/DescribeJobMetricDataRequest.cc
	src/model/DescribeJobMetricDataResult.cc
	src/model/DescribeJobMetricLastRequest.cc
	src/model/DescribeJobMetricLastResult.cc
	src/model/GetImageRequest.cc
	src/model/GetImageResult.cc
	src/model/GetJobRequest.cc
	src/model/GetJobResult.cc
	src/model/ListExecutorsRequest.cc
	src/model/ListExecutorsResult.cc
	src/model/ListImagesRequest.cc
	src/model/ListImagesResult.cc
	src/model/ListJobExecutorsRequest.cc
	src/model/ListJobExecutorsResult.cc
	src/model/ListJobsRequest.cc
	src/model/ListJobsResult.cc
	src/model/RemoveImageRequest.cc
	src/model/RemoveImageResult.cc )

add_library(ehpc ${LIB_TYPE}
	${ehpc_public_header}
	${ehpc_public_header_model}
	${ehpc_src})

set_target_properties(ehpc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ehpc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ehpc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EHPC_LIBRARY)
endif()

target_include_directories(ehpc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ehpc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ehpc
		jsoncpp)
	target_include_directories(ehpc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ehpc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ehpc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ehpc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ehpc
		jsoncpp)
endif()

install(FILES ${ehpc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ehpc)
install(FILES ${ehpc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ehpc/model)
install(TARGETS ehpc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)