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

set(safconsole_public_header 
	include/alibabacloud/safconsole/SafconsoleClient.h
	include/alibabacloud/safconsole/SafconsoleExport.h )

set(safconsole_public_header_model 
	include/alibabacloud/safconsole/model/RevokeFeedbackRequest.h
	include/alibabacloud/safconsole/model/RevokeFeedbackResult.h
	include/alibabacloud/safconsole/model/SendFeedbackRequest.h
	include/alibabacloud/safconsole/model/SendFeedbackResult.h )

set(safconsole_src 
	src/SafconsoleClient.cc
	src/model/RevokeFeedbackRequest.cc
	src/model/RevokeFeedbackResult.cc
	src/model/SendFeedbackRequest.cc
	src/model/SendFeedbackResult.cc )

add_library(safconsole ${LIB_TYPE}
	${safconsole_public_header}
	${safconsole_public_header_model}
	${safconsole_src})

set_target_properties(safconsole
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}safconsole
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(safconsole
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SAFCONSOLE_LIBRARY)
endif()

target_include_directories(safconsole
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(safconsole
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(safconsole
		jsoncpp)
	target_include_directories(safconsole
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(safconsole
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(safconsole
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(safconsole
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(safconsole
		jsoncpp)
endif()

install(FILES ${safconsole_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/safconsole)
install(FILES ${safconsole_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/safconsole/model)
install(TARGETS safconsole
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)