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

set(grace_public_header 
	include/alibabacloud/grace/GraceClient.h
	include/alibabacloud/grace/GraceExport.h )

set(grace_public_header_model 
	include/alibabacloud/grace/model/AnalyzeFileRequest.h
	include/alibabacloud/grace/model/AnalyzeFileResult.h
	include/alibabacloud/grace/model/GetFileRequest.h
	include/alibabacloud/grace/model/GetFileResult.h
	include/alibabacloud/grace/model/UploadFileByOSSRequest.h
	include/alibabacloud/grace/model/UploadFileByOSSResult.h
	include/alibabacloud/grace/model/UploadFileByURLRequest.h
	include/alibabacloud/grace/model/UploadFileByURLResult.h )

set(grace_src 
	src/GraceClient.cc
	src/model/AnalyzeFileRequest.cc
	src/model/AnalyzeFileResult.cc
	src/model/GetFileRequest.cc
	src/model/GetFileResult.cc
	src/model/UploadFileByOSSRequest.cc
	src/model/UploadFileByOSSResult.cc
	src/model/UploadFileByURLRequest.cc
	src/model/UploadFileByURLResult.cc )

add_library(grace ${LIB_TYPE}
	${grace_public_header}
	${grace_public_header_model}
	${grace_src})

set_target_properties(grace
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}grace
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(grace
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GRACE_LIBRARY)
endif()

target_include_directories(grace
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(grace
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(grace
		jsoncpp)
	target_include_directories(grace
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(grace
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(grace
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(grace
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(grace
		jsoncpp)
endif()

install(FILES ${grace_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/grace)
install(FILES ${grace_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/grace/model)
install(TARGETS grace
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)