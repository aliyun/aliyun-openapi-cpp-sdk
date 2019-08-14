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

#ifndef ALIBABACLOUD_DRDS_DRDSCLIENT_H_
#define ALIBABACLOUD_DRDS_DRDSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DrdsExport.h"
#include "model/DescribeDrdsDBRequest.h"
#include "model/DescribeDrdsDBResult.h"
#include "model/DeleteDrdsDBRequest.h"
#include "model/DeleteDrdsDBResult.h"
#include "model/CreateReadOnlyAccountRequest.h"
#include "model/CreateReadOnlyAccountResult.h"
#include "model/DescribeShardDBsRequest.h"
#include "model/DescribeShardDBsResult.h"
#include "model/RemoveDrdsInstanceRequest.h"
#include "model/RemoveDrdsInstanceResult.h"
#include "model/ModifyDrdsIpWhiteListRequest.h"
#include "model/ModifyDrdsIpWhiteListResult.h"
#include "model/ModifyDrdsInstanceDescriptionRequest.h"
#include "model/ModifyDrdsInstanceDescriptionResult.h"
#include "model/CreateDrdsDBRequest.h"
#include "model/CreateDrdsDBResult.h"
#include "model/DescribeDrdsInstanceNetInfoForInnerRequest.h"
#include "model/DescribeDrdsInstanceNetInfoForInnerResult.h"
#include "model/CreateDrdsAccountRequest.h"
#include "model/CreateDrdsAccountResult.h"
#include "model/DescribeReadOnlyAccountRequest.h"
#include "model/DescribeReadOnlyAccountResult.h"
#include "model/ModifyRdsReadWeightRequest.h"
#include "model/ModifyRdsReadWeightResult.h"
#include "model/CreateDrdsInstanceRequest.h"
#include "model/CreateDrdsInstanceResult.h"
#include "model/DescribeDrdsInstanceMonitorRequest.h"
#include "model/DescribeDrdsInstanceMonitorResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeDrdsDBIpWhiteListRequest.h"
#include "model/DescribeDrdsDBIpWhiteListResult.h"
#include "model/DescribeRdsListRequest.h"
#include "model/DescribeRdsListResult.h"
#include "model/DescribeDrdsInstancesRequest.h"
#include "model/DescribeDrdsInstancesResult.h"
#include "model/ModifyReadOnlyAccountPasswordRequest.h"
#include "model/ModifyReadOnlyAccountPasswordResult.h"
#include "model/DescribeShardDbConnectionInfoRequest.h"
#include "model/DescribeShardDbConnectionInfoResult.h"
#include "model/RemoveReadOnlyAccountRequest.h"
#include "model/RemoveReadOnlyAccountResult.h"
#include "model/ModifyDrdsDBPasswdRequest.h"
#include "model/ModifyDrdsDBPasswdResult.h"
#include "model/DeleteFailedDrdsDBRequest.h"
#include "model/DeleteFailedDrdsDBResult.h"
#include "model/DescribeDrdsInstanceDbMonitorRequest.h"
#include "model/DescribeDrdsInstanceDbMonitorResult.h"
#include "model/DescribeCreateDrdsInstanceStatusRequest.h"
#include "model/DescribeCreateDrdsInstanceStatusResult.h"
#include "model/DescribeDrdsDBsRequest.h"
#include "model/DescribeDrdsDBsResult.h"
#include "model/QueryInstanceInfoByConnRequest.h"
#include "model/QueryInstanceInfoByConnResult.h"
#include "model/ModifyFullTableScanRequest.h"
#include "model/ModifyFullTableScanResult.h"
#include "model/DescribeDrdsInstanceRequest.h"
#include "model/DescribeDrdsInstanceResult.h"


