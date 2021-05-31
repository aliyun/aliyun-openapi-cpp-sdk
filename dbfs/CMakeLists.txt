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
	include/alibabacloud/dbfs/model/AddTagsBatchRequest.h
	include/alibabacloud/dbfs/model/AddTagsBatchResult.h
	include/alibabacloud/dbfs/model/AttachDbfsRequest.h
	include/alibabacloud/dbfs/model/AttachDbfsResult.h
	include/alibabacloud/dbfs/model/CreateConstantsRequest.h
	include/alibabacloud/dbfs/model/CreateConstantsResult.h
	include/alibabacloud/dbfs/model/CreateDbfsRequest.h
	include/alibabacloud/dbfs/model/CreateDbfsResult.h
	include/alibabacloud/dbfs/model/CreateServiceLinkedRoleRequest.h
	include/alibabacloud/dbfs/model/CreateServiceLinkedRoleResult.h
	include/alibabacloud/dbfs/model/CreateSnapshotRequest.h
	include/alibabacloud/dbfs/model/CreateSnapshotResult.h
	include/alibabacloud/dbfs/model/DbfsRecordRequest.h
	include/alibabacloud/dbfs/model/DbfsRecordResult.h
	include/alibabacloud/dbfs/model/DeleteConstantsRequest.h
	include/alibabacloud/dbfs/model/DeleteConstantsResult.h
	include/alibabacloud/dbfs/model/DeleteDbfsRequest.h
	include/alibabacloud/dbfs/model/DeleteDbfsResult.h
	include/alibabacloud/dbfs/model/DeleteSnapshotRequest.h
	include/alibabacloud/dbfs/model/DeleteSnapshotResult.h
	include/alibabacloud/dbfs/model/DeleteTagsBatchRequest.h
	include/alibabacloud/dbfs/model/DeleteTagsBatchResult.h
	include/alibabacloud/dbfs/model/DetachDbfsRequest.h
	include/alibabacloud/dbfs/model/DetachDbfsResult.h
	include/alibabacloud/dbfs/model/GenerateUpgradeRecordRequest.h
	include/alibabacloud/dbfs/model/GenerateUpgradeRecordResult.h
	include/alibabacloud/dbfs/model/GetDbfsRequest.h
	include/alibabacloud/dbfs/model/GetDbfsResult.h
	include/alibabacloud/dbfs/model/GetServiceLinkedRoleRequest.h
	include/alibabacloud/dbfs/model/GetServiceLinkedRoleResult.h
	include/alibabacloud/dbfs/model/GetSynchronizConstantsRequest.h
	include/alibabacloud/dbfs/model/GetSynchronizConstantsResult.h
	include/alibabacloud/dbfs/model/InsertSynchronizConstantsRequest.h
	include/alibabacloud/dbfs/model/InsertSynchronizConstantsResult.h
	include/alibabacloud/dbfs/model/ListConstantsRequest.h
	include/alibabacloud/dbfs/model/ListConstantsResult.h
	include/alibabacloud/dbfs/model/ListDbfsRequest.h
	include/alibabacloud/dbfs/model/ListDbfsResult.h
	include/alibabacloud/dbfs/model/ListSnapshotRequest.h
	include/alibabacloud/dbfs/model/ListSnapshotResult.h
	include/alibabacloud/dbfs/model/ListTagKeysRequest.h
	include/alibabacloud/dbfs/model/ListTagKeysResult.h
	include/alibabacloud/dbfs/model/ListTagValuesRequest.h
	include/alibabacloud/dbfs/model/ListTagValuesResult.h
	include/alibabacloud/dbfs/model/ListTaskRequest.h
	include/alibabacloud/dbfs/model/ListTaskResult.h
	include/alibabacloud/dbfs/model/OpreateConstantsRequest.h
	include/alibabacloud/dbfs/model/OpreateConstantsResult.h
	include/alibabacloud/dbfs/model/PublishUpgradeTaskRequest.h
	include/alibabacloud/dbfs/model/PublishUpgradeTaskResult.h
	include/alibabacloud/dbfs/model/RenameDbfsRequest.h
	include/alibabacloud/dbfs/model/RenameDbfsResult.h
	include/alibabacloud/dbfs/model/ResetDbfsRequest.h
	include/alibabacloud/dbfs/model/ResetDbfsResult.h
	include/alibabacloud/dbfs/model/ResizeDbfsRequest.h
	include/alibabacloud/dbfs/model/ResizeDbfsResult.h
	include/alibabacloud/dbfs/model/StopUpgradeTaskRequest.h
	include/alibabacloud/dbfs/model/StopUpgradeTaskResult.h
	include/alibabacloud/dbfs/model/TagDbfsRequest.h
	include/alibabacloud/dbfs/model/TagDbfsResult.h
	include/alibabacloud/dbfs/model/UpdateConstantsRequest.h
	include/alibabacloud/dbfs/model/UpdateConstantsResult.h
	include/alibabacloud/dbfs/model/UpdateTaskRequest.h
	include/alibabacloud/dbfs/model/UpdateTaskResult.h )

