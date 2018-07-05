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

set(chatbot_public_header 
	include/alibabacloud/chatbot/ChatbotClient.h
	include/alibabacloud/chatbot/ChatbotExport.h )

set(chatbot_public_header_model 
	include/alibabacloud/chatbot/model/ChatRequest.h
	include/alibabacloud/chatbot/model/ChatResult.h )

set(chatbot_src 
	src/ChatbotClient.cc
	src/model/ChatRequest.cc
	src/model/ChatResult.cc )

add_library(chatbot ${LIB_TYPE}
	${chatbot_public_header}
	${chatbot_public_header_model}
	${chatbot_src})

set_target_properties(chatbot
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}chatbot
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(chatbot
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CHATBOT_LIBRARY)
endif()

target_include_directories(chatbot
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(chatbot
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(chatbot
		jsoncpp)
	target_include_directories(chatbot
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(chatbot
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(chatbot
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(chatbot
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(chatbot
		jsoncpp)
endif()

install(FILES ${chatbot_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/chatbot)
install(FILES ${chatbot_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/chatbot/model)
install(TARGETS chatbot
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)