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

set(dt-oc-info_public_header 
	include/alibabacloud/dt-oc-info/Dt_oc_infoClient.h
	include/alibabacloud/dt-oc-info/Dt_oc_infoExport.h )

set(dt-oc-info_public_header_model 
	include/alibabacloud/dt-oc-info/model/GetOcCompetitorsRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcCompetitorsResult.h
	include/alibabacloud/dt-oc-info/model/GetOcCoreTeamsRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcCoreTeamsResult.h
	include/alibabacloud/dt-oc-info/model/GetOcFinancingRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcFinancingResult.h
	include/alibabacloud/dt-oc-info/model/GetOcFuzzSearchRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcFuzzSearchResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcAbnormalOperationRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcAbnormalOperationResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcAdminLicenseRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcAdminLicenseResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcBasicRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcBasicResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcBranchRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcBranchResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcChangeRecordRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcChangeRecordResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcCheckupRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcCheckupResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcClearAccountRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcClearAccountResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcDoubleCheckupRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcDoubleCheckupResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcEmployeeRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcEmployeeResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcEquityFrozenRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcEquityFrozenResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcEquityPledgeRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcEquityPledgeResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcInvestmentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcInvestmentResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcKnowledgePropertyPledgeRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcKnowledgePropertyPledgeResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcMortgageRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcMortgageResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcSeriousOffenseRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcSeriousOffenseResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcShareholderRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcShareholderResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIcSimpleCancelRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIcSimpleCancelResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIpCertificateRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIpCertificateResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIpDomainRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIpDomainResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIpPatentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIpPatentResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIpSoftwareCopyrightRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIpSoftwareCopyrightResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIpTrademarkRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIpTrademarkResult.h
	include/alibabacloud/dt-oc-info/model/GetOcIpWorksCopyrightRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcIpWorksCopyrightResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeAuctionRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeAuctionResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeCaseFilingRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeCaseFilingResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeCourtAnnouncementRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeCourtAnnouncementResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeCourtNoticeRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeCourtNoticeResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeDishonestyRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeDishonestyResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeExecutedRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeExecutedResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeJudgementDocRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeJudgementDocResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeLimitHighConsumeRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeLimitHighConsumeResult.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeTerminalCaseRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcJusticeTerminalCaseResult.h
	include/alibabacloud/dt-oc-info/model/GetOcListedCompanyRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcListedCompanyResult.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeAdminPunishmentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeAdminPunishmentResult.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeCustomsPunishmentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeCustomsPunishmentResult.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeEnvironmentPunishmentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeEnvironmentPunishmentResult.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeFoodDrugPunishmentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeFoodDrugPunishmentResult.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeQualityPunishmentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcNegativeQualityPunishmentResult.h
	include/alibabacloud/dt-oc-info/model/GetOcOperationBiddingRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcOperationBiddingResult.h
	include/alibabacloud/dt-oc-info/model/GetOcOperationCustomsRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcOperationCustomsResult.h
	include/alibabacloud/dt-oc-info/model/GetOcOperationPurchaseLandRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcOperationPurchaseLandResult.h
	include/alibabacloud/dt-oc-info/model/GetOcOperationRecruitmentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcOperationRecruitmentResult.h
	include/alibabacloud/dt-oc-info/model/GetOcProductBandRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcProductBandResult.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxAbnormalRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxAbnormalResult.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxClassARequest.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxClassAResult.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxGeneralTaxpayerRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxGeneralTaxpayerResult.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxIllegalRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxIllegalResult.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxOverdueRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxOverdueResult.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxPunishmentRequest.h
	include/alibabacloud/dt-oc-info/model/GetOcTaxPunishmentResult.h
	include/alibabacloud/dt-oc-info/model/GetQccCertificationDetailByIdRequest.h
	include/alibabacloud/dt-oc-info/model/GetQccCertificationDetailByIdResult.h
	include/alibabacloud/dt-oc-info/model/GetQccSearchCertificationRequest.h
	include/alibabacloud/dt-oc-info/model/GetQccSearchCertificationResult.h )

