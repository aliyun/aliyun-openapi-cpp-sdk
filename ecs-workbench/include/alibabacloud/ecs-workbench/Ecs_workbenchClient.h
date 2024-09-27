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

#ifndef ALIBABACLOUD_ECS_WORKBENCH_ECS_WORKBENCHCLIENT_H_
#define ALIBABACLOUD_ECS_WORKBENCH_ECS_WORKBENCHCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Ecs_workbenchExport.h"
#include "model/GetInstanceRecordConfigRequest.h"
#include "model/GetInstanceRecordConfigResult.h"
#include "model/ListInstanceRecordsRequest.h"
#include "model/ListInstanceRecordsResult.h"
#include "model/ListTerminalCommandsRequest.h"
#include "model/ListTerminalCommandsResult.h"
#include "model/LoginInstanceRequest.h"
#include "model/LoginInstanceResult.h"
#include "model/SetInstanceRecordConfigRequest.h"
#include "model/SetInstanceRecordConfigResult.h"
#include "model/ViewInstanceRecordsRequest.h"
#include "model/ViewInstanceRecordsResult.h"


namespace AlibabaCloud
{
	namespace Ecs_workbench
	{
		class ALIBABACLOUD_ECS_WORKBENCH_EXPORT Ecs_workbenchClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetInstanceRecordConfigResult> GetInstanceRecordConfigOutcome;
			typedef std::future<GetInstanceRecordConfigOutcome> GetInstanceRecordConfigOutcomeCallable;
			typedef std::function<void(const Ecs_workbenchClient*, const Model::GetInstanceRecordConfigRequest&, const GetInstanceRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceRecordsResult> ListInstanceRecordsOutcome;
			typedef std::future<ListInstanceRecordsOutcome> ListInstanceRecordsOutcomeCallable;
			typedef std::function<void(const Ecs_workbenchClient*, const Model::ListInstanceRecordsRequest&, const ListInstanceRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListTerminalCommandsResult> ListTerminalCommandsOutcome;
			typedef std::future<ListTerminalCommandsOutcome> ListTerminalCommandsOutcomeCallable;
			typedef std::function<void(const Ecs_workbenchClient*, const Model::ListTerminalCommandsRequest&, const ListTerminalCommandsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTerminalCommandsAsyncHandler;
			typedef Outcome<Error, Model::LoginInstanceResult> LoginInstanceOutcome;
			typedef std::future<LoginInstanceOutcome> LoginInstanceOutcomeCallable;
			typedef std::function<void(const Ecs_workbenchClient*, const Model::LoginInstanceRequest&, const LoginInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LoginInstanceAsyncHandler;
			typedef Outcome<Error, Model::SetInstanceRecordConfigResult> SetInstanceRecordConfigOutcome;
			typedef std::future<SetInstanceRecordConfigOutcome> SetInstanceRecordConfigOutcomeCallable;
			typedef std::function<void(const Ecs_workbenchClient*, const Model::SetInstanceRecordConfigRequest&, const SetInstanceRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetInstanceRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::ViewInstanceRecordsResult> ViewInstanceRecordsOutcome;
			typedef std::future<ViewInstanceRecordsOutcome> ViewInstanceRecordsOutcomeCallable;
			typedef std::function<void(const Ecs_workbenchClient*, const Model::ViewInstanceRecordsRequest&, const ViewInstanceRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ViewInstanceRecordsAsyncHandler;

			Ecs_workbenchClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Ecs_workbenchClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Ecs_workbenchClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Ecs_workbenchClient();
			GetInstanceRecordConfigOutcome getInstanceRecordConfig(const Model::GetInstanceRecordConfigRequest &request)const;
			void getInstanceRecordConfigAsync(const Model::GetInstanceRecordConfigRequest& request, const GetInstanceRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceRecordConfigOutcomeCallable getInstanceRecordConfigCallable(const Model::GetInstanceRecordConfigRequest& request) const;
			ListInstanceRecordsOutcome listInstanceRecords(const Model::ListInstanceRecordsRequest &request)const;
			void listInstanceRecordsAsync(const Model::ListInstanceRecordsRequest& request, const ListInstanceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceRecordsOutcomeCallable listInstanceRecordsCallable(const Model::ListInstanceRecordsRequest& request) const;
			ListTerminalCommandsOutcome listTerminalCommands(const Model::ListTerminalCommandsRequest &request)const;
			void listTerminalCommandsAsync(const Model::ListTerminalCommandsRequest& request, const ListTerminalCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTerminalCommandsOutcomeCallable listTerminalCommandsCallable(const Model::ListTerminalCommandsRequest& request) const;
			LoginInstanceOutcome loginInstance(const Model::LoginInstanceRequest &request)const;
			void loginInstanceAsync(const Model::LoginInstanceRequest& request, const LoginInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LoginInstanceOutcomeCallable loginInstanceCallable(const Model::LoginInstanceRequest& request) const;
			SetInstanceRecordConfigOutcome setInstanceRecordConfig(const Model::SetInstanceRecordConfigRequest &request)const;
			void setInstanceRecordConfigAsync(const Model::SetInstanceRecordConfigRequest& request, const SetInstanceRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetInstanceRecordConfigOutcomeCallable setInstanceRecordConfigCallable(const Model::SetInstanceRecordConfigRequest& request) const;
			ViewInstanceRecordsOutcome viewInstanceRecords(const Model::ViewInstanceRecordsRequest &request)const;
			void viewInstanceRecordsAsync(const Model::ViewInstanceRecordsRequest& request, const ViewInstanceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ViewInstanceRecordsOutcomeCallable viewInstanceRecordsCallable(const Model::ViewInstanceRecordsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ECS_WORKBENCH_ECS_WORKBENCHCLIENT_H_
