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

set(cas_public_header 
	include/alibabacloud/cas/CasClient.h
	include/alibabacloud/cas/CasExport.h )

set(cas_public_header_model 
	include/alibabacloud/cas/model/CancelCertificateForPackageRequestRequest.h
	include/alibabacloud/cas/model/CancelCertificateForPackageRequestResult.h
	include/alibabacloud/cas/model/CancelOrderRequestRequest.h
	include/alibabacloud/cas/model/CancelOrderRequestResult.h
	include/alibabacloud/cas/model/CreateCertificateForPackageRequestRequest.h
	include/alibabacloud/cas/model/CreateCertificateForPackageRequestResult.h
	include/alibabacloud/cas/model/CreateCertificateRequestRequest.h
	include/alibabacloud/cas/model/CreateCertificateRequestResult.h
	include/alibabacloud/cas/model/CreateCertificateWithCsrRequestRequest.h
	include/alibabacloud/cas/model/CreateCertificateWithCsrRequestResult.h
	include/alibabacloud/cas/model/CreateWHClientCertificateRequest.h
	include/alibabacloud/cas/model/CreateWHClientCertificateResult.h
	include/alibabacloud/cas/model/DecryptRequest.h
	include/alibabacloud/cas/model/DecryptResult.h
	include/alibabacloud/cas/model/DeleteCertificateRequestRequest.h
	include/alibabacloud/cas/model/DeleteCertificateRequestResult.h
	include/alibabacloud/cas/model/DeletePCACertRequest.h
	include/alibabacloud/cas/model/DeletePCACertResult.h
	include/alibabacloud/cas/model/DeleteUserCertificateRequest.h
	include/alibabacloud/cas/model/DeleteUserCertificateResult.h
	include/alibabacloud/cas/model/DescribeCertificateStateRequest.h
	include/alibabacloud/cas/model/DescribeCertificateStateResult.h
	include/alibabacloud/cas/model/DescribePackageStateRequest.h
	include/alibabacloud/cas/model/DescribePackageStateResult.h
	include/alibabacloud/cas/model/EncryptRequest.h
	include/alibabacloud/cas/model/EncryptResult.h
	include/alibabacloud/cas/model/GetCertWarehouseQuotaRequest.h
	include/alibabacloud/cas/model/GetCertWarehouseQuotaResult.h
	include/alibabacloud/cas/model/GetUserCertificateDetailRequest.h
	include/alibabacloud/cas/model/GetUserCertificateDetailResult.h
	include/alibabacloud/cas/model/ListCertRequest.h
	include/alibabacloud/cas/model/ListCertResult.h
	include/alibabacloud/cas/model/ListCertWarehouseRequest.h
	include/alibabacloud/cas/model/ListCertWarehouseResult.h
	include/alibabacloud/cas/model/ListUserCertificateOrderRequest.h
	include/alibabacloud/cas/model/ListUserCertificateOrderResult.h
	include/alibabacloud/cas/model/RenewCertificateOrderForPackageRequestRequest.h
	include/alibabacloud/cas/model/RenewCertificateOrderForPackageRequestResult.h
	include/alibabacloud/cas/model/RevokeWHClientCertificateRequest.h
	include/alibabacloud/cas/model/RevokeWHClientCertificateResult.h
	include/alibabacloud/cas/model/SignRequest.h
	include/alibabacloud/cas/model/SignResult.h
	include/alibabacloud/cas/model/UploadPCACertRequest.h
	include/alibabacloud/cas/model/UploadPCACertResult.h
	include/alibabacloud/cas/model/UploadUserCertificateRequest.h
	include/alibabacloud/cas/model/UploadUserCertificateResult.h
	include/alibabacloud/cas/model/VerifyRequest.h
	include/alibabacloud/cas/model/VerifyResult.h )

set(cas_src 
	src/CasClient.cc
	src/model/CancelCertificateForPackageRequestRequest.cc
	src/model/CancelCertificateForPackageRequestResult.cc
	src/model/CancelOrderRequestRequest.cc
	src/model/CancelOrderRequestResult.cc
	src/model/CreateCertificateForPackageRequestRequest.cc
	src/model/CreateCertificateForPackageRequestResult.cc
	src/model/CreateCertificateRequestRequest.cc
	src/model/CreateCertificateRequestResult.cc
	src/model/CreateCertificateWithCsrRequestRequest.cc
	src/model/CreateCertificateWithCsrRequestResult.cc
	src/model/CreateWHClientCertificateRequest.cc
	src/model/CreateWHClientCertificateResult.cc
	src/model/DecryptRequest.cc
	src/model/DecryptResult.cc
	src/model/DeleteCertificateRequestRequest.cc
	src/model/DeleteCertificateRequestResult.cc
	src/model/DeletePCACertRequest.cc
	src/model/DeletePCACertResult.cc
	src/model/DeleteUserCertificateRequest.cc
	src/model/DeleteUserCertificateResult.cc
	src/model/DescribeCertificateStateRequest.cc
	src/model/DescribeCertificateStateResult.cc
	src/model/DescribePackageStateRequest.cc
	src/model/DescribePackageStateResult.cc
	src/model/EncryptRequest.cc
	src/model/EncryptResult.cc
	src/model/GetCertWarehouseQuotaRequest.cc
	src/model/GetCertWarehouseQuotaResult.cc
	src/model/GetUserCertificateDetailRequest.cc
	src/model/GetUserCertificateDetailResult.cc
	src/model/ListCertRequest.cc
	src/model/ListCertResult.cc
	src/model/ListCertWarehouseRequest.cc
	src/model/ListCertWarehouseResult.cc
	src/model/ListUserCertificateOrderRequest.cc
	src/model/ListUserCertificateOrderResult.cc
	src/model/RenewCertificateOrderForPackageRequestRequest.cc
	src/model/RenewCertificateOrderForPackageRequestResult.cc
	src/model/RevokeWHClientCertificateRequest.cc
	src/model/RevokeWHClientCertificateResult.cc
	src/model/SignRequest.cc
	src/model/SignResult.cc
	src/model/UploadPCACertRequest.cc
	src/model/UploadPCACertResult.cc
	src/model/UploadUserCertificateRequest.cc
	src/model/UploadUserCertificateResult.cc
	src/model/VerifyRequest.cc
	src/model/VerifyResult.cc )

add_library(cas ${LIB_TYPE}
	${cas_public_header}
	${cas_public_header_model}
	${cas_src})

set_target_properties(cas
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cas
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cas
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CAS_LIBRARY)
endif()

target_include_directories(cas
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cas
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cas
		jsoncpp)
	target_include_directories(cas
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cas
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cas
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cas
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cas
		jsoncpp)
endif()

install(FILES ${cas_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cas)
install(FILES ${cas_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cas/model)
install(TARGETS cas
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)