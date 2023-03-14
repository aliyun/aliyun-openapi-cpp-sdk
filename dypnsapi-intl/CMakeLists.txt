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

set(dypnsapi-intl_public_header 
	include/alibabacloud/dypnsapi-intl/Dypnsapi_intlClient.h
	include/alibabacloud/dypnsapi-intl/Dypnsapi_intlExport.h )

set(dypnsapi-intl_public_header_model 
	include/alibabacloud/dypnsapi-intl/model/CheckVerificationRequest.h
	include/alibabacloud/dypnsapi-intl/model/CheckVerificationResult.h
	include/alibabacloud/dypnsapi-intl/model/SearchVerificationRequest.h
	include/alibabacloud/dypnsapi-intl/model/SearchVerificationResult.h
	include/alibabacloud/dypnsapi-intl/model/StartVerificationRequest.h
	include/alibabacloud/dypnsapi-intl/model/StartVerificationResult.h )

set(dypnsapi-intl_src 
	src/Dypnsapi-intlClient.cc
	src/model/CheckVerificationRequest.cc
	src/model/CheckVerificationResult.cc
	src/model/SearchVerificationRequest.cc
	src/model/SearchVerificationResult.cc
	src/model/StartVerificationRequest.cc
	src/model/StartVerificationResult.cc )

add_library(dypnsapi-intl ${LIB_TYPE}
	${dypnsapi-intl_public_header}
	${dypnsapi-intl_public_header_model}
	${dypnsapi-intl_src})

set_target_properties(dypnsapi-intl
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dypnsapi-intl
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dypnsapi-intl
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DYPNSAPI_INTL_LIBRARY)
endif()

target_include_directories(dypnsapi-intl
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dypnsapi-intl
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dypnsapi-intl
		jsoncpp)
	target_include_directories(dypnsapi-intl
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dypnsapi-intl
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dypnsapi-intl
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dypnsapi-intl
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dypnsapi-intl
		jsoncpp)
endif()

install(FILES ${dypnsapi-intl_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dypnsapi-intl)
install(FILES ${dypnsapi-intl_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dypnsapi-intl/model)
install(TARGETS dypnsapi-intl
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)