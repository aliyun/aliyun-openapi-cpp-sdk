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

set(aimiaobi_public_header 
	include/alibabacloud/aimiaobi/AiMiaoBiClient.h
	include/alibabacloud/aimiaobi/AiMiaoBiExport.h )

set(aimiaobi_public_header_model 
	include/alibabacloud/aimiaobi/model/CreateTokenRequest.h
	include/alibabacloud/aimiaobi/model/CreateTokenResult.h )

set(aimiaobi_src 
	src/AiMiaoBiClient.cc
	src/model/CreateTokenRequest.cc
	src/model/CreateTokenResult.cc )

add_library(aimiaobi ${LIB_TYPE}
	${aimiaobi_public_header}
	${aimiaobi_public_header_model}
	${aimiaobi_src})

set_target_properties(aimiaobi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aimiaobi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(aimiaobi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AIMIAOBI_LIBRARY)
endif()

target_include_directories(aimiaobi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(aimiaobi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(aimiaobi
		jsoncpp)
	target_include_directories(aimiaobi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(aimiaobi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(aimiaobi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(aimiaobi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(aimiaobi
		jsoncpp)
endif()

install(FILES ${aimiaobi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aimiaobi)
install(FILES ${aimiaobi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aimiaobi/model)
install(TARGETS aimiaobi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)