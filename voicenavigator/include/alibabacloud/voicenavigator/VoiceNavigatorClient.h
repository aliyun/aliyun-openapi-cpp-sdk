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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_VOICENAVIGATORCLIENT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_VOICENAVIGATORCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "VoiceNavigatorExport.h"
#include "model/AssociateChatbotInstanceRequest.h"
#include "model/AssociateChatbotInstanceResult.h"
#include "model/AuditTTSVoiceRequest.h"
#include "model/AuditTTSVoiceResult.h"
#include "model/BeginDialogueRequest.h"
#include "model/BeginDialogueResult.h"
#include "model/CollectedNumberRequest.h"
#include "model/CollectedNumberResult.h"
#include "model/CreateDownloadUrlRequest.h"
#include "model/CreateDownloadUrlResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/DebugBeginDialogueRequest.h"
#include "model/DebugBeginDialogueResult.h"
#include "model/DebugCollectedNumberRequest.h"
#include "model/DebugCollectedNumberResult.h"
#include "model/DebugDialogueRequest.h"
#include "model/DebugDialogueResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DescribeConversationRequest.h"
#include "model/DescribeConversationResult.h"
#include "model/DescribeConversationContextRequest.h"
#include "model/DescribeConversationContextResult.h"
#include "model/DescribeExportProgressRequest.h"
#include "model/DescribeExportProgressResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeNavigationConfigRequest.h"
#include "model/DescribeNavigationConfigResult.h"
#include "model/DescribeRecordingRequest.h"
#include "model/DescribeRecordingResult.h"
#include "model/DescribeStatisticalDataRequest.h"
#include "model/DescribeStatisticalDataResult.h"
#include "model/DescribeTTSConfigRequest.h"
#include "model/DescribeTTSConfigResult.h"
#include "model/DialogueRequest.h"
#include "model/DialogueResult.h"
#include "model/DisableInstanceRequest.h"
#include "model/DisableInstanceResult.h"
#include "model/EnableInstanceRequest.h"
#include "model/EnableInstanceResult.h"
#include "model/EndDialogueRequest.h"
#include "model/EndDialogueResult.h"
#include "model/ExportConversationDetailsRequest.h"
#include "model/ExportConversationDetailsResult.h"
#include "model/ExportStatisticalDataRequest.h"
#include "model/ExportStatisticalDataResult.h"
#include "model/GenerateUploadUrlRequest.h"
#include "model/GenerateUploadUrlResult.h"
#include "model/GetAsrConfigRequest.h"
#include "model/GetAsrConfigResult.h"
#include "model/GetRealTimeConcurrencyRequest.h"
#include "model/GetRealTimeConcurrencyResult.h"
#include "model/ListChatbotInstancesRequest.h"
#include "model/ListChatbotInstancesResult.h"
#include "model/ListConversationDetailsRequest.h"
#include "model/ListConversationDetailsResult.h"
#include "model/ListConversationsRequest.h"
#include "model/ListConversationsResult.h"
#include "model/ListDownloadTasksRequest.h"
#include "model/ListDownloadTasksResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ModifyAsrConfigRequest.h"
#include "model/ModifyAsrConfigResult.h"
#include "model/ModifyGreetingConfigRequest.h"
#include "model/ModifyGreetingConfigResult.h"
#include "model/ModifyInstanceRequest.h"
#include "model/ModifyInstanceResult.h"
#include "model/ModifySilenceTimeoutConfigRequest.h"
#include "model/ModifySilenceTimeoutConfigResult.h"
#include "model/ModifyTTSConfigRequest.h"
#include "model/ModifyTTSConfigResult.h"
#include "model/ModifyUnrecognizingConfigRequest.h"
#include "model/ModifyUnrecognizingConfigResult.h"
#include "model/QueryConversationsRequest.h"
#include "model/QueryConversationsResult.h"
#include "model/SaveRecordingRequest.h"
#include "model/SaveRecordingResult.h"
#include "model/SilenceTimeoutRequest.h"
#include "model/SilenceTimeoutResult.h"


namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		class ALIBABACLOUD_VOICENAVIGATOR_EXPORT VoiceNavigatorClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AssociateChatbotInstanceResult> AssociateChatbotInstanceOutcome;
			typedef std::future<AssociateChatbotInstanceOutcome> AssociateChatbotInstanceOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::AssociateChatbotInstanceRequest&, const AssociateChatbotInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateChatbotInstanceAsyncHandler;
			typedef Outcome<Error, Model::AuditTTSVoiceResult> AuditTTSVoiceOutcome;
			typedef std::future<AuditTTSVoiceOutcome> AuditTTSVoiceOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::AuditTTSVoiceRequest&, const AuditTTSVoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuditTTSVoiceAsyncHandler;
			typedef Outcome<Error, Model::BeginDialogueResult> BeginDialogueOutcome;
			typedef std::future<BeginDialogueOutcome> BeginDialogueOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::BeginDialogueRequest&, const BeginDialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BeginDialogueAsyncHandler;
			typedef Outcome<Error, Model::CollectedNumberResult> CollectedNumberOutcome;
			typedef std::future<CollectedNumberOutcome> CollectedNumberOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::CollectedNumberRequest&, const CollectedNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CollectedNumberAsyncHandler;
			typedef Outcome<Error, Model::CreateDownloadUrlResult> CreateDownloadUrlOutcome;
			typedef std::future<CreateDownloadUrlOutcome> CreateDownloadUrlOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::CreateDownloadUrlRequest&, const CreateDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::DebugBeginDialogueResult> DebugBeginDialogueOutcome;
			typedef std::future<DebugBeginDialogueOutcome> DebugBeginDialogueOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DebugBeginDialogueRequest&, const DebugBeginDialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DebugBeginDialogueAsyncHandler;
			typedef Outcome<Error, Model::DebugCollectedNumberResult> DebugCollectedNumberOutcome;
			typedef std::future<DebugCollectedNumberOutcome> DebugCollectedNumberOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DebugCollectedNumberRequest&, const DebugCollectedNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DebugCollectedNumberAsyncHandler;
			typedef Outcome<Error, Model::DebugDialogueResult> DebugDialogueOutcome;
			typedef std::future<DebugDialogueOutcome> DebugDialogueOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DebugDialogueRequest&, const DebugDialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DebugDialogueAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeConversationResult> DescribeConversationOutcome;
			typedef std::future<DescribeConversationOutcome> DescribeConversationOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DescribeConversationRequest&, const DescribeConversationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationAsyncHandler;
			typedef Outcome<Error, Model::DescribeConversationContextResult> DescribeConversationContextOutcome;
			typedef std::future<DescribeConversationContextOutcome> DescribeConversationContextOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DescribeConversationContextRequest&, const DescribeConversationContextOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationContextAsyncHandler;
			typedef Outcome<Error, Model::DescribeExportProgressResult> DescribeExportProgressOutcome;
			typedef std::future<DescribeExportProgressOutcome> DescribeExportProgressOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DescribeExportProgressRequest&, const DescribeExportProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeNavigationConfigResult> DescribeNavigationConfigOutcome;
			typedef std::future<DescribeNavigationConfigOutcome> DescribeNavigationConfigOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DescribeNavigationConfigRequest&, const DescribeNavigationConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNavigationConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordingResult> DescribeRecordingOutcome;
			typedef std::future<DescribeRecordingOutcome> DescribeRecordingOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DescribeRecordingRequest&, const DescribeRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingAsyncHandler;
			typedef Outcome<Error, Model::DescribeStatisticalDataResult> DescribeStatisticalDataOutcome;
			typedef std::future<DescribeStatisticalDataOutcome> DescribeStatisticalDataOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DescribeStatisticalDataRequest&, const DescribeStatisticalDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticalDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeTTSConfigResult> DescribeTTSConfigOutcome;
			typedef std::future<DescribeTTSConfigOutcome> DescribeTTSConfigOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DescribeTTSConfigRequest&, const DescribeTTSConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTTSConfigAsyncHandler;
			typedef Outcome<Error, Model::DialogueResult> DialogueOutcome;
			typedef std::future<DialogueOutcome> DialogueOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DialogueRequest&, const DialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DialogueAsyncHandler;
			typedef Outcome<Error, Model::DisableInstanceResult> DisableInstanceOutcome;
			typedef std::future<DisableInstanceOutcome> DisableInstanceOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::DisableInstanceRequest&, const DisableInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableInstanceAsyncHandler;
			typedef Outcome<Error, Model::EnableInstanceResult> EnableInstanceOutcome;
			typedef std::future<EnableInstanceOutcome> EnableInstanceOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::EnableInstanceRequest&, const EnableInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableInstanceAsyncHandler;
			typedef Outcome<Error, Model::EndDialogueResult> EndDialogueOutcome;
			typedef std::future<EndDialogueOutcome> EndDialogueOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::EndDialogueRequest&, const EndDialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EndDialogueAsyncHandler;
			typedef Outcome<Error, Model::ExportConversationDetailsResult> ExportConversationDetailsOutcome;
			typedef std::future<ExportConversationDetailsOutcome> ExportConversationDetailsOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ExportConversationDetailsRequest&, const ExportConversationDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportConversationDetailsAsyncHandler;
			typedef Outcome<Error, Model::ExportStatisticalDataResult> ExportStatisticalDataOutcome;
			typedef std::future<ExportStatisticalDataOutcome> ExportStatisticalDataOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ExportStatisticalDataRequest&, const ExportStatisticalDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportStatisticalDataAsyncHandler;
			typedef Outcome<Error, Model::GenerateUploadUrlResult> GenerateUploadUrlOutcome;
			typedef std::future<GenerateUploadUrlOutcome> GenerateUploadUrlOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::GenerateUploadUrlRequest&, const GenerateUploadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUploadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetAsrConfigResult> GetAsrConfigOutcome;
			typedef std::future<GetAsrConfigOutcome> GetAsrConfigOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::GetAsrConfigRequest&, const GetAsrConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsrConfigAsyncHandler;
			typedef Outcome<Error, Model::GetRealTimeConcurrencyResult> GetRealTimeConcurrencyOutcome;
			typedef std::future<GetRealTimeConcurrencyOutcome> GetRealTimeConcurrencyOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::GetRealTimeConcurrencyRequest&, const GetRealTimeConcurrencyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRealTimeConcurrencyAsyncHandler;
			typedef Outcome<Error, Model::ListChatbotInstancesResult> ListChatbotInstancesOutcome;
			typedef std::future<ListChatbotInstancesOutcome> ListChatbotInstancesOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ListChatbotInstancesRequest&, const ListChatbotInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListChatbotInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListConversationDetailsResult> ListConversationDetailsOutcome;
			typedef std::future<ListConversationDetailsOutcome> ListConversationDetailsOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ListConversationDetailsRequest&, const ListConversationDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConversationDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListConversationsResult> ListConversationsOutcome;
			typedef std::future<ListConversationsOutcome> ListConversationsOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ListConversationsRequest&, const ListConversationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConversationsAsyncHandler;
			typedef Outcome<Error, Model::ListDownloadTasksResult> ListDownloadTasksOutcome;
			typedef std::future<ListDownloadTasksOutcome> ListDownloadTasksOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ListDownloadTasksRequest&, const ListDownloadTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDownloadTasksAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAsrConfigResult> ModifyAsrConfigOutcome;
			typedef std::future<ModifyAsrConfigOutcome> ModifyAsrConfigOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ModifyAsrConfigRequest&, const ModifyAsrConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAsrConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyGreetingConfigResult> ModifyGreetingConfigOutcome;
			typedef std::future<ModifyGreetingConfigOutcome> ModifyGreetingConfigOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ModifyGreetingConfigRequest&, const ModifyGreetingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGreetingConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceResult> ModifyInstanceOutcome;
			typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ModifyInstanceRequest&, const ModifyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifySilenceTimeoutConfigResult> ModifySilenceTimeoutConfigOutcome;
			typedef std::future<ModifySilenceTimeoutConfigOutcome> ModifySilenceTimeoutConfigOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ModifySilenceTimeoutConfigRequest&, const ModifySilenceTimeoutConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySilenceTimeoutConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyTTSConfigResult> ModifyTTSConfigOutcome;
			typedef std::future<ModifyTTSConfigOutcome> ModifyTTSConfigOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ModifyTTSConfigRequest&, const ModifyTTSConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTTSConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyUnrecognizingConfigResult> ModifyUnrecognizingConfigOutcome;
			typedef std::future<ModifyUnrecognizingConfigOutcome> ModifyUnrecognizingConfigOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::ModifyUnrecognizingConfigRequest&, const ModifyUnrecognizingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUnrecognizingConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryConversationsResult> QueryConversationsOutcome;
			typedef std::future<QueryConversationsOutcome> QueryConversationsOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::QueryConversationsRequest&, const QueryConversationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryConversationsAsyncHandler;
			typedef Outcome<Error, Model::SaveRecordingResult> SaveRecordingOutcome;
			typedef std::future<SaveRecordingOutcome> SaveRecordingOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::SaveRecordingRequest&, const SaveRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveRecordingAsyncHandler;
			typedef Outcome<Error, Model::SilenceTimeoutResult> SilenceTimeoutOutcome;
			typedef std::future<SilenceTimeoutOutcome> SilenceTimeoutOutcomeCallable;
			typedef std::function<void(const VoiceNavigatorClient*, const Model::SilenceTimeoutRequest&, const SilenceTimeoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SilenceTimeoutAsyncHandler;

			VoiceNavigatorClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VoiceNavigatorClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VoiceNavigatorClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VoiceNavigatorClient();
			AssociateChatbotInstanceOutcome associateChatbotInstance(const Model::AssociateChatbotInstanceRequest &request)const;
			void associateChatbotInstanceAsync(const Model::AssociateChatbotInstanceRequest& request, const AssociateChatbotInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateChatbotInstanceOutcomeCallable associateChatbotInstanceCallable(const Model::AssociateChatbotInstanceRequest& request) const;
			AuditTTSVoiceOutcome auditTTSVoice(const Model::AuditTTSVoiceRequest &request)const;
			void auditTTSVoiceAsync(const Model::AuditTTSVoiceRequest& request, const AuditTTSVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuditTTSVoiceOutcomeCallable auditTTSVoiceCallable(const Model::AuditTTSVoiceRequest& request) const;
			BeginDialogueOutcome beginDialogue(const Model::BeginDialogueRequest &request)const;
			void beginDialogueAsync(const Model::BeginDialogueRequest& request, const BeginDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BeginDialogueOutcomeCallable beginDialogueCallable(const Model::BeginDialogueRequest& request) const;
			CollectedNumberOutcome collectedNumber(const Model::CollectedNumberRequest &request)const;
			void collectedNumberAsync(const Model::CollectedNumberRequest& request, const CollectedNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CollectedNumberOutcomeCallable collectedNumberCallable(const Model::CollectedNumberRequest& request) const;
			CreateDownloadUrlOutcome createDownloadUrl(const Model::CreateDownloadUrlRequest &request)const;
			void createDownloadUrlAsync(const Model::CreateDownloadUrlRequest& request, const CreateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDownloadUrlOutcomeCallable createDownloadUrlCallable(const Model::CreateDownloadUrlRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			DebugBeginDialogueOutcome debugBeginDialogue(const Model::DebugBeginDialogueRequest &request)const;
			void debugBeginDialogueAsync(const Model::DebugBeginDialogueRequest& request, const DebugBeginDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DebugBeginDialogueOutcomeCallable debugBeginDialogueCallable(const Model::DebugBeginDialogueRequest& request) const;
			DebugCollectedNumberOutcome debugCollectedNumber(const Model::DebugCollectedNumberRequest &request)const;
			void debugCollectedNumberAsync(const Model::DebugCollectedNumberRequest& request, const DebugCollectedNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DebugCollectedNumberOutcomeCallable debugCollectedNumberCallable(const Model::DebugCollectedNumberRequest& request) const;
			DebugDialogueOutcome debugDialogue(const Model::DebugDialogueRequest &request)const;
			void debugDialogueAsync(const Model::DebugDialogueRequest& request, const DebugDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DebugDialogueOutcomeCallable debugDialogueCallable(const Model::DebugDialogueRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DescribeConversationOutcome describeConversation(const Model::DescribeConversationRequest &request)const;
			void describeConversationAsync(const Model::DescribeConversationRequest& request, const DescribeConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConversationOutcomeCallable describeConversationCallable(const Model::DescribeConversationRequest& request) const;
			DescribeConversationContextOutcome describeConversationContext(const Model::DescribeConversationContextRequest &request)const;
			void describeConversationContextAsync(const Model::DescribeConversationContextRequest& request, const DescribeConversationContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConversationContextOutcomeCallable describeConversationContextCallable(const Model::DescribeConversationContextRequest& request) const;
			DescribeExportProgressOutcome describeExportProgress(const Model::DescribeExportProgressRequest &request)const;
			void describeExportProgressAsync(const Model::DescribeExportProgressRequest& request, const DescribeExportProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExportProgressOutcomeCallable describeExportProgressCallable(const Model::DescribeExportProgressRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeNavigationConfigOutcome describeNavigationConfig(const Model::DescribeNavigationConfigRequest &request)const;
			void describeNavigationConfigAsync(const Model::DescribeNavigationConfigRequest& request, const DescribeNavigationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNavigationConfigOutcomeCallable describeNavigationConfigCallable(const Model::DescribeNavigationConfigRequest& request) const;
			DescribeRecordingOutcome describeRecording(const Model::DescribeRecordingRequest &request)const;
			void describeRecordingAsync(const Model::DescribeRecordingRequest& request, const DescribeRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordingOutcomeCallable describeRecordingCallable(const Model::DescribeRecordingRequest& request) const;
			DescribeStatisticalDataOutcome describeStatisticalData(const Model::DescribeStatisticalDataRequest &request)const;
			void describeStatisticalDataAsync(const Model::DescribeStatisticalDataRequest& request, const DescribeStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStatisticalDataOutcomeCallable describeStatisticalDataCallable(const Model::DescribeStatisticalDataRequest& request) const;
			DescribeTTSConfigOutcome describeTTSConfig(const Model::DescribeTTSConfigRequest &request)const;
			void describeTTSConfigAsync(const Model::DescribeTTSConfigRequest& request, const DescribeTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTTSConfigOutcomeCallable describeTTSConfigCallable(const Model::DescribeTTSConfigRequest& request) const;
			DialogueOutcome dialogue(const Model::DialogueRequest &request)const;
			void dialogueAsync(const Model::DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DialogueOutcomeCallable dialogueCallable(const Model::DialogueRequest& request) const;
			DisableInstanceOutcome disableInstance(const Model::DisableInstanceRequest &request)const;
			void disableInstanceAsync(const Model::DisableInstanceRequest& request, const DisableInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableInstanceOutcomeCallable disableInstanceCallable(const Model::DisableInstanceRequest& request) const;
			EnableInstanceOutcome enableInstance(const Model::EnableInstanceRequest &request)const;
			void enableInstanceAsync(const Model::EnableInstanceRequest& request, const EnableInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableInstanceOutcomeCallable enableInstanceCallable(const Model::EnableInstanceRequest& request) const;
			EndDialogueOutcome endDialogue(const Model::EndDialogueRequest &request)const;
			void endDialogueAsync(const Model::EndDialogueRequest& request, const EndDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EndDialogueOutcomeCallable endDialogueCallable(const Model::EndDialogueRequest& request) const;
			ExportConversationDetailsOutcome exportConversationDetails(const Model::ExportConversationDetailsRequest &request)const;
			void exportConversationDetailsAsync(const Model::ExportConversationDetailsRequest& request, const ExportConversationDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportConversationDetailsOutcomeCallable exportConversationDetailsCallable(const Model::ExportConversationDetailsRequest& request) const;
			ExportStatisticalDataOutcome exportStatisticalData(const Model::ExportStatisticalDataRequest &request)const;
			void exportStatisticalDataAsync(const Model::ExportStatisticalDataRequest& request, const ExportStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportStatisticalDataOutcomeCallable exportStatisticalDataCallable(const Model::ExportStatisticalDataRequest& request) const;
			GenerateUploadUrlOutcome generateUploadUrl(const Model::GenerateUploadUrlRequest &request)const;
			void generateUploadUrlAsync(const Model::GenerateUploadUrlRequest& request, const GenerateUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateUploadUrlOutcomeCallable generateUploadUrlCallable(const Model::GenerateUploadUrlRequest& request) const;
			GetAsrConfigOutcome getAsrConfig(const Model::GetAsrConfigRequest &request)const;
			void getAsrConfigAsync(const Model::GetAsrConfigRequest& request, const GetAsrConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsrConfigOutcomeCallable getAsrConfigCallable(const Model::GetAsrConfigRequest& request) const;
			GetRealTimeConcurrencyOutcome getRealTimeConcurrency(const Model::GetRealTimeConcurrencyRequest &request)const;
			void getRealTimeConcurrencyAsync(const Model::GetRealTimeConcurrencyRequest& request, const GetRealTimeConcurrencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRealTimeConcurrencyOutcomeCallable getRealTimeConcurrencyCallable(const Model::GetRealTimeConcurrencyRequest& request) const;
			ListChatbotInstancesOutcome listChatbotInstances(const Model::ListChatbotInstancesRequest &request)const;
			void listChatbotInstancesAsync(const Model::ListChatbotInstancesRequest& request, const ListChatbotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListChatbotInstancesOutcomeCallable listChatbotInstancesCallable(const Model::ListChatbotInstancesRequest& request) const;
			ListConversationDetailsOutcome listConversationDetails(const Model::ListConversationDetailsRequest &request)const;
			void listConversationDetailsAsync(const Model::ListConversationDetailsRequest& request, const ListConversationDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConversationDetailsOutcomeCallable listConversationDetailsCallable(const Model::ListConversationDetailsRequest& request) const;
			ListConversationsOutcome listConversations(const Model::ListConversationsRequest &request)const;
			void listConversationsAsync(const Model::ListConversationsRequest& request, const ListConversationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConversationsOutcomeCallable listConversationsCallable(const Model::ListConversationsRequest& request) const;
			ListDownloadTasksOutcome listDownloadTasks(const Model::ListDownloadTasksRequest &request)const;
			void listDownloadTasksAsync(const Model::ListDownloadTasksRequest& request, const ListDownloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDownloadTasksOutcomeCallable listDownloadTasksCallable(const Model::ListDownloadTasksRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ModifyAsrConfigOutcome modifyAsrConfig(const Model::ModifyAsrConfigRequest &request)const;
			void modifyAsrConfigAsync(const Model::ModifyAsrConfigRequest& request, const ModifyAsrConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAsrConfigOutcomeCallable modifyAsrConfigCallable(const Model::ModifyAsrConfigRequest& request) const;
			ModifyGreetingConfigOutcome modifyGreetingConfig(const Model::ModifyGreetingConfigRequest &request)const;
			void modifyGreetingConfigAsync(const Model::ModifyGreetingConfigRequest& request, const ModifyGreetingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGreetingConfigOutcomeCallable modifyGreetingConfigCallable(const Model::ModifyGreetingConfigRequest& request) const;
			ModifyInstanceOutcome modifyInstance(const Model::ModifyInstanceRequest &request)const;
			void modifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceOutcomeCallable modifyInstanceCallable(const Model::ModifyInstanceRequest& request) const;
			ModifySilenceTimeoutConfigOutcome modifySilenceTimeoutConfig(const Model::ModifySilenceTimeoutConfigRequest &request)const;
			void modifySilenceTimeoutConfigAsync(const Model::ModifySilenceTimeoutConfigRequest& request, const ModifySilenceTimeoutConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySilenceTimeoutConfigOutcomeCallable modifySilenceTimeoutConfigCallable(const Model::ModifySilenceTimeoutConfigRequest& request) const;
			ModifyTTSConfigOutcome modifyTTSConfig(const Model::ModifyTTSConfigRequest &request)const;
			void modifyTTSConfigAsync(const Model::ModifyTTSConfigRequest& request, const ModifyTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTTSConfigOutcomeCallable modifyTTSConfigCallable(const Model::ModifyTTSConfigRequest& request) const;
			ModifyUnrecognizingConfigOutcome modifyUnrecognizingConfig(const Model::ModifyUnrecognizingConfigRequest &request)const;
			void modifyUnrecognizingConfigAsync(const Model::ModifyUnrecognizingConfigRequest& request, const ModifyUnrecognizingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUnrecognizingConfigOutcomeCallable modifyUnrecognizingConfigCallable(const Model::ModifyUnrecognizingConfigRequest& request) const;
			QueryConversationsOutcome queryConversations(const Model::QueryConversationsRequest &request)const;
			void queryConversationsAsync(const Model::QueryConversationsRequest& request, const QueryConversationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryConversationsOutcomeCallable queryConversationsCallable(const Model::QueryConversationsRequest& request) const;
			SaveRecordingOutcome saveRecording(const Model::SaveRecordingRequest &request)const;
			void saveRecordingAsync(const Model::SaveRecordingRequest& request, const SaveRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveRecordingOutcomeCallable saveRecordingCallable(const Model::SaveRecordingRequest& request) const;
			SilenceTimeoutOutcome silenceTimeout(const Model::SilenceTimeoutRequest &request)const;
			void silenceTimeoutAsync(const Model::SilenceTimeoutRequest& request, const SilenceTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SilenceTimeoutOutcomeCallable silenceTimeoutCallable(const Model::SilenceTimeoutRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VOICENAVIGATOR_VOICENAVIGATORCLIENT_H_
