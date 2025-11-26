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

set(anytrans_public_header 
	include/alibabacloud/anytrans/AnyTransClient.h
	include/alibabacloud/anytrans/AnyTransExport.h )

set(anytrans_public_header_model 
	include/alibabacloud/anytrans/model/BatchTranslateRequest.h
	include/alibabacloud/anytrans/model/BatchTranslateResult.h
	include/alibabacloud/anytrans/model/BatchTranslateForHtmlRequest.h
	include/alibabacloud/anytrans/model/BatchTranslateForHtmlResult.h
	include/alibabacloud/anytrans/model/GetDocTranslateTaskRequest.h
	include/alibabacloud/anytrans/model/GetDocTranslateTaskResult.h
	include/alibabacloud/anytrans/model/GetHtmlTranslateTaskRequest.h
	include/alibabacloud/anytrans/model/GetHtmlTranslateTaskResult.h
	include/alibabacloud/anytrans/model/GetImageTranslateTaskRequest.h
	include/alibabacloud/anytrans/model/GetImageTranslateTaskResult.h
	include/alibabacloud/anytrans/model/GetLongTextTranslateTaskRequest.h
	include/alibabacloud/anytrans/model/GetLongTextTranslateTaskResult.h
	include/alibabacloud/anytrans/model/SubmitDocTranslateTaskRequest.h
	include/alibabacloud/anytrans/model/SubmitDocTranslateTaskResult.h
	include/alibabacloud/anytrans/model/SubmitHtmlTranslateTaskRequest.h
	include/alibabacloud/anytrans/model/SubmitHtmlTranslateTaskResult.h
	include/alibabacloud/anytrans/model/SubmitImageTranslateTaskRequest.h
	include/alibabacloud/anytrans/model/SubmitImageTranslateTaskResult.h
	include/alibabacloud/anytrans/model/SubmitLongTextTranslateTaskRequest.h
	include/alibabacloud/anytrans/model/SubmitLongTextTranslateTaskResult.h
	include/alibabacloud/anytrans/model/TermEditRequest.h
	include/alibabacloud/anytrans/model/TermEditResult.h
	include/alibabacloud/anytrans/model/TermQueryRequest.h
	include/alibabacloud/anytrans/model/TermQueryResult.h
	include/alibabacloud/anytrans/model/TextTranslateRequest.h
	include/alibabacloud/anytrans/model/TextTranslateResult.h )

set(anytrans_src 
	src/AnyTransClient.cc
	src/model/BatchTranslateRequest.cc
	src/model/BatchTranslateResult.cc
	src/model/BatchTranslateForHtmlRequest.cc
	src/model/BatchTranslateForHtmlResult.cc
	src/model/GetDocTranslateTaskRequest.cc
	src/model/GetDocTranslateTaskResult.cc
	src/model/GetHtmlTranslateTaskRequest.cc
	src/model/GetHtmlTranslateTaskResult.cc
	src/model/GetImageTranslateTaskRequest.cc
	src/model/GetImageTranslateTaskResult.cc
	src/model/GetLongTextTranslateTaskRequest.cc
	src/model/GetLongTextTranslateTaskResult.cc
	src/model/SubmitDocTranslateTaskRequest.cc
	src/model/SubmitDocTranslateTaskResult.cc
	src/model/SubmitHtmlTranslateTaskRequest.cc
	src/model/SubmitHtmlTranslateTaskResult.cc
	src/model/SubmitImageTranslateTaskRequest.cc
	src/model/SubmitImageTranslateTaskResult.cc
	src/model/SubmitLongTextTranslateTaskRequest.cc
	src/model/SubmitLongTextTranslateTaskResult.cc
	src/model/TermEditRequest.cc
	src/model/TermEditResult.cc
	src/model/TermQueryRequest.cc
	src/model/TermQueryResult.cc
	src/model/TextTranslateRequest.cc
	src/model/TextTranslateResult.cc )

add_library(anytrans ${LIB_TYPE}
	${anytrans_public_header}
	${anytrans_public_header_model}
	${anytrans_src})

set_target_properties(anytrans
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}anytrans
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(anytrans
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ANYTRANS_LIBRARY)
endif()

target_include_directories(anytrans
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(anytrans
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(anytrans
		jsoncpp)
	target_include_directories(anytrans
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(anytrans
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(anytrans
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(anytrans
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(anytrans
		jsoncpp)
endif()

install(FILES ${anytrans_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/anytrans)
install(FILES ${anytrans_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/anytrans/model)
install(TARGETS anytrans
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)