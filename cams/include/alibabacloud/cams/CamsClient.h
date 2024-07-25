/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CAMS_CAMSCLIENT_H_
#define ALIBABACLOUD_CAMS_CAMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CamsExport.h"
#include "model/AddChatappPhoneNumberRequest.h"
#include "model/AddChatappPhoneNumberResult.h"
#include "model/BeeBotAssociateRequest.h"
#include "model/BeeBotAssociateResult.h"
#include "model/BeeBotChatRequest.h"
#include "model/BeeBotChatResult.h"
#include "model/ChatappBindWabaRequest.h"
#include "model/ChatappBindWabaResult.h"
#include "model/ChatappEmbedSignUpRequest.h"
#include "model/ChatappEmbedSignUpResult.h"
#include "model/ChatappMigrationRegisterRequest.h"
#include "model/ChatappMigrationRegisterResult.h"
#include "model/ChatappMigrationVerifiedRequest.h"
#include "model/ChatappMigrationVerifiedResult.h"
#include "model/ChatappPhoneNumberDeregisterRequest.h"
#include "model/ChatappPhoneNumberDeregisterResult.h"
#include "model/ChatappPhoneNumberRegisterRequest.h"
#include "model/ChatappPhoneNumberRegisterResult.h"
#include "model/ChatappSyncPhoneNumberRequest.h"
#include "model/ChatappSyncPhoneNumberResult.h"
#include "model/ChatappVerifyAndRegisterRequest.h"
#include "model/ChatappVerifyAndRegisterResult.h"
#include "model/CreateChatappMigrationInitiateRequest.h"
#include "model/CreateChatappMigrationInitiateResult.h"
#include "model/CreateChatappTemplateRequest.h"
#include "model/CreateChatappTemplateResult.h"
#include "model/CreateFlowRequest.h"
#include "model/CreateFlowResult.h"
#include "model/CreatePhoneMessageQrdlRequest.h"
#include "model/CreatePhoneMessageQrdlResult.h"
#include "model/DeleteChatappTemplateRequest.h"
#include "model/DeleteChatappTemplateResult.h"
#include "model/DeleteFlowRequest.h"
#include "model/DeleteFlowResult.h"
#include "model/DeletePhoneMessageQrdlRequest.h"
#include "model/DeletePhoneMessageQrdlResult.h"
#include "model/DeprecateFlowRequest.h"
#include "model/DeprecateFlowResult.h"
#include "model/EnableWhatsappROIMetricRequest.h"
#include "model/EnableWhatsappROIMetricResult.h"
#include "model/GetChatappPhoneNumberMetricRequest.h"
#include "model/GetChatappPhoneNumberMetricResult.h"
#include "model/GetChatappTemplateDetailRequest.h"
#include "model/GetChatappTemplateDetailResult.h"
#include "model/GetChatappTemplateMetricRequest.h"
#include "model/GetChatappTemplateMetricResult.h"
#include "model/GetChatappUploadAuthorizationRequest.h"
#include "model/GetChatappUploadAuthorizationResult.h"
#include "model/GetChatappVerifyCodeRequest.h"
#include "model/GetChatappVerifyCodeResult.h"
#include "model/GetCommerceSettingRequest.h"
#include "model/GetCommerceSettingResult.h"
#include "model/GetConversationalAutomationRequest.h"
#include "model/GetConversationalAutomationResult.h"
#include "model/GetFlowRequest.h"
#include "model/GetFlowResult.h"
#include "model/GetFlowJSONAssestRequest.h"
#include "model/GetFlowJSONAssestResult.h"
#include "model/GetFlowPreviewUrlRequest.h"
#include "model/GetFlowPreviewUrlResult.h"
#include "model/GetMigrationVerifyCodeRequest.h"
#include "model/GetMigrationVerifyCodeResult.h"
#include "model/GetPermissionByCodeRequest.h"
#include "model/GetPermissionByCodeResult.h"
#include "model/GetPhoneEncryptionPublicKeyRequest.h"
#include "model/GetPhoneEncryptionPublicKeyResult.h"
#include "model/GetPhoneNumberVerificationStatusRequest.h"
#include "model/GetPhoneNumberVerificationStatusResult.h"
#include "model/GetPreValidatePhoneIdRequest.h"
#include "model/GetPreValidatePhoneIdResult.h"
#include "model/GetWhatsappConnectionCatalogRequest.h"
#include "model/GetWhatsappConnectionCatalogResult.h"
#include "model/GetWhatsappHealthStatusRequest.h"
#include "model/GetWhatsappHealthStatusResult.h"
#include "model/IsvGetAppIdRequest.h"
#include "model/IsvGetAppIdResult.h"
#include "model/ListChatappTemplateRequest.h"
#include "model/ListChatappTemplateResult.h"
#include "model/ListFlowRequest.h"
#include "model/ListFlowResult.h"
#include "model/ListPhoneMessageQrdlRequest.h"
#include "model/ListPhoneMessageQrdlResult.h"
#include "model/ListProductRequest.h"
#include "model/ListProductResult.h"
#include "model/ListProductCatalogRequest.h"
#include "model/ListProductCatalogResult.h"
#include "model/ModifyChatappTemplateRequest.h"
#include "model/ModifyChatappTemplateResult.h"
#include "model/ModifyFlowRequest.h"
#include "model/ModifyFlowResult.h"
#include "model/ModifyPhoneBusinessProfileRequest.h"
#include "model/ModifyPhoneBusinessProfileResult.h"
#include "model/PublishFlowRequest.h"
#include "model/PublishFlowResult.h"
#include "model/QueryChatappBindWabaRequest.h"
#include "model/QueryChatappBindWabaResult.h"
#include "model/QueryChatappPhoneNumbersRequest.h"
#include "model/QueryChatappPhoneNumbersResult.h"
#include "model/QueryPhoneBusinessProfileRequest.h"
#include "model/QueryPhoneBusinessProfileResult.h"
#include "model/QueryWabaBusinessInfoRequest.h"
#include "model/QueryWabaBusinessInfoResult.h"
#include "model/SendChatappMassMessageRequest.h"
#include "model/SendChatappMassMessageResult.h"
#include "model/SendChatappMessageRequest.h"
#include "model/SendChatappMessageResult.h"
#include "model/SubmitIsvCustomerTermsRequest.h"
#include "model/SubmitIsvCustomerTermsResult.h"
#include "model/UpdateAccountWebhookRequest.h"
#include "model/UpdateAccountWebhookResult.h"
#include "model/UpdateCommerceSettingRequest.h"
#include "model/UpdateCommerceSettingResult.h"
#include "model/UpdateConversationalAutomationRequest.h"
#include "model/UpdateConversationalAutomationResult.h"
#include "model/UpdateFlowJSONAssetRequest.h"
#include "model/UpdateFlowJSONAssetResult.h"
#include "model/UpdatePhoneEncryptionPublicKeyRequest.h"
#include "model/UpdatePhoneEncryptionPublicKeyResult.h"
#include "model/UpdatePhoneMessageQrdlRequest.h"
#include "model/UpdatePhoneMessageQrdlResult.h"
#include "model/UpdatePhoneWebhookRequest.h"
#include "model/UpdatePhoneWebhookResult.h"


