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

set(ltl_public_header 
	include/alibabacloud/ltl/LtlClient.h
	include/alibabacloud/ltl/LtlExport.h )

set(ltl_public_header_model 
	include/alibabacloud/ltl/model/ApplyDataModelConfigInfoRequest.h
	include/alibabacloud/ltl/model/ApplyDataModelConfigInfoResult.h
	include/alibabacloud/ltl/model/AttachDataRequest.h
	include/alibabacloud/ltl/model/AttachDataResult.h
	include/alibabacloud/ltl/model/AttachDataWithSignatureRequest.h
	include/alibabacloud/ltl/model/AttachDataWithSignatureResult.h
	include/alibabacloud/ltl/model/AuthorizeDeviceRequest.h
	include/alibabacloud/ltl/model/AuthorizeDeviceResult.h
	include/alibabacloud/ltl/model/AuthorizeDeviceGroupRequest.h
	include/alibabacloud/ltl/model/AuthorizeDeviceGroupResult.h
	include/alibabacloud/ltl/model/BatchUploadMPCoSPhaseDigestInfoRequest.h
	include/alibabacloud/ltl/model/BatchUploadMPCoSPhaseDigestInfoResult.h
	include/alibabacloud/ltl/model/BatchUploadMPCoSPhaseDigestInfoByDeviceRequest.h
	include/alibabacloud/ltl/model/BatchUploadMPCoSPhaseDigestInfoByDeviceResult.h
	include/alibabacloud/ltl/model/BatchUploadMPCoSPhaseTextInfoRequest.h
	include/alibabacloud/ltl/model/BatchUploadMPCoSPhaseTextInfoResult.h
	include/alibabacloud/ltl/model/BatchUploadMPCoSPhaseTextInfoByDeviceRequest.h
	include/alibabacloud/ltl/model/BatchUploadMPCoSPhaseTextInfoByDeviceResult.h
	include/alibabacloud/ltl/model/CreateMPCoSPhaseRequest.h
	include/alibabacloud/ltl/model/CreateMPCoSPhaseResult.h
	include/alibabacloud/ltl/model/CreateMPCoSPhaseGroupRequest.h
	include/alibabacloud/ltl/model/CreateMPCoSPhaseGroupResult.h
	include/alibabacloud/ltl/model/CreateMemberRequest.h
	include/alibabacloud/ltl/model/CreateMemberResult.h
	include/alibabacloud/ltl/model/DescribeCapacityInfoRequest.h
	include/alibabacloud/ltl/model/DescribeCapacityInfoResult.h
	include/alibabacloud/ltl/model/DescribeMPCoSAuthorizedInfoRequest.h
	include/alibabacloud/ltl/model/DescribeMPCoSAuthorizedInfoResult.h
	include/alibabacloud/ltl/model/DescribeMPCoSPhaseInfoRequest.h
	include/alibabacloud/ltl/model/DescribeMPCoSPhaseInfoResult.h
	include/alibabacloud/ltl/model/DescribeMPCoSResourceInfoRequest.h
	include/alibabacloud/ltl/model/DescribeMPCoSResourceInfoResult.h
	include/alibabacloud/ltl/model/DescribeMemberCapacityInfoRequest.h
	include/alibabacloud/ltl/model/DescribeMemberCapacityInfoResult.h
	include/alibabacloud/ltl/model/DescribeResourceInfoRequest.h
	include/alibabacloud/ltl/model/DescribeResourceInfoResult.h
	include/alibabacloud/ltl/model/GetBlockChainInfoRequest.h
	include/alibabacloud/ltl/model/GetBlockChainInfoResult.h
	include/alibabacloud/ltl/model/GetDataRequest.h
	include/alibabacloud/ltl/model/GetDataResult.h
	include/alibabacloud/ltl/model/GetDataModelConfigInfoRequest.h
	include/alibabacloud/ltl/model/GetDataModelConfigInfoResult.h
	include/alibabacloud/ltl/model/GetHistoryDataCountRequest.h
	include/alibabacloud/ltl/model/GetHistoryDataCountResult.h
	include/alibabacloud/ltl/model/GetHistoryDataListRequest.h
	include/alibabacloud/ltl/model/GetHistoryDataListResult.h
	include/alibabacloud/ltl/model/ListDependentDataModelsRequest.h
	include/alibabacloud/ltl/model/ListDependentDataModelsResult.h
	include/alibabacloud/ltl/model/ListDeviceRequest.h
	include/alibabacloud/ltl/model/ListDeviceResult.h
	include/alibabacloud/ltl/model/ListDeviceGroupRequest.h
	include/alibabacloud/ltl/model/ListDeviceGroupResult.h
	include/alibabacloud/ltl/model/ListMPCoSPhaseRequest.h
	include/alibabacloud/ltl/model/ListMPCoSPhaseResult.h
	include/alibabacloud/ltl/model/ListMPCoSPhaseGroupRequest.h
	include/alibabacloud/ltl/model/ListMPCoSPhaseGroupResult.h
	include/alibabacloud/ltl/model/ListMPCoSPhaseHistoryRequest.h
	include/alibabacloud/ltl/model/ListMPCoSPhaseHistoryResult.h
	include/alibabacloud/ltl/model/ListMemberRequest.h
	include/alibabacloud/ltl/model/ListMemberResult.h
	include/alibabacloud/ltl/model/ListMultiPartyCollaborationChainRequest.h
	include/alibabacloud/ltl/model/ListMultiPartyCollaborationChainResult.h
	include/alibabacloud/ltl/model/ListPSMemberDataTypeCodeRequest.h
	include/alibabacloud/ltl/model/ListPSMemberDataTypeCodeResult.h
	include/alibabacloud/ltl/model/ListProofChainRequest.h
	include/alibabacloud/ltl/model/ListProofChainResult.h
	include/alibabacloud/ltl/model/LockMemberRequest.h
	include/alibabacloud/ltl/model/LockMemberResult.h
	include/alibabacloud/ltl/model/ModifyMPCoSPhaseRequest.h
	include/alibabacloud/ltl/model/ModifyMPCoSPhaseResult.h
	include/alibabacloud/ltl/model/ModifyMPCoSPhaseGroupRequest.h
	include/alibabacloud/ltl/model/ModifyMPCoSPhaseGroupResult.h
	include/alibabacloud/ltl/model/ModifyMemberRequest.h
	include/alibabacloud/ltl/model/ModifyMemberResult.h
	include/alibabacloud/ltl/model/RegisterDeviceGroupRequest.h
	include/alibabacloud/ltl/model/RegisterDeviceGroupResult.h
	include/alibabacloud/ltl/model/SetDataRequest.h
	include/alibabacloud/ltl/model/SetDataResult.h
	include/alibabacloud/ltl/model/SetDataWithSignatureRequest.h
	include/alibabacloud/ltl/model/SetDataWithSignatureResult.h
	include/alibabacloud/ltl/model/UnAuthorizeDeviceRequest.h
	include/alibabacloud/ltl/model/UnAuthorizeDeviceResult.h
	include/alibabacloud/ltl/model/UnAuthorizeDeviceGroupRequest.h
	include/alibabacloud/ltl/model/UnAuthorizeDeviceGroupResult.h
	include/alibabacloud/ltl/model/UnLockMemberRequest.h
	include/alibabacloud/ltl/model/UnLockMemberResult.h
	include/alibabacloud/ltl/model/UpdateMPCoSAuthorizedInfoRequest.h
	include/alibabacloud/ltl/model/UpdateMPCoSAuthorizedInfoResult.h
	include/alibabacloud/ltl/model/UploadMPCoSPhaseDigestInfoRequest.h
	include/alibabacloud/ltl/model/UploadMPCoSPhaseDigestInfoResult.h
	include/alibabacloud/ltl/model/UploadMPCoSPhaseDigestInfoByDeviceRequest.h
	include/alibabacloud/ltl/model/UploadMPCoSPhaseDigestInfoByDeviceResult.h
	include/alibabacloud/ltl/model/UploadMPCoSPhaseTextInfoRequest.h
	include/alibabacloud/ltl/model/UploadMPCoSPhaseTextInfoResult.h
	include/alibabacloud/ltl/model/UploadMPCoSPhaseTextInfoByDeviceRequest.h
	include/alibabacloud/ltl/model/UploadMPCoSPhaseTextInfoByDeviceResult.h )

