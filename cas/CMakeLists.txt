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
	include/alibabacloud/cas/model/CreateSignatureRequest.h
	include/alibabacloud/cas/model/CreateSignatureResult.h
	include/alibabacloud/cas/model/DescribeCertificateStatusCountRequest.h
	include/alibabacloud/cas/model/DescribeCertificateStatusCountResult.h
	include/alibabacloud/cas/model/CreateOrderDocumentRequest.h
	include/alibabacloud/cas/model/CreateOrderDocumentResult.h
	include/alibabacloud/cas/model/DescribeExpectationResultRequest.h
	include/alibabacloud/cas/model/DescribeExpectationResultResult.h
	include/alibabacloud/cas/model/DescribeOrderMaterialRequest.h
	include/alibabacloud/cas/model/DescribeOrderMaterialResult.h
	include/alibabacloud/cas/model/CreateSignaturePeopleCertificateRequest.h
	include/alibabacloud/cas/model/CreateSignaturePeopleCertificateResult.h
	include/alibabacloud/cas/model/DescribeCertificateListRequest.h
	include/alibabacloud/cas/model/DescribeCertificateListResult.h
	include/alibabacloud/cas/model/DescribeCertificateBrandListRequest.h
	include/alibabacloud/cas/model/DescribeCertificateBrandListResult.h
	include/alibabacloud/cas/model/DescribeDomainVerifyConfigurationStatusRequest.h
	include/alibabacloud/cas/model/DescribeDomainVerifyConfigurationStatusResult.h
	include/alibabacloud/cas/model/CreateOrderCancelRequest.h
	include/alibabacloud/cas/model/CreateOrderCancelResult.h
	include/alibabacloud/cas/model/CreateAliDnsRecordIdRequest.h
	include/alibabacloud/cas/model/CreateAliDnsRecordIdResult.h
	include/alibabacloud/cas/model/CreateCertificateRequest.h
	include/alibabacloud/cas/model/CreateCertificateResult.h
	include/alibabacloud/cas/model/CreateWebSignatureRequest.h
	include/alibabacloud/cas/model/CreateWebSignatureResult.h
	include/alibabacloud/cas/model/CreateUnDeploymentRequest.h
	include/alibabacloud/cas/model/CreateUnDeploymentResult.h
	include/alibabacloud/cas/model/DescribeDownloadCertificateRequest.h
	include/alibabacloud/cas/model/DescribeDownloadCertificateResult.h
	include/alibabacloud/cas/model/DescribeCertificateDetailRequest.h
	include/alibabacloud/cas/model/DescribeCertificateDetailResult.h
	include/alibabacloud/cas/model/CreateOrderMaterialRequest.h
	include/alibabacloud/cas/model/CreateOrderMaterialResult.h
	include/alibabacloud/cas/model/DescribeSignatureStatisticsRequest.h
	include/alibabacloud/cas/model/DescribeSignatureStatisticsResult.h
	include/alibabacloud/cas/model/DescribeSignatureTradeListRequest.h
	include/alibabacloud/cas/model/DescribeSignatureTradeListResult.h
	include/alibabacloud/cas/model/CreateFilingSignatureDocumentRequest.h
	include/alibabacloud/cas/model/CreateFilingSignatureDocumentResult.h
	include/alibabacloud/cas/model/DescribeDownloadDomainVerifyConfigurationRequest.h
	include/alibabacloud/cas/model/DescribeDownloadDomainVerifyConfigurationResult.h
	include/alibabacloud/cas/model/DescribeOSSDownloadInfoRequest.h
	include/alibabacloud/cas/model/DescribeOSSDownloadInfoResult.h
	include/alibabacloud/cas/model/CreateCooperationOrderRequest.h
	include/alibabacloud/cas/model/CreateCooperationOrderResult.h
	include/alibabacloud/cas/model/DescribeDeploymentRegionListRequest.h
	include/alibabacloud/cas/model/DescribeDeploymentRegionListResult.h
	include/alibabacloud/cas/model/CreateOrderAuditRequest.h
	include/alibabacloud/cas/model/CreateOrderAuditResult.h
	include/alibabacloud/cas/model/DeleteOrderRequest.h
	include/alibabacloud/cas/model/DeleteOrderResult.h
	include/alibabacloud/cas/model/DescribeHelpListRequest.h
	include/alibabacloud/cas/model/DescribeHelpListResult.h
	include/alibabacloud/cas/model/DescribeStsAuthStatusRequest.h
	include/alibabacloud/cas/model/DescribeStsAuthStatusResult.h
	include/alibabacloud/cas/model/DescribeDeploymentDetailRequest.h
	include/alibabacloud/cas/model/DescribeDeploymentDetailResult.h
	include/alibabacloud/cas/model/DescribeDomainVerifyInfoRequest.h
	include/alibabacloud/cas/model/DescribeDomainVerifyInfoResult.h
	include/alibabacloud/cas/model/CreateDeploymentRequest.h
	include/alibabacloud/cas/model/CreateDeploymentResult.h
	include/alibabacloud/cas/model/DescribeOrderDocumentRequest.h
	include/alibabacloud/cas/model/DescribeOrderDocumentResult.h
	include/alibabacloud/cas/model/CreateDomainVerifyConfigurationStatusRequest.h
	include/alibabacloud/cas/model/CreateDomainVerifyConfigurationStatusResult.h
	include/alibabacloud/cas/model/CreateSignatureDocumentRequest.h
	include/alibabacloud/cas/model/CreateSignatureDocumentResult.h
	include/alibabacloud/cas/model/DescribeOrderAuditFailRecordRequest.h
	include/alibabacloud/cas/model/DescribeOrderAuditFailRecordResult.h
	include/alibabacloud/cas/model/DescribeOrderListRequest.h
	include/alibabacloud/cas/model/DescribeOrderListResult.h
	include/alibabacloud/cas/model/CreateOrderRevokeRequest.h
	include/alibabacloud/cas/model/CreateOrderRevokeResult.h
	include/alibabacloud/cas/model/DeleteCertificateRequest.h
	include/alibabacloud/cas/model/DeleteCertificateResult.h
	include/alibabacloud/cas/model/DescribeOrderDetailRequest.h
	include/alibabacloud/cas/model/DescribeOrderDetailResult.h
	include/alibabacloud/cas/model/DescribeOSSUploadInfoRequest.h
	include/alibabacloud/cas/model/DescribeOSSUploadInfoResult.h
	include/alibabacloud/cas/model/DescribeLocationListRequest.h
	include/alibabacloud/cas/model/DescribeLocationListResult.h
	include/alibabacloud/cas/model/DescribeDeploymentProductRequest.h
	include/alibabacloud/cas/model/DescribeDeploymentProductResult.h
	include/alibabacloud/cas/model/DescribeSignatureCapacityRequest.h
	include/alibabacloud/cas/model/DescribeSignatureCapacityResult.h
	include/alibabacloud/cas/model/DescribeDeploymentDomainListRequest.h
	include/alibabacloud/cas/model/DescribeDeploymentDomainListResult.h
	include/alibabacloud/cas/model/DescribeSignatureTradeDetailRequest.h
	include/alibabacloud/cas/model/DescribeSignatureTradeDetailResult.h
	include/alibabacloud/cas/model/CreateCertificateNameRequest.h
	include/alibabacloud/cas/model/CreateCertificateNameResult.h )

