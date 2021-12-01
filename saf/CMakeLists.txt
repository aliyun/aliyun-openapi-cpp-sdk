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

set(saf_public_header 
	include/alibabacloud/saf/SafClient.h
	include/alibabacloud/saf/SafExport.h )

set(saf_public_header_model 
	include/alibabacloud/saf/model/ExecuteExtendServiceRequest.h
	include/alibabacloud/saf/model/ExecuteExtendServiceResult.h
	include/alibabacloud/saf/model/ExecuteRequestRequest.h
	include/alibabacloud/saf/model/ExecuteRequestResult.h
	include/alibabacloud/saf/model/ExecuteRequestMLRequest.h
	include/alibabacloud/saf/model/ExecuteRequestMLResult.h
	include/alibabacloud/saf/model/ExecuteRequestSGRequest.h
	include/alibabacloud/saf/model/ExecuteRequestSGResult.h
	include/alibabacloud/saf/model/RequestDecisionRequest.h
	include/alibabacloud/saf/model/RequestDecisionResult.h )

set(saf_src 
	src/SafClient.cc
	src/model/ExecuteExtendServiceRequest.cc
	src/model/ExecuteExtendServiceResult.cc
	src/model/ExecuteRequestRequest.cc
	src/model/ExecuteRequestResult.cc
	src/model/ExecuteRequestMLRequest.cc
	src/model/ExecuteRequestMLResult.cc
	src/model/ExecuteRequestSGRequest.cc
	src/model/ExecuteRequestSGResult.cc
	src/model/RequestDecisionRequest.cc
	src/model/RequestDecisionResult.cc )

add_library(saf ${LIB_TYPE}
	${saf_public_header}
	${saf_public_header_model}
	${saf_src})

set_target_properties(saf
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}saf
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(saf
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SAF_LIBRARY)
endif()

target_include_directories(saf
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(saf
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(saf
		jsoncpp)
	target_include_directories(saf
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(saf
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(saf
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(saf
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(saf
		jsoncpp)
endif()

install(FILES ${saf_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/saf)
install(FILES ${saf_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/saf/model)
install(TARGETS saf
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)