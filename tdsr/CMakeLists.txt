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

set(tdsr_public_header 
	include/alibabacloud/tdsr/TdsrClient.h
	include/alibabacloud/tdsr/TdsrExport.h )

set(tdsr_public_header_model 
	include/alibabacloud/tdsr/model/CheckPermissionRequest.h
	include/alibabacloud/tdsr/model/CheckPermissionResult.h
	include/alibabacloud/tdsr/model/CheckResourceRequest.h
	include/alibabacloud/tdsr/model/CheckResourceResult.h
	include/alibabacloud/tdsr/model/CreateProjectRequest.h
	include/alibabacloud/tdsr/model/CreateProjectResult.h
	include/alibabacloud/tdsr/model/CreateSceneRequest.h
	include/alibabacloud/tdsr/model/CreateSceneResult.h
	include/alibabacloud/tdsr/model/DeleteFileRequest.h
	include/alibabacloud/tdsr/model/DeleteFileResult.h
	include/alibabacloud/tdsr/model/DeleteProjectRequest.h
	include/alibabacloud/tdsr/model/DeleteProjectResult.h
	include/alibabacloud/tdsr/model/GetHotspotConfigRequest.h
	include/alibabacloud/tdsr/model/GetHotspotConfigResult.h
	include/alibabacloud/tdsr/model/GetHotspotTagRequest.h
	include/alibabacloud/tdsr/model/GetHotspotTagResult.h
	include/alibabacloud/tdsr/model/GetPolicyRequest.h
	include/alibabacloud/tdsr/model/GetPolicyResult.h
	include/alibabacloud/tdsr/model/GetSceneDataRequest.h
	include/alibabacloud/tdsr/model/GetSceneDataResult.h
	include/alibabacloud/tdsr/model/GetSceneListRequest.h
	include/alibabacloud/tdsr/model/GetSceneListResult.h
	include/alibabacloud/tdsr/model/GetWindowConfigRequest.h
	include/alibabacloud/tdsr/model/GetWindowConfigResult.h
	include/alibabacloud/tdsr/model/ListMainScenesRequest.h
	include/alibabacloud/tdsr/model/ListMainScenesResult.h
	include/alibabacloud/tdsr/model/ListScenesRequest.h
	include/alibabacloud/tdsr/model/ListScenesResult.h
	include/alibabacloud/tdsr/model/PublishHotspotRequest.h
	include/alibabacloud/tdsr/model/PublishHotspotResult.h
	include/alibabacloud/tdsr/model/SaveFileRequest.h
	include/alibabacloud/tdsr/model/SaveFileResult.h
	include/alibabacloud/tdsr/model/SaveHotspotConfigRequest.h
	include/alibabacloud/tdsr/model/SaveHotspotConfigResult.h
	include/alibabacloud/tdsr/model/SaveHotspotTagRequest.h
	include/alibabacloud/tdsr/model/SaveHotspotTagResult.h )

set(tdsr_src 
	src/TdsrClient.cc
	src/model/CheckPermissionRequest.cc
	src/model/CheckPermissionResult.cc
	src/model/CheckResourceRequest.cc
	src/model/CheckResourceResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/CreateSceneRequest.cc
	src/model/CreateSceneResult.cc
	src/model/DeleteFileRequest.cc
	src/model/DeleteFileResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/GetHotspotConfigRequest.cc
	src/model/GetHotspotConfigResult.cc
	src/model/GetHotspotTagRequest.cc
	src/model/GetHotspotTagResult.cc
	src/model/GetPolicyRequest.cc
	src/model/GetPolicyResult.cc
	src/model/GetSceneDataRequest.cc
	src/model/GetSceneDataResult.cc
	src/model/GetSceneListRequest.cc
	src/model/GetSceneListResult.cc
	src/model/GetWindowConfigRequest.cc
	src/model/GetWindowConfigResult.cc
	src/model/ListMainScenesRequest.cc
	src/model/ListMainScenesResult.cc
	src/model/ListScenesRequest.cc
	src/model/ListScenesResult.cc
	src/model/PublishHotspotRequest.cc
	src/model/PublishHotspotResult.cc
	src/model/SaveFileRequest.cc
	src/model/SaveFileResult.cc
	src/model/SaveHotspotConfigRequest.cc
	src/model/SaveHotspotConfigResult.cc
	src/model/SaveHotspotTagRequest.cc
	src/model/SaveHotspotTagResult.cc )

add_library(tdsr ${LIB_TYPE}
	${tdsr_public_header}
	${tdsr_public_header_model}
	${tdsr_src})

set_target_properties(tdsr
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tdsr
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(tdsr
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_TDSR_LIBRARY)
endif()

target_include_directories(tdsr
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(tdsr
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(tdsr
		jsoncpp)
	target_include_directories(tdsr
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(tdsr
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(tdsr
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(tdsr
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(tdsr
		jsoncpp)
endif()

install(FILES ${tdsr_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/tdsr)
install(FILES ${tdsr_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/tdsr/model)
install(TARGETS tdsr
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)