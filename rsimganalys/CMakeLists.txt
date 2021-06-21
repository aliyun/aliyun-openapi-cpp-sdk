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

set(rsimganalys_public_header 
	include/alibabacloud/rsimganalys/RsimganalysClient.h
	include/alibabacloud/rsimganalys/RsimganalysExport.h )

set(rsimganalys_public_header_model 
	include/alibabacloud/rsimganalys/model/CreateImageRequest.h
	include/alibabacloud/rsimganalys/model/CreateImageResult.h
	include/alibabacloud/rsimganalys/model/CreateTaskRequest.h
	include/alibabacloud/rsimganalys/model/CreateTaskResult.h
	include/alibabacloud/rsimganalys/model/DeleteImageRequest.h
	include/alibabacloud/rsimganalys/model/DeleteImageResult.h
	include/alibabacloud/rsimganalys/model/DeleteTaskRequest.h
	include/alibabacloud/rsimganalys/model/DeleteTaskResult.h
	include/alibabacloud/rsimganalys/model/GetImageRequest.h
	include/alibabacloud/rsimganalys/model/GetImageResult.h
	include/alibabacloud/rsimganalys/model/GetShpInfoRequest.h
	include/alibabacloud/rsimganalys/model/GetShpInfoResult.h
	include/alibabacloud/rsimganalys/model/GetTaskRequest.h
	include/alibabacloud/rsimganalys/model/GetTaskResult.h
	include/alibabacloud/rsimganalys/model/ListTasksRequest.h
	include/alibabacloud/rsimganalys/model/ListTasksResult.h )

set(rsimganalys_src 
	src/RsimganalysClient.cc
	src/model/CreateImageRequest.cc
	src/model/CreateImageResult.cc
	src/model/CreateTaskRequest.cc
	src/model/CreateTaskResult.cc
	src/model/DeleteImageRequest.cc
	src/model/DeleteImageResult.cc
	src/model/DeleteTaskRequest.cc
	src/model/DeleteTaskResult.cc
	src/model/GetImageRequest.cc
	src/model/GetImageResult.cc
	src/model/GetShpInfoRequest.cc
	src/model/GetShpInfoResult.cc
	src/model/GetTaskRequest.cc
	src/model/GetTaskResult.cc
	src/model/ListTasksRequest.cc
	src/model/ListTasksResult.cc )

add_library(rsimganalys ${LIB_TYPE}
	${rsimganalys_public_header}
	${rsimganalys_public_header_model}
	${rsimganalys_src})

set_target_properties(rsimganalys
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rsimganalys
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(rsimganalys
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_RSIMGANALYS_LIBRARY)
endif()

target_include_directories(rsimganalys
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(rsimganalys
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(rsimganalys
		jsoncpp)
	target_include_directories(rsimganalys
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(rsimganalys
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(rsimganalys
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(rsimganalys
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(rsimganalys
		jsoncpp)
endif()

install(FILES ${rsimganalys_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/rsimganalys)
install(FILES ${rsimganalys_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/rsimganalys/model)
install(TARGETS rsimganalys
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)