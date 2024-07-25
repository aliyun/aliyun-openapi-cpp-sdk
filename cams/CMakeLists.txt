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

set(cams_public_header 
	include/alibabacloud/cams/CamsClient.h
	include/alibabacloud/cams/CamsExport.h )

set(cams_public_header_model 
	include/alibabacloud/cams/model/AddChatappPhoneNumberRequest.h
	include/alibabacloud/cams/model/AddChatappPhoneNumberResult.h
	include/alibabacloud/cams/model/BeeBotAssociateRequest.h
	include/alibabacloud/cams/model/BeeBotAssociateResult.h
	include/alibabacloud/cams/model/BeeBotChatRequest.h
	include/alibabacloud/cams/model/BeeBotChatResult.h
	include/alibabacloud/cams/model/ChatappBindWabaRequest.h
	include/alibabacloud/cams/model/ChatappBindWabaResult.h
	include/alibabacloud/cams/model/ChatappEmbedSignUpRequest.h
	include/alibabacloud/cams/model/ChatappEmbedSignUpResult.h
	include/alibabacloud/cams/model/ChatappMigrationRegisterRequest.h
	include/alibabacloud/cams/model/ChatappMigrationRegisterResult.h
	include/alibabacloud/cams/model/ChatappMigrationVerifiedRequest.h
	include/alibabacloud/cams/model/ChatappMigrationVerifiedResult.h
	include/alibabacloud/cams/model/ChatappPhoneNumberDeregisterRequest.h
	include/alibabacloud/cams/model/ChatappPhoneNumberDeregisterResult.h
	include/alibabacloud/cams/model/ChatappPhoneNumberRegisterRequest.h
	include/alibabacloud/cams/model/ChatappPhoneNumberRegisterResult.h
	include/alibabacloud/cams/model/ChatappSyncPhoneNumberRequest.h
	include/alibabacloud/cams/model/ChatappSyncPhoneNumberResult.h
	include/alibabacloud/cams/model/ChatappVerifyAndRegisterRequest.h
	include/alibabacloud/cams/model/ChatappVerifyAndRegisterResult.h
	include/alibabacloud/cams/model/CreateChatappMigrationInitiateRequest.h
	include/alibabacloud/cams/model/CreateChatappMigrationInitiateResult.h
	include/alibabacloud/cams/model/CreateChatappTemplateRequest.h
	include/alibabacloud/cams/model/CreateChatappTemplateResult.h
	include/alibabacloud/cams/model/CreateFlowRequest.h
	include/alibabacloud/cams/model/CreateFlowResult.h
	include/alibabacloud/cams/model/CreatePhoneMessageQrdlRequest.h
	include/alibabacloud/cams/model/CreatePhoneMessageQrdlResult.h
	include/alibabacloud/cams/model/DeleteChatappTemplateRequest.h
	include/alibabacloud/cams/model/DeleteChatappTemplateResult.h
	include/alibabacloud/cams/model/DeleteFlowRequest.h
	include/alibabacloud/cams/model/DeleteFlowResult.h
	include/alibabacloud/cams/model/DeletePhoneMessageQrdlRequest.h
	include/alibabacloud/cams/model/DeletePhoneMessageQrdlResult.h
	include/alibabacloud/cams/model/DeprecateFlowRequest.h
	include/alibabacloud/cams/model/DeprecateFlowResult.h
	include/alibabacloud/cams/model/EnableWhatsappROIMetricRequest.h
	include/alibabacloud/cams/model/EnableWhatsappROIMetricResult.h
	include/alibabacloud/cams/model/GetChatappPhoneNumberMetricRequest.h
	include/alibabacloud/cams/model/GetChatappPhoneNumberMetricResult.h
	include/alibabacloud/cams/model/GetChatappTemplateDetailRequest.h
	include/alibabacloud/cams/model/GetChatappTemplateDetailResult.h
	include/alibabacloud/cams/model/GetChatappTemplateMetricRequest.h
	include/alibabacloud/cams/model/GetChatappTemplateMetricResult.h
	include/alibabacloud/cams/model/GetChatappUploadAuthorizationRequest.h
	include/alibabacloud/cams/model/GetChatappUploadAuthorizationResult.h
	include/alibabacloud/cams/model/GetChatappVerifyCodeRequest.h
	include/alibabacloud/cams/model/GetChatappVerifyCodeResult.h
	include/alibabacloud/cams/model/GetCommerceSettingRequest.h
	include/alibabacloud/cams/model/GetCommerceSettingResult.h
	include/alibabacloud/cams/model/GetConversationalAutomationRequest.h
	include/alibabacloud/cams/model/GetConversationalAutomationResult.h
	include/alibabacloud/cams/model/GetFlowRequest.h
	include/alibabacloud/cams/model/GetFlowResult.h
	include/alibabacloud/cams/model/GetFlowJSONAssestRequest.h
	include/alibabacloud/cams/model/GetFlowJSONAssestResult.h
	include/alibabacloud/cams/model/GetFlowPreviewUrlRequest.h
	include/alibabacloud/cams/model/GetFlowPreviewUrlResult.h
	include/alibabacloud/cams/model/GetMigrationVerifyCodeRequest.h
	include/alibabacloud/cams/model/GetMigrationVerifyCodeResult.h
	include/alibabacloud/cams/model/GetPermissionByCodeRequest.h
	include/alibabacloud/cams/model/GetPermissionByCodeResult.h
	include/alibabacloud/cams/model/GetPhoneEncryptionPublicKeyRequest.h
	include/alibabacloud/cams/model/GetPhoneEncryptionPublicKeyResult.h
	include/alibabacloud/cams/model/GetPhoneNumberVerificationStatusRequest.h
	include/alibabacloud/cams/model/GetPhoneNumberVerificationStatusResult.h
	include/alibabacloud/cams/model/GetPreValidatePhoneIdRequest.h
	include/alibabacloud/cams/model/GetPreValidatePhoneIdResult.h
	include/alibabacloud/cams/model/GetWhatsappConnectionCatalogRequest.h
	include/alibabacloud/cams/model/GetWhatsappConnectionCatalogResult.h
	include/alibabacloud/cams/model/GetWhatsappHealthStatusRequest.h
	include/alibabacloud/cams/model/GetWhatsappHealthStatusResult.h
	include/alibabacloud/cams/model/IsvGetAppIdRequest.h
	include/alibabacloud/cams/model/IsvGetAppIdResult.h
	include/alibabacloud/cams/model/ListChatappTemplateRequest.h
	include/alibabacloud/cams/model/ListChatappTemplateResult.h
	include/alibabacloud/cams/model/ListFlowRequest.h
	include/alibabacloud/cams/model/ListFlowResult.h
	include/alibabacloud/cams/model/ListPhoneMessageQrdlRequest.h
	include/alibabacloud/cams/model/ListPhoneMessageQrdlResult.h
	include/alibabacloud/cams/model/ListProductRequest.h
	include/alibabacloud/cams/model/ListProductResult.h
	include/alibabacloud/cams/model/ListProductCatalogRequest.h
	include/alibabacloud/cams/model/ListProductCatalogResult.h
	include/alibabacloud/cams/model/ModifyChatappTemplateRequest.h
	include/alibabacloud/cams/model/ModifyChatappTemplateResult.h
	include/alibabacloud/cams/model/ModifyFlowRequest.h
	include/alibabacloud/cams/model/ModifyFlowResult.h
	include/alibabacloud/cams/model/ModifyPhoneBusinessProfileRequest.h
	include/alibabacloud/cams/model/ModifyPhoneBusinessProfileResult.h
	include/alibabacloud/cams/model/PublishFlowRequest.h
	include/alibabacloud/cams/model/PublishFlowResult.h
	include/alibabacloud/cams/model/QueryChatappBindWabaRequest.h
	include/alibabacloud/cams/model/QueryChatappBindWabaResult.h
	include/alibabacloud/cams/model/QueryChatappPhoneNumbersRequest.h
	include/alibabacloud/cams/model/QueryChatappPhoneNumbersResult.h
	include/alibabacloud/cams/model/QueryPhoneBusinessProfileRequest.h
	include/alibabacloud/cams/model/QueryPhoneBusinessProfileResult.h
	include/alibabacloud/cams/model/QueryWabaBusinessInfoRequest.h
	include/alibabacloud/cams/model/QueryWabaBusinessInfoResult.h
	include/alibabacloud/cams/model/SendChatappMassMessageRequest.h
	include/alibabacloud/cams/model/SendChatappMassMessageResult.h
	include/alibabacloud/cams/model/SendChatappMessageRequest.h
	include/alibabacloud/cams/model/SendChatappMessageResult.h
	include/alibabacloud/cams/model/SubmitIsvCustomerTermsRequest.h
	include/alibabacloud/cams/model/SubmitIsvCustomerTermsResult.h
	include/alibabacloud/cams/model/UpdateAccountWebhookRequest.h
	include/alibabacloud/cams/model/UpdateAccountWebhookResult.h
	include/alibabacloud/cams/model/UpdateCommerceSettingRequest.h
	include/alibabacloud/cams/model/UpdateCommerceSettingResult.h
	include/alibabacloud/cams/model/UpdateConversationalAutomationRequest.h
	include/alibabacloud/cams/model/UpdateConversationalAutomationResult.h
	include/alibabacloud/cams/model/UpdateFlowJSONAssetRequest.h
	include/alibabacloud/cams/model/UpdateFlowJSONAssetResult.h
	include/alibabacloud/cams/model/UpdatePhoneEncryptionPublicKeyRequest.h
	include/alibabacloud/cams/model/UpdatePhoneEncryptionPublicKeyResult.h
	include/alibabacloud/cams/model/UpdatePhoneMessageQrdlRequest.h
	include/alibabacloud/cams/model/UpdatePhoneMessageQrdlResult.h
	include/alibabacloud/cams/model/UpdatePhoneWebhookRequest.h
	include/alibabacloud/cams/model/UpdatePhoneWebhookResult.h )