set(cas_src 
	src/CasClient.cc
	src/model/CreateSignatureRequest.cc
	src/model/CreateSignatureResult.cc
	src/model/DescribeCertificateStatusCountRequest.cc
	src/model/DescribeCertificateStatusCountResult.cc
	src/model/CreateOrderDocumentRequest.cc
	src/model/CreateOrderDocumentResult.cc
	src/model/DescribeExpectationResultRequest.cc
	src/model/DescribeExpectationResultResult.cc
	src/model/DescribeOrderMaterialRequest.cc
	src/model/DescribeOrderMaterialResult.cc
	src/model/CreateSignaturePeopleCertificateRequest.cc
	src/model/CreateSignaturePeopleCertificateResult.cc
	src/model/DescribeCertificateListRequest.cc
	src/model/DescribeCertificateListResult.cc
	src/model/DescribeCertificateBrandListRequest.cc
	src/model/DescribeCertificateBrandListResult.cc
	src/model/DescribeDomainVerifyConfigurationStatusRequest.cc
	src/model/DescribeDomainVerifyConfigurationStatusResult.cc
	src/model/CreateOrderCancelRequest.cc
	src/model/CreateOrderCancelResult.cc
	src/model/CreateAliDnsRecordIdRequest.cc
	src/model/CreateAliDnsRecordIdResult.cc
	src/model/CreateCertificateRequest.cc
	src/model/CreateCertificateResult.cc
	src/model/CreateWebSignatureRequest.cc
	src/model/CreateWebSignatureResult.cc
	src/model/CreateUnDeploymentRequest.cc
	src/model/CreateUnDeploymentResult.cc
	src/model/DescribeDownloadCertificateRequest.cc
	src/model/DescribeDownloadCertificateResult.cc
	src/model/DescribeCertificateDetailRequest.cc
	src/model/DescribeCertificateDetailResult.cc
	src/model/CreateOrderMaterialRequest.cc
	src/model/CreateOrderMaterialResult.cc
	src/model/DescribeSignatureStatisticsRequest.cc
	src/model/DescribeSignatureStatisticsResult.cc
	src/model/DescribeSignatureTradeListRequest.cc
	src/model/DescribeSignatureTradeListResult.cc
	src/model/CreateFilingSignatureDocumentRequest.cc
	src/model/CreateFilingSignatureDocumentResult.cc
	src/model/DescribeDownloadDomainVerifyConfigurationRequest.cc
	src/model/DescribeDownloadDomainVerifyConfigurationResult.cc
	src/model/DescribeOSSDownloadInfoRequest.cc
	src/model/DescribeOSSDownloadInfoResult.cc
	src/model/CreateCooperationOrderRequest.cc
	src/model/CreateCooperationOrderResult.cc
	src/model/DescribeDeploymentRegionListRequest.cc
	src/model/DescribeDeploymentRegionListResult.cc
	src/model/CreateOrderAuditRequest.cc
	src/model/CreateOrderAuditResult.cc
	src/model/DeleteOrderRequest.cc
	src/model/DeleteOrderResult.cc
	src/model/DescribeHelpListRequest.cc
	src/model/DescribeHelpListResult.cc
	src/model/DescribeStsAuthStatusRequest.cc
	src/model/DescribeStsAuthStatusResult.cc
	src/model/DescribeDeploymentDetailRequest.cc
	src/model/DescribeDeploymentDetailResult.cc
	src/model/DescribeDomainVerifyInfoRequest.cc
	src/model/DescribeDomainVerifyInfoResult.cc
	src/model/CreateDeploymentRequest.cc
	src/model/CreateDeploymentResult.cc
	src/model/DescribeOrderDocumentRequest.cc
	src/model/DescribeOrderDocumentResult.cc
	src/model/CreateDomainVerifyConfigurationStatusRequest.cc
	src/model/CreateDomainVerifyConfigurationStatusResult.cc
	src/model/CreateSignatureDocumentRequest.cc
	src/model/CreateSignatureDocumentResult.cc
	src/model/DescribeOrderAuditFailRecordRequest.cc
	src/model/DescribeOrderAuditFailRecordResult.cc
	src/model/DescribeOrderListRequest.cc
	src/model/DescribeOrderListResult.cc
	src/model/CreateOrderRevokeRequest.cc
	src/model/CreateOrderRevokeResult.cc
	src/model/DeleteCertificateRequest.cc
	src/model/DeleteCertificateResult.cc
	src/model/DescribeOrderDetailRequest.cc
	src/model/DescribeOrderDetailResult.cc
	src/model/DescribeOSSUploadInfoRequest.cc
	src/model/DescribeOSSUploadInfoResult.cc
	src/model/DescribeLocationListRequest.cc
	src/model/DescribeLocationListResult.cc
	src/model/DescribeDeploymentProductRequest.cc
	src/model/DescribeDeploymentProductResult.cc
	src/model/DescribeSignatureCapacityRequest.cc
	src/model/DescribeSignatureCapacityResult.cc
	src/model/DescribeDeploymentDomainListRequest.cc
	src/model/DescribeDeploymentDomainListResult.cc
	src/model/DescribeSignatureTradeDetailRequest.cc
	src/model/DescribeSignatureTradeDetailResult.cc
	src/model/CreateCertificateNameRequest.cc
	src/model/CreateCertificateNameResult.cc )

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