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

set(qianzhou_public_header 
	include/alibabacloud/qianzhou/QianzhouClient.h
	include/alibabacloud/qianzhou/QianzhouExport.h )

set(qianzhou_public_header_model 
	include/alibabacloud/qianzhou/model/AICreateSessionMessageRequest.h
	include/alibabacloud/qianzhou/model/AICreateSessionMessageResult.h
	include/alibabacloud/qianzhou/model/CreateDiagnosisRequest.h
	include/alibabacloud/qianzhou/model/CreateDiagnosisResult.h
	include/alibabacloud/qianzhou/model/GetClusterRequest.h
	include/alibabacloud/qianzhou/model/GetClusterResult.h
	include/alibabacloud/qianzhou/model/GetClusterWarningRequest.h
	include/alibabacloud/qianzhou/model/GetClusterWarningResult.h
	include/alibabacloud/qianzhou/model/GetDiagnosisResultRequest.h
	include/alibabacloud/qianzhou/model/GetDiagnosisResultResult.h
	include/alibabacloud/qianzhou/model/GetUserClusterWarningRequest.h
	include/alibabacloud/qianzhou/model/GetUserClusterWarningResult.h
	include/alibabacloud/qianzhou/model/GetWebshellTokenRequest.h
	include/alibabacloud/qianzhou/model/GetWebshellTokenResult.h
	include/alibabacloud/qianzhou/model/HelloRequest.h
	include/alibabacloud/qianzhou/model/HelloResult.h
	include/alibabacloud/qianzhou/model/ListClusterDeprecatedAPIRequest.h
	include/alibabacloud/qianzhou/model/ListClusterDeprecatedAPIResult.h
	include/alibabacloud/qianzhou/model/ListClusterImagesRequest.h
	include/alibabacloud/qianzhou/model/ListClusterImagesResult.h
	include/alibabacloud/qianzhou/model/ListUserClustersRequest.h
	include/alibabacloud/qianzhou/model/ListUserClustersResult.h
	include/alibabacloud/qianzhou/model/QueryByInstanceInfoRequest.h
	include/alibabacloud/qianzhou/model/QueryByInstanceInfoResult.h
	include/alibabacloud/qianzhou/model/QueryNodeInfoRequest.h
	include/alibabacloud/qianzhou/model/QueryNodeInfoResult.h )

set(qianzhou_src 
	src/QianzhouClient.cc
	src/model/AICreateSessionMessageRequest.cc
	src/model/AICreateSessionMessageResult.cc
	src/model/CreateDiagnosisRequest.cc
	src/model/CreateDiagnosisResult.cc
	src/model/GetClusterRequest.cc
	src/model/GetClusterResult.cc
	src/model/GetClusterWarningRequest.cc
	src/model/GetClusterWarningResult.cc
	src/model/GetDiagnosisResultRequest.cc
	src/model/GetDiagnosisResultResult.cc
	src/model/GetUserClusterWarningRequest.cc
	src/model/GetUserClusterWarningResult.cc
	src/model/GetWebshellTokenRequest.cc
	src/model/GetWebshellTokenResult.cc
	src/model/HelloRequest.cc
	src/model/HelloResult.cc
	src/model/ListClusterDeprecatedAPIRequest.cc
	src/model/ListClusterDeprecatedAPIResult.cc
	src/model/ListClusterImagesRequest.cc
	src/model/ListClusterImagesResult.cc
	src/model/ListUserClustersRequest.cc
	src/model/ListUserClustersResult.cc
	src/model/QueryByInstanceInfoRequest.cc
	src/model/QueryByInstanceInfoResult.cc
	src/model/QueryNodeInfoRequest.cc
	src/model/QueryNodeInfoResult.cc )

add_library(qianzhou ${LIB_TYPE}
	${qianzhou_public_header}
	${qianzhou_public_header_model}
	${qianzhou_src})

set_target_properties(qianzhou
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}qianzhou
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(qianzhou
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_QIANZHOU_LIBRARY)
endif()

target_include_directories(qianzhou
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(qianzhou
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(qianzhou
		jsoncpp)
	target_include_directories(qianzhou
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(qianzhou
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(qianzhou
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(qianzhou
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(qianzhou
		jsoncpp)
endif()

install(FILES ${qianzhou_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/qianzhou)
install(FILES ${qianzhou_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/qianzhou/model)
install(TARGETS qianzhou
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)