namespace AlibabaCloud
{
	namespace Drds
	{
		class ALIBABACLOUD_DRDS_EXPORT DrdsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeDrdsDBResult> DescribeDrdsDBOutcome;
			typedef std::future<DescribeDrdsDBOutcome> DescribeDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBRequest&, const DescribeDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::DeleteDrdsDBResult> DeleteDrdsDBOutcome;
			typedef std::future<DeleteDrdsDBOutcome> DeleteDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DeleteDrdsDBRequest&, const DeleteDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::CreateReadOnlyAccountResult> CreateReadOnlyAccountOutcome;
			typedef std::future<CreateReadOnlyAccountOutcome> CreateReadOnlyAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateReadOnlyAccountRequest&, const CreateReadOnlyAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeShardDBsResult> DescribeShardDBsOutcome;
			typedef std::future<DescribeShardDBsOutcome> DescribeShardDBsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeShardDBsRequest&, const DescribeShardDBsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardDBsAsyncHandler;
			typedef Outcome<Error, Model::RemoveDrdsInstanceResult> RemoveDrdsInstanceOutcome;
			typedef std::future<RemoveDrdsInstanceOutcome> RemoveDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDrdsInstanceRequest&, const RemoveDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDrdsIpWhiteListResult> ModifyDrdsIpWhiteListOutcome;
			typedef std::future<ModifyDrdsIpWhiteListOutcome> ModifyDrdsIpWhiteListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyDrdsIpWhiteListRequest&, const ModifyDrdsIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrdsIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ModifyDrdsInstanceDescriptionResult> ModifyDrdsInstanceDescriptionOutcome;
			typedef std::future<ModifyDrdsInstanceDescriptionOutcome> ModifyDrdsInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyDrdsInstanceDescriptionRequest&, const ModifyDrdsInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrdsInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::CreateDrdsDBResult> CreateDrdsDBOutcome;
			typedef std::future<CreateDrdsDBOutcome> CreateDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateDrdsDBRequest&, const CreateDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceNetInfoForInnerResult> DescribeDrdsInstanceNetInfoForInnerOutcome;
			typedef std::future<DescribeDrdsInstanceNetInfoForInnerOutcome> DescribeDrdsInstanceNetInfoForInnerOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceNetInfoForInnerRequest&, const DescribeDrdsInstanceNetInfoForInnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceNetInfoForInnerAsyncHandler;
			typedef Outcome<Error, Model::CreateDrdsAccountResult> CreateDrdsAccountOutcome;
			typedef std::future<CreateDrdsAccountOutcome> CreateDrdsAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateDrdsAccountRequest&, const CreateDrdsAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDrdsAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeReadOnlyAccountResult> DescribeReadOnlyAccountOutcome;
			typedef std::future<DescribeReadOnlyAccountOutcome> DescribeReadOnlyAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeReadOnlyAccountRequest&, const DescribeReadOnlyAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyAccountAsyncHandler;
			typedef Outcome<Error, Model::ModifyRdsReadWeightResult> ModifyRdsReadWeightOutcome;
			typedef std::future<ModifyRdsReadWeightOutcome> ModifyRdsReadWeightOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyRdsReadWeightRequest&, const ModifyRdsReadWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRdsReadWeightAsyncHandler;
			typedef Outcome<Error, Model::CreateDrdsInstanceResult> CreateDrdsInstanceOutcome;
			typedef std::future<CreateDrdsInstanceOutcome> CreateDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateDrdsInstanceRequest&, const CreateDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceMonitorResult> DescribeDrdsInstanceMonitorOutcome;
			typedef std::future<DescribeDrdsInstanceMonitorOutcome> DescribeDrdsInstanceMonitorOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceMonitorRequest&, const DescribeDrdsInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBIpWhiteListResult> DescribeDrdsDBIpWhiteListOutcome;
			typedef std::future<DescribeDrdsDBIpWhiteListOutcome> DescribeDrdsDBIpWhiteListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBIpWhiteListRequest&, const DescribeDrdsDBIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsListResult> DescribeRdsListOutcome;
			typedef std::future<DescribeRdsListOutcome> DescribeRdsListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsListRequest&, const DescribeRdsListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstancesResult> DescribeDrdsInstancesOutcome;
			typedef std::future<DescribeDrdsInstancesOutcome> DescribeDrdsInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstancesRequest&, const DescribeDrdsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifyReadOnlyAccountPasswordResult> ModifyReadOnlyAccountPasswordOutcome;
			typedef std::future<ModifyReadOnlyAccountPasswordOutcome> ModifyReadOnlyAccountPasswordOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyReadOnlyAccountPasswordRequest&, const ModifyReadOnlyAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadOnlyAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::DescribeShardDbConnectionInfoResult> DescribeShardDbConnectionInfoOutcome;
			typedef std::future<DescribeShardDbConnectionInfoOutcome> DescribeShardDbConnectionInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeShardDbConnectionInfoRequest&, const DescribeShardDbConnectionInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardDbConnectionInfoAsyncHandler;
			typedef Outcome<Error, Model::RemoveReadOnlyAccountResult> RemoveReadOnlyAccountOutcome;
			typedef std::future<RemoveReadOnlyAccountOutcome> RemoveReadOnlyAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveReadOnlyAccountRequest&, const RemoveReadOnlyAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveReadOnlyAccountAsyncHandler;
			typedef Outcome<Error, Model::ModifyDrdsDBPasswdResult> ModifyDrdsDBPasswdOutcome;
			typedef std::future<ModifyDrdsDBPasswdOutcome> ModifyDrdsDBPasswdOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyDrdsDBPasswdRequest&, const ModifyDrdsDBPasswdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrdsDBPasswdAsyncHandler;
			typedef Outcome<Error, Model::DeleteFailedDrdsDBResult> DeleteFailedDrdsDBOutcome;
			typedef std::future<DeleteFailedDrdsDBOutcome> DeleteFailedDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DeleteFailedDrdsDBRequest&, const DeleteFailedDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFailedDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceDbMonitorResult> DescribeDrdsInstanceDbMonitorOutcome;
			typedef std::future<DescribeDrdsInstanceDbMonitorOutcome> DescribeDrdsInstanceDbMonitorOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceDbMonitorRequest&, const DescribeDrdsInstanceDbMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceDbMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeCreateDrdsInstanceStatusResult> DescribeCreateDrdsInstanceStatusOutcome;
			typedef std::future<DescribeCreateDrdsInstanceStatusOutcome> DescribeCreateDrdsInstanceStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeCreateDrdsInstanceStatusRequest&, const DescribeCreateDrdsInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCreateDrdsInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBsResult> DescribeDrdsDBsOutcome;
			typedef std::future<DescribeDrdsDBsOutcome> DescribeDrdsDBsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBsRequest&, const DescribeDrdsDBsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBsAsyncHandler;
			typedef Outcome<Error, Model::QueryInstanceInfoByConnResult> QueryInstanceInfoByConnOutcome;
			typedef std::future<QueryInstanceInfoByConnOutcome> QueryInstanceInfoByConnOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::QueryInstanceInfoByConnRequest&, const QueryInstanceInfoByConnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInstanceInfoByConnAsyncHandler;
			typedef Outcome<Error, Model::ModifyFullTableScanResult> ModifyFullTableScanOutcome;
			typedef std::future<ModifyFullTableScanOutcome> ModifyFullTableScanOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyFullTableScanRequest&, const ModifyFullTableScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFullTableScanAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceResult> DescribeDrdsInstanceOutcome;
			typedef std::future<DescribeDrdsInstanceOutcome> DescribeDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceRequest&, const DescribeDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceAsyncHandler;

			DrdsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DrdsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DrdsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DrdsClient();
			DescribeDrdsDBOutcome describeDrdsDB(const Model::DescribeDrdsDBRequest &request)const;
			void describeDrdsDBAsync(const Model::DescribeDrdsDBRequest& request, const DescribeDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBOutcomeCallable describeDrdsDBCallable(const Model::DescribeDrdsDBRequest& request) const;
			DeleteDrdsDBOutcome deleteDrdsDB(const Model::DeleteDrdsDBRequest &request)const;
			void deleteDrdsDBAsync(const Model::DeleteDrdsDBRequest& request, const DeleteDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDrdsDBOutcomeCallable deleteDrdsDBCallable(const Model::DeleteDrdsDBRequest& request) const;
			CreateReadOnlyAccountOutcome createReadOnlyAccount(const Model::CreateReadOnlyAccountRequest &request)const;
			void createReadOnlyAccountAsync(const Model::CreateReadOnlyAccountRequest& request, const CreateReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateReadOnlyAccountOutcomeCallable createReadOnlyAccountCallable(const Model::CreateReadOnlyAccountRequest& request) const;
			DescribeShardDBsOutcome describeShardDBs(const Model::DescribeShardDBsRequest &request)const;
			void describeShardDBsAsync(const Model::DescribeShardDBsRequest& request, const DescribeShardDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShardDBsOutcomeCallable describeShardDBsCallable(const Model::DescribeShardDBsRequest& request) const;
			RemoveDrdsInstanceOutcome removeDrdsInstance(const Model::RemoveDrdsInstanceRequest &request)const;
			void removeDrdsInstanceAsync(const Model::RemoveDrdsInstanceRequest& request, const RemoveDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDrdsInstanceOutcomeCallable removeDrdsInstanceCallable(const Model::RemoveDrdsInstanceRequest& request) const;
			ModifyDrdsIpWhiteListOutcome modifyDrdsIpWhiteList(const Model::ModifyDrdsIpWhiteListRequest &request)const;
			void modifyDrdsIpWhiteListAsync(const Model::ModifyDrdsIpWhiteListRequest& request, const ModifyDrdsIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDrdsIpWhiteListOutcomeCallable modifyDrdsIpWhiteListCallable(const Model::ModifyDrdsIpWhiteListRequest& request) const;
			ModifyDrdsInstanceDescriptionOutcome modifyDrdsInstanceDescription(const Model::ModifyDrdsInstanceDescriptionRequest &request)const;
			void modifyDrdsInstanceDescriptionAsync(const Model::ModifyDrdsInstanceDescriptionRequest& request, const ModifyDrdsInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDrdsInstanceDescriptionOutcomeCallable modifyDrdsInstanceDescriptionCallable(const Model::ModifyDrdsInstanceDescriptionRequest& request) const;
			CreateDrdsDBOutcome createDrdsDB(const Model::CreateDrdsDBRequest &request)const;
			void createDrdsDBAsync(const Model::CreateDrdsDBRequest& request, const CreateDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDrdsDBOutcomeCallable createDrdsDBCallable(const Model::CreateDrdsDBRequest& request) const;
			DescribeDrdsInstanceNetInfoForInnerOutcome describeDrdsInstanceNetInfoForInner(const Model::DescribeDrdsInstanceNetInfoForInnerRequest &request)const;
			void describeDrdsInstanceNetInfoForInnerAsync(const Model::DescribeDrdsInstanceNetInfoForInnerRequest& request, const DescribeDrdsInstanceNetInfoForInnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceNetInfoForInnerOutcomeCallable describeDrdsInstanceNetInfoForInnerCallable(const Model::DescribeDrdsInstanceNetInfoForInnerRequest& request) const;
			CreateDrdsAccountOutcome createDrdsAccount(const Model::CreateDrdsAccountRequest &request)const;
			void createDrdsAccountAsync(const Model::CreateDrdsAccountRequest& request, const CreateDrdsAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDrdsAccountOutcomeCallable createDrdsAccountCallable(const Model::CreateDrdsAccountRequest& request) const;
			DescribeReadOnlyAccountOutcome describeReadOnlyAccount(const Model::DescribeReadOnlyAccountRequest &request)const;
			void describeReadOnlyAccountAsync(const Model::DescribeReadOnlyAccountRequest& request, const DescribeReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReadOnlyAccountOutcomeCallable describeReadOnlyAccountCallable(const Model::DescribeReadOnlyAccountRequest& request) const;
			ModifyRdsReadWeightOutcome modifyRdsReadWeight(const Model::ModifyRdsReadWeightRequest &request)const;
			void modifyRdsReadWeightAsync(const Model::ModifyRdsReadWeightRequest& request, const ModifyRdsReadWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRdsReadWeightOutcomeCallable modifyRdsReadWeightCallable(const Model::ModifyRdsReadWeightRequest& request) const;
			CreateDrdsInstanceOutcome createDrdsInstance(const Model::CreateDrdsInstanceRequest &request)const;
			void createDrdsInstanceAsync(const Model::CreateDrdsInstanceRequest& request, const CreateDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDrdsInstanceOutcomeCallable createDrdsInstanceCallable(const Model::CreateDrdsInstanceRequest& request) const;
			DescribeDrdsInstanceMonitorOutcome describeDrdsInstanceMonitor(const Model::DescribeDrdsInstanceMonitorRequest &request)const;
			void describeDrdsInstanceMonitorAsync(const Model::DescribeDrdsInstanceMonitorRequest& request, const DescribeDrdsInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceMonitorOutcomeCallable describeDrdsInstanceMonitorCallable(const Model::DescribeDrdsInstanceMonitorRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeDrdsDBIpWhiteListOutcome describeDrdsDBIpWhiteList(const Model::DescribeDrdsDBIpWhiteListRequest &request)const;
			void describeDrdsDBIpWhiteListAsync(const Model::DescribeDrdsDBIpWhiteListRequest& request, const DescribeDrdsDBIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBIpWhiteListOutcomeCallable describeDrdsDBIpWhiteListCallable(const Model::DescribeDrdsDBIpWhiteListRequest& request) const;
			DescribeRdsListOutcome describeRdsList(const Model::DescribeRdsListRequest &request)const;
			void describeRdsListAsync(const Model::DescribeRdsListRequest& request, const DescribeRdsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsListOutcomeCallable describeRdsListCallable(const Model::DescribeRdsListRequest& request) const;
			DescribeDrdsInstancesOutcome describeDrdsInstances(const Model::DescribeDrdsInstancesRequest &request)const;
			void describeDrdsInstancesAsync(const Model::DescribeDrdsInstancesRequest& request, const DescribeDrdsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstancesOutcomeCallable describeDrdsInstancesCallable(const Model::DescribeDrdsInstancesRequest& request) const;
			ModifyReadOnlyAccountPasswordOutcome modifyReadOnlyAccountPassword(const Model::ModifyReadOnlyAccountPasswordRequest &request)const;
			void modifyReadOnlyAccountPasswordAsync(const Model::ModifyReadOnlyAccountPasswordRequest& request, const ModifyReadOnlyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReadOnlyAccountPasswordOutcomeCallable modifyReadOnlyAccountPasswordCallable(const Model::ModifyReadOnlyAccountPasswordRequest& request) const;
			DescribeShardDbConnectionInfoOutcome describeShardDbConnectionInfo(const Model::DescribeShardDbConnectionInfoRequest &request)const;
			void describeShardDbConnectionInfoAsync(const Model::DescribeShardDbConnectionInfoRequest& request, const DescribeShardDbConnectionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShardDbConnectionInfoOutcomeCallable describeShardDbConnectionInfoCallable(const Model::DescribeShardDbConnectionInfoRequest& request) const;
			RemoveReadOnlyAccountOutcome removeReadOnlyAccount(const Model::RemoveReadOnlyAccountRequest &request)const;
			void removeReadOnlyAccountAsync(const Model::RemoveReadOnlyAccountRequest& request, const RemoveReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveReadOnlyAccountOutcomeCallable removeReadOnlyAccountCallable(const Model::RemoveReadOnlyAccountRequest& request) const;
			ModifyDrdsDBPasswdOutcome modifyDrdsDBPasswd(const Model::ModifyDrdsDBPasswdRequest &request)const;
			void modifyDrdsDBPasswdAsync(const Model::ModifyDrdsDBPasswdRequest& request, const ModifyDrdsDBPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDrdsDBPasswdOutcomeCallable modifyDrdsDBPasswdCallable(const Model::ModifyDrdsDBPasswdRequest& request) const;
			DeleteFailedDrdsDBOutcome deleteFailedDrdsDB(const Model::DeleteFailedDrdsDBRequest &request)const;
			void deleteFailedDrdsDBAsync(const Model::DeleteFailedDrdsDBRequest& request, const DeleteFailedDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFailedDrdsDBOutcomeCallable deleteFailedDrdsDBCallable(const Model::DeleteFailedDrdsDBRequest& request) const;
			DescribeDrdsInstanceDbMonitorOutcome describeDrdsInstanceDbMonitor(const Model::DescribeDrdsInstanceDbMonitorRequest &request)const;
			void describeDrdsInstanceDbMonitorAsync(const Model::DescribeDrdsInstanceDbMonitorRequest& request, const DescribeDrdsInstanceDbMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceDbMonitorOutcomeCallable describeDrdsInstanceDbMonitorCallable(const Model::DescribeDrdsInstanceDbMonitorRequest& request) const;
			DescribeCreateDrdsInstanceStatusOutcome describeCreateDrdsInstanceStatus(const Model::DescribeCreateDrdsInstanceStatusRequest &request)const;
			void describeCreateDrdsInstanceStatusAsync(const Model::DescribeCreateDrdsInstanceStatusRequest& request, const DescribeCreateDrdsInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCreateDrdsInstanceStatusOutcomeCallable describeCreateDrdsInstanceStatusCallable(const Model::DescribeCreateDrdsInstanceStatusRequest& request) const;
			DescribeDrdsDBsOutcome describeDrdsDBs(const Model::DescribeDrdsDBsRequest &request)const;
			void describeDrdsDBsAsync(const Model::DescribeDrdsDBsRequest& request, const DescribeDrdsDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBsOutcomeCallable describeDrdsDBsCallable(const Model::DescribeDrdsDBsRequest& request) const;
			QueryInstanceInfoByConnOutcome queryInstanceInfoByConn(const Model::QueryInstanceInfoByConnRequest &request)const;
			void queryInstanceInfoByConnAsync(const Model::QueryInstanceInfoByConnRequest& request, const QueryInstanceInfoByConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInstanceInfoByConnOutcomeCallable queryInstanceInfoByConnCallable(const Model::QueryInstanceInfoByConnRequest& request) const;
			ModifyFullTableScanOutcome modifyFullTableScan(const Model::ModifyFullTableScanRequest &request)const;
			void modifyFullTableScanAsync(const Model::ModifyFullTableScanRequest& request, const ModifyFullTableScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFullTableScanOutcomeCallable modifyFullTableScanCallable(const Model::ModifyFullTableScanRequest& request) const;
			DescribeDrdsInstanceOutcome describeDrdsInstance(const Model::DescribeDrdsInstanceRequest &request)const;
			void describeDrdsInstanceAsync(const Model::DescribeDrdsInstanceRequest& request, const DescribeDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceOutcomeCallable describeDrdsInstanceCallable(const Model::DescribeDrdsInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DRDS_DRDSCLIENT_H_
