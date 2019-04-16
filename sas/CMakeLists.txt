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

set(sas_public_header 
	include/alibabacloud/sas/SasClient.h
	include/alibabacloud/sas/SasExport.h )

set(sas_public_header_model  )

set(sas_src 
	src/SasClient.cc )

add_library(sas ${LIB_TYPE}
	${sas_public_header}
	${sas_public_header_model}
	${sas_src})

set_target_properties(sas
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sas
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sas
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SAS_LIBRARY)
endif()

target_include_directories(sas
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sas
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sas
		jsoncpp)
	target_include_directories(sas
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sas
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sas
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sas
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sas
		jsoncpp)
endif()

install(FILES ${sas_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sas)
install(FILES ${sas_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sas/model)
install(TARGETS sas
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)