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
	include/alibabacloud/cas/model/CreateClientCertificateRequest.h
	include/alibabacloud/cas/model/CreateClientCertificateResult.h
	include/alibabacloud/cas/model/CreateClientCertificateWithCsrRequest.h
	include/alibabacloud/cas/model/CreateClientCertificateWithCsrResult.h
	include/alibabacloud/cas/model/CreateCustomCertificateRequest.h
	include/alibabacloud/cas/model/CreateCustomCertificateResult.h
	include/alibabacloud/cas/model/CreateExternalCACertificateRequest.h
	include/alibabacloud/cas/model/CreateExternalCACertificateResult.h
	include/alibabacloud/cas/model/CreateRevokeClientCertificateRequest.h
	include/alibabacloud/cas/model/CreateRevokeClientCertificateResult.h
	include/alibabacloud/cas/model/CreateRootCACertificateRequest.h
	include/alibabacloud/cas/model/CreateRootCACertificateResult.h
	include/alibabacloud/cas/model/CreateServerCertificateRequest.h
	include/alibabacloud/cas/model/CreateServerCertificateResult.h
	include/alibabacloud/cas/model/CreateServerCertificateWithCsrRequest.h
	include/alibabacloud/cas/model/CreateServerCertificateWithCsrResult.h
	include/alibabacloud/cas/model/CreateSubCACertificateRequest.h
	include/alibabacloud/cas/model/CreateSubCACertificateResult.h
	include/alibabacloud/cas/model/DeleteClientCertificateRequest.h
	include/alibabacloud/cas/model/DeleteClientCertificateResult.h
	include/alibabacloud/cas/model/DescribeCACertificateRequest.h
	include/alibabacloud/cas/model/DescribeCACertificateResult.h
	include/alibabacloud/cas/model/DescribeCACertificateCountRequest.h
	include/alibabacloud/cas/model/DescribeCACertificateCountResult.h
	include/alibabacloud/cas/model/DescribeCACertificateListRequest.h
	include/alibabacloud/cas/model/DescribeCACertificateListResult.h
	include/alibabacloud/cas/model/DescribeCertificatePrivateKeyRequest.h
	include/alibabacloud/cas/model/DescribeCertificatePrivateKeyResult.h
	include/alibabacloud/cas/model/DescribeClientCertificateRequest.h
	include/alibabacloud/cas/model/DescribeClientCertificateResult.h
	include/alibabacloud/cas/model/DescribeClientCertificateStatusRequest.h
	include/alibabacloud/cas/model/DescribeClientCertificateStatusResult.h
	include/alibabacloud/cas/model/GetCAInstanceStatusRequest.h
	include/alibabacloud/cas/model/GetCAInstanceStatusResult.h
	include/alibabacloud/cas/model/ListCertRequest.h
	include/alibabacloud/cas/model/ListCertResult.h
	include/alibabacloud/cas/model/ListClientCertificateRequest.h
	include/alibabacloud/cas/model/ListClientCertificateResult.h
	include/alibabacloud/cas/model/ListPcaCaCertificateRequest.h
	include/alibabacloud/cas/model/ListPcaCaCertificateResult.h
	include/alibabacloud/cas/model/ListRevokeCertificateRequest.h
	include/alibabacloud/cas/model/ListRevokeCertificateResult.h
	include/alibabacloud/cas/model/UpdateCACertificateStatusRequest.h
	include/alibabacloud/cas/model/UpdateCACertificateStatusResult.h
	include/alibabacloud/cas/model/UploadPcaCertToCasRequest.h
	include/alibabacloud/cas/model/UploadPcaCertToCasResult.h )

set(cas_src 
	src/CasClient.cc
	src/model/CreateClientCertificateRequest.cc
	src/model/CreateClientCertificateResult.cc
	src/model/CreateClientCertificateWithCsrRequest.cc
	src/model/CreateClientCertificateWithCsrResult.cc
	src/model/CreateCustomCertificateRequest.cc
	src/model/CreateCustomCertificateResult.cc
	src/model/CreateExternalCACertificateRequest.cc
	src/model/CreateExternalCACertificateResult.cc
	src/model/CreateRevokeClientCertificateRequest.cc
	src/model/CreateRevokeClientCertificateResult.cc
	src/model/CreateRootCACertificateRequest.cc
	src/model/CreateRootCACertificateResult.cc
	src/model/CreateServerCertificateRequest.cc
	src/model/CreateServerCertificateResult.cc
	src/model/CreateServerCertificateWithCsrRequest.cc
	src/model/CreateServerCertificateWithCsrResult.cc
	src/model/CreateSubCACertificateRequest.cc
	src/model/CreateSubCACertificateResult.cc
	src/model/DeleteClientCertificateRequest.cc
	src/model/DeleteClientCertificateResult.cc
	src/model/DescribeCACertificateRequest.cc
	src/model/DescribeCACertificateResult.cc
	src/model/DescribeCACertificateCountRequest.cc
	src/model/DescribeCACertificateCountResult.cc
	src/model/DescribeCACertificateListRequest.cc
	src/model/DescribeCACertificateListResult.cc
	src/model/DescribeCertificatePrivateKeyRequest.cc
	src/model/DescribeCertificatePrivateKeyResult.cc
	src/model/DescribeClientCertificateRequest.cc
	src/model/DescribeClientCertificateResult.cc
	src/model/DescribeClientCertificateStatusRequest.cc
	src/model/DescribeClientCertificateStatusResult.cc
	src/model/GetCAInstanceStatusRequest.cc
	src/model/GetCAInstanceStatusResult.cc
	src/model/ListCertRequest.cc
	src/model/ListCertResult.cc
	src/model/ListClientCertificateRequest.cc
	src/model/ListClientCertificateResult.cc
	src/model/ListPcaCaCertificateRequest.cc
	src/model/ListPcaCaCertificateResult.cc
	src/model/ListRevokeCertificateRequest.cc
	src/model/ListRevokeCertificateResult.cc
	src/model/UpdateCACertificateStatusRequest.cc
	src/model/UpdateCACertificateStatusResult.cc
	src/model/UploadPcaCertToCasRequest.cc
	src/model/UploadPcaCertToCasResult.cc )

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