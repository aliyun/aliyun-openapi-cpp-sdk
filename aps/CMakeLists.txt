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

set(aps_public_header 
	include/alibabacloud/aps/ApsClient.h
	include/alibabacloud/aps/ApsExport.h )

set(aps_public_header_model 
	include/alibabacloud/aps/model/GetFxCustomerTypeRequest.h
	include/alibabacloud/aps/model/GetFxCustomerTypeResult.h )

set(aps_src 
	src/ApsClient.cc
	src/model/GetFxCustomerTypeRequest.cc
	src/model/GetFxCustomerTypeResult.cc )

add_library(aps ${LIB_TYPE}
	${aps_public_header}
	${aps_public_header_model}
	${aps_src})

set_target_properties(aps
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aps
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(aps
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_APS_LIBRARY)
endif()

target_include_directories(aps
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(aps
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(aps
		jsoncpp)
	target_include_directories(aps
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(aps
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(aps
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(aps
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(aps
		jsoncpp)
endif()

install(FILES ${aps_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aps)
install(FILES ${aps_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aps/model)
install(TARGETS aps
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)