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

set(codeup_public_header 
	include/alibabacloud/codeup/CodeupClient.h
	include/alibabacloud/codeup/CodeupExport.h )

set(codeup_public_header_model 
	include/alibabacloud/codeup/model/AddGroupMemberRequest.h
	include/alibabacloud/codeup/model/AddGroupMemberResult.h
	include/alibabacloud/codeup/model/AddRepositoryMemberRequest.h
	include/alibabacloud/codeup/model/AddRepositoryMemberResult.h
	include/alibabacloud/codeup/model/CreateFileRequest.h
	include/alibabacloud/codeup/model/CreateFileResult.h
	include/alibabacloud/codeup/model/CreateRepositoryRequest.h
	include/alibabacloud/codeup/model/CreateRepositoryResult.h
	include/alibabacloud/codeup/model/CreateRepositoryGroupRequest.h
	include/alibabacloud/codeup/model/CreateRepositoryGroupResult.h
	include/alibabacloud/codeup/model/DeleteFileRequest.h
	include/alibabacloud/codeup/model/DeleteFileResult.h
	include/alibabacloud/codeup/model/DeleteGroupMemberRequest.h
	include/alibabacloud/codeup/model/DeleteGroupMemberResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryGroupRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryGroupResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryMemberRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryMemberResult.h
	include/alibabacloud/codeup/model/GetCodeupOrganizationRequest.h
	include/alibabacloud/codeup/model/GetCodeupOrganizationResult.h
	include/alibabacloud/codeup/model/GetFileBlobsRequest.h
	include/alibabacloud/codeup/model/GetFileBlobsResult.h
	include/alibabacloud/codeup/model/ListGroupMemberRequest.h
	include/alibabacloud/codeup/model/ListGroupMemberResult.h
	include/alibabacloud/codeup/model/ListRepositoryMemberRequest.h
	include/alibabacloud/codeup/model/ListRepositoryMemberResult.h
	include/alibabacloud/codeup/model/ListRepositoryTreeRequest.h
	include/alibabacloud/codeup/model/ListRepositoryTreeResult.h
	include/alibabacloud/codeup/model/UpdateFileRequest.h
	include/alibabacloud/codeup/model/UpdateFileResult.h
	include/alibabacloud/codeup/model/UpdateGroupMemberRequest.h
	include/alibabacloud/codeup/model/UpdateGroupMemberResult.h
	include/alibabacloud/codeup/model/UpdateRepositoryMemberRequest.h
	include/alibabacloud/codeup/model/UpdateRepositoryMemberResult.h )

set(codeup_src 
	src/CodeupClient.cc
	src/model/AddGroupMemberRequest.cc
	src/model/AddGroupMemberResult.cc
	src/model/AddRepositoryMemberRequest.cc
	src/model/AddRepositoryMemberResult.cc
	src/model/CreateFileRequest.cc
	src/model/CreateFileResult.cc
	src/model/CreateRepositoryRequest.cc
	src/model/CreateRepositoryResult.cc
	src/model/CreateRepositoryGroupRequest.cc
	src/model/CreateRepositoryGroupResult.cc
	src/model/DeleteFileRequest.cc
	src/model/DeleteFileResult.cc
	src/model/DeleteGroupMemberRequest.cc
	src/model/DeleteGroupMemberResult.cc
	src/model/DeleteRepositoryRequest.cc
	src/model/DeleteRepositoryResult.cc
	src/model/DeleteRepositoryGroupRequest.cc
	src/model/DeleteRepositoryGroupResult.cc
	src/model/DeleteRepositoryMemberRequest.cc
	src/model/DeleteRepositoryMemberResult.cc
	src/model/GetCodeupOrganizationRequest.cc
	src/model/GetCodeupOrganizationResult.cc
	src/model/GetFileBlobsRequest.cc
	src/model/GetFileBlobsResult.cc
	src/model/ListGroupMemberRequest.cc
	src/model/ListGroupMemberResult.cc
	src/model/ListRepositoryMemberRequest.cc
	src/model/ListRepositoryMemberResult.cc
	src/model/ListRepositoryTreeRequest.cc
	src/model/ListRepositoryTreeResult.cc
	src/model/UpdateFileRequest.cc
	src/model/UpdateFileResult.cc
	src/model/UpdateGroupMemberRequest.cc
	src/model/UpdateGroupMemberResult.cc
	src/model/UpdateRepositoryMemberRequest.cc
	src/model/UpdateRepositoryMemberResult.cc )

add_library(codeup ${LIB_TYPE}
	${codeup_public_header}
	${codeup_public_header_model}
	${codeup_src})

set_target_properties(codeup
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}codeup
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(codeup
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CODEUP_LIBRARY)
endif()

target_include_directories(codeup
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(codeup
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(codeup
		jsoncpp)
	target_include_directories(codeup
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(codeup
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(codeup
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(codeup
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(codeup
		jsoncpp)
endif()

install(FILES ${codeup_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/codeup)
install(FILES ${codeup_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/codeup/model)
install(TARGETS codeup
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)