namespace AlibabaCloud
{
	namespace Cams
	{
		class ALIBABACLOUD_CAMS_EXPORT CamsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddChatappPhoneNumberResult> AddChatappPhoneNumberOutcome;
			typedef std::future<AddChatappPhoneNumberOutcome> AddChatappPhoneNumberOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::AddChatappPhoneNumberRequest&, const AddChatappPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddChatappPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::BeeBotAssociateResult> BeeBotAssociateOutcome;
			typedef std::future<BeeBotAssociateOutcome> BeeBotAssociateOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::BeeBotAssociateRequest&, const BeeBotAssociateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BeeBotAssociateAsyncHandler;
			typedef Outcome<Error, Model::BeeBotChatResult> BeeBotChatOutcome;
			typedef std::future<BeeBotChatOutcome> BeeBotChatOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::BeeBotChatRequest&, const BeeBotChatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BeeBotChatAsyncHandler;
			typedef Outcome<Error, Model::ChatappBindWabaResult> ChatappBindWabaOutcome;
			typedef std::future<ChatappBindWabaOutcome> ChatappBindWabaOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ChatappBindWabaRequest&, const ChatappBindWabaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatappBindWabaAsyncHandler;
			typedef Outcome<Error, Model::ChatappEmbedSignUpResult> ChatappEmbedSignUpOutcome;
			typedef std::future<ChatappEmbedSignUpOutcome> ChatappEmbedSignUpOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ChatappEmbedSignUpRequest&, const ChatappEmbedSignUpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatappEmbedSignUpAsyncHandler;
			typedef Outcome<Error, Model::ChatappMigrationRegisterResult> ChatappMigrationRegisterOutcome;
			typedef std::future<ChatappMigrationRegisterOutcome> ChatappMigrationRegisterOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ChatappMigrationRegisterRequest&, const ChatappMigrationRegisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatappMigrationRegisterAsyncHandler;
			typedef Outcome<Error, Model::ChatappMigrationVerifiedResult> ChatappMigrationVerifiedOutcome;
			typedef std::future<ChatappMigrationVerifiedOutcome> ChatappMigrationVerifiedOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ChatappMigrationVerifiedRequest&, const ChatappMigrationVerifiedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatappMigrationVerifiedAsyncHandler;
			typedef Outcome<Error, Model::ChatappPhoneNumberDeregisterResult> ChatappPhoneNumberDeregisterOutcome;
			typedef std::future<ChatappPhoneNumberDeregisterOutcome> ChatappPhoneNumberDeregisterOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ChatappPhoneNumberDeregisterRequest&, const ChatappPhoneNumberDeregisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatappPhoneNumberDeregisterAsyncHandler;
			typedef Outcome<Error, Model::ChatappPhoneNumberRegisterResult> ChatappPhoneNumberRegisterOutcome;
			typedef std::future<ChatappPhoneNumberRegisterOutcome> ChatappPhoneNumberRegisterOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ChatappPhoneNumberRegisterRequest&, const ChatappPhoneNumberRegisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatappPhoneNumberRegisterAsyncHandler;
			typedef Outcome<Error, Model::ChatappSyncPhoneNumberResult> ChatappSyncPhoneNumberOutcome;
			typedef std::future<ChatappSyncPhoneNumberOutcome> ChatappSyncPhoneNumberOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ChatappSyncPhoneNumberRequest&, const ChatappSyncPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatappSyncPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ChatappVerifyAndRegisterResult> ChatappVerifyAndRegisterOutcome;
			typedef std::future<ChatappVerifyAndRegisterOutcome> ChatappVerifyAndRegisterOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ChatappVerifyAndRegisterRequest&, const ChatappVerifyAndRegisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatappVerifyAndRegisterAsyncHandler;
			typedef Outcome<Error, Model::CreateChatappMigrationInitiateResult> CreateChatappMigrationInitiateOutcome;
			typedef std::future<CreateChatappMigrationInitiateOutcome> CreateChatappMigrationInitiateOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::CreateChatappMigrationInitiateRequest&, const CreateChatappMigrationInitiateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateChatappMigrationInitiateAsyncHandler;
			typedef Outcome<Error, Model::CreateChatappTemplateResult> CreateChatappTemplateOutcome;
			typedef std::future<CreateChatappTemplateOutcome> CreateChatappTemplateOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::CreateChatappTemplateRequest&, const CreateChatappTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateChatappTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowResult> CreateFlowOutcome;
			typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::CreateFlowRequest&, const CreateFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowAsyncHandler;
			typedef Outcome<Error, Model::CreatePhoneMessageQrdlResult> CreatePhoneMessageQrdlOutcome;
			typedef std::future<CreatePhoneMessageQrdlOutcome> CreatePhoneMessageQrdlOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::CreatePhoneMessageQrdlRequest&, const CreatePhoneMessageQrdlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePhoneMessageQrdlAsyncHandler;
			typedef Outcome<Error, Model::DeleteChatappTemplateResult> DeleteChatappTemplateOutcome;
			typedef std::future<DeleteChatappTemplateOutcome> DeleteChatappTemplateOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::DeleteChatappTemplateRequest&, const DeleteChatappTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChatappTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowResult> DeleteFlowOutcome;
			typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::DeleteFlowRequest&, const DeleteFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowAsyncHandler;
			typedef Outcome<Error, Model::DeletePhoneMessageQrdlResult> DeletePhoneMessageQrdlOutcome;
			typedef std::future<DeletePhoneMessageQrdlOutcome> DeletePhoneMessageQrdlOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::DeletePhoneMessageQrdlRequest&, const DeletePhoneMessageQrdlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePhoneMessageQrdlAsyncHandler;
			typedef Outcome<Error, Model::DeprecateFlowResult> DeprecateFlowOutcome;
			typedef std::future<DeprecateFlowOutcome> DeprecateFlowOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::DeprecateFlowRequest&, const DeprecateFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeprecateFlowAsyncHandler;
			typedef Outcome<Error, Model::EnableWhatsappROIMetricResult> EnableWhatsappROIMetricOutcome;
			typedef std::future<EnableWhatsappROIMetricOutcome> EnableWhatsappROIMetricOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::EnableWhatsappROIMetricRequest&, const EnableWhatsappROIMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableWhatsappROIMetricAsyncHandler;
			typedef Outcome<Error, Model::GetChatappPhoneNumberMetricResult> GetChatappPhoneNumberMetricOutcome;
			typedef std::future<GetChatappPhoneNumberMetricOutcome> GetChatappPhoneNumberMetricOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetChatappPhoneNumberMetricRequest&, const GetChatappPhoneNumberMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetChatappPhoneNumberMetricAsyncHandler;
			typedef Outcome<Error, Model::GetChatappTemplateDetailResult> GetChatappTemplateDetailOutcome;
			typedef std::future<GetChatappTemplateDetailOutcome> GetChatappTemplateDetailOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetChatappTemplateDetailRequest&, const GetChatappTemplateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetChatappTemplateDetailAsyncHandler;
			typedef Outcome<Error, Model::GetChatappTemplateMetricResult> GetChatappTemplateMetricOutcome;
			typedef std::future<GetChatappTemplateMetricOutcome> GetChatappTemplateMetricOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetChatappTemplateMetricRequest&, const GetChatappTemplateMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetChatappTemplateMetricAsyncHandler;
			typedef Outcome<Error, Model::GetChatappUploadAuthorizationResult> GetChatappUploadAuthorizationOutcome;
			typedef std::future<GetChatappUploadAuthorizationOutcome> GetChatappUploadAuthorizationOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetChatappUploadAuthorizationRequest&, const GetChatappUploadAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetChatappUploadAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::GetChatappVerifyCodeResult> GetChatappVerifyCodeOutcome;
			typedef std::future<GetChatappVerifyCodeOutcome> GetChatappVerifyCodeOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetChatappVerifyCodeRequest&, const GetChatappVerifyCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetChatappVerifyCodeAsyncHandler;
			typedef Outcome<Error, Model::GetCommerceSettingResult> GetCommerceSettingOutcome;
			typedef std::future<GetCommerceSettingOutcome> GetCommerceSettingOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetCommerceSettingRequest&, const GetCommerceSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCommerceSettingAsyncHandler;
			typedef Outcome<Error, Model::GetConversationalAutomationResult> GetConversationalAutomationOutcome;
			typedef std::future<GetConversationalAutomationOutcome> GetConversationalAutomationOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetConversationalAutomationRequest&, const GetConversationalAutomationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConversationalAutomationAsyncHandler;
			typedef Outcome<Error, Model::GetFlowResult> GetFlowOutcome;
			typedef std::future<GetFlowOutcome> GetFlowOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetFlowRequest&, const GetFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowAsyncHandler;
			typedef Outcome<Error, Model::GetFlowJSONAssestResult> GetFlowJSONAssestOutcome;
			typedef std::future<GetFlowJSONAssestOutcome> GetFlowJSONAssestOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetFlowJSONAssestRequest&, const GetFlowJSONAssestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowJSONAssestAsyncHandler;
			typedef Outcome<Error, Model::GetFlowPreviewUrlResult> GetFlowPreviewUrlOutcome;
			typedef std::future<GetFlowPreviewUrlOutcome> GetFlowPreviewUrlOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetFlowPreviewUrlRequest&, const GetFlowPreviewUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowPreviewUrlAsyncHandler;
			typedef Outcome<Error, Model::GetMigrationVerifyCodeResult> GetMigrationVerifyCodeOutcome;
			typedef std::future<GetMigrationVerifyCodeOutcome> GetMigrationVerifyCodeOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetMigrationVerifyCodeRequest&, const GetMigrationVerifyCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMigrationVerifyCodeAsyncHandler;
			typedef Outcome<Error, Model::GetPermissionByCodeResult> GetPermissionByCodeOutcome;
			typedef std::future<GetPermissionByCodeOutcome> GetPermissionByCodeOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetPermissionByCodeRequest&, const GetPermissionByCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPermissionByCodeAsyncHandler;
			typedef Outcome<Error, Model::GetPhoneEncryptionPublicKeyResult> GetPhoneEncryptionPublicKeyOutcome;
			typedef std::future<GetPhoneEncryptionPublicKeyOutcome> GetPhoneEncryptionPublicKeyOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetPhoneEncryptionPublicKeyRequest&, const GetPhoneEncryptionPublicKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPhoneEncryptionPublicKeyAsyncHandler;
			typedef Outcome<Error, Model::GetPhoneNumberVerificationStatusResult> GetPhoneNumberVerificationStatusOutcome;
			typedef std::future<GetPhoneNumberVerificationStatusOutcome> GetPhoneNumberVerificationStatusOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetPhoneNumberVerificationStatusRequest&, const GetPhoneNumberVerificationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPhoneNumberVerificationStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPreValidatePhoneIdResult> GetPreValidatePhoneIdOutcome;
			typedef std::future<GetPreValidatePhoneIdOutcome> GetPreValidatePhoneIdOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetPreValidatePhoneIdRequest&, const GetPreValidatePhoneIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPreValidatePhoneIdAsyncHandler;
			typedef Outcome<Error, Model::GetWhatsappConnectionCatalogResult> GetWhatsappConnectionCatalogOutcome;
			typedef std::future<GetWhatsappConnectionCatalogOutcome> GetWhatsappConnectionCatalogOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetWhatsappConnectionCatalogRequest&, const GetWhatsappConnectionCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWhatsappConnectionCatalogAsyncHandler;
			typedef Outcome<Error, Model::GetWhatsappHealthStatusResult> GetWhatsappHealthStatusOutcome;
			typedef std::future<GetWhatsappHealthStatusOutcome> GetWhatsappHealthStatusOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::GetWhatsappHealthStatusRequest&, const GetWhatsappHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWhatsappHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::IsvGetAppIdResult> IsvGetAppIdOutcome;
			typedef std::future<IsvGetAppIdOutcome> IsvGetAppIdOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::IsvGetAppIdRequest&, const IsvGetAppIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IsvGetAppIdAsyncHandler;
			typedef Outcome<Error, Model::ListChatappTemplateResult> ListChatappTemplateOutcome;
			typedef std::future<ListChatappTemplateOutcome> ListChatappTemplateOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ListChatappTemplateRequest&, const ListChatappTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListChatappTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListFlowResult> ListFlowOutcome;
			typedef std::future<ListFlowOutcome> ListFlowOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ListFlowRequest&, const ListFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowAsyncHandler;
			typedef Outcome<Error, Model::ListPhoneMessageQrdlResult> ListPhoneMessageQrdlOutcome;
			typedef std::future<ListPhoneMessageQrdlOutcome> ListPhoneMessageQrdlOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ListPhoneMessageQrdlRequest&, const ListPhoneMessageQrdlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPhoneMessageQrdlAsyncHandler;
			typedef Outcome<Error, Model::ListProductResult> ListProductOutcome;
			typedef std::future<ListProductOutcome> ListProductOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ListProductRequest&, const ListProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductAsyncHandler;
			typedef Outcome<Error, Model::ListProductCatalogResult> ListProductCatalogOutcome;
			typedef std::future<ListProductCatalogOutcome> ListProductCatalogOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ListProductCatalogRequest&, const ListProductCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductCatalogAsyncHandler;
			typedef Outcome<Error, Model::ModifyChatappTemplateResult> ModifyChatappTemplateOutcome;
			typedef std::future<ModifyChatappTemplateOutcome> ModifyChatappTemplateOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ModifyChatappTemplateRequest&, const ModifyChatappTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyChatappTemplateAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowResult> ModifyFlowOutcome;
			typedef std::future<ModifyFlowOutcome> ModifyFlowOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ModifyFlowRequest&, const ModifyFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhoneBusinessProfileResult> ModifyPhoneBusinessProfileOutcome;
			typedef std::future<ModifyPhoneBusinessProfileOutcome> ModifyPhoneBusinessProfileOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::ModifyPhoneBusinessProfileRequest&, const ModifyPhoneBusinessProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhoneBusinessProfileAsyncHandler;
			typedef Outcome<Error, Model::PublishFlowResult> PublishFlowOutcome;
			typedef std::future<PublishFlowOutcome> PublishFlowOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::PublishFlowRequest&, const PublishFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishFlowAsyncHandler;
			typedef Outcome<Error, Model::QueryChatappBindWabaResult> QueryChatappBindWabaOutcome;
			typedef std::future<QueryChatappBindWabaOutcome> QueryChatappBindWabaOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::QueryChatappBindWabaRequest&, const QueryChatappBindWabaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryChatappBindWabaAsyncHandler;
			typedef Outcome<Error, Model::QueryChatappPhoneNumbersResult> QueryChatappPhoneNumbersOutcome;
			typedef std::future<QueryChatappPhoneNumbersOutcome> QueryChatappPhoneNumbersOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::QueryChatappPhoneNumbersRequest&, const QueryChatappPhoneNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryChatappPhoneNumbersAsyncHandler;
			typedef Outcome<Error, Model::QueryPhoneBusinessProfileResult> QueryPhoneBusinessProfileOutcome;
			typedef std::future<QueryPhoneBusinessProfileOutcome> QueryPhoneBusinessProfileOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::QueryPhoneBusinessProfileRequest&, const QueryPhoneBusinessProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPhoneBusinessProfileAsyncHandler;
			typedef Outcome<Error, Model::QueryWabaBusinessInfoResult> QueryWabaBusinessInfoOutcome;
			typedef std::future<QueryWabaBusinessInfoOutcome> QueryWabaBusinessInfoOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::QueryWabaBusinessInfoRequest&, const QueryWabaBusinessInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWabaBusinessInfoAsyncHandler;
			typedef Outcome<Error, Model::SendChatappMassMessageResult> SendChatappMassMessageOutcome;
			typedef std::future<SendChatappMassMessageOutcome> SendChatappMassMessageOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::SendChatappMassMessageRequest&, const SendChatappMassMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendChatappMassMessageAsyncHandler;
			typedef Outcome<Error, Model::SendChatappMessageResult> SendChatappMessageOutcome;
			typedef std::future<SendChatappMessageOutcome> SendChatappMessageOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::SendChatappMessageRequest&, const SendChatappMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendChatappMessageAsyncHandler;
			typedef Outcome<Error, Model::SubmitIsvCustomerTermsResult> SubmitIsvCustomerTermsOutcome;
			typedef std::future<SubmitIsvCustomerTermsOutcome> SubmitIsvCustomerTermsOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::SubmitIsvCustomerTermsRequest&, const SubmitIsvCustomerTermsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitIsvCustomerTermsAsyncHandler;
			typedef Outcome<Error, Model::UpdateAccountWebhookResult> UpdateAccountWebhookOutcome;
			typedef std::future<UpdateAccountWebhookOutcome> UpdateAccountWebhookOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::UpdateAccountWebhookRequest&, const UpdateAccountWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccountWebhookAsyncHandler;
			typedef Outcome<Error, Model::UpdateCommerceSettingResult> UpdateCommerceSettingOutcome;
			typedef std::future<UpdateCommerceSettingOutcome> UpdateCommerceSettingOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::UpdateCommerceSettingRequest&, const UpdateCommerceSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCommerceSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateConversationalAutomationResult> UpdateConversationalAutomationOutcome;
			typedef std::future<UpdateConversationalAutomationOutcome> UpdateConversationalAutomationOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::UpdateConversationalAutomationRequest&, const UpdateConversationalAutomationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConversationalAutomationAsyncHandler;
			typedef Outcome<Error, Model::UpdateFlowJSONAssetResult> UpdateFlowJSONAssetOutcome;
			typedef std::future<UpdateFlowJSONAssetOutcome> UpdateFlowJSONAssetOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::UpdateFlowJSONAssetRequest&, const UpdateFlowJSONAssetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFlowJSONAssetAsyncHandler;
			typedef Outcome<Error, Model::UpdatePhoneEncryptionPublicKeyResult> UpdatePhoneEncryptionPublicKeyOutcome;
			typedef std::future<UpdatePhoneEncryptionPublicKeyOutcome> UpdatePhoneEncryptionPublicKeyOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::UpdatePhoneEncryptionPublicKeyRequest&, const UpdatePhoneEncryptionPublicKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePhoneEncryptionPublicKeyAsyncHandler;
			typedef Outcome<Error, Model::UpdatePhoneMessageQrdlResult> UpdatePhoneMessageQrdlOutcome;
			typedef std::future<UpdatePhoneMessageQrdlOutcome> UpdatePhoneMessageQrdlOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::UpdatePhoneMessageQrdlRequest&, const UpdatePhoneMessageQrdlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePhoneMessageQrdlAsyncHandler;
			typedef Outcome<Error, Model::UpdatePhoneWebhookResult> UpdatePhoneWebhookOutcome;
			typedef std::future<UpdatePhoneWebhookOutcome> UpdatePhoneWebhookOutcomeCallable;
			typedef std::function<void(const CamsClient*, const Model::UpdatePhoneWebhookRequest&, const UpdatePhoneWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePhoneWebhookAsyncHandler;

			CamsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CamsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CamsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CamsClient();
			AddChatappPhoneNumberOutcome addChatappPhoneNumber(const Model::AddChatappPhoneNumberRequest &request)const;
			void addChatappPhoneNumberAsync(const Model::AddChatappPhoneNumberRequest& request, const AddChatappPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddChatappPhoneNumberOutcomeCallable addChatappPhoneNumberCallable(const Model::AddChatappPhoneNumberRequest& request) const;
			BeeBotAssociateOutcome beeBotAssociate(const Model::BeeBotAssociateRequest &request)const;
			void beeBotAssociateAsync(const Model::BeeBotAssociateRequest& request, const BeeBotAssociateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BeeBotAssociateOutcomeCallable beeBotAssociateCallable(const Model::BeeBotAssociateRequest& request) const;
			BeeBotChatOutcome beeBotChat(const Model::BeeBotChatRequest &request)const;
			void beeBotChatAsync(const Model::BeeBotChatRequest& request, const BeeBotChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BeeBotChatOutcomeCallable beeBotChatCallable(const Model::BeeBotChatRequest& request) const;
			ChatappBindWabaOutcome chatappBindWaba(const Model::ChatappBindWabaRequest &request)const;
			void chatappBindWabaAsync(const Model::ChatappBindWabaRequest& request, const ChatappBindWabaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatappBindWabaOutcomeCallable chatappBindWabaCallable(const Model::ChatappBindWabaRequest& request) const;
			ChatappEmbedSignUpOutcome chatappEmbedSignUp(const Model::ChatappEmbedSignUpRequest &request)const;
			void chatappEmbedSignUpAsync(const Model::ChatappEmbedSignUpRequest& request, const ChatappEmbedSignUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatappEmbedSignUpOutcomeCallable chatappEmbedSignUpCallable(const Model::ChatappEmbedSignUpRequest& request) const;
			ChatappMigrationRegisterOutcome chatappMigrationRegister(const Model::ChatappMigrationRegisterRequest &request)const;
			void chatappMigrationRegisterAsync(const Model::ChatappMigrationRegisterRequest& request, const ChatappMigrationRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatappMigrationRegisterOutcomeCallable chatappMigrationRegisterCallable(const Model::ChatappMigrationRegisterRequest& request) const;
			ChatappMigrationVerifiedOutcome chatappMigrationVerified(const Model::ChatappMigrationVerifiedRequest &request)const;
			void chatappMigrationVerifiedAsync(const Model::ChatappMigrationVerifiedRequest& request, const ChatappMigrationVerifiedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatappMigrationVerifiedOutcomeCallable chatappMigrationVerifiedCallable(const Model::ChatappMigrationVerifiedRequest& request) const;
			ChatappPhoneNumberDeregisterOutcome chatappPhoneNumberDeregister(const Model::ChatappPhoneNumberDeregisterRequest &request)const;
			void chatappPhoneNumberDeregisterAsync(const Model::ChatappPhoneNumberDeregisterRequest& request, const ChatappPhoneNumberDeregisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatappPhoneNumberDeregisterOutcomeCallable chatappPhoneNumberDeregisterCallable(const Model::ChatappPhoneNumberDeregisterRequest& request) const;
			ChatappPhoneNumberRegisterOutcome chatappPhoneNumberRegister(const Model::ChatappPhoneNumberRegisterRequest &request)const;
			void chatappPhoneNumberRegisterAsync(const Model::ChatappPhoneNumberRegisterRequest& request, const ChatappPhoneNumberRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatappPhoneNumberRegisterOutcomeCallable chatappPhoneNumberRegisterCallable(const Model::ChatappPhoneNumberRegisterRequest& request) const;
			ChatappSyncPhoneNumberOutcome chatappSyncPhoneNumber(const Model::ChatappSyncPhoneNumberRequest &request)const;
			void chatappSyncPhoneNumberAsync(const Model::ChatappSyncPhoneNumberRequest& request, const ChatappSyncPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatappSyncPhoneNumberOutcomeCallable chatappSyncPhoneNumberCallable(const Model::ChatappSyncPhoneNumberRequest& request) const;
			ChatappVerifyAndRegisterOutcome chatappVerifyAndRegister(const Model::ChatappVerifyAndRegisterRequest &request)const;
			void chatappVerifyAndRegisterAsync(const Model::ChatappVerifyAndRegisterRequest& request, const ChatappVerifyAndRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatappVerifyAndRegisterOutcomeCallable chatappVerifyAndRegisterCallable(const Model::ChatappVerifyAndRegisterRequest& request) const;
			CreateChatappMigrationInitiateOutcome createChatappMigrationInitiate(const Model::CreateChatappMigrationInitiateRequest &request)const;
			void createChatappMigrationInitiateAsync(const Model::CreateChatappMigrationInitiateRequest& request, const CreateChatappMigrationInitiateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateChatappMigrationInitiateOutcomeCallable createChatappMigrationInitiateCallable(const Model::CreateChatappMigrationInitiateRequest& request) const;
			CreateChatappTemplateOutcome createChatappTemplate(const Model::CreateChatappTemplateRequest &request)const;
			void createChatappTemplateAsync(const Model::CreateChatappTemplateRequest& request, const CreateChatappTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateChatappTemplateOutcomeCallable createChatappTemplateCallable(const Model::CreateChatappTemplateRequest& request) const;
			CreateFlowOutcome createFlow(const Model::CreateFlowRequest &request)const;
			void createFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowOutcomeCallable createFlowCallable(const Model::CreateFlowRequest& request) const;
			CreatePhoneMessageQrdlOutcome createPhoneMessageQrdl(const Model::CreatePhoneMessageQrdlRequest &request)const;
			void createPhoneMessageQrdlAsync(const Model::CreatePhoneMessageQrdlRequest& request, const CreatePhoneMessageQrdlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePhoneMessageQrdlOutcomeCallable createPhoneMessageQrdlCallable(const Model::CreatePhoneMessageQrdlRequest& request) const;
			DeleteChatappTemplateOutcome deleteChatappTemplate(const Model::DeleteChatappTemplateRequest &request)const;
			void deleteChatappTemplateAsync(const Model::DeleteChatappTemplateRequest& request, const DeleteChatappTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteChatappTemplateOutcomeCallable deleteChatappTemplateCallable(const Model::DeleteChatappTemplateRequest& request) const;
			DeleteFlowOutcome deleteFlow(const Model::DeleteFlowRequest &request)const;
			void deleteFlowAsync(const Model::DeleteFlowRequest& request, const DeleteFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowOutcomeCallable deleteFlowCallable(const Model::DeleteFlowRequest& request) const;
			DeletePhoneMessageQrdlOutcome deletePhoneMessageQrdl(const Model::DeletePhoneMessageQrdlRequest &request)const;
			void deletePhoneMessageQrdlAsync(const Model::DeletePhoneMessageQrdlRequest& request, const DeletePhoneMessageQrdlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePhoneMessageQrdlOutcomeCallable deletePhoneMessageQrdlCallable(const Model::DeletePhoneMessageQrdlRequest& request) const;
			DeprecateFlowOutcome deprecateFlow(const Model::DeprecateFlowRequest &request)const;
			void deprecateFlowAsync(const Model::DeprecateFlowRequest& request, const DeprecateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeprecateFlowOutcomeCallable deprecateFlowCallable(const Model::DeprecateFlowRequest& request) const;
			EnableWhatsappROIMetricOutcome enableWhatsappROIMetric(const Model::EnableWhatsappROIMetricRequest &request)const;
			void enableWhatsappROIMetricAsync(const Model::EnableWhatsappROIMetricRequest& request, const EnableWhatsappROIMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableWhatsappROIMetricOutcomeCallable enableWhatsappROIMetricCallable(const Model::EnableWhatsappROIMetricRequest& request) const;
			GetChatappPhoneNumberMetricOutcome getChatappPhoneNumberMetric(const Model::GetChatappPhoneNumberMetricRequest &request)const;
			void getChatappPhoneNumberMetricAsync(const Model::GetChatappPhoneNumberMetricRequest& request, const GetChatappPhoneNumberMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetChatappPhoneNumberMetricOutcomeCallable getChatappPhoneNumberMetricCallable(const Model::GetChatappPhoneNumberMetricRequest& request) const;
			GetChatappTemplateDetailOutcome getChatappTemplateDetail(const Model::GetChatappTemplateDetailRequest &request)const;
			void getChatappTemplateDetailAsync(const Model::GetChatappTemplateDetailRequest& request, const GetChatappTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetChatappTemplateDetailOutcomeCallable getChatappTemplateDetailCallable(const Model::GetChatappTemplateDetailRequest& request) const;
			GetChatappTemplateMetricOutcome getChatappTemplateMetric(const Model::GetChatappTemplateMetricRequest &request)const;
			void getChatappTemplateMetricAsync(const Model::GetChatappTemplateMetricRequest& request, const GetChatappTemplateMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetChatappTemplateMetricOutcomeCallable getChatappTemplateMetricCallable(const Model::GetChatappTemplateMetricRequest& request) const;
			GetChatappUploadAuthorizationOutcome getChatappUploadAuthorization(const Model::GetChatappUploadAuthorizationRequest &request)const;
			void getChatappUploadAuthorizationAsync(const Model::GetChatappUploadAuthorizationRequest& request, const GetChatappUploadAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetChatappUploadAuthorizationOutcomeCallable getChatappUploadAuthorizationCallable(const Model::GetChatappUploadAuthorizationRequest& request) const;
			GetChatappVerifyCodeOutcome getChatappVerifyCode(const Model::GetChatappVerifyCodeRequest &request)const;
			void getChatappVerifyCodeAsync(const Model::GetChatappVerifyCodeRequest& request, const GetChatappVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetChatappVerifyCodeOutcomeCallable getChatappVerifyCodeCallable(const Model::GetChatappVerifyCodeRequest& request) const;
			GetCommerceSettingOutcome getCommerceSetting(const Model::GetCommerceSettingRequest &request)const;
			void getCommerceSettingAsync(const Model::GetCommerceSettingRequest& request, const GetCommerceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCommerceSettingOutcomeCallable getCommerceSettingCallable(const Model::GetCommerceSettingRequest& request) const;
			GetConversationalAutomationOutcome getConversationalAutomation(const Model::GetConversationalAutomationRequest &request)const;
			void getConversationalAutomationAsync(const Model::GetConversationalAutomationRequest& request, const GetConversationalAutomationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConversationalAutomationOutcomeCallable getConversationalAutomationCallable(const Model::GetConversationalAutomationRequest& request) const;
			GetFlowOutcome getFlow(const Model::GetFlowRequest &request)const;
			void getFlowAsync(const Model::GetFlowRequest& request, const GetFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFlowOutcomeCallable getFlowCallable(const Model::GetFlowRequest& request) const;
			GetFlowJSONAssestOutcome getFlowJSONAssest(const Model::GetFlowJSONAssestRequest &request)const;
			void getFlowJSONAssestAsync(const Model::GetFlowJSONAssestRequest& request, const GetFlowJSONAssestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFlowJSONAssestOutcomeCallable getFlowJSONAssestCallable(const Model::GetFlowJSONAssestRequest& request) const;
			GetFlowPreviewUrlOutcome getFlowPreviewUrl(const Model::GetFlowPreviewUrlRequest &request)const;
			void getFlowPreviewUrlAsync(const Model::GetFlowPreviewUrlRequest& request, const GetFlowPreviewUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFlowPreviewUrlOutcomeCallable getFlowPreviewUrlCallable(const Model::GetFlowPreviewUrlRequest& request) const;
			GetMigrationVerifyCodeOutcome getMigrationVerifyCode(const Model::GetMigrationVerifyCodeRequest &request)const;
			void getMigrationVerifyCodeAsync(const Model::GetMigrationVerifyCodeRequest& request, const GetMigrationVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMigrationVerifyCodeOutcomeCallable getMigrationVerifyCodeCallable(const Model::GetMigrationVerifyCodeRequest& request) const;
			GetPermissionByCodeOutcome getPermissionByCode(const Model::GetPermissionByCodeRequest &request)const;
			void getPermissionByCodeAsync(const Model::GetPermissionByCodeRequest& request, const GetPermissionByCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPermissionByCodeOutcomeCallable getPermissionByCodeCallable(const Model::GetPermissionByCodeRequest& request) const;
			GetPhoneEncryptionPublicKeyOutcome getPhoneEncryptionPublicKey(const Model::GetPhoneEncryptionPublicKeyRequest &request)const;
			void getPhoneEncryptionPublicKeyAsync(const Model::GetPhoneEncryptionPublicKeyRequest& request, const GetPhoneEncryptionPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPhoneEncryptionPublicKeyOutcomeCallable getPhoneEncryptionPublicKeyCallable(const Model::GetPhoneEncryptionPublicKeyRequest& request) const;
			GetPhoneNumberVerificationStatusOutcome getPhoneNumberVerificationStatus(const Model::GetPhoneNumberVerificationStatusRequest &request)const;
			void getPhoneNumberVerificationStatusAsync(const Model::GetPhoneNumberVerificationStatusRequest& request, const GetPhoneNumberVerificationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPhoneNumberVerificationStatusOutcomeCallable getPhoneNumberVerificationStatusCallable(const Model::GetPhoneNumberVerificationStatusRequest& request) const;
			GetPreValidatePhoneIdOutcome getPreValidatePhoneId(const Model::GetPreValidatePhoneIdRequest &request)const;
			void getPreValidatePhoneIdAsync(const Model::GetPreValidatePhoneIdRequest& request, const GetPreValidatePhoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPreValidatePhoneIdOutcomeCallable getPreValidatePhoneIdCallable(const Model::GetPreValidatePhoneIdRequest& request) const;
			GetWhatsappConnectionCatalogOutcome getWhatsappConnectionCatalog(const Model::GetWhatsappConnectionCatalogRequest &request)const;
			void getWhatsappConnectionCatalogAsync(const Model::GetWhatsappConnectionCatalogRequest& request, const GetWhatsappConnectionCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWhatsappConnectionCatalogOutcomeCallable getWhatsappConnectionCatalogCallable(const Model::GetWhatsappConnectionCatalogRequest& request) const;
			GetWhatsappHealthStatusOutcome getWhatsappHealthStatus(const Model::GetWhatsappHealthStatusRequest &request)const;
			void getWhatsappHealthStatusAsync(const Model::GetWhatsappHealthStatusRequest& request, const GetWhatsappHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWhatsappHealthStatusOutcomeCallable getWhatsappHealthStatusCallable(const Model::GetWhatsappHealthStatusRequest& request) const;
			IsvGetAppIdOutcome isvGetAppId(const Model::IsvGetAppIdRequest &request)const;
			void isvGetAppIdAsync(const Model::IsvGetAppIdRequest& request, const IsvGetAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IsvGetAppIdOutcomeCallable isvGetAppIdCallable(const Model::IsvGetAppIdRequest& request) const;
			ListChatappTemplateOutcome listChatappTemplate(const Model::ListChatappTemplateRequest &request)const;
			void listChatappTemplateAsync(const Model::ListChatappTemplateRequest& request, const ListChatappTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListChatappTemplateOutcomeCallable listChatappTemplateCallable(const Model::ListChatappTemplateRequest& request) const;
			ListFlowOutcome listFlow(const Model::ListFlowRequest &request)const;
			void listFlowAsync(const Model::ListFlowRequest& request, const ListFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowOutcomeCallable listFlowCallable(const Model::ListFlowRequest& request) const;
			ListPhoneMessageQrdlOutcome listPhoneMessageQrdl(const Model::ListPhoneMessageQrdlRequest &request)const;
			void listPhoneMessageQrdlAsync(const Model::ListPhoneMessageQrdlRequest& request, const ListPhoneMessageQrdlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPhoneMessageQrdlOutcomeCallable listPhoneMessageQrdlCallable(const Model::ListPhoneMessageQrdlRequest& request) const;
			ListProductOutcome listProduct(const Model::ListProductRequest &request)const;
			void listProductAsync(const Model::ListProductRequest& request, const ListProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductOutcomeCallable listProductCallable(const Model::ListProductRequest& request) const;
			ListProductCatalogOutcome listProductCatalog(const Model::ListProductCatalogRequest &request)const;
			void listProductCatalogAsync(const Model::ListProductCatalogRequest& request, const ListProductCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductCatalogOutcomeCallable listProductCatalogCallable(const Model::ListProductCatalogRequest& request) const;
			ModifyChatappTemplateOutcome modifyChatappTemplate(const Model::ModifyChatappTemplateRequest &request)const;
			void modifyChatappTemplateAsync(const Model::ModifyChatappTemplateRequest& request, const ModifyChatappTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyChatappTemplateOutcomeCallable modifyChatappTemplateCallable(const Model::ModifyChatappTemplateRequest& request) const;
			ModifyFlowOutcome modifyFlow(const Model::ModifyFlowRequest &request)const;
			void modifyFlowAsync(const Model::ModifyFlowRequest& request, const ModifyFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowOutcomeCallable modifyFlowCallable(const Model::ModifyFlowRequest& request) const;
			ModifyPhoneBusinessProfileOutcome modifyPhoneBusinessProfile(const Model::ModifyPhoneBusinessProfileRequest &request)const;
			void modifyPhoneBusinessProfileAsync(const Model::ModifyPhoneBusinessProfileRequest& request, const ModifyPhoneBusinessProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPhoneBusinessProfileOutcomeCallable modifyPhoneBusinessProfileCallable(const Model::ModifyPhoneBusinessProfileRequest& request) const;
			PublishFlowOutcome publishFlow(const Model::PublishFlowRequest &request)const;
			void publishFlowAsync(const Model::PublishFlowRequest& request, const PublishFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishFlowOutcomeCallable publishFlowCallable(const Model::PublishFlowRequest& request) const;
			QueryChatappBindWabaOutcome queryChatappBindWaba(const Model::QueryChatappBindWabaRequest &request)const;
			void queryChatappBindWabaAsync(const Model::QueryChatappBindWabaRequest& request, const QueryChatappBindWabaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryChatappBindWabaOutcomeCallable queryChatappBindWabaCallable(const Model::QueryChatappBindWabaRequest& request) const;
			QueryChatappPhoneNumbersOutcome queryChatappPhoneNumbers(const Model::QueryChatappPhoneNumbersRequest &request)const;
			void queryChatappPhoneNumbersAsync(const Model::QueryChatappPhoneNumbersRequest& request, const QueryChatappPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryChatappPhoneNumbersOutcomeCallable queryChatappPhoneNumbersCallable(const Model::QueryChatappPhoneNumbersRequest& request) const;
			QueryPhoneBusinessProfileOutcome queryPhoneBusinessProfile(const Model::QueryPhoneBusinessProfileRequest &request)const;
			void queryPhoneBusinessProfileAsync(const Model::QueryPhoneBusinessProfileRequest& request, const QueryPhoneBusinessProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPhoneBusinessProfileOutcomeCallable queryPhoneBusinessProfileCallable(const Model::QueryPhoneBusinessProfileRequest& request) const;
			QueryWabaBusinessInfoOutcome queryWabaBusinessInfo(const Model::QueryWabaBusinessInfoRequest &request)const;
			void queryWabaBusinessInfoAsync(const Model::QueryWabaBusinessInfoRequest& request, const QueryWabaBusinessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWabaBusinessInfoOutcomeCallable queryWabaBusinessInfoCallable(const Model::QueryWabaBusinessInfoRequest& request) const;
			SendChatappMassMessageOutcome sendChatappMassMessage(const Model::SendChatappMassMessageRequest &request)const;
			void sendChatappMassMessageAsync(const Model::SendChatappMassMessageRequest& request, const SendChatappMassMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendChatappMassMessageOutcomeCallable sendChatappMassMessageCallable(const Model::SendChatappMassMessageRequest& request) const;
			SendChatappMessageOutcome sendChatappMessage(const Model::SendChatappMessageRequest &request)const;
			void sendChatappMessageAsync(const Model::SendChatappMessageRequest& request, const SendChatappMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendChatappMessageOutcomeCallable sendChatappMessageCallable(const Model::SendChatappMessageRequest& request) const;
			SubmitIsvCustomerTermsOutcome submitIsvCustomerTerms(const Model::SubmitIsvCustomerTermsRequest &request)const;
			void submitIsvCustomerTermsAsync(const Model::SubmitIsvCustomerTermsRequest& request, const SubmitIsvCustomerTermsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitIsvCustomerTermsOutcomeCallable submitIsvCustomerTermsCallable(const Model::SubmitIsvCustomerTermsRequest& request) const;
			UpdateAccountWebhookOutcome updateAccountWebhook(const Model::UpdateAccountWebhookRequest &request)const;
			void updateAccountWebhookAsync(const Model::UpdateAccountWebhookRequest& request, const UpdateAccountWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAccountWebhookOutcomeCallable updateAccountWebhookCallable(const Model::UpdateAccountWebhookRequest& request) const;
			UpdateCommerceSettingOutcome updateCommerceSetting(const Model::UpdateCommerceSettingRequest &request)const;
			void updateCommerceSettingAsync(const Model::UpdateCommerceSettingRequest& request, const UpdateCommerceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCommerceSettingOutcomeCallable updateCommerceSettingCallable(const Model::UpdateCommerceSettingRequest& request) const;
			UpdateConversationalAutomationOutcome updateConversationalAutomation(const Model::UpdateConversationalAutomationRequest &request)const;
			void updateConversationalAutomationAsync(const Model::UpdateConversationalAutomationRequest& request, const UpdateConversationalAutomationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConversationalAutomationOutcomeCallable updateConversationalAutomationCallable(const Model::UpdateConversationalAutomationRequest& request) const;
			UpdateFlowJSONAssetOutcome updateFlowJSONAsset(const Model::UpdateFlowJSONAssetRequest &request)const;
			void updateFlowJSONAssetAsync(const Model::UpdateFlowJSONAssetRequest& request, const UpdateFlowJSONAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFlowJSONAssetOutcomeCallable updateFlowJSONAssetCallable(const Model::UpdateFlowJSONAssetRequest& request) const;
			UpdatePhoneEncryptionPublicKeyOutcome updatePhoneEncryptionPublicKey(const Model::UpdatePhoneEncryptionPublicKeyRequest &request)const;
			void updatePhoneEncryptionPublicKeyAsync(const Model::UpdatePhoneEncryptionPublicKeyRequest& request, const UpdatePhoneEncryptionPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePhoneEncryptionPublicKeyOutcomeCallable updatePhoneEncryptionPublicKeyCallable(const Model::UpdatePhoneEncryptionPublicKeyRequest& request) const;
			UpdatePhoneMessageQrdlOutcome updatePhoneMessageQrdl(const Model::UpdatePhoneMessageQrdlRequest &request)const;
			void updatePhoneMessageQrdlAsync(const Model::UpdatePhoneMessageQrdlRequest& request, const UpdatePhoneMessageQrdlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePhoneMessageQrdlOutcomeCallable updatePhoneMessageQrdlCallable(const Model::UpdatePhoneMessageQrdlRequest& request) const;
			UpdatePhoneWebhookOutcome updatePhoneWebhook(const Model::UpdatePhoneWebhookRequest &request)const;
			void updatePhoneWebhookAsync(const Model::UpdatePhoneWebhookRequest& request, const UpdatePhoneWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePhoneWebhookOutcomeCallable updatePhoneWebhookCallable(const Model::UpdatePhoneWebhookRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CAMS_CAMSCLIENT_H_
