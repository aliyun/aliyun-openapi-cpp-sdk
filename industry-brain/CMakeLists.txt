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

set(industry-brain_public_header 
	include/alibabacloud/industry-brain/Industry_brainClient.h
	include/alibabacloud/industry-brain/Industry_brainExport.h )

set(industry-brain_public_header_model 
	include/alibabacloud/industry-brain/model/AsyncResponsePostRequest.h
	include/alibabacloud/industry-brain/model/AsyncResponsePostResult.h
	include/alibabacloud/industry-brain/model/GetAlgorithmHistoryResultRequest.h
	include/alibabacloud/industry-brain/model/GetAlgorithmHistoryResultResult.h
	include/alibabacloud/industry-brain/model/GetServiceResultAsyncRequest.h
	include/alibabacloud/industry-brain/model/GetServiceResultAsyncResult.h
	include/alibabacloud/industry-brain/model/InvokeServiceRequest.h
	include/alibabacloud/industry-brain/model/InvokeServiceResult.h
	include/alibabacloud/industry-brain/model/InvokeServiceAsyncRequest.h
	include/alibabacloud/industry-brain/model/InvokeServiceAsyncResult.h )

set(industry-brain_src 
	src/Industry-brainClient.cc
	src/model/AsyncResponsePostRequest.cc
	src/model/AsyncResponsePostResult.cc
	src/model/GetAlgorithmHistoryResultRequest.cc
	src/model/GetAlgorithmHistoryResultResult.cc
	src/model/GetServiceResultAsyncRequest.cc
	src/model/GetServiceResultAsyncResult.cc
	src/model/InvokeServiceRequest.cc
	src/model/InvokeServiceResult.cc
	src/model/InvokeServiceAsyncRequest.cc
	src/model/InvokeServiceAsyncResult.cc )

add_library(industry-brain ${LIB_TYPE}
	${industry-brain_public_header}
	${industry-brain_public_header_model}
	${industry-brain_src})

set_target_properties(industry-brain
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}industry-brain
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(industry-brain
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_INDUSTRY_BRAIN_LIBRARY)
endif()

target_include_directories(industry-brain
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(industry-brain
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(industry-brain
		jsoncpp)
	target_include_directories(industry-brain
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(industry-brain
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(industry-brain
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(industry-brain
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(industry-brain
		jsoncpp)
endif()

install(FILES ${industry-brain_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/industry-brain)
install(FILES ${industry-brain_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/industry-brain/model)
install(TARGETS industry-brain
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)