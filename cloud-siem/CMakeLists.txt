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

set(cloud-siem_public_header 
	include/alibabacloud/cloud-siem/Cloud_siemClient.h
	include/alibabacloud/cloud-siem/Cloud_siemExport.h )

set(cloud-siem_public_header_model 
	include/alibabacloud/cloud-siem/model/BatchJobCheckRequest.h
	include/alibabacloud/cloud-siem/model/BatchJobCheckResult.h
	include/alibabacloud/cloud-siem/model/BatchJobSubmitRequest.h
	include/alibabacloud/cloud-siem/model/BatchJobSubmitResult.h
	include/alibabacloud/cloud-siem/model/SendMessageRequest.h
	include/alibabacloud/cloud-siem/model/SendMessageResult.h )

set(cloud-siem_src 
	src/Cloud-siemClient.cc
	src/model/BatchJobCheckRequest.cc
	src/model/BatchJobCheckResult.cc
	src/model/BatchJobSubmitRequest.cc
	src/model/BatchJobSubmitResult.cc
	src/model/SendMessageRequest.cc
	src/model/SendMessageResult.cc )

add_library(cloud-siem ${LIB_TYPE}
	${cloud-siem_public_header}
	${cloud-siem_public_header_model}
	${cloud-siem_src})

set_target_properties(cloud-siem
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloud-siem
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cloud-siem
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CLOUD_SIEM_LIBRARY)
endif()

target_include_directories(cloud-siem
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cloud-siem
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cloud-siem
		jsoncpp)
	target_include_directories(cloud-siem
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cloud-siem
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cloud-siem
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cloud-siem
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cloud-siem
		jsoncpp)
endif()

install(FILES ${cloud-siem_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloud-siem)
install(FILES ${cloud-siem_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloud-siem/model)
install(TARGETS cloud-siem
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)