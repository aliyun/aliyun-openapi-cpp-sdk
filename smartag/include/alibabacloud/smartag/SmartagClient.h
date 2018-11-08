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

#ifndef ALIBABACLOUD_SMARTAG_SMARTAGCLIENT_H_
#define ALIBABACLOUD_SMARTAG_SMARTAGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SmartagExport.h"
#include "model/DescribeSmartAccessGatewaysRequest.h"
#include "model/DescribeSmartAccessGatewaysResult.h"
#include "model/SwitchCloudBoxHaStateRequest.h"
#include "model/SwitchCloudBoxHaStateResult.h"
#include "model/UnbindSmartAccessGatewayRequest.h"
#include "model/UnbindSmartAccessGatewayResult.h"
#include "model/CreateSmartAccessGatewayRequest.h"
#include "model/CreateSmartAccessGatewayResult.h"
#include "model/DeleteDedicatedLineBackupRequest.h"
#include "model/DeleteDedicatedLineBackupResult.h"
#include "model/UnlockSmartAccessGatewayRequest.h"
#include "model/UnlockSmartAccessGatewayResult.h"
#include "model/ActivateSmartAccessGatewayRequest.h"
#include "model/ActivateSmartAccessGatewayResult.h"
#include "model/CreateDedicatedLineBackupRequest.h"
#include "model/CreateDedicatedLineBackupResult.h"
#include "model/DescribeSmartAccessGatewayHaRequest.h"
#include "model/DescribeSmartAccessGatewayHaResult.h"
#include "model/ModifyCloudConnectNetworkRequest.h"
#include "model/ModifyCloudConnectNetworkResult.h"
#include "model/DeleteCloudConnectNetworkRequest.h"
#include "model/DeleteCloudConnectNetworkResult.h"
#include "model/CreateCloudConnectNetworkRequest.h"
#include "model/CreateCloudConnectNetworkResult.h"
#include "model/RebootSmartAccessGatewayRequest.h"
#include "model/RebootSmartAccessGatewayResult.h"
#include "model/BindSmartAccessGatewayRequest.h"
#include "model/BindSmartAccessGatewayResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GetSmartAccessGatewayUseLimitRequest.h"
#include "model/GetSmartAccessGatewayUseLimitResult.h"
#include "model/ModifySmartAccessGatewayRequest.h"
#include "model/ModifySmartAccessGatewayResult.h"
#include "model/DescribeCloudConnectNetworksRequest.h"
#include "model/DescribeCloudConnectNetworksResult.h"
#include "model/DescribeSmartAccessGatewayVersionsRequest.h"
#include "model/DescribeSmartAccessGatewayVersionsResult.h"
#include "model/UpdateSmartAccessGatewayVersionRequest.h"
#include "model/UpdateSmartAccessGatewayVersionResult.h"
#include "model/GetCloudConnectNetworkUseLimitRequest.h"
#include "model/GetCloudConnectNetworkUseLimitResult.h"


