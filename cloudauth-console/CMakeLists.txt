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

set(cloudauth-console_public_header 
	include/alibabacloud/cloudauth-console/Cloudauth_consoleClient.h
	include/alibabacloud/cloudauth-console/Cloudauth_consoleExport.h )

set(cloudauth-console_public_header_model 
	include/alibabacloud/cloudauth-console/model/RetrieveFaceRequest.h
	include/alibabacloud/cloudauth-console/model/RetrieveFaceResult.h
	include/alibabacloud/cloudauth-console/model/UploadIdentifyRecordRequest.h
	include/alibabacloud/cloudauth-console/model/UploadIdentifyRecordResult.h )

set(cloudauth-console_src 
	src/Cloudauth-consoleClient.cc
	src/model/RetrieveFaceRequest.cc
	src/model/RetrieveFaceResult.cc
	src/model/UploadIdentifyRecordRequest.cc
	src/model/UploadIdentifyRecordResult.cc )

add_library(cloudauth-console ${LIB_TYPE}
	${cloudauth-console_public_header}
	${cloudauth-console_public_header_model}
	${cloudauth-console_src})

set_target_properties(cloudauth-console
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudauth-console
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cloudauth-console
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CLOUDAUTH_CONSOLE_LIBRARY)
endif()

target_include_directories(cloudauth-console
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cloudauth-console
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cloudauth-console
		jsoncpp)
	target_include_directories(cloudauth-console
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cloudauth-console
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cloudauth-console
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cloudauth-console
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cloudauth-console
		jsoncpp)
endif()

install(FILES ${cloudauth-console_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudauth-console)
install(FILES ${cloudauth-console_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudauth-console/model)
install(TARGETS cloudauth-console
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)