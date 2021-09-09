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

set(companyreg_public_header 
	include/alibabacloud/companyreg/CompanyregClient.h
	include/alibabacloud/companyreg/CompanyregExport.h )

set(companyreg_public_header_model 
	include/alibabacloud/companyreg/model/CheckCopyPayrollRequest.h
	include/alibabacloud/companyreg/model/CheckCopyPayrollResult.h
	include/alibabacloud/companyreg/model/CheckSavePayrollRequest.h
	include/alibabacloud/companyreg/model/CheckSavePayrollResult.h
	include/alibabacloud/companyreg/model/CheckSavePayrollDetailRequest.h
	include/alibabacloud/companyreg/model/CheckSavePayrollDetailResult.h
	include/alibabacloud/companyreg/model/ClearTrailDataRequest.h
	include/alibabacloud/companyreg/model/ClearTrailDataResult.h
	include/alibabacloud/companyreg/model/ConvertFeeRequest.h
	include/alibabacloud/companyreg/model/ConvertFeeResult.h
	include/alibabacloud/companyreg/model/ConvertInvoiceRequest.h
	include/alibabacloud/companyreg/model/ConvertInvoiceResult.h
	include/alibabacloud/companyreg/model/CopyPayrollRequest.h
	include/alibabacloud/companyreg/model/CopyPayrollResult.h
	include/alibabacloud/companyreg/model/DeleteFeeRequest.h
	include/alibabacloud/companyreg/model/DeleteFeeResult.h
	include/alibabacloud/companyreg/model/DeleteInvoiceRequest.h
	include/alibabacloud/companyreg/model/DeleteInvoiceResult.h
	include/alibabacloud/companyreg/model/DeletePayrollRequest.h
	include/alibabacloud/companyreg/model/DeletePayrollResult.h
	include/alibabacloud/companyreg/model/GetBalanceSheetInfoRequest.h
	include/alibabacloud/companyreg/model/GetBalanceSheetInfoResult.h
	include/alibabacloud/companyreg/model/GetCashFlowInfoRequest.h
	include/alibabacloud/companyreg/model/GetCashFlowInfoResult.h
	include/alibabacloud/companyreg/model/GetEnterprisesInfoRequest.h
	include/alibabacloud/companyreg/model/GetEnterprisesInfoResult.h
	include/alibabacloud/companyreg/model/GetFeeRequest.h
	include/alibabacloud/companyreg/model/GetFeeResult.h
	include/alibabacloud/companyreg/model/GetHomePageRequest.h
	include/alibabacloud/companyreg/model/GetHomePageResult.h
	include/alibabacloud/companyreg/model/GetIncomeStatementInfoRequest.h
	include/alibabacloud/companyreg/model/GetIncomeStatementInfoResult.h
	include/alibabacloud/companyreg/model/GetIndustryCommerceInfoRequest.h
	include/alibabacloud/companyreg/model/GetIndustryCommerceInfoResult.h
	include/alibabacloud/companyreg/model/GetInitFlowRequest.h
	include/alibabacloud/companyreg/model/GetInitFlowResult.h
	include/alibabacloud/companyreg/model/GetInvoiceInfoRequest.h
	include/alibabacloud/companyreg/model/GetInvoiceInfoResult.h
	include/alibabacloud/companyreg/model/GetLastMonthInvoiceCountRequest.h
	include/alibabacloud/companyreg/model/GetLastMonthInvoiceCountResult.h
	include/alibabacloud/companyreg/model/GetNoticeRequest.h
	include/alibabacloud/companyreg/model/GetNoticeResult.h
	include/alibabacloud/companyreg/model/GetOssStsRequest.h
	include/alibabacloud/companyreg/model/GetOssStsResult.h
	include/alibabacloud/companyreg/model/GetPayrollInfoRequest.h
	include/alibabacloud/companyreg/model/GetPayrollInfoResult.h
	include/alibabacloud/companyreg/model/GetPayrollSettingRequest.h
	include/alibabacloud/companyreg/model/GetPayrollSettingResult.h
	include/alibabacloud/companyreg/model/GetPeriodInfoRequest.h
	include/alibabacloud/companyreg/model/GetPeriodInfoResult.h
	include/alibabacloud/companyreg/model/GetQuarterCashFlowInfoRequest.h
	include/alibabacloud/companyreg/model/GetQuarterCashFlowInfoResult.h
	include/alibabacloud/companyreg/model/GetQuarterIncomeStatementInfoRequest.h
	include/alibabacloud/companyreg/model/GetQuarterIncomeStatementInfoResult.h
	include/alibabacloud/companyreg/model/GetServiceInfoRequest.h
	include/alibabacloud/companyreg/model/GetServiceInfoResult.h
	include/alibabacloud/companyreg/model/GetSsoUserInfoRequest.h
	include/alibabacloud/companyreg/model/GetSsoUserInfoResult.h
	include/alibabacloud/companyreg/model/GetTaxInfoRequest.h
	include/alibabacloud/companyreg/model/GetTaxInfoResult.h
	include/alibabacloud/companyreg/model/GetTaxationCalendarRequest.h
	include/alibabacloud/companyreg/model/GetTaxationCalendarResult.h
	include/alibabacloud/companyreg/model/GetTaxationInfoRequest.h
	include/alibabacloud/companyreg/model/GetTaxationInfoResult.h
	include/alibabacloud/companyreg/model/GetTypeListRequest.h
	include/alibabacloud/companyreg/model/GetTypeListResult.h
	include/alibabacloud/companyreg/model/GetVoucherCountRequest.h
	include/alibabacloud/companyreg/model/GetVoucherCountResult.h
	include/alibabacloud/companyreg/model/ListCashJournalRequest.h
	include/alibabacloud/companyreg/model/ListCashJournalResult.h
	include/alibabacloud/companyreg/model/ListEnterprisesRequest.h
	include/alibabacloud/companyreg/model/ListEnterprisesResult.h
	include/alibabacloud/companyreg/model/ListInvoiceRequest.h
	include/alibabacloud/companyreg/model/ListInvoiceResult.h
	include/alibabacloud/companyreg/model/ListLastMonthInvoiceRequest.h
	include/alibabacloud/companyreg/model/ListLastMonthInvoiceResult.h
	include/alibabacloud/companyreg/model/ListPayrollRequest.h
	include/alibabacloud/companyreg/model/ListPayrollResult.h
	include/alibabacloud/companyreg/model/ListVoucherRequest.h
	include/alibabacloud/companyreg/model/ListVoucherResult.h
	include/alibabacloud/companyreg/model/PhotoInvoiceRequest.h
	include/alibabacloud/companyreg/model/PhotoInvoiceResult.h
	include/alibabacloud/companyreg/model/PrintAcctgTransRequest.h
	include/alibabacloud/companyreg/model/PrintAcctgTransResult.h
	include/alibabacloud/companyreg/model/RefreshCustomerInfoRequest.h
	include/alibabacloud/companyreg/model/RefreshCustomerInfoResult.h
	include/alibabacloud/companyreg/model/SaveOpeningBalanceStatusRequest.h
	include/alibabacloud/companyreg/model/SaveOpeningBalanceStatusResult.h
	include/alibabacloud/companyreg/model/SavePayrollRequest.h
	include/alibabacloud/companyreg/model/SavePayrollResult.h
	include/alibabacloud/companyreg/model/SavePayrollSettingRequest.h
	include/alibabacloud/companyreg/model/SavePayrollSettingResult.h
	include/alibabacloud/companyreg/model/ScanInvoiceRequest.h
	include/alibabacloud/companyreg/model/ScanInvoiceResult.h
	include/alibabacloud/companyreg/model/SendMessageRequest.h
	include/alibabacloud/companyreg/model/SendMessageResult.h
	include/alibabacloud/companyreg/model/UpdateCustomerInfoRequest.h
	include/alibabacloud/companyreg/model/UpdateCustomerInfoResult.h
	include/alibabacloud/companyreg/model/UpdateFeeRequest.h
	include/alibabacloud/companyreg/model/UpdateFeeResult.h
	include/alibabacloud/companyreg/model/UpdateTaxInfoRequest.h
	include/alibabacloud/companyreg/model/UpdateTaxInfoResult.h
	include/alibabacloud/companyreg/model/UpdateTaxationProcessRequest.h
	include/alibabacloud/companyreg/model/UpdateTaxationProcessResult.h
	include/alibabacloud/companyreg/model/VerifyTaxSmsCodeRequest.h
	include/alibabacloud/companyreg/model/VerifyTaxSmsCodeResult.h )