namespace AlibabaCloud
{
	namespace Smartag
	{
		class ALIBABACLOUD_SMARTAG_EXPORT SmartagClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeSmartAccessGatewaysResult> DescribeSmartAccessGatewaysOutcome;
			typedef std::future<DescribeSmartAccessGatewaysOutcome> DescribeSmartAccessGatewaysOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewaysRequest&, const DescribeSmartAccessGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewaysAsyncHandler;
			typedef Outcome<Error, Model::SwitchCloudBoxHaStateResult> SwitchCloudBoxHaStateOutcome;
			typedef std::future<SwitchCloudBoxHaStateOutcome> SwitchCloudBoxHaStateOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::SwitchCloudBoxHaStateRequest&, const SwitchCloudBoxHaStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchCloudBoxHaStateAsyncHandler;
			typedef Outcome<Error, Model::UnbindSmartAccessGatewayResult> UnbindSmartAccessGatewayOutcome;
			typedef std::future<UnbindSmartAccessGatewayOutcome> UnbindSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnbindSmartAccessGatewayRequest&, const UnbindSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewayResult> CreateSmartAccessGatewayOutcome;
			typedef std::future<CreateSmartAccessGatewayOutcome> CreateSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewayRequest&, const CreateSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteDedicatedLineBackupResult> DeleteDedicatedLineBackupOutcome;
			typedef std::future<DeleteDedicatedLineBackupOutcome> DeleteDedicatedLineBackupOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteDedicatedLineBackupRequest&, const DeleteDedicatedLineBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDedicatedLineBackupAsyncHandler;
			typedef Outcome<Error, Model::UnlockSmartAccessGatewayResult> UnlockSmartAccessGatewayOutcome;
			typedef std::future<UnlockSmartAccessGatewayOutcome> UnlockSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnlockSmartAccessGatewayRequest&, const UnlockSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::ActivateSmartAccessGatewayResult> ActivateSmartAccessGatewayOutcome;
			typedef std::future<ActivateSmartAccessGatewayOutcome> ActivateSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ActivateSmartAccessGatewayRequest&, const ActivateSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateDedicatedLineBackupResult> CreateDedicatedLineBackupOutcome;
			typedef std::future<CreateDedicatedLineBackupOutcome> CreateDedicatedLineBackupOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateDedicatedLineBackupRequest&, const CreateDedicatedLineBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedLineBackupAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayHaResult> DescribeSmartAccessGatewayHaOutcome;
			typedef std::future<DescribeSmartAccessGatewayHaOutcome> DescribeSmartAccessGatewayHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayHaRequest&, const DescribeSmartAccessGatewayHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayHaAsyncHandler;
			typedef Outcome<Error, Model::ModifyCloudConnectNetworkResult> ModifyCloudConnectNetworkOutcome;
			typedef std::future<ModifyCloudConnectNetworkOutcome> ModifyCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyCloudConnectNetworkRequest&, const ModifyCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteCloudConnectNetworkResult> DeleteCloudConnectNetworkOutcome;
			typedef std::future<DeleteCloudConnectNetworkOutcome> DeleteCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteCloudConnectNetworkRequest&, const DeleteCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateCloudConnectNetworkResult> CreateCloudConnectNetworkOutcome;
			typedef std::future<CreateCloudConnectNetworkOutcome> CreateCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateCloudConnectNetworkRequest&, const CreateCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::RebootSmartAccessGatewayResult> RebootSmartAccessGatewayOutcome;
			typedef std::future<RebootSmartAccessGatewayOutcome> RebootSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RebootSmartAccessGatewayRequest&, const RebootSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::BindSmartAccessGatewayResult> BindSmartAccessGatewayOutcome;
			typedef std::future<BindSmartAccessGatewayOutcome> BindSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::BindSmartAccessGatewayRequest&, const BindSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetSmartAccessGatewayUseLimitResult> GetSmartAccessGatewayUseLimitOutcome;
			typedef std::future<GetSmartAccessGatewayUseLimitOutcome> GetSmartAccessGatewayUseLimitOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetSmartAccessGatewayUseLimitRequest&, const GetSmartAccessGatewayUseLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmartAccessGatewayUseLimitAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayResult> ModifySmartAccessGatewayOutcome;
			typedef std::future<ModifySmartAccessGatewayOutcome> ModifySmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayRequest&, const ModifySmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudConnectNetworksResult> DescribeCloudConnectNetworksOutcome;
			typedef std::future<DescribeCloudConnectNetworksOutcome> DescribeCloudConnectNetworksOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeCloudConnectNetworksRequest&, const DescribeCloudConnectNetworksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudConnectNetworksAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayVersionsResult> DescribeSmartAccessGatewayVersionsOutcome;
			typedef std::future<DescribeSmartAccessGatewayVersionsOutcome> DescribeSmartAccessGatewayVersionsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayVersionsRequest&, const DescribeSmartAccessGatewayVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayVersionsAsyncHandler;
			typedef Outcome<Error, Model::UpdateSmartAccessGatewayVersionResult> UpdateSmartAccessGatewayVersionOutcome;
			typedef std::future<UpdateSmartAccessGatewayVersionOutcome> UpdateSmartAccessGatewayVersionOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpdateSmartAccessGatewayVersionRequest&, const UpdateSmartAccessGatewayVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmartAccessGatewayVersionAsyncHandler;
			typedef Outcome<Error, Model::GetCloudConnectNetworkUseLimitResult> GetCloudConnectNetworkUseLimitOutcome;
			typedef std::future<GetCloudConnectNetworkUseLimitOutcome> GetCloudConnectNetworkUseLimitOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetCloudConnectNetworkUseLimitRequest&, const GetCloudConnectNetworkUseLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudConnectNetworkUseLimitAsyncHandler;

			SmartagClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SmartagClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SmartagClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SmartagClient();
			DescribeSmartAccessGatewaysOutcome describeSmartAccessGateways(const Model::DescribeSmartAccessGatewaysRequest &request)const;
			void describeSmartAccessGatewaysAsync(const Model::DescribeSmartAccessGatewaysRequest& request, const DescribeSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewaysOutcomeCallable describeSmartAccessGatewaysCallable(const Model::DescribeSmartAccessGatewaysRequest& request) const;
			SwitchCloudBoxHaStateOutcome switchCloudBoxHaState(const Model::SwitchCloudBoxHaStateRequest &request)const;
			void switchCloudBoxHaStateAsync(const Model::SwitchCloudBoxHaStateRequest& request, const SwitchCloudBoxHaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchCloudBoxHaStateOutcomeCallable switchCloudBoxHaStateCallable(const Model::SwitchCloudBoxHaStateRequest& request) const;
			UnbindSmartAccessGatewayOutcome unbindSmartAccessGateway(const Model::UnbindSmartAccessGatewayRequest &request)const;
			void unbindSmartAccessGatewayAsync(const Model::UnbindSmartAccessGatewayRequest& request, const UnbindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSmartAccessGatewayOutcomeCallable unbindSmartAccessGatewayCallable(const Model::UnbindSmartAccessGatewayRequest& request) const;
			CreateSmartAccessGatewayOutcome createSmartAccessGateway(const Model::CreateSmartAccessGatewayRequest &request)const;
			void createSmartAccessGatewayAsync(const Model::CreateSmartAccessGatewayRequest& request, const CreateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewayOutcomeCallable createSmartAccessGatewayCallable(const Model::CreateSmartAccessGatewayRequest& request) const;
			DeleteDedicatedLineBackupOutcome deleteDedicatedLineBackup(const Model::DeleteDedicatedLineBackupRequest &request)const;
			void deleteDedicatedLineBackupAsync(const Model::DeleteDedicatedLineBackupRequest& request, const DeleteDedicatedLineBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDedicatedLineBackupOutcomeCallable deleteDedicatedLineBackupCallable(const Model::DeleteDedicatedLineBackupRequest& request) const;
			UnlockSmartAccessGatewayOutcome unlockSmartAccessGateway(const Model::UnlockSmartAccessGatewayRequest &request)const;
			void unlockSmartAccessGatewayAsync(const Model::UnlockSmartAccessGatewayRequest& request, const UnlockSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockSmartAccessGatewayOutcomeCallable unlockSmartAccessGatewayCallable(const Model::UnlockSmartAccessGatewayRequest& request) const;
			ActivateSmartAccessGatewayOutcome activateSmartAccessGateway(const Model::ActivateSmartAccessGatewayRequest &request)const;
			void activateSmartAccessGatewayAsync(const Model::ActivateSmartAccessGatewayRequest& request, const ActivateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateSmartAccessGatewayOutcomeCallable activateSmartAccessGatewayCallable(const Model::ActivateSmartAccessGatewayRequest& request) const;
			CreateDedicatedLineBackupOutcome createDedicatedLineBackup(const Model::CreateDedicatedLineBackupRequest &request)const;
			void createDedicatedLineBackupAsync(const Model::CreateDedicatedLineBackupRequest& request, const CreateDedicatedLineBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDedicatedLineBackupOutcomeCallable createDedicatedLineBackupCallable(const Model::CreateDedicatedLineBackupRequest& request) const;
			DescribeSmartAccessGatewayHaOutcome describeSmartAccessGatewayHa(const Model::DescribeSmartAccessGatewayHaRequest &request)const;
			void describeSmartAccessGatewayHaAsync(const Model::DescribeSmartAccessGatewayHaRequest& request, const DescribeSmartAccessGatewayHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayHaOutcomeCallable describeSmartAccessGatewayHaCallable(const Model::DescribeSmartAccessGatewayHaRequest& request) const;
			ModifyCloudConnectNetworkOutcome modifyCloudConnectNetwork(const Model::ModifyCloudConnectNetworkRequest &request)const;
			void modifyCloudConnectNetworkAsync(const Model::ModifyCloudConnectNetworkRequest& request, const ModifyCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCloudConnectNetworkOutcomeCallable modifyCloudConnectNetworkCallable(const Model::ModifyCloudConnectNetworkRequest& request) const;
			DeleteCloudConnectNetworkOutcome deleteCloudConnectNetwork(const Model::DeleteCloudConnectNetworkRequest &request)const;
			void deleteCloudConnectNetworkAsync(const Model::DeleteCloudConnectNetworkRequest& request, const DeleteCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCloudConnectNetworkOutcomeCallable deleteCloudConnectNetworkCallable(const Model::DeleteCloudConnectNetworkRequest& request) const;
			CreateCloudConnectNetworkOutcome createCloudConnectNetwork(const Model::CreateCloudConnectNetworkRequest &request)const;
			void createCloudConnectNetworkAsync(const Model::CreateCloudConnectNetworkRequest& request, const CreateCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCloudConnectNetworkOutcomeCallable createCloudConnectNetworkCallable(const Model::CreateCloudConnectNetworkRequest& request) const;
			RebootSmartAccessGatewayOutcome rebootSmartAccessGateway(const Model::RebootSmartAccessGatewayRequest &request)const;
			void rebootSmartAccessGatewayAsync(const Model::RebootSmartAccessGatewayRequest& request, const RebootSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootSmartAccessGatewayOutcomeCallable rebootSmartAccessGatewayCallable(const Model::RebootSmartAccessGatewayRequest& request) const;
			BindSmartAccessGatewayOutcome bindSmartAccessGateway(const Model::BindSmartAccessGatewayRequest &request)const;
			void bindSmartAccessGatewayAsync(const Model::BindSmartAccessGatewayRequest& request, const BindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSmartAccessGatewayOutcomeCallable bindSmartAccessGatewayCallable(const Model::BindSmartAccessGatewayRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GetSmartAccessGatewayUseLimitOutcome getSmartAccessGatewayUseLimit(const Model::GetSmartAccessGatewayUseLimitRequest &request)const;
			void getSmartAccessGatewayUseLimitAsync(const Model::GetSmartAccessGatewayUseLimitRequest& request, const GetSmartAccessGatewayUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmartAccessGatewayUseLimitOutcomeCallable getSmartAccessGatewayUseLimitCallable(const Model::GetSmartAccessGatewayUseLimitRequest& request) const;
			ModifySmartAccessGatewayOutcome modifySmartAccessGateway(const Model::ModifySmartAccessGatewayRequest &request)const;
			void modifySmartAccessGatewayAsync(const Model::ModifySmartAccessGatewayRequest& request, const ModifySmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayOutcomeCallable modifySmartAccessGatewayCallable(const Model::ModifySmartAccessGatewayRequest& request) const;
			DescribeCloudConnectNetworksOutcome describeCloudConnectNetworks(const Model::DescribeCloudConnectNetworksRequest &request)const;
			void describeCloudConnectNetworksAsync(const Model::DescribeCloudConnectNetworksRequest& request, const DescribeCloudConnectNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudConnectNetworksOutcomeCallable describeCloudConnectNetworksCallable(const Model::DescribeCloudConnectNetworksRequest& request) const;
			DescribeSmartAccessGatewayVersionsOutcome describeSmartAccessGatewayVersions(const Model::DescribeSmartAccessGatewayVersionsRequest &request)const;
			void describeSmartAccessGatewayVersionsAsync(const Model::DescribeSmartAccessGatewayVersionsRequest& request, const DescribeSmartAccessGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayVersionsOutcomeCallable describeSmartAccessGatewayVersionsCallable(const Model::DescribeSmartAccessGatewayVersionsRequest& request) const;
			UpdateSmartAccessGatewayVersionOutcome updateSmartAccessGatewayVersion(const Model::UpdateSmartAccessGatewayVersionRequest &request)const;
			void updateSmartAccessGatewayVersionAsync(const Model::UpdateSmartAccessGatewayVersionRequest& request, const UpdateSmartAccessGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmartAccessGatewayVersionOutcomeCallable updateSmartAccessGatewayVersionCallable(const Model::UpdateSmartAccessGatewayVersionRequest& request) const;
			GetCloudConnectNetworkUseLimitOutcome getCloudConnectNetworkUseLimit(const Model::GetCloudConnectNetworkUseLimitRequest &request)const;
			void getCloudConnectNetworkUseLimitAsync(const Model::GetCloudConnectNetworkUseLimitRequest& request, const GetCloudConnectNetworkUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudConnectNetworkUseLimitOutcomeCallable getCloudConnectNetworkUseLimitCallable(const Model::GetCloudConnectNetworkUseLimitRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SMARTAG_SMARTAGCLIENT_H_
