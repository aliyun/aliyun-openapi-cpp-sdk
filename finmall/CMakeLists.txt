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

set(finmall_public_header 
	include/alibabacloud/finmall/FinmallClient.h
	include/alibabacloud/finmall/FinmallExport.h )

set(finmall_public_header_model 
	include/alibabacloud/finmall/model/GetCreditDetailRequest.h
	include/alibabacloud/finmall/model/GetCreditDetailResult.h
	include/alibabacloud/finmall/model/GetDocumentDownloadUrlRequest.h
	include/alibabacloud/finmall/model/GetDocumentDownloadUrlResult.h
	include/alibabacloud/finmall/model/GetCreditWithdrawRecordRequest.h
	include/alibabacloud/finmall/model/GetCreditWithdrawRecordResult.h
	include/alibabacloud/finmall/model/GetCustomerVerifyInfoRequest.h
	include/alibabacloud/finmall/model/GetCustomerVerifyInfoResult.h
	include/alibabacloud/finmall/model/QueryFundPartyListRequest.h
	include/alibabacloud/finmall/model/QueryFundPartyListResult.h
	include/alibabacloud/finmall/model/GetCreditStatusRequest.h
	include/alibabacloud/finmall/model/GetCreditStatusResult.h
	include/alibabacloud/finmall/model/SaveAuthenticationInfoRequest.h
	include/alibabacloud/finmall/model/SaveAuthenticationInfoResult.h
	include/alibabacloud/finmall/model/GetTradeDataRequest.h
	include/alibabacloud/finmall/model/GetTradeDataResult.h
	include/alibabacloud/finmall/model/UploadCustomIDImageRequest.h
	include/alibabacloud/finmall/model/UploadCustomIDImageResult.h
	include/alibabacloud/finmall/model/QuerySignResultRequest.h
	include/alibabacloud/finmall/model/QuerySignResultResult.h
	include/alibabacloud/finmall/model/ApplyForLoanRequest.h
	include/alibabacloud/finmall/model/ApplyForLoanResult.h
	include/alibabacloud/finmall/model/GetZhimaScoreRequest.h
	include/alibabacloud/finmall/model/GetZhimaScoreResult.h
	include/alibabacloud/finmall/model/PayForOrderRequest.h
	include/alibabacloud/finmall/model/PayForOrderResult.h
	include/alibabacloud/finmall/model/QueryTrialRecordsRequest.h
	include/alibabacloud/finmall/model/QueryTrialRecordsResult.h
	include/alibabacloud/finmall/model/GetCurrentTermRepayInfoRequest.h
	include/alibabacloud/finmall/model/GetCurrentTermRepayInfoResult.h
	include/alibabacloud/finmall/model/UpdateAuthenticationInfoRequest.h
	include/alibabacloud/finmall/model/UpdateAuthenticationInfoResult.h
	include/alibabacloud/finmall/model/UpdateEnterpriseCustomInfoRequest.h
	include/alibabacloud/finmall/model/UpdateEnterpriseCustomInfoResult.h
	include/alibabacloud/finmall/model/GetCreditSignatureInfoRequest.h
	include/alibabacloud/finmall/model/GetCreditSignatureInfoResult.h
	include/alibabacloud/finmall/model/AddTrialRecordRequest.h
	include/alibabacloud/finmall/model/AddTrialRecordResult.h
	include/alibabacloud/finmall/model/GetAuthorizeCreditQueryRequest.h
	include/alibabacloud/finmall/model/GetAuthorizeCreditQueryResult.h
	include/alibabacloud/finmall/model/CancelCreditRequest.h
	include/alibabacloud/finmall/model/CancelCreditResult.h
	include/alibabacloud/finmall/model/GetCustomStatusInfoRequest.h
	include/alibabacloud/finmall/model/GetCustomStatusInfoResult.h
	include/alibabacloud/finmall/model/GetOverdueRecordListRequest.h
	include/alibabacloud/finmall/model/GetOverdueRecordListResult.h
	include/alibabacloud/finmall/model/GetProductDetailRequest.h
	include/alibabacloud/finmall/model/GetProductDetailResult.h
	include/alibabacloud/finmall/model/VerifyCustomerRequest.h
	include/alibabacloud/finmall/model/VerifyCustomerResult.h
	include/alibabacloud/finmall/model/SignLoanAgreementRequest.h
	include/alibabacloud/finmall/model/SignLoanAgreementResult.h
	include/alibabacloud/finmall/model/AddCustomInfoRequest.h
	include/alibabacloud/finmall/model/AddCustomInfoResult.h
	include/alibabacloud/finmall/model/GetProductListRequest.h
	include/alibabacloud/finmall/model/GetProductListResult.h
	include/alibabacloud/finmall/model/GetLoanAgreementRequest.h
	include/alibabacloud/finmall/model/GetLoanAgreementResult.h
	include/alibabacloud/finmall/model/GetUserInfoAuthorizationAgreementRequest.h
	include/alibabacloud/finmall/model/GetUserInfoAuthorizationAgreementResult.h
	include/alibabacloud/finmall/model/SignedPageResultRequest.h
	include/alibabacloud/finmall/model/SignedPageResultResult.h
	include/alibabacloud/finmall/model/GetLoanApplyRecordListRequest.h
	include/alibabacloud/finmall/model/GetLoanApplyRecordListResult.h
	include/alibabacloud/finmall/model/GetLatestOverdueRecordRequest.h
	include/alibabacloud/finmall/model/GetLatestOverdueRecordResult.h
	include/alibabacloud/finmall/model/GetCreditListRequest.h
	include/alibabacloud/finmall/model/GetCreditListResult.h
	include/alibabacloud/finmall/model/SignResultNotifyRequest.h
	include/alibabacloud/finmall/model/SignResultNotifyResult.h
	include/alibabacloud/finmall/model/VerifySMSTokenRequest.h
	include/alibabacloud/finmall/model/VerifySMSTokenResult.h
	include/alibabacloud/finmall/model/GetCreditRepayListRequest.h
	include/alibabacloud/finmall/model/GetCreditRepayListResult.h
	include/alibabacloud/finmall/model/GetSignContractUrlRequest.h
	include/alibabacloud/finmall/model/GetSignContractUrlResult.h
	include/alibabacloud/finmall/model/GetRepayPlanTrialRequest.h
	include/alibabacloud/finmall/model/GetRepayPlanTrialResult.h )

