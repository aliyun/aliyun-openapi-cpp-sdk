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

set(acms-open_public_header 
	include/alibabacloud/acms-open/Acms_openClient.h
	include/alibabacloud/acms-open/Acms_openExport.h )

set(acms-open_public_header_model 
	include/alibabacloud/acms-open/model/CreateConfigurationRequest.h
	include/alibabacloud/acms-open/model/CreateConfigurationResult.h
	include/alibabacloud/acms-open/model/CreateNamespaceRequest.h
	include/alibabacloud/acms-open/model/CreateNamespaceResult.h
	include/alibabacloud/acms-open/model/DeleteConfigurationRequest.h
	include/alibabacloud/acms-open/model/DeleteConfigurationResult.h
	include/alibabacloud/acms-open/model/DeleteNamespaceRequest.h
	include/alibabacloud/acms-open/model/DeleteNamespaceResult.h
	include/alibabacloud/acms-open/model/DeployConfigurationRequest.h
	include/alibabacloud/acms-open/model/DeployConfigurationResult.h
	include/alibabacloud/acms-open/model/DescribeConfigurationRequest.h
	include/alibabacloud/acms-open/model/DescribeConfigurationResult.h
	include/alibabacloud/acms-open/model/DescribeNamespaceRequest.h
	include/alibabacloud/acms-open/model/DescribeNamespaceResult.h
	include/alibabacloud/acms-open/model/UpdateNamespaceRequest.h
	include/alibabacloud/acms-open/model/UpdateNamespaceResult.h )

set(acms-open_src 
	src/Acms-openClient.cc
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
	src/model/UpdateNamespaceRequest.cc
	src/model/UpdateNamespaceResult.cc )

add_library(acms-open ${LIB_TYPE}
	${acms-open_public_header}
	${acms-open_public_header_model}
	${acms-open_src})

set_target_properties(acms-open
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}acms-open
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(acms-open
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ACMS_OPEN_LIBRARY)
endif()

target_include_directories(acms-open
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(acms-open
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(acms-open
		jsoncpp)
	target_include_directories(acms-open
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(acms-open
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(acms-open
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(acms-open
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(acms-open
		jsoncpp)
endif()

install(FILES ${acms-open_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/acms-open)
install(FILES ${acms-open_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/acms-open/model)
install(TARGETS acms-open
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)