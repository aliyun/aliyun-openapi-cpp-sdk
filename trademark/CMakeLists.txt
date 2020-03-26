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

set(trademark_public_header 
	include/alibabacloud/trademark/TrademarkClient.h
	include/alibabacloud/trademark/TrademarkExport.h )

set(trademark_public_header_model 
	include/alibabacloud/trademark/model/AcceptPartnerNotificationRequest.h
	include/alibabacloud/trademark/model/AcceptPartnerNotificationResult.h
	include/alibabacloud/trademark/model/ApplyNotaryPostRequest.h
	include/alibabacloud/trademark/model/ApplyNotaryPostResult.h
	include/alibabacloud/trademark/model/BindMaterialRequest.h
	include/alibabacloud/trademark/model/BindMaterialResult.h
	include/alibabacloud/trademark/model/CancelTradeOrderRequest.h
	include/alibabacloud/trademark/model/CancelTradeOrderResult.h
	include/alibabacloud/trademark/model/CheckLoaFillRequest.h
	include/alibabacloud/trademark/model/CheckLoaFillResult.h
	include/alibabacloud/trademark/model/CheckTrademarkOrderRequest.h
	include/alibabacloud/trademark/model/CheckTrademarkOrderResult.h
	include/alibabacloud/trademark/model/CombineLoaRequest.h
	include/alibabacloud/trademark/model/CombineLoaResult.h
	include/alibabacloud/trademark/model/ConfirmAdditionalMaterialRequest.h
	include/alibabacloud/trademark/model/ConfirmAdditionalMaterialResult.h
	include/alibabacloud/trademark/model/ConfirmApplicantRequest.h
	include/alibabacloud/trademark/model/ConfirmApplicantResult.h
	include/alibabacloud/trademark/model/ConvertImageToGrayRequest.h
	include/alibabacloud/trademark/model/ConvertImageToGrayResult.h
	include/alibabacloud/trademark/model/CreateIntentionOrderRequest.h
	include/alibabacloud/trademark/model/CreateIntentionOrderResult.h
	include/alibabacloud/trademark/model/CreateTrademarkOrderRequest.h
	include/alibabacloud/trademark/model/CreateTrademarkOrderResult.h
	include/alibabacloud/trademark/model/DeleteMaterialRequest.h
	include/alibabacloud/trademark/model/DeleteMaterialResult.h
	include/alibabacloud/trademark/model/DeleteTmMonitorRuleRequest.h
	include/alibabacloud/trademark/model/DeleteTmMonitorRuleResult.h
	include/alibabacloud/trademark/model/DenySupplementRequest.h
	include/alibabacloud/trademark/model/DenySupplementResult.h
	include/alibabacloud/trademark/model/DescirbeCombineTrademarkRequest.h
	include/alibabacloud/trademark/model/DescirbeCombineTrademarkResult.h
	include/alibabacloud/trademark/model/FillLogisticsRequest.h
	include/alibabacloud/trademark/model/FillLogisticsResult.h
	include/alibabacloud/trademark/model/FilterUnavailableCodesRequest.h
	include/alibabacloud/trademark/model/FilterUnavailableCodesResult.h
	include/alibabacloud/trademark/model/GenerateQrCodeRequest.h
	include/alibabacloud/trademark/model/GenerateQrCodeResult.h
	include/alibabacloud/trademark/model/GenerateUploadFilePolicyRequest.h
	include/alibabacloud/trademark/model/GenerateUploadFilePolicyResult.h
	include/alibabacloud/trademark/model/GetNotaryOrderRequest.h
	include/alibabacloud/trademark/model/GetNotaryOrderResult.h
	include/alibabacloud/trademark/model/InsertMaterialRequest.h
	include/alibabacloud/trademark/model/InsertMaterialResult.h
	include/alibabacloud/trademark/model/InsertRenewInfoRequest.h
	include/alibabacloud/trademark/model/InsertRenewInfoResult.h
	include/alibabacloud/trademark/model/InsertTmMonitorRuleRequest.h
	include/alibabacloud/trademark/model/InsertTmMonitorRuleResult.h
	include/alibabacloud/trademark/model/InsertTradeIntentionUserRequest.h
	include/alibabacloud/trademark/model/InsertTradeIntentionUserResult.h
	include/alibabacloud/trademark/model/ListNotaryInfosRequest.h
	include/alibabacloud/trademark/model/ListNotaryInfosResult.h
	include/alibabacloud/trademark/model/ListNotaryOrdersRequest.h
	include/alibabacloud/trademark/model/ListNotaryOrdersResult.h
	include/alibabacloud/trademark/model/QueryCommunicationLogsRequest.h
	include/alibabacloud/trademark/model/QueryCommunicationLogsResult.h
	include/alibabacloud/trademark/model/QueryCredentialsInfoRequest.h
	include/alibabacloud/trademark/model/QueryCredentialsInfoResult.h
	include/alibabacloud/trademark/model/QueryIntentionDetailRequest.h
	include/alibabacloud/trademark/model/QueryIntentionDetailResult.h
	include/alibabacloud/trademark/model/QueryIntentionListRequest.h
	include/alibabacloud/trademark/model/QueryIntentionListResult.h
	include/alibabacloud/trademark/model/QueryIntentionPriceRequest.h
	include/alibabacloud/trademark/model/QueryIntentionPriceResult.h
	include/alibabacloud/trademark/model/QueryMaterialRequest.h
	include/alibabacloud/trademark/model/QueryMaterialResult.h
	include/alibabacloud/trademark/model/QueryMaterialListRequest.h
	include/alibabacloud/trademark/model/QueryMaterialListResult.h
	include/alibabacloud/trademark/model/QueryMonitorKeywordsRequest.h
	include/alibabacloud/trademark/model/QueryMonitorKeywordsResult.h
	include/alibabacloud/trademark/model/QueryOfficialFileCustomListRequest.h
	include/alibabacloud/trademark/model/QueryOfficialFileCustomListResult.h
	include/alibabacloud/trademark/model/QueryOssResourcesRequest.h
	include/alibabacloud/trademark/model/QueryOssResourcesResult.h
	include/alibabacloud/trademark/model/QueryQrCodeUploadStatusRequest.h
	include/alibabacloud/trademark/model/QueryQrCodeUploadStatusResult.h
	include/alibabacloud/trademark/model/QuerySupplementDetailRequest.h
	include/alibabacloud/trademark/model/QuerySupplementDetailResult.h
	include/alibabacloud/trademark/model/QueryTaskListRequest.h
	include/alibabacloud/trademark/model/QueryTaskListResult.h
	include/alibabacloud/trademark/model/QueryTradeIntentionUserListRequest.h
	include/alibabacloud/trademark/model/QueryTradeIntentionUserListResult.h
	include/alibabacloud/trademark/model/QueryTradeMarkApplicationDetailRequest.h
	include/alibabacloud/trademark/model/QueryTradeMarkApplicationDetailResult.h
	include/alibabacloud/trademark/model/QueryTradeMarkApplicationLogsRequest.h
	include/alibabacloud/trademark/model/QueryTradeMarkApplicationLogsResult.h
	include/alibabacloud/trademark/model/QueryTradeMarkApplicationsRequest.h
	include/alibabacloud/trademark/model/QueryTradeMarkApplicationsResult.h
	include/alibabacloud/trademark/model/QueryTradeMarkApplicationsByIntentionRequest.h
	include/alibabacloud/trademark/model/QueryTradeMarkApplicationsByIntentionResult.h
	include/alibabacloud/trademark/model/QueryTradeProduceDetailRequest.h
	include/alibabacloud/trademark/model/QueryTradeProduceDetailResult.h
	include/alibabacloud/trademark/model/QueryTradeProduceListRequest.h
	include/alibabacloud/trademark/model/QueryTradeProduceListResult.h
	include/alibabacloud/trademark/model/QueryTrademarkMonitorResultsRequest.h
	include/alibabacloud/trademark/model/QueryTrademarkMonitorResultsResult.h
	include/alibabacloud/trademark/model/QueryTrademarkMonitorRulesRequest.h
	include/alibabacloud/trademark/model/QueryTrademarkMonitorRulesResult.h
	include/alibabacloud/trademark/model/QueryTrademarkPriceRequest.h
	include/alibabacloud/trademark/model/QueryTrademarkPriceResult.h
	include/alibabacloud/trademark/model/RefundProduceRequest.h
	include/alibabacloud/trademark/model/RefundProduceResult.h
	include/alibabacloud/trademark/model/RefuseAdditionalMaterialRequest.h
	include/alibabacloud/trademark/model/RefuseAdditionalMaterialResult.h
	include/alibabacloud/trademark/model/RefuseApplicantRequest.h
	include/alibabacloud/trademark/model/RefuseApplicantResult.h
	include/alibabacloud/trademark/model/RejectApplicantRequest.h
	include/alibabacloud/trademark/model/RejectApplicantResult.h
	include/alibabacloud/trademark/model/SaveTaskRequest.h
	include/alibabacloud/trademark/model/SaveTaskResult.h
	include/alibabacloud/trademark/model/SaveTaskForOfficialFileCustomRequest.h
	include/alibabacloud/trademark/model/SaveTaskForOfficialFileCustomResult.h
	include/alibabacloud/trademark/model/SaveTradeMarkReviewMaterialDetailRequest.h
	include/alibabacloud/trademark/model/SaveTradeMarkReviewMaterialDetailResult.h
	include/alibabacloud/trademark/model/SearchTmOnsalesRequest.h
	include/alibabacloud/trademark/model/SearchTmOnsalesResult.h
	include/alibabacloud/trademark/model/StartNotaryRequest.h
	include/alibabacloud/trademark/model/StartNotaryResult.h
	include/alibabacloud/trademark/model/StoreMaterialTemporarilyRequest.h
	include/alibabacloud/trademark/model/StoreMaterialTemporarilyResult.h
	include/alibabacloud/trademark/model/SubmitSupplementRequest.h
	include/alibabacloud/trademark/model/SubmitSupplementResult.h
	include/alibabacloud/trademark/model/UpdateMaterialRequest.h
	include/alibabacloud/trademark/model/UpdateMaterialResult.h
	include/alibabacloud/trademark/model/UpdateSendMaterialNumRequest.h
	include/alibabacloud/trademark/model/UpdateSendMaterialNumResult.h
	include/alibabacloud/trademark/model/UpdateTmMonitorRuleRequest.h
	include/alibabacloud/trademark/model/UpdateTmMonitorRuleResult.h
	include/alibabacloud/trademark/model/UploadNotaryDataRequest.h
	include/alibabacloud/trademark/model/UploadNotaryDataResult.h
	include/alibabacloud/trademark/model/WriteCommunicationLogRequest.h
	include/alibabacloud/trademark/model/WriteCommunicationLogResult.h
	include/alibabacloud/trademark/model/WriteIntentionCommunicationLogRequest.h
	include/alibabacloud/trademark/model/WriteIntentionCommunicationLogResult.h )

