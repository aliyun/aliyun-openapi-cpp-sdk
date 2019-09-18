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

set(kms_public_header 
	include/alibabacloud/kms/KmsClient.h
	include/alibabacloud/kms/KmsExport.h )

set(kms_public_header_model 
	include/alibabacloud/kms/model/CancelKeyDeletionRequest.h
	include/alibabacloud/kms/model/CancelKeyDeletionResult.h
	include/alibabacloud/kms/model/CreateAliasRequest.h
	include/alibabacloud/kms/model/CreateAliasResult.h
	include/alibabacloud/kms/model/CreateKeyRequest.h
	include/alibabacloud/kms/model/CreateKeyResult.h
	include/alibabacloud/kms/model/DecryptRequest.h
	include/alibabacloud/kms/model/DecryptResult.h
	include/alibabacloud/kms/model/DeleteAliasRequest.h
	include/alibabacloud/kms/model/DeleteAliasResult.h
	include/alibabacloud/kms/model/DeleteKeyMaterialRequest.h
	include/alibabacloud/kms/model/DeleteKeyMaterialResult.h
	include/alibabacloud/kms/model/DescribeKeyRequest.h
	include/alibabacloud/kms/model/DescribeKeyResult.h
	include/alibabacloud/kms/model/DescribeRegionsRequest.h
	include/alibabacloud/kms/model/DescribeRegionsResult.h
	include/alibabacloud/kms/model/DescribeServiceRequest.h
	include/alibabacloud/kms/model/DescribeServiceResult.h
	include/alibabacloud/kms/model/DisableKeyRequest.h
	include/alibabacloud/kms/model/DisableKeyResult.h
	include/alibabacloud/kms/model/EnableKeyRequest.h
	include/alibabacloud/kms/model/EnableKeyResult.h
	include/alibabacloud/kms/model/EncryptRequest.h
	include/alibabacloud/kms/model/EncryptResult.h
	include/alibabacloud/kms/model/GenerateDataKeyRequest.h
	include/alibabacloud/kms/model/GenerateDataKeyResult.h
	include/alibabacloud/kms/model/GetParametersForImportRequest.h
	include/alibabacloud/kms/model/GetParametersForImportResult.h
	include/alibabacloud/kms/model/ImportKeyMaterialRequest.h
	include/alibabacloud/kms/model/ImportKeyMaterialResult.h
	include/alibabacloud/kms/model/ListAliasesRequest.h
	include/alibabacloud/kms/model/ListAliasesResult.h
	include/alibabacloud/kms/model/ListAliasesByKeyIdRequest.h
	include/alibabacloud/kms/model/ListAliasesByKeyIdResult.h
	include/alibabacloud/kms/model/ListKeysRequest.h
	include/alibabacloud/kms/model/ListKeysResult.h
	include/alibabacloud/kms/model/ListResourceTagsRequest.h
	include/alibabacloud/kms/model/ListResourceTagsResult.h
	include/alibabacloud/kms/model/ScheduleKeyDeletionRequest.h
	include/alibabacloud/kms/model/ScheduleKeyDeletionResult.h
	include/alibabacloud/kms/model/TagResourceRequest.h
	include/alibabacloud/kms/model/TagResourceResult.h
	include/alibabacloud/kms/model/UntagResourceRequest.h
	include/alibabacloud/kms/model/UntagResourceResult.h
	include/alibabacloud/kms/model/UpdateAliasRequest.h
	include/alibabacloud/kms/model/UpdateAliasResult.h )

set(kms_src 
	src/KmsClient.cc
	src/model/CancelKeyDeletionRequest.cc
	src/model/CancelKeyDeletionResult.cc
	src/model/CreateAliasRequest.cc
	src/model/CreateAliasResult.cc
	src/model/CreateKeyRequest.cc
	src/model/CreateKeyResult.cc
	src/model/DecryptRequest.cc
	src/model/DecryptResult.cc
	src/model/DeleteAliasRequest.cc
	src/model/DeleteAliasResult.cc
	src/model/DeleteKeyMaterialRequest.cc
	src/model/DeleteKeyMaterialResult.cc
	src/model/DescribeKeyRequest.cc
	src/model/DescribeKeyResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeServiceRequest.cc
	src/model/DescribeServiceResult.cc
	src/model/DisableKeyRequest.cc
	src/model/DisableKeyResult.cc
	src/model/EnableKeyRequest.cc
	src/model/EnableKeyResult.cc
	src/model/EncryptRequest.cc
	src/model/EncryptResult.cc
	src/model/GenerateDataKeyRequest.cc
	src/model/GenerateDataKeyResult.cc
	src/model/GetParametersForImportRequest.cc
	src/model/GetParametersForImportResult.cc
	src/model/ImportKeyMaterialRequest.cc
	src/model/ImportKeyMaterialResult.cc
	src/model/ListAliasesRequest.cc
	src/model/ListAliasesResult.cc
	src/model/ListAliasesByKeyIdRequest.cc
	src/model/ListAliasesByKeyIdResult.cc
	src/model/ListKeysRequest.cc
	src/model/ListKeysResult.cc
	src/model/ListResourceTagsRequest.cc
	src/model/ListResourceTagsResult.cc
	src/model/ScheduleKeyDeletionRequest.cc
	src/model/ScheduleKeyDeletionResult.cc
	src/model/TagResourceRequest.cc
	src/model/TagResourceResult.cc
	src/model/UntagResourceRequest.cc
	src/model/UntagResourceResult.cc
	src/model/UpdateAliasRequest.cc
	src/model/UpdateAliasResult.cc )

add_library(kms ${LIB_TYPE}
	${kms_public_header}
	${kms_public_header_model}
	${kms_src})

set_target_properties(kms
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}kms
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(kms
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_KMS_LIBRARY)
endif()

target_include_directories(kms
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(kms
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(kms
		jsoncpp)
	target_include_directories(kms
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(kms
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(kms
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(kms
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(kms
		jsoncpp)
endif()

install(FILES ${kms_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/kms)
install(FILES ${kms_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/kms/model)
install(TARGETS kms
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)