set(cams_src 
	src/CamsClient.cc
	src/model/AddChatappPhoneNumberRequest.cc
	src/model/AddChatappPhoneNumberResult.cc
	src/model/BeeBotAssociateRequest.cc
	src/model/BeeBotAssociateResult.cc
	src/model/BeeBotChatRequest.cc
	src/model/BeeBotChatResult.cc
	src/model/ChatappBindWabaRequest.cc
	src/model/ChatappBindWabaResult.cc
	src/model/ChatappEmbedSignUpRequest.cc
	src/model/ChatappEmbedSignUpResult.cc
	src/model/ChatappMigrationRegisterRequest.cc
	src/model/ChatappMigrationRegisterResult.cc
	src/model/ChatappMigrationVerifiedRequest.cc
	src/model/ChatappMigrationVerifiedResult.cc
	src/model/ChatappPhoneNumberDeregisterRequest.cc
	src/model/ChatappPhoneNumberDeregisterResult.cc
	src/model/ChatappPhoneNumberRegisterRequest.cc
	src/model/ChatappPhoneNumberRegisterResult.cc
	src/model/ChatappSyncPhoneNumberRequest.cc
	src/model/ChatappSyncPhoneNumberResult.cc
	src/model/ChatappVerifyAndRegisterRequest.cc
	src/model/ChatappVerifyAndRegisterResult.cc
	src/model/CreateChatappMigrationInitiateRequest.cc
	src/model/CreateChatappMigrationInitiateResult.cc
	src/model/CreateChatappTemplateRequest.cc
	src/model/CreateChatappTemplateResult.cc
	src/model/CreateFlowRequest.cc
	src/model/CreateFlowResult.cc
	src/model/CreatePhoneMessageQrdlRequest.cc
	src/model/CreatePhoneMessageQrdlResult.cc
	src/model/DeleteChatappTemplateRequest.cc
	src/model/DeleteChatappTemplateResult.cc
	src/model/DeleteFlowRequest.cc
	src/model/DeleteFlowResult.cc
	src/model/DeletePhoneMessageQrdlRequest.cc
	src/model/DeletePhoneMessageQrdlResult.cc
	src/model/DeprecateFlowRequest.cc
	src/model/DeprecateFlowResult.cc
	src/model/EnableWhatsappROIMetricRequest.cc
	src/model/EnableWhatsappROIMetricResult.cc
	src/model/GetChatappPhoneNumberMetricRequest.cc
	src/model/GetChatappPhoneNumberMetricResult.cc
	src/model/GetChatappTemplateDetailRequest.cc
	src/model/GetChatappTemplateDetailResult.cc
	src/model/GetChatappTemplateMetricRequest.cc
	src/model/GetChatappTemplateMetricResult.cc
	src/model/GetChatappUploadAuthorizationRequest.cc
	src/model/GetChatappUploadAuthorizationResult.cc
	src/model/GetChatappVerifyCodeRequest.cc
	src/model/GetChatappVerifyCodeResult.cc
	src/model/GetCommerceSettingRequest.cc
	src/model/GetCommerceSettingResult.cc
	src/model/GetConversationalAutomationRequest.cc
	src/model/GetConversationalAutomationResult.cc
	src/model/GetFlowRequest.cc
	src/model/GetFlowResult.cc
	src/model/GetFlowJSONAssestRequest.cc
	src/model/GetFlowJSONAssestResult.cc
	src/model/GetFlowPreviewUrlRequest.cc
	src/model/GetFlowPreviewUrlResult.cc
	src/model/GetMigrationVerifyCodeRequest.cc
	src/model/GetMigrationVerifyCodeResult.cc
	src/model/GetPermissionByCodeRequest.cc
	src/model/GetPermissionByCodeResult.cc
	src/model/GetPhoneEncryptionPublicKeyRequest.cc
	src/model/GetPhoneEncryptionPublicKeyResult.cc
	src/model/GetPhoneNumberVerificationStatusRequest.cc
	src/model/GetPhoneNumberVerificationStatusResult.cc
	src/model/GetPreValidatePhoneIdRequest.cc
	src/model/GetPreValidatePhoneIdResult.cc
	src/model/GetWhatsappConnectionCatalogRequest.cc
	src/model/GetWhatsappConnectionCatalogResult.cc
	src/model/GetWhatsappHealthStatusRequest.cc
	src/model/GetWhatsappHealthStatusResult.cc
	src/model/IsvGetAppIdRequest.cc
	src/model/IsvGetAppIdResult.cc
	src/model/ListChatappTemplateRequest.cc
	src/model/ListChatappTemplateResult.cc
	src/model/ListFlowRequest.cc
	src/model/ListFlowResult.cc
	src/model/ListPhoneMessageQrdlRequest.cc
	src/model/ListPhoneMessageQrdlResult.cc
	src/model/ListProductRequest.cc
	src/model/ListProductResult.cc
	src/model/ListProductCatalogRequest.cc
	src/model/ListProductCatalogResult.cc
	src/model/ModifyChatappTemplateRequest.cc
	src/model/ModifyChatappTemplateResult.cc
	src/model/ModifyFlowRequest.cc
	src/model/ModifyFlowResult.cc
	src/model/ModifyPhoneBusinessProfileRequest.cc
	src/model/ModifyPhoneBusinessProfileResult.cc
	src/model/PublishFlowRequest.cc
	src/model/PublishFlowResult.cc
	src/model/QueryChatappBindWabaRequest.cc
	src/model/QueryChatappBindWabaResult.cc
	src/model/QueryChatappPhoneNumbersRequest.cc
	src/model/QueryChatappPhoneNumbersResult.cc
	src/model/QueryPhoneBusinessProfileRequest.cc
	src/model/QueryPhoneBusinessProfileResult.cc
	src/model/QueryWabaBusinessInfoRequest.cc
	src/model/QueryWabaBusinessInfoResult.cc
	src/model/SendChatappMassMessageRequest.cc
	src/model/SendChatappMassMessageResult.cc
	src/model/SendChatappMessageRequest.cc
	src/model/SendChatappMessageResult.cc
	src/model/SubmitIsvCustomerTermsRequest.cc
	src/model/SubmitIsvCustomerTermsResult.cc
	src/model/UpdateAccountWebhookRequest.cc
	src/model/UpdateAccountWebhookResult.cc
	src/model/UpdateCommerceSettingRequest.cc
	src/model/UpdateCommerceSettingResult.cc
	src/model/UpdateConversationalAutomationRequest.cc
	src/model/UpdateConversationalAutomationResult.cc
	src/model/UpdateFlowJSONAssetRequest.cc
	src/model/UpdateFlowJSONAssetResult.cc
	src/model/UpdatePhoneEncryptionPublicKeyRequest.cc
	src/model/UpdatePhoneEncryptionPublicKeyResult.cc
	src/model/UpdatePhoneMessageQrdlRequest.cc
	src/model/UpdatePhoneMessageQrdlResult.cc
	src/model/UpdatePhoneWebhookRequest.cc
	src/model/UpdatePhoneWebhookResult.cc )

add_library(cams ${LIB_TYPE}
	${cams_public_header}
	${cams_public_header_model}
	${cams_src})

set_target_properties(cams
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cams
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cams
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CAMS_LIBRARY)
endif()

target_include_directories(cams
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cams
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cams
		jsoncpp)
	target_include_directories(cams
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cams
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cams
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cams
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cams
		jsoncpp)
endif()

install(FILES ${cams_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cams)
install(FILES ${cams_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cams/model)
install(TARGETS cams
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)