set(companyreg_src 
	src/CompanyregClient.cc
	src/model/CheckCopyPayrollRequest.cc
	src/model/CheckCopyPayrollResult.cc
	src/model/CheckSavePayrollRequest.cc
	src/model/CheckSavePayrollResult.cc
	src/model/CheckSavePayrollDetailRequest.cc
	src/model/CheckSavePayrollDetailResult.cc
	src/model/ClearTrailDataRequest.cc
	src/model/ClearTrailDataResult.cc
	src/model/ConvertFeeRequest.cc
	src/model/ConvertFeeResult.cc
	src/model/ConvertInvoiceRequest.cc
	src/model/ConvertInvoiceResult.cc
	src/model/CopyPayrollRequest.cc
	src/model/CopyPayrollResult.cc
	src/model/DeleteFeeRequest.cc
	src/model/DeleteFeeResult.cc
	src/model/DeleteInvoiceRequest.cc
	src/model/DeleteInvoiceResult.cc
	src/model/DeletePayrollRequest.cc
	src/model/DeletePayrollResult.cc
	src/model/GetBalanceSheetInfoRequest.cc
	src/model/GetBalanceSheetInfoResult.cc
	src/model/GetCashFlowInfoRequest.cc
	src/model/GetCashFlowInfoResult.cc
	src/model/GetEnterprisesInfoRequest.cc
	src/model/GetEnterprisesInfoResult.cc
	src/model/GetFeeRequest.cc
	src/model/GetFeeResult.cc
	src/model/GetHomePageRequest.cc
	src/model/GetHomePageResult.cc
	src/model/GetIncomeStatementInfoRequest.cc
	src/model/GetIncomeStatementInfoResult.cc
	src/model/GetIndustryCommerceInfoRequest.cc
	src/model/GetIndustryCommerceInfoResult.cc
	src/model/GetInitFlowRequest.cc
	src/model/GetInitFlowResult.cc
	src/model/GetInvoiceInfoRequest.cc
	src/model/GetInvoiceInfoResult.cc
	src/model/GetLastMonthInvoiceCountRequest.cc
	src/model/GetLastMonthInvoiceCountResult.cc
	src/model/GetNoticeRequest.cc
	src/model/GetNoticeResult.cc
	src/model/GetOssStsRequest.cc
	src/model/GetOssStsResult.cc
	src/model/GetPayrollInfoRequest.cc
	src/model/GetPayrollInfoResult.cc
	src/model/GetPayrollSettingRequest.cc
	src/model/GetPayrollSettingResult.cc
	src/model/GetPeriodInfoRequest.cc
	src/model/GetPeriodInfoResult.cc
	src/model/GetQuarterCashFlowInfoRequest.cc
	src/model/GetQuarterCashFlowInfoResult.cc
	src/model/GetQuarterIncomeStatementInfoRequest.cc
	src/model/GetQuarterIncomeStatementInfoResult.cc
	src/model/GetServiceInfoRequest.cc
	src/model/GetServiceInfoResult.cc
	src/model/GetSsoUserInfoRequest.cc
	src/model/GetSsoUserInfoResult.cc
	src/model/GetTaxInfoRequest.cc
	src/model/GetTaxInfoResult.cc
	src/model/GetTaxationCalendarRequest.cc
	src/model/GetTaxationCalendarResult.cc
	src/model/GetTaxationInfoRequest.cc
	src/model/GetTaxationInfoResult.cc
	src/model/GetTypeListRequest.cc
	src/model/GetTypeListResult.cc
	src/model/GetVoucherCountRequest.cc
	src/model/GetVoucherCountResult.cc
	src/model/ListCashJournalRequest.cc
	src/model/ListCashJournalResult.cc
	src/model/ListEnterprisesRequest.cc
	src/model/ListEnterprisesResult.cc
	src/model/ListInvoiceRequest.cc
	src/model/ListInvoiceResult.cc
	src/model/ListLastMonthInvoiceRequest.cc
	src/model/ListLastMonthInvoiceResult.cc
	src/model/ListPayrollRequest.cc
	src/model/ListPayrollResult.cc
	src/model/ListVoucherRequest.cc
	src/model/ListVoucherResult.cc
	src/model/PhotoInvoiceRequest.cc
	src/model/PhotoInvoiceResult.cc
	src/model/PrintAcctgTransRequest.cc
	src/model/PrintAcctgTransResult.cc
	src/model/RefreshCustomerInfoRequest.cc
	src/model/RefreshCustomerInfoResult.cc
	src/model/SaveOpeningBalanceStatusRequest.cc
	src/model/SaveOpeningBalanceStatusResult.cc
	src/model/SavePayrollRequest.cc
	src/model/SavePayrollResult.cc
	src/model/SavePayrollSettingRequest.cc
	src/model/SavePayrollSettingResult.cc
	src/model/ScanInvoiceRequest.cc
	src/model/ScanInvoiceResult.cc
	src/model/SendMessageRequest.cc
	src/model/SendMessageResult.cc
	src/model/UpdateCustomerInfoRequest.cc
	src/model/UpdateCustomerInfoResult.cc
	src/model/UpdateFeeRequest.cc
	src/model/UpdateFeeResult.cc
	src/model/UpdateTaxInfoRequest.cc
	src/model/UpdateTaxInfoResult.cc
	src/model/UpdateTaxationProcessRequest.cc
	src/model/UpdateTaxationProcessResult.cc
	src/model/VerifyTaxSmsCodeRequest.cc
	src/model/VerifyTaxSmsCodeResult.cc )

add_library(companyreg ${LIB_TYPE}
	${companyreg_public_header}
	${companyreg_public_header_model}
	${companyreg_src})

set_target_properties(companyreg
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}companyreg
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(companyreg
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_COMPANYREG_LIBRARY)
endif()

target_include_directories(companyreg
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(companyreg
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(companyreg
		jsoncpp)
	target_include_directories(companyreg
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(companyreg
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(companyreg
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(companyreg
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(companyreg
		jsoncpp)
endif()

install(FILES ${companyreg_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/companyreg)
install(FILES ${companyreg_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/companyreg/model)
install(TARGETS companyreg
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)