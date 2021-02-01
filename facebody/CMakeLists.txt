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

set(facebody_public_header 
	include/alibabacloud/facebody/FacebodyClient.h
	include/alibabacloud/facebody/FacebodyExport.h )

set(facebody_public_header_model 
	include/alibabacloud/facebody/model/DetectIPCPedestrianOptimizedRequest.h
	include/alibabacloud/facebody/model/DetectIPCPedestrianOptimizedResult.h
	include/alibabacloud/facebody/model/ExecuteServerSideVerificationRequest.h
	include/alibabacloud/facebody/model/ExecuteServerSideVerificationResult.h )

set(facebody_src 
	src/FacebodyClient.cc
	src/model/DetectIPCPedestrianOptimizedRequest.cc
	src/model/DetectIPCPedestrianOptimizedResult.cc
	src/model/ExecuteServerSideVerificationRequest.cc
	src/model/ExecuteServerSideVerificationResult.cc )

add_library(facebody ${LIB_TYPE}
	${facebody_public_header}
	${facebody_public_header_model}
	${facebody_src})

set_target_properties(facebody
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}facebody
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(facebody
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_FACEBODY_LIBRARY)
endif()

target_include_directories(facebody
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(facebody
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(facebody
		jsoncpp)
	target_include_directories(facebody
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(facebody
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(facebody
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(facebody
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(facebody
		jsoncpp)
endif()

install(FILES ${facebody_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/facebody)
install(FILES ${facebody_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/facebody/model)
install(TARGETS facebody
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)