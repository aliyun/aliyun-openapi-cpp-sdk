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

set(arms4finance_public_header 
	include/alibabacloud/arms4finance/ARMS4FINANCEClient.h
	include/alibabacloud/arms4finance/ARMS4FINANCEExport.h )

set(arms4finance_public_header_model 
	include/alibabacloud/arms4finance/model/ARMSQueryDataSetRequest.h
	include/alibabacloud/arms4finance/model/ARMSQueryDataSetResult.h
	include/alibabacloud/arms4finance/model/WhereInDimQueryRequest.h
	include/alibabacloud/arms4finance/model/WhereInDimQueryResult.h )

set(arms4finance_src 
	src/ARMS4FINANCEClient.cc
	src/model/ARMSQueryDataSetRequest.cc
	src/model/ARMSQueryDataSetResult.cc
	src/model/WhereInDimQueryRequest.cc
	src/model/WhereInDimQueryResult.cc )

add_library(arms4finance ${LIB_TYPE}
	${arms4finance_public_header}
	${arms4finance_public_header_model}
	${arms4finance_src})

set_target_properties(arms4finance
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}arms4finance
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(arms4finance
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ARMS4FINANCE_LIBRARY)
endif()

target_include_directories(arms4finance
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(arms4finance
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(arms4finance
		jsoncpp)
	target_include_directories(arms4finance
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(arms4finance
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(arms4finance
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(arms4finance
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(arms4finance
		jsoncpp)
endif()

install(FILES ${arms4finance_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/arms4finance)
install(FILES ${arms4finance_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/arms4finance/model)
install(TARGETS arms4finance
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)