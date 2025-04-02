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

set(aipodcast_public_header 
	include/alibabacloud/aipodcast/AIPodcastClient.h
	include/alibabacloud/aipodcast/AIPodcastExport.h )

set(aipodcast_public_header_model 
	include/alibabacloud/aipodcast/model/PodcastTaskResultQueryRequest.h
	include/alibabacloud/aipodcast/model/PodcastTaskResultQueryResult.h
	include/alibabacloud/aipodcast/model/PodcastTaskSubmitRequest.h
	include/alibabacloud/aipodcast/model/PodcastTaskSubmitResult.h )

set(aipodcast_src 
	src/AIPodcastClient.cc
	src/model/PodcastTaskResultQueryRequest.cc
	src/model/PodcastTaskResultQueryResult.cc
	src/model/PodcastTaskSubmitRequest.cc
	src/model/PodcastTaskSubmitResult.cc )

add_library(aipodcast ${LIB_TYPE}
	${aipodcast_public_header}
	${aipodcast_public_header_model}
	${aipodcast_src})

set_target_properties(aipodcast
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aipodcast
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(aipodcast
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AIPODCAST_LIBRARY)
endif()

target_include_directories(aipodcast
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(aipodcast
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(aipodcast
		jsoncpp)
	target_include_directories(aipodcast
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(aipodcast
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(aipodcast
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(aipodcast
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(aipodcast
		jsoncpp)
endif()

install(FILES ${aipodcast_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aipodcast)
install(FILES ${aipodcast_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aipodcast/model)
install(TARGETS aipodcast
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)