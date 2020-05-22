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

set(et-industry-openapi_public_header 
	include/alibabacloud/et-industry-openapi/Et_industry_openapiClient.h
	include/alibabacloud/et-industry-openapi/Et_industry_openapiExport.h )

set(et-industry-openapi_public_header_model 
	include/alibabacloud/et-industry-openapi/model/UploadDeviceDataRequest.h
	include/alibabacloud/et-industry-openapi/model/UploadDeviceDataResult.h )

set(et-industry-openapi_src 
	src/Et-industry-openapiClient.cc
	src/model/UploadDeviceDataRequest.cc
	src/model/UploadDeviceDataResult.cc )

add_library(et-industry-openapi ${LIB_TYPE}
	${et-industry-openapi_public_header}
	${et-industry-openapi_public_header_model}
	${et-industry-openapi_src})

set_target_properties(et-industry-openapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}et-industry-openapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(et-industry-openapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ET_INDUSTRY_OPENAPI_LIBRARY)
endif()

target_include_directories(et-industry-openapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(et-industry-openapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(et-industry-openapi
		jsoncpp)
	target_include_directories(et-industry-openapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(et-industry-openapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(et-industry-openapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(et-industry-openapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(et-industry-openapi
		jsoncpp)
endif()

install(FILES ${et-industry-openapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/et-industry-openapi)
install(FILES ${et-industry-openapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/et-industry-openapi/model)
install(TARGETS et-industry-openapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)