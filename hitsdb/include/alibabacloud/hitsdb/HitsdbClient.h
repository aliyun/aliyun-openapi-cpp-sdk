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

#ifndef ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_
#define ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HitsdbExport.h"
#include "model/CreateHiTSDBInstanceRequest.h"
#include "model/CreateHiTSDBInstanceResult.h"
#include "model/DeleteHiTSDBInstanceRequest.h"
#include "model/DeleteHiTSDBInstanceResult.h"
#include "model/DescribeHiTSDBInstanceRequest.h"
#include "model/DescribeHiTSDBInstanceResult.h"
#include "model/DescribeHiTSDBInstanceListRequest.h"
#include "model/DescribeHiTSDBInstanceListResult.h"
#include "model/DescribeHiTSDBInstanceSecurityIpListRequest.h"
#include "model/DescribeHiTSDBInstanceSecurityIpListResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/ModifyHiTSDBInstanceClassRequest.h"
#include "model/ModifyHiTSDBInstanceClassResult.h"
#include "model/ModifyHiTSDBInstanceSecurityIpListRequest.h"
#include "model/ModifyHiTSDBInstanceSecurityIpListResult.h"
#include "model/RenameHiTSDBInstanceAliasRequest.h"
#include "model/RenameHiTSDBInstanceAliasResult.h"
#include "model/RenewTSDBInstanceRequest.h"
#include "model/RenewTSDBInstanceResult.h"
#include "model/RestartHiTSDBInstanceRequest.h"
#include "model/RestartHiTSDBInstanceResult.h"
#include "model/SwitchHiTSDBInstancePublicNetRequest.h"
#include "model/SwitchHiTSDBInstancePublicNetResult.h"


namespace AlibabaCloud
{
	namespace Hitsdb
	{
		class ALIBABACLOUD_HITSDB_EXPORT HitsdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateHiTSDBInstanceResult> CreateHiTSDBInstanceOutcome;
			typedef std::future<CreateHiTSDBInstanceOutcome> CreateHiTSDBInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::CreateHiTSDBInstanceRequest&, const CreateHiTSDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHiTSDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteHiTSDBInstanceResult> DeleteHiTSDBInstanceOutcome;
			typedef std::future<DeleteHiTSDBInstanceOutcome> DeleteHiTSDBInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DeleteHiTSDBInstanceRequest&, const DeleteHiTSDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHiTSDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeHiTSDBInstanceResult> DescribeHiTSDBInstanceOutcome;
			typedef std::future<DescribeHiTSDBInstanceOutcome> DescribeHiTSDBInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeHiTSDBInstanceRequest&, const DescribeHiTSDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHiTSDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeHiTSDBInstanceListResult> DescribeHiTSDBInstanceListOutcome;
			typedef std::future<DescribeHiTSDBInstanceListOutcome> DescribeHiTSDBInstanceListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeHiTSDBInstanceListRequest&, const DescribeHiTSDBInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHiTSDBInstanceListAsyncHandler;
			typedef Outcome<Error, Model::DescribeHiTSDBInstanceSecurityIpListResult> DescribeHiTSDBInstanceSecurityIpListOutcome;
			typedef std::future<DescribeHiTSDBInstanceSecurityIpListOutcome> DescribeHiTSDBInstanceSecurityIpListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeHiTSDBInstanceSecurityIpListRequest&, const DescribeHiTSDBInstanceSecurityIpListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHiTSDBInstanceSecurityIpListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::ModifyHiTSDBInstanceClassResult> ModifyHiTSDBInstanceClassOutcome;
			typedef std::future<ModifyHiTSDBInstanceClassOutcome> ModifyHiTSDBInstanceClassOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ModifyHiTSDBInstanceClassRequest&, const ModifyHiTSDBInstanceClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHiTSDBInstanceClassAsyncHandler;
			typedef Outcome<Error, Model::ModifyHiTSDBInstanceSecurityIpListResult> ModifyHiTSDBInstanceSecurityIpListOutcome;
			typedef std::future<ModifyHiTSDBInstanceSecurityIpListOutcome> ModifyHiTSDBInstanceSecurityIpListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ModifyHiTSDBInstanceSecurityIpListRequest&, const ModifyHiTSDBInstanceSecurityIpListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHiTSDBInstanceSecurityIpListAsyncHandler;
			typedef Outcome<Error, Model::RenameHiTSDBInstanceAliasResult> RenameHiTSDBInstanceAliasOutcome;
			typedef std::future<RenameHiTSDBInstanceAliasOutcome> RenameHiTSDBInstanceAliasOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::RenameHiTSDBInstanceAliasRequest&, const RenameHiTSDBInstanceAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenameHiTSDBInstanceAliasAsyncHandler;
			typedef Outcome<Error, Model::RenewTSDBInstanceResult> RenewTSDBInstanceOutcome;
			typedef std::future<RenewTSDBInstanceOutcome> RenewTSDBInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::RenewTSDBInstanceRequest&, const RenewTSDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewTSDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::RestartHiTSDBInstanceResult> RestartHiTSDBInstanceOutcome;
			typedef std::future<RestartHiTSDBInstanceOutcome> RestartHiTSDBInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::RestartHiTSDBInstanceRequest&, const RestartHiTSDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartHiTSDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchHiTSDBInstancePublicNetResult> SwitchHiTSDBInstancePublicNetOutcome;
			typedef std::future<SwitchHiTSDBInstancePublicNetOutcome> SwitchHiTSDBInstancePublicNetOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::SwitchHiTSDBInstancePublicNetRequest&, const SwitchHiTSDBInstancePublicNetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchHiTSDBInstancePublicNetAsyncHandler;

			HitsdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HitsdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HitsdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HitsdbClient();
			CreateHiTSDBInstanceOutcome createHiTSDBInstance(const Model::CreateHiTSDBInstanceRequest &request)const;
			void createHiTSDBInstanceAsync(const Model::CreateHiTSDBInstanceRequest& request, const CreateHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHiTSDBInstanceOutcomeCallable createHiTSDBInstanceCallable(const Model::CreateHiTSDBInstanceRequest& request) const;
			DeleteHiTSDBInstanceOutcome deleteHiTSDBInstance(const Model::DeleteHiTSDBInstanceRequest &request)const;
			void deleteHiTSDBInstanceAsync(const Model::DeleteHiTSDBInstanceRequest& request, const DeleteHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHiTSDBInstanceOutcomeCallable deleteHiTSDBInstanceCallable(const Model::DeleteHiTSDBInstanceRequest& request) const;
			DescribeHiTSDBInstanceOutcome describeHiTSDBInstance(const Model::DescribeHiTSDBInstanceRequest &request)const;
			void describeHiTSDBInstanceAsync(const Model::DescribeHiTSDBInstanceRequest& request, const DescribeHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHiTSDBInstanceOutcomeCallable describeHiTSDBInstanceCallable(const Model::DescribeHiTSDBInstanceRequest& request) const;
			DescribeHiTSDBInstanceListOutcome describeHiTSDBInstanceList(const Model::DescribeHiTSDBInstanceListRequest &request)const;
			void describeHiTSDBInstanceListAsync(const Model::DescribeHiTSDBInstanceListRequest& request, const DescribeHiTSDBInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHiTSDBInstanceListOutcomeCallable describeHiTSDBInstanceListCallable(const Model::DescribeHiTSDBInstanceListRequest& request) const;
			DescribeHiTSDBInstanceSecurityIpListOutcome describeHiTSDBInstanceSecurityIpList(const Model::DescribeHiTSDBInstanceSecurityIpListRequest &request)const;
			void describeHiTSDBInstanceSecurityIpListAsync(const Model::DescribeHiTSDBInstanceSecurityIpListRequest& request, const DescribeHiTSDBInstanceSecurityIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHiTSDBInstanceSecurityIpListOutcomeCallable describeHiTSDBInstanceSecurityIpListCallable(const Model::DescribeHiTSDBInstanceSecurityIpListRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			ModifyHiTSDBInstanceClassOutcome modifyHiTSDBInstanceClass(const Model::ModifyHiTSDBInstanceClassRequest &request)const;
			void modifyHiTSDBInstanceClassAsync(const Model::ModifyHiTSDBInstanceClassRequest& request, const ModifyHiTSDBInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHiTSDBInstanceClassOutcomeCallable modifyHiTSDBInstanceClassCallable(const Model::ModifyHiTSDBInstanceClassRequest& request) const;
			ModifyHiTSDBInstanceSecurityIpListOutcome modifyHiTSDBInstanceSecurityIpList(const Model::ModifyHiTSDBInstanceSecurityIpListRequest &request)const;
			void modifyHiTSDBInstanceSecurityIpListAsync(const Model::ModifyHiTSDBInstanceSecurityIpListRequest& request, const ModifyHiTSDBInstanceSecurityIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHiTSDBInstanceSecurityIpListOutcomeCallable modifyHiTSDBInstanceSecurityIpListCallable(const Model::ModifyHiTSDBInstanceSecurityIpListRequest& request) const;
			RenameHiTSDBInstanceAliasOutcome renameHiTSDBInstanceAlias(const Model::RenameHiTSDBInstanceAliasRequest &request)const;
			void renameHiTSDBInstanceAliasAsync(const Model::RenameHiTSDBInstanceAliasRequest& request, const RenameHiTSDBInstanceAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenameHiTSDBInstanceAliasOutcomeCallable renameHiTSDBInstanceAliasCallable(const Model::RenameHiTSDBInstanceAliasRequest& request) const;
			RenewTSDBInstanceOutcome renewTSDBInstance(const Model::RenewTSDBInstanceRequest &request)const;
			void renewTSDBInstanceAsync(const Model::RenewTSDBInstanceRequest& request, const RenewTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewTSDBInstanceOutcomeCallable renewTSDBInstanceCallable(const Model::RenewTSDBInstanceRequest& request) const;
			RestartHiTSDBInstanceOutcome restartHiTSDBInstance(const Model::RestartHiTSDBInstanceRequest &request)const;
			void restartHiTSDBInstanceAsync(const Model::RestartHiTSDBInstanceRequest& request, const RestartHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartHiTSDBInstanceOutcomeCallable restartHiTSDBInstanceCallable(const Model::RestartHiTSDBInstanceRequest& request) const;
			SwitchHiTSDBInstancePublicNetOutcome switchHiTSDBInstancePublicNet(const Model::SwitchHiTSDBInstancePublicNetRequest &request)const;
			void switchHiTSDBInstancePublicNetAsync(const Model::SwitchHiTSDBInstancePublicNetRequest& request, const SwitchHiTSDBInstancePublicNetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchHiTSDBInstancePublicNetOutcomeCallable switchHiTSDBInstancePublicNetCallable(const Model::SwitchHiTSDBInstancePublicNetRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_