set(trademark_src 
	src/TrademarkClient.cc
	src/model/AcceptPartnerNotificationRequest.cc
	src/model/AcceptPartnerNotificationResult.cc
	src/model/ApplyNotaryPostRequest.cc
	src/model/ApplyNotaryPostResult.cc
	src/model/BindMaterialRequest.cc
	src/model/BindMaterialResult.cc
	src/model/CancelTradeOrderRequest.cc
	src/model/CancelTradeOrderResult.cc
	src/model/CheckLoaFillRequest.cc
	src/model/CheckLoaFillResult.cc
	src/model/CheckTrademarkOrderRequest.cc
	src/model/CheckTrademarkOrderResult.cc
	src/model/CombineLoaRequest.cc
	src/model/CombineLoaResult.cc
	src/model/ConfirmAdditionalMaterialRequest.cc
	src/model/ConfirmAdditionalMaterialResult.cc
	src/model/ConfirmApplicantRequest.cc
	src/model/ConfirmApplicantResult.cc
	src/model/ConvertImageToGrayRequest.cc
	src/model/ConvertImageToGrayResult.cc
	src/model/CreateIntentionOrderRequest.cc
	src/model/CreateIntentionOrderResult.cc
	src/model/CreateTrademarkOrderRequest.cc
	src/model/CreateTrademarkOrderResult.cc
	src/model/DeleteMaterialRequest.cc
	src/model/DeleteMaterialResult.cc
	src/model/DeleteTmMonitorRuleRequest.cc
	src/model/DeleteTmMonitorRuleResult.cc
	src/model/DenySupplementRequest.cc
	src/model/DenySupplementResult.cc
	src/model/DescirbeCombineTrademarkRequest.cc
	src/model/DescirbeCombineTrademarkResult.cc
	src/model/FillLogisticsRequest.cc
	src/model/FillLogisticsResult.cc
	src/model/FilterUnavailableCodesRequest.cc
	src/model/FilterUnavailableCodesResult.cc
	src/model/GenerateQrCodeRequest.cc
	src/model/GenerateQrCodeResult.cc
	src/model/GenerateUploadFilePolicyRequest.cc
	src/model/GenerateUploadFilePolicyResult.cc
	src/model/GetNotaryOrderRequest.cc
	src/model/GetNotaryOrderResult.cc
	src/model/InsertMaterialRequest.cc
	src/model/InsertMaterialResult.cc
	src/model/InsertRenewInfoRequest.cc
	src/model/InsertRenewInfoResult.cc
	src/model/InsertTmMonitorRuleRequest.cc
	src/model/InsertTmMonitorRuleResult.cc
	src/model/InsertTradeIntentionUserRequest.cc
	src/model/InsertTradeIntentionUserResult.cc
	src/model/ListNotaryInfosRequest.cc
	src/model/ListNotaryInfosResult.cc
	src/model/ListNotaryOrdersRequest.cc
	src/model/ListNotaryOrdersResult.cc
	src/model/QueryCommunicationLogsRequest.cc
	src/model/QueryCommunicationLogsResult.cc
	src/model/QueryCredentialsInfoRequest.cc
	src/model/QueryCredentialsInfoResult.cc
	src/model/QueryIntentionDetailRequest.cc
	src/model/QueryIntentionDetailResult.cc
	src/model/QueryIntentionListRequest.cc
	src/model/QueryIntentionListResult.cc
	src/model/QueryIntentionPriceRequest.cc
	src/model/QueryIntentionPriceResult.cc
	src/model/QueryMaterialRequest.cc
	src/model/QueryMaterialResult.cc
	src/model/QueryMaterialListRequest.cc
	src/model/QueryMaterialListResult.cc
	src/model/QueryMonitorKeywordsRequest.cc
	src/model/QueryMonitorKeywordsResult.cc
	src/model/QueryOfficialFileCustomListRequest.cc
	src/model/QueryOfficialFileCustomListResult.cc
	src/model/QueryOssResourcesRequest.cc
	src/model/QueryOssResourcesResult.cc
	src/model/QueryQrCodeUploadStatusRequest.cc
	src/model/QueryQrCodeUploadStatusResult.cc
	src/model/QuerySupplementDetailRequest.cc
	src/model/QuerySupplementDetailResult.cc
	src/model/QueryTaskListRequest.cc
	src/model/QueryTaskListResult.cc
	src/model/QueryTradeIntentionUserListRequest.cc
	src/model/QueryTradeIntentionUserListResult.cc
	src/model/QueryTradeMarkApplicationDetailRequest.cc
	src/model/QueryTradeMarkApplicationDetailResult.cc
	src/model/QueryTradeMarkApplicationLogsRequest.cc
	src/model/QueryTradeMarkApplicationLogsResult.cc
	src/model/QueryTradeMarkApplicationsRequest.cc
	src/model/QueryTradeMarkApplicationsResult.cc
	src/model/QueryTradeMarkApplicationsByIntentionRequest.cc
	src/model/QueryTradeMarkApplicationsByIntentionResult.cc
	src/model/QueryTradeProduceDetailRequest.cc
	src/model/QueryTradeProduceDetailResult.cc
	src/model/QueryTradeProduceListRequest.cc
	src/model/QueryTradeProduceListResult.cc
	src/model/QueryTrademarkMonitorResultsRequest.cc
	src/model/QueryTrademarkMonitorResultsResult.cc
	src/model/QueryTrademarkMonitorRulesRequest.cc
	src/model/QueryTrademarkMonitorRulesResult.cc
	src/model/QueryTrademarkPriceRequest.cc
	src/model/QueryTrademarkPriceResult.cc
	src/model/RefundProduceRequest.cc
	src/model/RefundProduceResult.cc
	src/model/RefuseAdditionalMaterialRequest.cc
	src/model/RefuseAdditionalMaterialResult.cc
	src/model/RefuseApplicantRequest.cc
	src/model/RefuseApplicantResult.cc
	src/model/RejectApplicantRequest.cc
	src/model/RejectApplicantResult.cc
	src/model/SaveTaskRequest.cc
	src/model/SaveTaskResult.cc
	src/model/SaveTaskForOfficialFileCustomRequest.cc
	src/model/SaveTaskForOfficialFileCustomResult.cc
	src/model/SaveTradeMarkReviewMaterialDetailRequest.cc
	src/model/SaveTradeMarkReviewMaterialDetailResult.cc
	src/model/SearchTmOnsalesRequest.cc
	src/model/SearchTmOnsalesResult.cc
	src/model/StartNotaryRequest.cc
	src/model/StartNotaryResult.cc
	src/model/StoreMaterialTemporarilyRequest.cc
	src/model/StoreMaterialTemporarilyResult.cc
	src/model/SubmitSupplementRequest.cc
	src/model/SubmitSupplementResult.cc
	src/model/UpdateMaterialRequest.cc
	src/model/UpdateMaterialResult.cc
	src/model/UpdateSendMaterialNumRequest.cc
	src/model/UpdateSendMaterialNumResult.cc
	src/model/UpdateTmMonitorRuleRequest.cc
	src/model/UpdateTmMonitorRuleResult.cc
	src/model/UploadNotaryDataRequest.cc
	src/model/UploadNotaryDataResult.cc
	src/model/WriteCommunicationLogRequest.cc
	src/model/WriteCommunicationLogResult.cc
	src/model/WriteIntentionCommunicationLogRequest.cc
	src/model/WriteIntentionCommunicationLogResult.cc )

add_library(trademark ${LIB_TYPE}
	${trademark_public_header}
	${trademark_public_header_model}
	${trademark_src})

set_target_properties(trademark
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trademark
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(trademark
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_TRADEMARK_LIBRARY)
endif()

target_include_directories(trademark
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(trademark
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(trademark
		jsoncpp)
	target_include_directories(trademark
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(trademark
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(trademark
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(trademark
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(trademark
		jsoncpp)
endif()

install(FILES ${trademark_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/trademark)
install(FILES ${trademark_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/trademark/model)
install(TARGETS trademark
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)