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

set(websitebuild_public_header 
	include/alibabacloud/websitebuild/WebsiteBuildClient.h
	include/alibabacloud/websitebuild/WebsiteBuildExport.h )

set(websitebuild_public_header_model 
	include/alibabacloud/websitebuild/model/CreateLogoTaskRequest.h
	include/alibabacloud/websitebuild/model/CreateLogoTaskResult.h
	include/alibabacloud/websitebuild/model/GetCreateLogoTaskRequest.h
	include/alibabacloud/websitebuild/model/GetCreateLogoTaskResult.h
	include/alibabacloud/websitebuild/model/OperateAppInstanceForPartnerRequest.h
	include/alibabacloud/websitebuild/model/OperateAppInstanceForPartnerResult.h
	include/alibabacloud/websitebuild/model/OperateAppServiceForPartnerRequest.h
	include/alibabacloud/websitebuild/model/OperateAppServiceForPartnerResult.h
	include/alibabacloud/websitebuild/model/SearchImageRequest.h
	include/alibabacloud/websitebuild/model/SearchImageResult.h
	include/alibabacloud/websitebuild/model/SyncAppInstanceForPartnerRequest.h
	include/alibabacloud/websitebuild/model/SyncAppInstanceForPartnerResult.h )

set(websitebuild_src 
	src/WebsiteBuildClient.cc
	src/model/CreateLogoTaskRequest.cc
	src/model/CreateLogoTaskResult.cc
	src/model/GetCreateLogoTaskRequest.cc
	src/model/GetCreateLogoTaskResult.cc
	src/model/OperateAppInstanceForPartnerRequest.cc
	src/model/OperateAppInstanceForPartnerResult.cc
	src/model/OperateAppServiceForPartnerRequest.cc
	src/model/OperateAppServiceForPartnerResult.cc
	src/model/SearchImageRequest.cc
	src/model/SearchImageResult.cc
	src/model/SyncAppInstanceForPartnerRequest.cc
	src/model/SyncAppInstanceForPartnerResult.cc )

add_library(websitebuild ${LIB_TYPE}
	${websitebuild_public_header}
	${websitebuild_public_header_model}
	${websitebuild_src})

set_target_properties(websitebuild
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}websitebuild
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(websitebuild
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_WEBSITEBUILD_LIBRARY)
endif()

target_include_directories(websitebuild
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(websitebuild
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(websitebuild
		jsoncpp)
	target_include_directories(websitebuild
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(websitebuild
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(websitebuild
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(websitebuild
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(websitebuild
		jsoncpp)
endif()

install(FILES ${websitebuild_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/websitebuild)
install(FILES ${websitebuild_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/websitebuild/model)
install(TARGETS websitebuild
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)