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

set(acm_public_header 
	include/alibabacloud/acm/AcmClient.h
	include/alibabacloud/acm/AcmExport.h )

set(acm_public_header_model 
	include/alibabacloud/acm/model/CreateConfigurationRequest.h
	include/alibabacloud/acm/model/CreateConfigurationResult.h
	include/alibabacloud/acm/model/CreateNamespaceRequest.h
	include/alibabacloud/acm/model/CreateNamespaceResult.h
	include/alibabacloud/acm/model/DeleteConfigurationRequest.h
	include/alibabacloud/acm/model/DeleteConfigurationResult.h
	include/alibabacloud/acm/model/DeleteNamespaceRequest.h
	include/alibabacloud/acm/model/DeleteNamespaceResult.h
	include/alibabacloud/acm/model/DeployConfigurationRequest.h
	include/alibabacloud/acm/model/DeployConfigurationResult.h
	include/alibabacloud/acm/model/DescribeConfigurationRequest.h
	include/alibabacloud/acm/model/DescribeConfigurationResult.h
	include/alibabacloud/acm/model/DescribeNamespaceRequest.h
	include/alibabacloud/acm/model/DescribeNamespaceResult.h
	include/alibabacloud/acm/model/DescribeNamespacesRequest.h
	include/alibabacloud/acm/model/DescribeNamespacesResult.h
	include/alibabacloud/acm/model/UpdateNamespaceRequest.h
	include/alibabacloud/acm/model/UpdateNamespaceResult.h )

set(acm_src 
	src/AcmClient.cc
	src/model/CreateConfigurationRequest.cc
	src/model/CreateConfigurationResult.cc
	src/model/CreateNamespaceRequest.cc
	src/model/CreateNamespaceResult.cc
	src/model/DeleteConfigurationRequest.cc
	src/model/DeleteConfigurationResult.cc
	src/model/DeleteNamespaceRequest.cc
	src/model/DeleteNamespaceResult.cc
	src/model/DeployConfigurationRequest.cc
	src/model/DeployConfigurationResult.cc
	src/model/DescribeConfigurationRequest.cc
	src/model/DescribeConfigurationResult.cc
	src/model/DescribeNamespaceRequest.cc
	src/model/DescribeNamespaceResult.cc
	src/model/DescribeNamespacesRequest.cc
	src/model/DescribeNamespacesResult.cc
	src/model/UpdateNamespaceRequest.cc
	src/model/UpdateNamespaceResult.cc )

add_library(acm ${LIB_TYPE}
	${acm_public_header}
	${acm_public_header_model}
	${acm_src})

set_target_properties(acm
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}acm
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(acm
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ACM_LIBRARY)
endif()

target_include_directories(acm
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(acm
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(acm
		jsoncpp)
	target_include_directories(acm
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(acm
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(acm
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(acm
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(acm
		jsoncpp)
endif()

install(FILES ${acm_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/acm)
install(FILES ${acm_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/acm/model)
install(TARGETS acm
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)