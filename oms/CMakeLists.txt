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

set(oms_public_header 
	include/alibabacloud/oms/OmsClient.h
	include/alibabacloud/oms/OmsExport.h )

set(oms_public_header_model 
	include/alibabacloud/oms/model/GetDomainFieldsRequest.h
	include/alibabacloud/oms/model/GetDomainFieldsResult.h )

set(oms_src 
	src/OmsClient.cc
	src/model/GetDomainFieldsRequest.cc
	src/model/GetDomainFieldsResult.cc )

add_library(oms ${LIB_TYPE}
	${oms_public_header}
	${oms_public_header_model}
	${oms_src})

set_target_properties(oms
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}oms
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(oms
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_OMS_LIBRARY)
endif()

target_include_directories(oms
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(oms
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(oms
		jsoncpp)
	target_include_directories(oms
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(oms
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(oms
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(oms
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(oms
		jsoncpp)
endif()

install(FILES ${oms_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/oms)
install(FILES ${oms_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/oms/model)
install(TARGETS oms
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)