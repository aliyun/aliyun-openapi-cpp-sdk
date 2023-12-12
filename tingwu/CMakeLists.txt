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

set(tingwu_public_header 
	include/alibabacloud/tingwu/TingwuClient.h
	include/alibabacloud/tingwu/TingwuExport.h )

set(tingwu_public_header_model 
	include/alibabacloud/tingwu/model/CreateTaskRequest.h
	include/alibabacloud/tingwu/model/CreateTaskResult.h
	include/alibabacloud/tingwu/model/CreateTranscriptionPhrasesRequest.h
	include/alibabacloud/tingwu/model/CreateTranscriptionPhrasesResult.h
	include/alibabacloud/tingwu/model/DeleteTranscriptionPhrasesRequest.h
	include/alibabacloud/tingwu/model/DeleteTranscriptionPhrasesResult.h
	include/alibabacloud/tingwu/model/GetTaskInfoRequest.h
	include/alibabacloud/tingwu/model/GetTaskInfoResult.h
	include/alibabacloud/tingwu/model/GetTranscriptionPhrasesRequest.h
	include/alibabacloud/tingwu/model/GetTranscriptionPhrasesResult.h
	include/alibabacloud/tingwu/model/ListTranscriptionPhrasesRequest.h
	include/alibabacloud/tingwu/model/ListTranscriptionPhrasesResult.h
	include/alibabacloud/tingwu/model/UpdateTranscriptionPhrasesRequest.h
	include/alibabacloud/tingwu/model/UpdateTranscriptionPhrasesResult.h )

set(tingwu_src 
	src/TingwuClient.cc
	src/model/CreateTaskRequest.cc
	src/model/CreateTaskResult.cc
	src/model/CreateTranscriptionPhrasesRequest.cc
	src/model/CreateTranscriptionPhrasesResult.cc
	src/model/DeleteTranscriptionPhrasesRequest.cc
	src/model/DeleteTranscriptionPhrasesResult.cc
	src/model/GetTaskInfoRequest.cc
	src/model/GetTaskInfoResult.cc
	src/model/GetTranscriptionPhrasesRequest.cc
	src/model/GetTranscriptionPhrasesResult.cc
	src/model/ListTranscriptionPhrasesRequest.cc
	src/model/ListTranscriptionPhrasesResult.cc
	src/model/UpdateTranscriptionPhrasesRequest.cc
	src/model/UpdateTranscriptionPhrasesResult.cc )

add_library(tingwu ${LIB_TYPE}
	${tingwu_public_header}
	${tingwu_public_header_model}
	${tingwu_src})

set_target_properties(tingwu
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tingwu
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(tingwu
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_TINGWU_LIBRARY)
endif()

target_include_directories(tingwu
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(tingwu
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(tingwu
		jsoncpp)
	target_include_directories(tingwu
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(tingwu
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(tingwu
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(tingwu
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(tingwu
		jsoncpp)
endif()

install(FILES ${tingwu_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/tingwu)
install(FILES ${tingwu_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/tingwu/model)
install(TARGETS tingwu
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)