set(dt-oc-info_src 
	src/Dt-oc-infoClient.cc
	src/model/GetOcCompetitorsRequest.cc
	src/model/GetOcCompetitorsResult.cc
	src/model/GetOcCoreTeamsRequest.cc
	src/model/GetOcCoreTeamsResult.cc
	src/model/GetOcFinancingRequest.cc
	src/model/GetOcFinancingResult.cc
	src/model/GetOcFuzzSearchRequest.cc
	src/model/GetOcFuzzSearchResult.cc
	src/model/GetOcIcAbnormalOperationRequest.cc
	src/model/GetOcIcAbnormalOperationResult.cc
	src/model/GetOcIcAdminLicenseRequest.cc
	src/model/GetOcIcAdminLicenseResult.cc
	src/model/GetOcIcBasicRequest.cc
	src/model/GetOcIcBasicResult.cc
	src/model/GetOcIcBranchRequest.cc
	src/model/GetOcIcBranchResult.cc
	src/model/GetOcIcChangeRecordRequest.cc
	src/model/GetOcIcChangeRecordResult.cc
	src/model/GetOcIcCheckupRequest.cc
	src/model/GetOcIcCheckupResult.cc
	src/model/GetOcIcClearAccountRequest.cc
	src/model/GetOcIcClearAccountResult.cc
	src/model/GetOcIcDoubleCheckupRequest.cc
	src/model/GetOcIcDoubleCheckupResult.cc
	src/model/GetOcIcEmployeeRequest.cc
	src/model/GetOcIcEmployeeResult.cc
	src/model/GetOcIcEquityFrozenRequest.cc
	src/model/GetOcIcEquityFrozenResult.cc
	src/model/GetOcIcEquityPledgeRequest.cc
	src/model/GetOcIcEquityPledgeResult.cc
	src/model/GetOcIcInvestmentRequest.cc
	src/model/GetOcIcInvestmentResult.cc
	src/model/GetOcIcKnowledgePropertyPledgeRequest.cc
	src/model/GetOcIcKnowledgePropertyPledgeResult.cc
	src/model/GetOcIcMortgageRequest.cc
	src/model/GetOcIcMortgageResult.cc
	src/model/GetOcIcSeriousOffenseRequest.cc
	src/model/GetOcIcSeriousOffenseResult.cc
	src/model/GetOcIcShareholderRequest.cc
	src/model/GetOcIcShareholderResult.cc
	src/model/GetOcIcSimpleCancelRequest.cc
	src/model/GetOcIcSimpleCancelResult.cc
	src/model/GetOcIpCertificateRequest.cc
	src/model/GetOcIpCertificateResult.cc
	src/model/GetOcIpDomainRequest.cc
	src/model/GetOcIpDomainResult.cc
	src/model/GetOcIpPatentRequest.cc
	src/model/GetOcIpPatentResult.cc
	src/model/GetOcIpSoftwareCopyrightRequest.cc
	src/model/GetOcIpSoftwareCopyrightResult.cc
	src/model/GetOcIpTrademarkRequest.cc
	src/model/GetOcIpTrademarkResult.cc
	src/model/GetOcIpWorksCopyrightRequest.cc
	src/model/GetOcIpWorksCopyrightResult.cc
	src/model/GetOcJusticeAuctionRequest.cc
	src/model/GetOcJusticeAuctionResult.cc
	src/model/GetOcJusticeCaseFilingRequest.cc
	src/model/GetOcJusticeCaseFilingResult.cc
	src/model/GetOcJusticeCourtAnnouncementRequest.cc
	src/model/GetOcJusticeCourtAnnouncementResult.cc
	src/model/GetOcJusticeCourtNoticeRequest.cc
	src/model/GetOcJusticeCourtNoticeResult.cc
	src/model/GetOcJusticeDishonestyRequest.cc
	src/model/GetOcJusticeDishonestyResult.cc
	src/model/GetOcJusticeExecutedRequest.cc
	src/model/GetOcJusticeExecutedResult.cc
	src/model/GetOcJusticeJudgementDocRequest.cc
	src/model/GetOcJusticeJudgementDocResult.cc
	src/model/GetOcJusticeLimitHighConsumeRequest.cc
	src/model/GetOcJusticeLimitHighConsumeResult.cc
	src/model/GetOcJusticeTerminalCaseRequest.cc
	src/model/GetOcJusticeTerminalCaseResult.cc
	src/model/GetOcListedCompanyRequest.cc
	src/model/GetOcListedCompanyResult.cc
	src/model/GetOcNegativeAdminPunishmentRequest.cc
	src/model/GetOcNegativeAdminPunishmentResult.cc
	src/model/GetOcNegativeCustomsPunishmentRequest.cc
	src/model/GetOcNegativeCustomsPunishmentResult.cc
	src/model/GetOcNegativeEnvironmentPunishmentRequest.cc
	src/model/GetOcNegativeEnvironmentPunishmentResult.cc
	src/model/GetOcNegativeFoodDrugPunishmentRequest.cc
	src/model/GetOcNegativeFoodDrugPunishmentResult.cc
	src/model/GetOcNegativeQualityPunishmentRequest.cc
	src/model/GetOcNegativeQualityPunishmentResult.cc
	src/model/GetOcOperationBiddingRequest.cc
	src/model/GetOcOperationBiddingResult.cc
	src/model/GetOcOperationCustomsRequest.cc
	src/model/GetOcOperationCustomsResult.cc
	src/model/GetOcOperationPurchaseLandRequest.cc
	src/model/GetOcOperationPurchaseLandResult.cc
	src/model/GetOcOperationRecruitmentRequest.cc
	src/model/GetOcOperationRecruitmentResult.cc
	src/model/GetOcProductBandRequest.cc
	src/model/GetOcProductBandResult.cc
	src/model/GetOcTaxAbnormalRequest.cc
	src/model/GetOcTaxAbnormalResult.cc
	src/model/GetOcTaxClassARequest.cc
	src/model/GetOcTaxClassAResult.cc
	src/model/GetOcTaxGeneralTaxpayerRequest.cc
	src/model/GetOcTaxGeneralTaxpayerResult.cc
	src/model/GetOcTaxIllegalRequest.cc
	src/model/GetOcTaxIllegalResult.cc
	src/model/GetOcTaxOverdueRequest.cc
	src/model/GetOcTaxOverdueResult.cc
	src/model/GetOcTaxPunishmentRequest.cc
	src/model/GetOcTaxPunishmentResult.cc
	src/model/GetQccCertificationDetailByIdRequest.cc
	src/model/GetQccCertificationDetailByIdResult.cc
	src/model/GetQccSearchCertificationRequest.cc
	src/model/GetQccSearchCertificationResult.cc )

add_library(dt-oc-info ${LIB_TYPE}
	${dt-oc-info_public_header}
	${dt-oc-info_public_header_model}
	${dt-oc-info_src})

set_target_properties(dt-oc-info
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dt-oc-info
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dt-oc-info
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DT_OC_INFO_LIBRARY)
endif()

target_include_directories(dt-oc-info
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dt-oc-info
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dt-oc-info
		jsoncpp)
	target_include_directories(dt-oc-info
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dt-oc-info
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dt-oc-info
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dt-oc-info
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dt-oc-info
		jsoncpp)
endif()

install(FILES ${dt-oc-info_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dt-oc-info)
install(FILES ${dt-oc-info_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dt-oc-info/model)
install(TARGETS dt-oc-info
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)