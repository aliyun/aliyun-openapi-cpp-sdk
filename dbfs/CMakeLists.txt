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

set(dbfs_public_header 
	include/alibabacloud/dbfs/DBFSClient.h
	include/alibabacloud/dbfs/DBFSExport.h )

set(dbfs_public_header_model 
	include/alibabacloud/dbfs/model/AttachDbfsRequest.h
	include/alibabacloud/dbfs/model/AttachDbfsResult.h
	include/alibabacloud/dbfs/model/CreateDbfsRequest.h
	include/alibabacloud/dbfs/model/CreateDbfsResult.h
	include/alibabacloud/dbfs/model/DeleteDbfsRequest.h
	include/alibabacloud/dbfs/model/DeleteDbfsResult.h
	include/alibabacloud/dbfs/model/DetachDbfsRequest.h
	include/alibabacloud/dbfs/model/DetachDbfsResult.h
	include/alibabacloud/dbfs/model/GetDbfsRequest.h
	include/alibabacloud/dbfs/model/GetDbfsResult.h
	include/alibabacloud/dbfs/model/ListDbfsRequest.h
	include/alibabacloud/dbfs/model/ListDbfsResult.h
	include/alibabacloud/dbfs/model/ResizeDbfsRequest.h
	include/alibabacloud/dbfs/model/ResizeDbfsResult.h )

set(dbfs_src 
	src/DBFSClient.cc
	src/model/AttachDbfsRequest.cc
	src/model/AttachDbfsResult.cc
	src/model/CreateDbfsRequest.cc
	src/model/CreateDbfsResult.cc
	src/model/DeleteDbfsRequest.cc
	src/model/DeleteDbfsResult.cc
	src/model/DetachDbfsRequest.cc
	src/model/DetachDbfsResult.cc
	src/model/GetDbfsRequest.cc
	src/model/GetDbfsResult.cc
	src/model/ListDbfsRequest.cc
	src/model/ListDbfsResult.cc
	src/model/ResizeDbfsRequest.cc
	src/model/ResizeDbfsResult.cc )

add_library(dbfs ${LIB_TYPE}
	${dbfs_public_header}
	${dbfs_public_header_model}
	${dbfs_src})

set_target_properties(dbfs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dbfs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dbfs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DBFS_LIBRARY)
endif()

target_include_directories(dbfs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dbfs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dbfs
		jsoncpp)
	target_include_directories(dbfs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dbfs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dbfs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dbfs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dbfs
		jsoncpp)
endif()

install(FILES ${dbfs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dbfs)
install(FILES ${dbfs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dbfs/model)
install(TARGETS dbfs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)