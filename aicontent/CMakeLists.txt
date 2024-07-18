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

set(aicontent_public_header 
	include/alibabacloud/aicontent/AiContentClient.h
	include/alibabacloud/aicontent/AiContentExport.h )

set(aicontent_public_header_model 
	include/alibabacloud/aicontent/model/AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest.h
	include/alibabacloud/aicontent/model/AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgAddInferenceJobRequest.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgAddInferenceJobResult.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgAddModelTrainJobRequest.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgAddModelTrainJobResult.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgQueryImageAssetRequest.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgQueryImageAssetResult.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgQueryInferenceJobInfoRequest.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgQueryInferenceJobInfoResult.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgQueryModelTrainJobListRequest.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgQueryModelTrainJobListResult.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgQueryModelTrainStatusRequest.h
	include/alibabacloud/aicontent/model/Personalizedtxt2imgQueryModelTrainStatusResult.h )

set(aicontent_src 
	src/AiContentClient.cc
	src/model/AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest.cc
	src/model/AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult.cc
	src/model/Personalizedtxt2imgAddInferenceJobRequest.cc
	src/model/Personalizedtxt2imgAddInferenceJobResult.cc
	src/model/Personalizedtxt2imgAddModelTrainJobRequest.cc
	src/model/Personalizedtxt2imgAddModelTrainJobResult.cc
	src/model/Personalizedtxt2imgQueryImageAssetRequest.cc
	src/model/Personalizedtxt2imgQueryImageAssetResult.cc
	src/model/Personalizedtxt2imgQueryInferenceJobInfoRequest.cc
	src/model/Personalizedtxt2imgQueryInferenceJobInfoResult.cc
	src/model/Personalizedtxt2imgQueryModelTrainJobListRequest.cc
	src/model/Personalizedtxt2imgQueryModelTrainJobListResult.cc
	src/model/Personalizedtxt2imgQueryModelTrainStatusRequest.cc
	src/model/Personalizedtxt2imgQueryModelTrainStatusResult.cc )

add_library(aicontent ${LIB_TYPE}
	${aicontent_public_header}
	${aicontent_public_header_model}
	${aicontent_src})

set_target_properties(aicontent
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aicontent
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(aicontent
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AICONTENT_LIBRARY)
endif()

target_include_directories(aicontent
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(aicontent
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(aicontent
		jsoncpp)
	target_include_directories(aicontent
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(aicontent
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(aicontent
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(aicontent
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(aicontent
		jsoncpp)
endif()

install(FILES ${aicontent_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aicontent)
install(FILES ${aicontent_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aicontent/model)
install(TARGETS aicontent
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)