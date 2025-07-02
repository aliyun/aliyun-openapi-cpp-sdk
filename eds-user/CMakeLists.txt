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

set(eds-user_public_header 
	include/alibabacloud/eds-user/Eds_userClient.h
	include/alibabacloud/eds-user/Eds_userExport.h )

set(eds-user_public_header_model 
	include/alibabacloud/eds-user/model/BatchSetDesktopManagerRequest.h
	include/alibabacloud/eds-user/model/BatchSetDesktopManagerResult.h
	include/alibabacloud/eds-user/model/ChangeUserPasswordRequest.h
	include/alibabacloud/eds-user/model/ChangeUserPasswordResult.h
	include/alibabacloud/eds-user/model/CheckUsedPropertyRequest.h
	include/alibabacloud/eds-user/model/CheckUsedPropertyResult.h
	include/alibabacloud/eds-user/model/CheckUsedPropertyValueRequest.h
	include/alibabacloud/eds-user/model/CheckUsedPropertyValueResult.h
	include/alibabacloud/eds-user/model/CreateGroupRequest.h
	include/alibabacloud/eds-user/model/CreateGroupResult.h
	include/alibabacloud/eds-user/model/CreateOrgRequest.h
	include/alibabacloud/eds-user/model/CreateOrgResult.h
	include/alibabacloud/eds-user/model/CreatePropertyRequest.h
	include/alibabacloud/eds-user/model/CreatePropertyResult.h
	include/alibabacloud/eds-user/model/CreateResourceGroupRequest.h
	include/alibabacloud/eds-user/model/CreateResourceGroupResult.h
	include/alibabacloud/eds-user/model/CreateUsersRequest.h
	include/alibabacloud/eds-user/model/CreateUsersResult.h
	include/alibabacloud/eds-user/model/DeleteResourceGroupRequest.h
	include/alibabacloud/eds-user/model/DeleteResourceGroupResult.h
	include/alibabacloud/eds-user/model/DeleteUserPropertyValueRequest.h
	include/alibabacloud/eds-user/model/DeleteUserPropertyValueResult.h
	include/alibabacloud/eds-user/model/DescribeGroupUserRequest.h
	include/alibabacloud/eds-user/model/DescribeGroupUserResult.h
	include/alibabacloud/eds-user/model/DescribeGroupsRequest.h
	include/alibabacloud/eds-user/model/DescribeGroupsResult.h
	include/alibabacloud/eds-user/model/DescribeMfaDevicesRequest.h
	include/alibabacloud/eds-user/model/DescribeMfaDevicesResult.h
	include/alibabacloud/eds-user/model/DescribeOrgByLayerRequest.h
	include/alibabacloud/eds-user/model/DescribeOrgByLayerResult.h
	include/alibabacloud/eds-user/model/DescribeOrgsRequest.h
	include/alibabacloud/eds-user/model/DescribeOrgsResult.h
	include/alibabacloud/eds-user/model/DescribeResourceGroupsRequest.h
	include/alibabacloud/eds-user/model/DescribeResourceGroupsResult.h
	include/alibabacloud/eds-user/model/DescribeUsersRequest.h
	include/alibabacloud/eds-user/model/DescribeUsersResult.h
	include/alibabacloud/eds-user/model/FilterUsersRequest.h
	include/alibabacloud/eds-user/model/FilterUsersResult.h
	include/alibabacloud/eds-user/model/GetManagerInfoByAuthCodeRequest.h
	include/alibabacloud/eds-user/model/GetManagerInfoByAuthCodeResult.h
	include/alibabacloud/eds-user/model/InitTenantAliasRequest.h
	include/alibabacloud/eds-user/model/InitTenantAliasResult.h
	include/alibabacloud/eds-user/model/ListPropertyRequest.h
	include/alibabacloud/eds-user/model/ListPropertyResult.h
	include/alibabacloud/eds-user/model/ListPropertyValueRequest.h
	include/alibabacloud/eds-user/model/ListPropertyValueResult.h
	include/alibabacloud/eds-user/model/LockMfaDeviceRequest.h
	include/alibabacloud/eds-user/model/LockMfaDeviceResult.h
	include/alibabacloud/eds-user/model/LockUsersRequest.h
	include/alibabacloud/eds-user/model/LockUsersResult.h
	include/alibabacloud/eds-user/model/ModifyGroupRequest.h
	include/alibabacloud/eds-user/model/ModifyGroupResult.h
	include/alibabacloud/eds-user/model/ModifyOrgRequest.h
	include/alibabacloud/eds-user/model/ModifyOrgResult.h
	include/alibabacloud/eds-user/model/ModifyUserRequest.h
	include/alibabacloud/eds-user/model/ModifyUserResult.h
	include/alibabacloud/eds-user/model/MoveOrgRequest.h
	include/alibabacloud/eds-user/model/MoveOrgResult.h
	include/alibabacloud/eds-user/model/MoveUserOrgRequest.h
	include/alibabacloud/eds-user/model/MoveUserOrgResult.h
	include/alibabacloud/eds-user/model/QuerySyncStatusByAliUidRequest.h
	include/alibabacloud/eds-user/model/QuerySyncStatusByAliUidResult.h
	include/alibabacloud/eds-user/model/RemoveGroupRequest.h
	include/alibabacloud/eds-user/model/RemoveGroupResult.h
	include/alibabacloud/eds-user/model/RemoveMfaDeviceRequest.h
	include/alibabacloud/eds-user/model/RemoveMfaDeviceResult.h
	include/alibabacloud/eds-user/model/RemoveOrgRequest.h
	include/alibabacloud/eds-user/model/RemoveOrgResult.h
	include/alibabacloud/eds-user/model/RemovePropertyRequest.h
	include/alibabacloud/eds-user/model/RemovePropertyResult.h
	include/alibabacloud/eds-user/model/RemoveUsersRequest.h
	include/alibabacloud/eds-user/model/RemoveUsersResult.h
	include/alibabacloud/eds-user/model/ResetUserPasswordRequest.h
	include/alibabacloud/eds-user/model/ResetUserPasswordResult.h
	include/alibabacloud/eds-user/model/SetUserPropertyValueRequest.h
	include/alibabacloud/eds-user/model/SetUserPropertyValueResult.h
	include/alibabacloud/eds-user/model/SyncAllEduInfoRequest.h
	include/alibabacloud/eds-user/model/SyncAllEduInfoResult.h
	include/alibabacloud/eds-user/model/UnlockMfaDeviceRequest.h
	include/alibabacloud/eds-user/model/UnlockMfaDeviceResult.h
	include/alibabacloud/eds-user/model/UnlockUsersRequest.h
	include/alibabacloud/eds-user/model/UnlockUsersResult.h
	include/alibabacloud/eds-user/model/UpdatePropertyRequest.h
	include/alibabacloud/eds-user/model/UpdatePropertyResult.h
	include/alibabacloud/eds-user/model/UserBatchJoinGroupRequest.h
	include/alibabacloud/eds-user/model/UserBatchJoinGroupResult.h
	include/alibabacloud/eds-user/model/UserBatchQuitGroupRequest.h
	include/alibabacloud/eds-user/model/UserBatchQuitGroupResult.h )

