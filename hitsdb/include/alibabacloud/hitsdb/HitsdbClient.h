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
#include "model/DeleteHiTSDBInstanceDataRequest.h"
#include "model/DeleteHiTSDBInstanceDataResult.h"
#include "model/DeleteHiTSDBInstanceMetaRequest.h"
#include "model/DeleteHiTSDBInstanceMetaResult.h"
#include "model/DescribeHiTSDBInstanceRequest.h"
#include "model/DescribeHiTSDBInstanceResult.h"
#include "model/DescribeHiTSDBInstanceDataTtlRequest.h"
#include "model/DescribeHiTSDBInstanceDataTtlResult.h"
#include "model/DescribeHiTSDBInstanceListRequest.h"
#include "model/DescribeHiTSDBInstanceListResult.h"
#include "model/DescribeHiTSDBInstanceSecurityIpListRequest.h"
#include "model/DescribeHiTSDBInstanceSecurityIpListResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/ExploreHiTSDBInstanceDataRequest.h"
#include "model/ExploreHiTSDBInstanceDataResult.h"
#include "model/ExploreHiTSDBInstanceDataMetricListRequest.h"
#include "model/ExploreHiTSDBInstanceDataMetricListResult.h"
#include "model/ExploreHiTSDBInstanceDataTagKeyListRequest.h"
#include "model/ExploreHiTSDBInstanceDataTagKeyListResult.h"
#include "model/ExploreHiTSDBInstanceDataTagValueListRequest.h"
#include "model/ExploreHiTSDBInstanceDataTagValueListResult.h"
#include "model/ExploreHiTSDBInstanceDeletionJobListRequest.h"
#include "model/ExploreHiTSDBInstanceDeletionJobListResult.h"
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
#include "model/UpdateHiTSDBInstanceDataTtlRequest.h"
#include "model/UpdateHiTSDBInstanceDataTtlResult.h"


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
			typedef Outcome<Error, Model::DeleteHiTSDBInstanceDataResult> DeleteHiTSDBInstanceDataOutcome;
			typedef std::future<DeleteHiTSDBInstanceDataOutcome> DeleteHiTSDBInstanceDataOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DeleteHiTSDBInstanceDataRequest&, const DeleteHiTSDBInstanceDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHiTSDBInstanceDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteHiTSDBInstanceMetaResult> DeleteHiTSDBInstanceMetaOutcome;
			typedef std::future<DeleteHiTSDBInstanceMetaOutcome> DeleteHiTSDBInstanceMetaOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DeleteHiTSDBInstanceMetaRequest&, const DeleteHiTSDBInstanceMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHiTSDBInstanceMetaAsyncHandler;
			typedef Outcome<Error, Model::DescribeHiTSDBInstanceResult> DescribeHiTSDBInstanceOutcome;
			typedef std::future<DescribeHiTSDBInstanceOutcome> DescribeHiTSDBInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeHiTSDBInstanceRequest&, const DescribeHiTSDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHiTSDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeHiTSDBInstanceDataTtlResult> DescribeHiTSDBInstanceDataTtlOutcome;
			typedef std::future<DescribeHiTSDBInstanceDataTtlOutcome> DescribeHiTSDBInstanceDataTtlOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeHiTSDBInstanceDataTtlRequest&, const DescribeHiTSDBInstanceDataTtlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHiTSDBInstanceDataTtlAsyncHandler;
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
			typedef Outcome<Error, Model::ExploreHiTSDBInstanceDataResult> ExploreHiTSDBInstanceDataOutcome;
			typedef std::future<ExploreHiTSDBInstanceDataOutcome> ExploreHiTSDBInstanceDataOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ExploreHiTSDBInstanceDataRequest&, const ExploreHiTSDBInstanceDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExploreHiTSDBInstanceDataAsyncHandler;
			typedef Outcome<Error, Model::ExploreHiTSDBInstanceDataMetricListResult> ExploreHiTSDBInstanceDataMetricListOutcome;
			typedef std::future<ExploreHiTSDBInstanceDataMetricListOutcome> ExploreHiTSDBInstanceDataMetricListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ExploreHiTSDBInstanceDataMetricListRequest&, const ExploreHiTSDBInstanceDataMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExploreHiTSDBInstanceDataMetricListAsyncHandler;
			typedef Outcome<Error, Model::ExploreHiTSDBInstanceDataTagKeyListResult> ExploreHiTSDBInstanceDataTagKeyListOutcome;
			typedef std::future<ExploreHiTSDBInstanceDataTagKeyListOutcome> ExploreHiTSDBInstanceDataTagKeyListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ExploreHiTSDBInstanceDataTagKeyListRequest&, const ExploreHiTSDBInstanceDataTagKeyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExploreHiTSDBInstanceDataTagKeyListAsyncHandler;
			typedef Outcome<Error, Model::ExploreHiTSDBInstanceDataTagValueListResult> ExploreHiTSDBInstanceDataTagValueListOutcome;
			typedef std::future<ExploreHiTSDBInstanceDataTagValueListOutcome> ExploreHiTSDBInstanceDataTagValueListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ExploreHiTSDBInstanceDataTagValueListRequest&, const ExploreHiTSDBInstanceDataTagValueListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExploreHiTSDBInstanceDataTagValueListAsyncHandler;
			typedef Outcome<Error, Model::ExploreHiTSDBInstanceDeletionJobListResult> ExploreHiTSDBInstanceDeletionJobListOutcome;
			typedef std::future<ExploreHiTSDBInstanceDeletionJobListOutcome> ExploreHiTSDBInstanceDeletionJobListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ExploreHiTSDBInstanceDeletionJobListRequest&, const ExploreHiTSDBInstanceDeletionJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExploreHiTSDBInstanceDeletionJobListAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateHiTSDBInstanceDataTtlResult> UpdateHiTSDBInstanceDataTtlOutcome;
			typedef std::future<UpdateHiTSDBInstanceDataTtlOutcome> UpdateHiTSDBInstanceDataTtlOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UpdateHiTSDBInstanceDataTtlRequest&, const UpdateHiTSDBInstanceDataTtlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHiTSDBInstanceDataTtlAsyncHandler;

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
			DeleteHiTSDBInstanceDataOutcome deleteHiTSDBInstanceData(const Model::DeleteHiTSDBInstanceDataRequest &request)const;
			void deleteHiTSDBInstanceDataAsync(const Model::DeleteHiTSDBInstanceDataRequest& request, const DeleteHiTSDBInstanceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHiTSDBInstanceDataOutcomeCallable deleteHiTSDBInstanceDataCallable(const Model::DeleteHiTSDBInstanceDataRequest& request) const;
			DeleteHiTSDBInstanceMetaOutcome deleteHiTSDBInstanceMeta(const Model::DeleteHiTSDBInstanceMetaRequest &request)const;
			void deleteHiTSDBInstanceMetaAsync(const Model::DeleteHiTSDBInstanceMetaRequest& request, const DeleteHiTSDBInstanceMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHiTSDBInstanceMetaOutcomeCallable deleteHiTSDBInstanceMetaCallable(const Model::DeleteHiTSDBInstanceMetaRequest& request) const;
			DescribeHiTSDBInstanceOutcome describeHiTSDBInstance(const Model::DescribeHiTSDBInstanceRequest &request)const;
			void describeHiTSDBInstanceAsync(const Model::DescribeHiTSDBInstanceRequest& request, const DescribeHiTSDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHiTSDBInstanceOutcomeCallable describeHiTSDBInstanceCallable(const Model::DescribeHiTSDBInstanceRequest& request) const;
			DescribeHiTSDBInstanceDataTtlOutcome describeHiTSDBInstanceDataTtl(const Model::DescribeHiTSDBInstanceDataTtlRequest &request)const;
			void describeHiTSDBInstanceDataTtlAsync(const Model::DescribeHiTSDBInstanceDataTtlRequest& request, const DescribeHiTSDBInstanceDataTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHiTSDBInstanceDataTtlOutcomeCallable describeHiTSDBInstanceDataTtlCallable(const Model::DescribeHiTSDBInstanceDataTtlRequest& request) const;
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
			ExploreHiTSDBInstanceDataOutcome exploreHiTSDBInstanceData(const Model::ExploreHiTSDBInstanceDataRequest &request)const;
			void exploreHiTSDBInstanceDataAsync(const Model::ExploreHiTSDBInstanceDataRequest& request, const ExploreHiTSDBInstanceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExploreHiTSDBInstanceDataOutcomeCallable exploreHiTSDBInstanceDataCallable(const Model::ExploreHiTSDBInstanceDataRequest& request) const;
			ExploreHiTSDBInstanceDataMetricListOutcome exploreHiTSDBInstanceDataMetricList(const Model::ExploreHiTSDBInstanceDataMetricListRequest &request)const;
			void exploreHiTSDBInstanceDataMetricListAsync(const Model::ExploreHiTSDBInstanceDataMetricListRequest& request, const ExploreHiTSDBInstanceDataMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExploreHiTSDBInstanceDataMetricListOutcomeCallable exploreHiTSDBInstanceDataMetricListCallable(const Model::ExploreHiTSDBInstanceDataMetricListRequest& request) const;
			ExploreHiTSDBInstanceDataTagKeyListOutcome exploreHiTSDBInstanceDataTagKeyList(const Model::ExploreHiTSDBInstanceDataTagKeyListRequest &request)const;
			void exploreHiTSDBInstanceDataTagKeyListAsync(const Model::ExploreHiTSDBInstanceDataTagKeyListRequest& request, const ExploreHiTSDBInstanceDataTagKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExploreHiTSDBInstanceDataTagKeyListOutcomeCallable exploreHiTSDBInstanceDataTagKeyListCallable(const Model::ExploreHiTSDBInstanceDataTagKeyListRequest& request) const;
			ExploreHiTSDBInstanceDataTagValueListOutcome exploreHiTSDBInstanceDataTagValueList(const Model::ExploreHiTSDBInstanceDataTagValueListRequest &request)const;
			void exploreHiTSDBInstanceDataTagValueListAsync(const Model::ExploreHiTSDBInstanceDataTagValueListRequest& request, const ExploreHiTSDBInstanceDataTagValueListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExploreHiTSDBInstanceDataTagValueListOutcomeCallable exploreHiTSDBInstanceDataTagValueListCallable(const Model::ExploreHiTSDBInstanceDataTagValueListRequest& request) const;
			ExploreHiTSDBInstanceDeletionJobListOutcome exploreHiTSDBInstanceDeletionJobList(const Model::ExploreHiTSDBInstanceDeletionJobListRequest &request)const;
			void exploreHiTSDBInstanceDeletionJobListAsync(const Model::ExploreHiTSDBInstanceDeletionJobListRequest& request, const ExploreHiTSDBInstanceDeletionJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExploreHiTSDBInstanceDeletionJobListOutcomeCallable exploreHiTSDBInstanceDeletionJobListCallable(const Model::ExploreHiTSDBInstanceDeletionJobListRequest& request) const;
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
			UpdateHiTSDBInstanceDataTtlOutcome updateHiTSDBInstanceDataTtl(const Model::UpdateHiTSDBInstanceDataTtlRequest &request)const;
			void updateHiTSDBInstanceDataTtlAsync(const Model::UpdateHiTSDBInstanceDataTtlRequest& request, const UpdateHiTSDBInstanceDataTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHiTSDBInstanceDataTtlOutcomeCallable updateHiTSDBInstanceDataTtlCallable(const Model::UpdateHiTSDBInstanceDataTtlRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_