set(ltl_src 
	src/LtlClient.cc
	src/model/ApplyDataModelConfigInfoRequest.cc
	src/model/ApplyDataModelConfigInfoResult.cc
	src/model/AttachDataRequest.cc
	src/model/AttachDataResult.cc
	src/model/AttachDataWithSignatureRequest.cc
	src/model/AttachDataWithSignatureResult.cc
	src/model/AuthorizeDeviceRequest.cc
	src/model/AuthorizeDeviceResult.cc
	src/model/AuthorizeDeviceGroupRequest.cc
	src/model/AuthorizeDeviceGroupResult.cc
	src/model/BatchUploadMPCoSPhaseDigestInfoRequest.cc
	src/model/BatchUploadMPCoSPhaseDigestInfoResult.cc
	src/model/BatchUploadMPCoSPhaseDigestInfoByDeviceRequest.cc
	src/model/BatchUploadMPCoSPhaseDigestInfoByDeviceResult.cc
	src/model/BatchUploadMPCoSPhaseTextInfoRequest.cc
	src/model/BatchUploadMPCoSPhaseTextInfoResult.cc
	src/model/BatchUploadMPCoSPhaseTextInfoByDeviceRequest.cc
	src/model/BatchUploadMPCoSPhaseTextInfoByDeviceResult.cc
	src/model/CreateMPCoSPhaseRequest.cc
	src/model/CreateMPCoSPhaseResult.cc
	src/model/CreateMPCoSPhaseGroupRequest.cc
	src/model/CreateMPCoSPhaseGroupResult.cc
	src/model/CreateMemberRequest.cc
	src/model/CreateMemberResult.cc
	src/model/DescribeCapacityInfoRequest.cc
	src/model/DescribeCapacityInfoResult.cc
	src/model/DescribeMPCoSAuthorizedInfoRequest.cc
	src/model/DescribeMPCoSAuthorizedInfoResult.cc
	src/model/DescribeMPCoSPhaseInfoRequest.cc
	src/model/DescribeMPCoSPhaseInfoResult.cc
	src/model/DescribeMPCoSResourceInfoRequest.cc
	src/model/DescribeMPCoSResourceInfoResult.cc
	src/model/DescribeMemberCapacityInfoRequest.cc
	src/model/DescribeMemberCapacityInfoResult.cc
	src/model/DescribeResourceInfoRequest.cc
	src/model/DescribeResourceInfoResult.cc
	src/model/GetBlockChainInfoRequest.cc
	src/model/GetBlockChainInfoResult.cc
	src/model/GetDataRequest.cc
	src/model/GetDataResult.cc
	src/model/GetDataModelConfigInfoRequest.cc
	src/model/GetDataModelConfigInfoResult.cc
	src/model/GetHistoryDataCountRequest.cc
	src/model/GetHistoryDataCountResult.cc
	src/model/GetHistoryDataListRequest.cc
	src/model/GetHistoryDataListResult.cc
	src/model/ListDependentDataModelsRequest.cc
	src/model/ListDependentDataModelsResult.cc
	src/model/ListDeviceRequest.cc
	src/model/ListDeviceResult.cc
	src/model/ListDeviceGroupRequest.cc
	src/model/ListDeviceGroupResult.cc
	src/model/ListMPCoSPhaseRequest.cc
	src/model/ListMPCoSPhaseResult.cc
	src/model/ListMPCoSPhaseGroupRequest.cc
	src/model/ListMPCoSPhaseGroupResult.cc
	src/model/ListMPCoSPhaseHistoryRequest.cc
	src/model/ListMPCoSPhaseHistoryResult.cc
	src/model/ListMemberRequest.cc
	src/model/ListMemberResult.cc
	src/model/ListMultiPartyCollaborationChainRequest.cc
	src/model/ListMultiPartyCollaborationChainResult.cc
	src/model/ListPSMemberDataTypeCodeRequest.cc
	src/model/ListPSMemberDataTypeCodeResult.cc
	src/model/ListProofChainRequest.cc
	src/model/ListProofChainResult.cc
	src/model/LockMemberRequest.cc
	src/model/LockMemberResult.cc
	src/model/ModifyMPCoSPhaseRequest.cc
	src/model/ModifyMPCoSPhaseResult.cc
	src/model/ModifyMPCoSPhaseGroupRequest.cc
	src/model/ModifyMPCoSPhaseGroupResult.cc
	src/model/ModifyMemberRequest.cc
	src/model/ModifyMemberResult.cc
	src/model/RegisterDeviceGroupRequest.cc
	src/model/RegisterDeviceGroupResult.cc
	src/model/SetDataRequest.cc
	src/model/SetDataResult.cc
	src/model/SetDataWithSignatureRequest.cc
	src/model/SetDataWithSignatureResult.cc
	src/model/UnAuthorizeDeviceRequest.cc
	src/model/UnAuthorizeDeviceResult.cc
	src/model/UnAuthorizeDeviceGroupRequest.cc
	src/model/UnAuthorizeDeviceGroupResult.cc
	src/model/UnLockMemberRequest.cc
	src/model/UnLockMemberResult.cc
	src/model/UpdateMPCoSAuthorizedInfoRequest.cc
	src/model/UpdateMPCoSAuthorizedInfoResult.cc
	src/model/UploadMPCoSPhaseDigestInfoRequest.cc
	src/model/UploadMPCoSPhaseDigestInfoResult.cc
	src/model/UploadMPCoSPhaseDigestInfoByDeviceRequest.cc
	src/model/UploadMPCoSPhaseDigestInfoByDeviceResult.cc
	src/model/UploadMPCoSPhaseTextInfoRequest.cc
	src/model/UploadMPCoSPhaseTextInfoResult.cc
	src/model/UploadMPCoSPhaseTextInfoByDeviceRequest.cc
	src/model/UploadMPCoSPhaseTextInfoByDeviceResult.cc )

add_library(ltl ${LIB_TYPE}
	${ltl_public_header}
	${ltl_public_header_model}
	${ltl_src})

set_target_properties(ltl
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ltl
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ltl
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_LTL_LIBRARY)
endif()

target_include_directories(ltl
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ltl
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ltl
		jsoncpp)
	target_include_directories(ltl
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ltl
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ltl
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ltl
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ltl
		jsoncpp)
endif()

install(FILES ${ltl_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ltl)
install(FILES ${ltl_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ltl/model)
install(TARGETS ltl
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)