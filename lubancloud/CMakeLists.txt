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

set(lubancloud_public_header 
	include/alibabacloud/lubancloud/LubancloudClient.h
	include/alibabacloud/lubancloud/LubancloudExport.h )

set(lubancloud_public_header_model 
	include/alibabacloud/lubancloud/model/BuyOriginPicturesRequest.h
	include/alibabacloud/lubancloud/model/BuyOriginPicturesResult.h
	include/alibabacloud/lubancloud/model/GetStylesRequest.h
	include/alibabacloud/lubancloud/model/GetStylesResult.h
	include/alibabacloud/lubancloud/model/QueryCutoutTaskResultRequest.h
	include/alibabacloud/lubancloud/model/QueryCutoutTaskResultResult.h
	include/alibabacloud/lubancloud/model/QueryGenerateTaskResultRequest.h
	include/alibabacloud/lubancloud/model/QueryGenerateTaskResultResult.h
	include/alibabacloud/lubancloud/model/SubmitCutoutTaskRequest.h
	include/alibabacloud/lubancloud/model/SubmitCutoutTaskResult.h
	include/alibabacloud/lubancloud/model/SubmitGenerateTaskRequest.h
	include/alibabacloud/lubancloud/model/SubmitGenerateTaskResult.h )

set(lubancloud_src 
	src/LubancloudClient.cc
	src/model/BuyOriginPicturesRequest.cc
	src/model/BuyOriginPicturesResult.cc
	src/model/GetStylesRequest.cc
	src/model/GetStylesResult.cc
	src/model/QueryCutoutTaskResultRequest.cc
	src/model/QueryCutoutTaskResultResult.cc
	src/model/QueryGenerateTaskResultRequest.cc
	src/model/QueryGenerateTaskResultResult.cc
	src/model/SubmitCutoutTaskRequest.cc
	src/model/SubmitCutoutTaskResult.cc
	src/model/SubmitGenerateTaskRequest.cc
	src/model/SubmitGenerateTaskResult.cc )

add_library(lubancloud ${LIB_TYPE}
	${lubancloud_public_header}
	${lubancloud_public_header_model}
	${lubancloud_src})

set_target_properties(lubancloud
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lubancloud
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(lubancloud
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_LUBANCLOUD_LIBRARY)
endif()

target_include_directories(lubancloud
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(lubancloud
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(lubancloud
		jsoncpp)
	target_include_directories(lubancloud
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(lubancloud
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(lubancloud
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(lubancloud
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(lubancloud
		jsoncpp)
endif()

install(FILES ${lubancloud_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/lubancloud)
install(FILES ${lubancloud_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/lubancloud/model)
install(TARGETS lubancloud
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)