set(eds-user_src 
	src/Eds-userClient.cc
	src/model/BatchSetDesktopManagerRequest.cc
	src/model/BatchSetDesktopManagerResult.cc
	src/model/ChangeUserPasswordRequest.cc
	src/model/ChangeUserPasswordResult.cc
	src/model/CheckUsedPropertyRequest.cc
	src/model/CheckUsedPropertyResult.cc
	src/model/CheckUsedPropertyValueRequest.cc
	src/model/CheckUsedPropertyValueResult.cc
	src/model/CreateGroupRequest.cc
	src/model/CreateGroupResult.cc
	src/model/CreateOrgRequest.cc
	src/model/CreateOrgResult.cc
	src/model/CreatePropertyRequest.cc
	src/model/CreatePropertyResult.cc
	src/model/CreateResourceGroupRequest.cc
	src/model/CreateResourceGroupResult.cc
	src/model/CreateUsersRequest.cc
	src/model/CreateUsersResult.cc
	src/model/DeleteResourceGroupRequest.cc
	src/model/DeleteResourceGroupResult.cc
	src/model/DeleteUserPropertyValueRequest.cc
	src/model/DeleteUserPropertyValueResult.cc
	src/model/DescribeGroupUserRequest.cc
	src/model/DescribeGroupUserResult.cc
	src/model/DescribeGroupsRequest.cc
	src/model/DescribeGroupsResult.cc
	src/model/DescribeMfaDevicesRequest.cc
	src/model/DescribeMfaDevicesResult.cc
	src/model/DescribeOrgByLayerRequest.cc
	src/model/DescribeOrgByLayerResult.cc
	src/model/DescribeOrgsRequest.cc
	src/model/DescribeOrgsResult.cc
	src/model/DescribeResourceGroupsRequest.cc
	src/model/DescribeResourceGroupsResult.cc
	src/model/DescribeUsersRequest.cc
	src/model/DescribeUsersResult.cc
	src/model/FilterUsersRequest.cc
	src/model/FilterUsersResult.cc
	src/model/GetManagerInfoByAuthCodeRequest.cc
	src/model/GetManagerInfoByAuthCodeResult.cc
	src/model/InitTenantAliasRequest.cc
	src/model/InitTenantAliasResult.cc
	src/model/ListPropertyRequest.cc
	src/model/ListPropertyResult.cc
	src/model/ListPropertyValueRequest.cc
	src/model/ListPropertyValueResult.cc
	src/model/LockMfaDeviceRequest.cc
	src/model/LockMfaDeviceResult.cc
	src/model/LockUsersRequest.cc
	src/model/LockUsersResult.cc
	src/model/ModifyGroupRequest.cc
	src/model/ModifyGroupResult.cc
	src/model/ModifyOrgRequest.cc
	src/model/ModifyOrgResult.cc
	src/model/ModifyUserRequest.cc
	src/model/ModifyUserResult.cc
	src/model/MoveOrgRequest.cc
	src/model/MoveOrgResult.cc
	src/model/MoveUserOrgRequest.cc
	src/model/MoveUserOrgResult.cc
	src/model/QuerySyncStatusByAliUidRequest.cc
	src/model/QuerySyncStatusByAliUidResult.cc
	src/model/RemoveGroupRequest.cc
	src/model/RemoveGroupResult.cc
	src/model/RemoveMfaDeviceRequest.cc
	src/model/RemoveMfaDeviceResult.cc
	src/model/RemoveOrgRequest.cc
	src/model/RemoveOrgResult.cc
	src/model/RemovePropertyRequest.cc
	src/model/RemovePropertyResult.cc
	src/model/RemoveUsersRequest.cc
	src/model/RemoveUsersResult.cc
	src/model/ResetUserPasswordRequest.cc
	src/model/ResetUserPasswordResult.cc
	src/model/SetUserPropertyValueRequest.cc
	src/model/SetUserPropertyValueResult.cc
	src/model/SyncAllEduInfoRequest.cc
	src/model/SyncAllEduInfoResult.cc
	src/model/UnlockMfaDeviceRequest.cc
	src/model/UnlockMfaDeviceResult.cc
	src/model/UnlockUsersRequest.cc
	src/model/UnlockUsersResult.cc
	src/model/UpdatePropertyRequest.cc
	src/model/UpdatePropertyResult.cc
	src/model/UserBatchJoinGroupRequest.cc
	src/model/UserBatchJoinGroupResult.cc
	src/model/UserBatchQuitGroupRequest.cc
	src/model/UserBatchQuitGroupResult.cc )

add_library(eds-user ${LIB_TYPE}
	${eds-user_public_header}
	${eds-user_public_header_model}
	${eds-user_src})

set_target_properties(eds-user
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eds-user
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(eds-user
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EDS_USER_LIBRARY)
endif()

target_include_directories(eds-user
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(eds-user
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(eds-user
		jsoncpp)
	target_include_directories(eds-user
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(eds-user
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(eds-user
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(eds-user
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(eds-user
		jsoncpp)
endif()

install(FILES ${eds-user_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eds-user)
install(FILES ${eds-user_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eds-user/model)
install(TARGETS eds-user
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)