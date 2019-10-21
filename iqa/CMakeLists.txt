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

set(iqa_public_header 
	include/alibabacloud/iqa/IqaClient.h
	include/alibabacloud/iqa/IqaExport.h )

set(iqa_public_header_model 
	include/alibabacloud/iqa/model/CreateProjectRequest.h
	include/alibabacloud/iqa/model/CreateProjectResult.h
	include/alibabacloud/iqa/model/DeleteProjectRequest.h
	include/alibabacloud/iqa/model/DeleteProjectResult.h
	include/alibabacloud/iqa/model/DeployServiceRequest.h
	include/alibabacloud/iqa/model/DeployServiceResult.h
	include/alibabacloud/iqa/model/DescribeProjectRequest.h
	include/alibabacloud/iqa/model/DescribeProjectResult.h
	include/alibabacloud/iqa/model/GetPredictResultRequest.h
	include/alibabacloud/iqa/model/GetPredictResultResult.h
	include/alibabacloud/iqa/model/ListProjectsRequest.h
	include/alibabacloud/iqa/model/ListProjectsResult.h
	include/alibabacloud/iqa/model/ModifiyProjectRequest.h
	include/alibabacloud/iqa/model/ModifiyProjectResult.h
	include/alibabacloud/iqa/model/UploadDictionaryRequest.h
	include/alibabacloud/iqa/model/UploadDictionaryResult.h
	include/alibabacloud/iqa/model/UploadDocumentRequest.h
	include/alibabacloud/iqa/model/UploadDocumentResult.h )

set(iqa_src 
	src/IqaClient.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/DeployServiceRequest.cc
	src/model/DeployServiceResult.cc
	src/model/DescribeProjectRequest.cc
	src/model/DescribeProjectResult.cc
	src/model/GetPredictResultRequest.cc
	src/model/GetPredictResultResult.cc
	src/model/ListProjectsRequest.cc
	src/model/ListProjectsResult.cc
	src/model/ModifiyProjectRequest.cc
	src/model/ModifiyProjectResult.cc
	src/model/UploadDictionaryRequest.cc
	src/model/UploadDictionaryResult.cc
	src/model/UploadDocumentRequest.cc
	src/model/UploadDocumentResult.cc )

add_library(iqa ${LIB_TYPE}
	${iqa_public_header}
	${iqa_public_header_model}
	${iqa_src})

set_target_properties(iqa
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iqa
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(iqa
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IQA_LIBRARY)
endif()

target_include_directories(iqa
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(iqa
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(iqa
		jsoncpp)
	target_include_directories(iqa
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(iqa
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(iqa
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(iqa
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(iqa
		jsoncpp)
endif()

install(FILES ${iqa_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/iqa)
install(FILES ${iqa_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/iqa/model)
install(TARGETS iqa
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)