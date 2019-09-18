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

set(teslastream_public_header 
	include/alibabacloud/teslastream/TeslaStreamClient.h
	include/alibabacloud/teslastream/TeslaStreamExport.h )

set(teslastream_public_header_model 
	include/alibabacloud/teslastream/model/BatchGetJobMetricInfoRequest.h
	include/alibabacloud/teslastream/model/BatchGetJobMetricInfoResult.h
	include/alibabacloud/teslastream/model/BatchGetPluginConfigInfoRequest.h
	include/alibabacloud/teslastream/model/BatchGetPluginConfigInfoResult.h
	include/alibabacloud/teslastream/model/GetJobTopologyRequest.h
	include/alibabacloud/teslastream/model/GetJobTopologyResult.h )

set(teslastream_src 
	src/TeslaStreamClient.cc
	src/model/BatchGetJobMetricInfoRequest.cc
	src/model/BatchGetJobMetricInfoResult.cc
	src/model/BatchGetPluginConfigInfoRequest.cc
	src/model/BatchGetPluginConfigInfoResult.cc
	src/model/GetJobTopologyRequest.cc
	src/model/GetJobTopologyResult.cc )

add_library(teslastream ${LIB_TYPE}
	${teslastream_public_header}
	${teslastream_public_header_model}
	${teslastream_src})

set_target_properties(teslastream
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}teslastream
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(teslastream
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_TESLASTREAM_LIBRARY)
endif()

target_include_directories(teslastream
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(teslastream
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(teslastream
		jsoncpp)
	target_include_directories(teslastream
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(teslastream
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(teslastream
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(teslastream
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(teslastream
		jsoncpp)
endif()

install(FILES ${teslastream_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/teslastream)
install(FILES ${teslastream_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/teslastream/model)
install(TARGETS teslastream
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)