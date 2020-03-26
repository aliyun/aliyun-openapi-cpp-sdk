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

#ifndef ALIBABACLOUD_HSM_HSMCLIENT_H_
#define ALIBABACLOUD_HSM_HSMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HsmExport.h"
#include "model/ConfigNetworkRequest.h"
#include "model/ConfigNetworkResult.h"
#include "model/ConfigWhiteListRequest.h"
#include "model/ConfigWhiteListResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/ModifyInstanceRequest.h"
#include "model/ModifyInstanceResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"


namespace AlibabaCloud
{
	namespace Hsm
	{
		class ALIBABACLOUD_HSM_EXPORT HsmClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ConfigNetworkResult> ConfigNetworkOutcome;
			typedef std::future<ConfigNetworkOutcome> ConfigNetworkOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::ConfigNetworkRequest&, const ConfigNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigNetworkAsyncHandler;
			typedef Outcome<Error, Model::ConfigWhiteListResult> ConfigWhiteListOutcome;
			typedef std::future<ConfigWhiteListOutcome> ConfigWhiteListOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::ConfigWhiteListRequest&, const ConfigWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigWhiteListAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceResult> ModifyInstanceOutcome;
			typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::ModifyInstanceRequest&, const ModifyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const HsmClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;

			HsmClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HsmClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HsmClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HsmClient();
			ConfigNetworkOutcome configNetwork(const Model::ConfigNetworkRequest &request)const;
			void configNetworkAsync(const Model::ConfigNetworkRequest& request, const ConfigNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigNetworkOutcomeCallable configNetworkCallable(const Model::ConfigNetworkRequest& request) const;
			ConfigWhiteListOutcome configWhiteList(const Model::ConfigWhiteListRequest &request)const;
			void configWhiteListAsync(const Model::ConfigWhiteListRequest& request, const ConfigWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigWhiteListOutcomeCallable configWhiteListCallable(const Model::ConfigWhiteListRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			ModifyInstanceOutcome modifyInstance(const Model::ModifyInstanceRequest &request)const;
			void modifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceOutcomeCallable modifyInstanceCallable(const Model::ModifyInstanceRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HSM_HSMCLIENT_H_