set(dbfs_src 
	src/DBFSClient.cc
	src/model/AddTagsBatchRequest.cc
	src/model/AddTagsBatchResult.cc
	src/model/AttachDbfsRequest.cc
	src/model/AttachDbfsResult.cc
	src/model/CreateConstantsRequest.cc
	src/model/CreateConstantsResult.cc
	src/model/CreateDbfsRequest.cc
	src/model/CreateDbfsResult.cc
	src/model/CreateServiceLinkedRoleRequest.cc
	src/model/CreateServiceLinkedRoleResult.cc
	src/model/CreateSnapshotRequest.cc
	src/model/CreateSnapshotResult.cc
	src/model/DbfsRecordRequest.cc
	src/model/DbfsRecordResult.cc
	src/model/DeleteConstantsRequest.cc
	src/model/DeleteConstantsResult.cc
	src/model/DeleteDbfsRequest.cc
	src/model/DeleteDbfsResult.cc
	src/model/DeleteSnapshotRequest.cc
	src/model/DeleteSnapshotResult.cc
	src/model/DeleteTagsBatchRequest.cc
	src/model/DeleteTagsBatchResult.cc
	src/model/DetachDbfsRequest.cc
	src/model/DetachDbfsResult.cc
	src/model/GenerateUpgradeRecordRequest.cc
	src/model/GenerateUpgradeRecordResult.cc
	src/model/GetDbfsRequest.cc
	src/model/GetDbfsResult.cc
	src/model/GetServiceLinkedRoleRequest.cc
	src/model/GetServiceLinkedRoleResult.cc
	src/model/GetSynchronizConstantsRequest.cc
	src/model/GetSynchronizConstantsResult.cc
	src/model/InsertSynchronizConstantsRequest.cc
	src/model/InsertSynchronizConstantsResult.cc
	src/model/ListConstantsRequest.cc
	src/model/ListConstantsResult.cc
	src/model/ListDbfsRequest.cc
	src/model/ListDbfsResult.cc
	src/model/ListSnapshotRequest.cc
	src/model/ListSnapshotResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagValuesRequest.cc
	src/model/ListTagValuesResult.cc
	src/model/ListTaskRequest.cc
	src/model/ListTaskResult.cc
	src/model/OpreateConstantsRequest.cc
	src/model/OpreateConstantsResult.cc
	src/model/PublishUpgradeTaskRequest.cc
	src/model/PublishUpgradeTaskResult.cc
	src/model/RenameDbfsRequest.cc
	src/model/RenameDbfsResult.cc
	src/model/ResetDbfsRequest.cc
	src/model/ResetDbfsResult.cc
	src/model/ResizeDbfsRequest.cc
	src/model/ResizeDbfsResult.cc
	src/model/StopUpgradeTaskRequest.cc
	src/model/StopUpgradeTaskResult.cc
	src/model/TagDbfsRequest.cc
	src/model/TagDbfsResult.cc
	src/model/UpdateConstantsRequest.cc
	src/model/UpdateConstantsResult.cc
	src/model/UpdateTaskRequest.cc
	src/model/UpdateTaskResult.cc )

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