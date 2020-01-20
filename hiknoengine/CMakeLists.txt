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

set(hiknoengine_public_header 
	include/alibabacloud/hiknoengine/HiknoengineClient.h
	include/alibabacloud/hiknoengine/HiknoengineExport.h )

set(hiknoengine_public_header_model 
	include/alibabacloud/hiknoengine/model/TranslateTextRequest.h
	include/alibabacloud/hiknoengine/model/TranslateTextResult.h )

set(hiknoengine_src 
	src/HiknoengineClient.cc
	src/model/TranslateTextRequest.cc
	src/model/TranslateTextResult.cc )

add_library(hiknoengine ${LIB_TYPE}
	${hiknoengine_public_header}
	${hiknoengine_public_header_model}
	${hiknoengine_src})

set_target_properties(hiknoengine
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hiknoengine
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(hiknoengine
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_HIKNOENGINE_LIBRARY)
endif()

target_include_directories(hiknoengine
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(hiknoengine
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(hiknoengine
		jsoncpp)
	target_include_directories(hiknoengine
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(hiknoengine
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(hiknoengine
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(hiknoengine
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(hiknoengine
		jsoncpp)
endif()

install(FILES ${hiknoengine_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hiknoengine)
install(FILES ${hiknoengine_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hiknoengine/model)
install(TARGETS hiknoengine
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)