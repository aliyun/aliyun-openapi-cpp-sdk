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

set(ehpcinstant_public_header 
	include/alibabacloud/ehpcinstant/EhpcInstantClient.h
	include/alibabacloud/ehpcinstant/EhpcInstantExport.h )

set(ehpcinstant_public_header_model 
	include/alibabacloud/ehpcinstant/model/AddImageRequest.h
	include/alibabacloud/ehpcinstant/model/AddImageResult.h
	include/alibabacloud/ehpcinstant/model/CreateJobRequest.h
	include/alibabacloud/ehpcinstant/model/CreateJobResult.h
	include/alibabacloud/ehpcinstant/model/DeleteJobsRequest.h
	include/alibabacloud/ehpcinstant/model/DeleteJobsResult.h
	include/alibabacloud/ehpcinstant/model/DescribeJobMetricDataRequest.h
	include/alibabacloud/ehpcinstant/model/DescribeJobMetricDataResult.h
	include/alibabacloud/ehpcinstant/model/DescribeJobMetricLastRequest.h
	include/alibabacloud/ehpcinstant/model/DescribeJobMetricLastResult.h
	include/alibabacloud/ehpcinstant/model/GetImageRequest.h
	include/alibabacloud/ehpcinstant/model/GetImageResult.h
	include/alibabacloud/ehpcinstant/model/GetJobRequest.h
	include/alibabacloud/ehpcinstant/model/GetJobResult.h
	include/alibabacloud/ehpcinstant/model/ListExecutorsRequest.h
	include/alibabacloud/ehpcinstant/model/ListExecutorsResult.h
	include/alibabacloud/ehpcinstant/model/ListImagesRequest.h
	include/alibabacloud/ehpcinstant/model/ListImagesResult.h
	include/alibabacloud/ehpcinstant/model/ListJobExecutorsRequest.h
	include/alibabacloud/ehpcinstant/model/ListJobExecutorsResult.h
	include/alibabacloud/ehpcinstant/model/ListJobsRequest.h
	include/alibabacloud/ehpcinstant/model/ListJobsResult.h
	include/alibabacloud/ehpcinstant/model/RemoveImageRequest.h
	include/alibabacloud/ehpcinstant/model/RemoveImageResult.h )

set(ehpcinstant_src 
	src/EhpcInstantClient.cc
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

add_library(ehpcinstant ${LIB_TYPE}
	${ehpcinstant_public_header}
	${ehpcinstant_public_header_model}
	${ehpcinstant_src})

set_target_properties(ehpcinstant
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ehpcinstant
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ehpcinstant
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EHPCINSTANT_LIBRARY)
endif()

target_include_directories(ehpcinstant
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ehpcinstant
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ehpcinstant
		jsoncpp)
	target_include_directories(ehpcinstant
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ehpcinstant
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ehpcinstant
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ehpcinstant
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ehpcinstant
		jsoncpp)
endif()

install(FILES ${ehpcinstant_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ehpcinstant)
install(FILES ${ehpcinstant_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ehpcinstant/model)
install(TARGETS ehpcinstant
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)