set(finmall_src 
	src/FinmallClient.cc
	src/model/GetCreditDetailRequest.cc
	src/model/GetCreditDetailResult.cc
	src/model/GetDocumentDownloadUrlRequest.cc
	src/model/GetDocumentDownloadUrlResult.cc
	src/model/GetCreditWithdrawRecordRequest.cc
	src/model/GetCreditWithdrawRecordResult.cc
	src/model/GetCustomerVerifyInfoRequest.cc
	src/model/GetCustomerVerifyInfoResult.cc
	src/model/QueryFundPartyListRequest.cc
	src/model/QueryFundPartyListResult.cc
	src/model/GetCreditStatusRequest.cc
	src/model/GetCreditStatusResult.cc
	src/model/SaveAuthenticationInfoRequest.cc
	src/model/SaveAuthenticationInfoResult.cc
	src/model/GetTradeDataRequest.cc
	src/model/GetTradeDataResult.cc
	src/model/UploadCustomIDImageRequest.cc
	src/model/UploadCustomIDImageResult.cc
	src/model/QuerySignResultRequest.cc
	src/model/QuerySignResultResult.cc
	src/model/ApplyForLoanRequest.cc
	src/model/ApplyForLoanResult.cc
	src/model/GetZhimaScoreRequest.cc
	src/model/GetZhimaScoreResult.cc
	src/model/PayForOrderRequest.cc
	src/model/PayForOrderResult.cc
	src/model/QueryTrialRecordsRequest.cc
	src/model/QueryTrialRecordsResult.cc
	src/model/GetCurrentTermRepayInfoRequest.cc
	src/model/GetCurrentTermRepayInfoResult.cc
	src/model/UpdateAuthenticationInfoRequest.cc
	src/model/UpdateAuthenticationInfoResult.cc
	src/model/UpdateEnterpriseCustomInfoRequest.cc
	src/model/UpdateEnterpriseCustomInfoResult.cc
	src/model/GetCreditSignatureInfoRequest.cc
	src/model/GetCreditSignatureInfoResult.cc
	src/model/AddTrialRecordRequest.cc
	src/model/AddTrialRecordResult.cc
	src/model/GetAuthorizeCreditQueryRequest.cc
	src/model/GetAuthorizeCreditQueryResult.cc
	src/model/CancelCreditRequest.cc
	src/model/CancelCreditResult.cc
	src/model/GetCustomStatusInfoRequest.cc
	src/model/GetCustomStatusInfoResult.cc
	src/model/GetOverdueRecordListRequest.cc
	src/model/GetOverdueRecordListResult.cc
	src/model/GetProductDetailRequest.cc
	src/model/GetProductDetailResult.cc
	src/model/VerifyCustomerRequest.cc
	src/model/VerifyCustomerResult.cc
	src/model/SignLoanAgreementRequest.cc
	src/model/SignLoanAgreementResult.cc
	src/model/AddCustomInfoRequest.cc
	src/model/AddCustomInfoResult.cc
	src/model/GetProductListRequest.cc
	src/model/GetProductListResult.cc
	src/model/GetLoanAgreementRequest.cc
	src/model/GetLoanAgreementResult.cc
	src/model/GetUserInfoAuthorizationAgreementRequest.cc
	src/model/GetUserInfoAuthorizationAgreementResult.cc
	src/model/SignedPageResultRequest.cc
	src/model/SignedPageResultResult.cc
	src/model/GetLoanApplyRecordListRequest.cc
	src/model/GetLoanApplyRecordListResult.cc
	src/model/GetLatestOverdueRecordRequest.cc
	src/model/GetLatestOverdueRecordResult.cc
	src/model/GetCreditListRequest.cc
	src/model/GetCreditListResult.cc
	src/model/SignResultNotifyRequest.cc
	src/model/SignResultNotifyResult.cc
	src/model/VerifySMSTokenRequest.cc
	src/model/VerifySMSTokenResult.cc
	src/model/GetCreditRepayListRequest.cc
	src/model/GetCreditRepayListResult.cc
	src/model/GetSignContractUrlRequest.cc
	src/model/GetSignContractUrlResult.cc
	src/model/GetRepayPlanTrialRequest.cc
	src/model/GetRepayPlanTrialResult.cc )

add_library(finmall ${LIB_TYPE}
	${finmall_public_header}
	${finmall_public_header_model}
	${finmall_src})

set_target_properties(finmall
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}finmall
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(finmall
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_FINMALL_LIBRARY)
endif()

target_include_directories(finmall
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(finmall
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(finmall
		jsoncpp)
	target_include_directories(finmall
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(finmall
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(finmall
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(finmall
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(finmall
		jsoncpp)
endif()

install(FILES ${finmall_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/finmall)
install(FILES ${finmall_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/finmall/model)
install(TARGETS finmall
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)