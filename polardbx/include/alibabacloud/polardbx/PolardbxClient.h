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

#ifndef ALIBABACLOUD_POLARDBX_POLARDBXCLIENT_H_
#define ALIBABACLOUD_POLARDBX_POLARDBXCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "PolardbxExport.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/CheckHealthRequest.h"
#include "model/CheckHealthResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateDBRequest.h"
#include "model/CreateDBResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/CreatePolarxInstanceRequest.h"
#include "model/CreatePolarxInstanceResult.h"
#include "model/CreateSuperAccountRequest.h"
#include "model/CreateSuperAccountResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteDBRequest.h"
#include "model/DeleteDBResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DescribeAccountListRequest.h"
#include "model/DescribeAccountListResult.h"
#include "model/DescribeCharacterSetRequest.h"
#include "model/DescribeCharacterSetResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceConfigRequest.h"
#include "model/DescribeDBInstanceConfigResult.h"
#include "model/DescribeDBInstancesRequest.h"
#include "model/DescribeDBInstancesResult.h"
#include "model/DescribeDbListRequest.h"
#include "model/DescribeDbListResult.h"
#include "model/DescribeDistributeTableListRequest.h"
#include "model/DescribeDistributeTableListResult.h"
#include "model/DescribeInstanceDbPerformanceRequest.h"
#include "model/DescribeInstanceDbPerformanceResult.h"
#include "model/DescribeInstancePerformanceRequest.h"
#include "model/DescribeInstancePerformanceResult.h"
#include "model/DescribeInstanceStoragePerformanceRequest.h"
#include "model/DescribeInstanceStoragePerformanceResult.h"
#include "model/DescribeModifyParameterLogRequest.h"
#include "model/DescribeModifyParameterLogResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribePolarxDbInstancesRequest.h"
#include "model/DescribePolarxDbInstancesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeScaleOutMigrateTaskListRequest.h"
#include "model/DescribeScaleOutMigrateTaskListResult.h"
#include "model/DescribeSecurityIpsRequest.h"
#include "model/DescribeSecurityIpsResult.h"
#include "model/DescribeSqlAuditInfoRequest.h"
#include "model/DescribeSqlAuditInfoResult.h"
#include "model/DescribeTableDetailRequest.h"
#include "model/DescribeTableDetailResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DisableSqlAuditRequest.h"
#include "model/DisableSqlAuditResult.h"
#include "model/EnableSqlAuditRequest.h"
#include "model/EnableSqlAuditResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAccountPrivilegeRequest.h"
#include "model/ModifyAccountPrivilegeResult.h"
#include "model/ModifyDBInstanceClassRequest.h"
#include "model/ModifyDBInstanceClassResult.h"
#include "model/ModifyDBInstanceConfigRequest.h"
#include "model/ModifyDBInstanceConfigResult.h"
#include "model/ModifyDBInstanceDescriptionRequest.h"
#include "model/ModifyDBInstanceDescriptionResult.h"
#include "model/ModifyDBInstanceMaintainTimeRequest.h"
#include "model/ModifyDBInstanceMaintainTimeResult.h"
#include "model/ModifyDatabaseDescriptionRequest.h"
#include "model/ModifyDatabaseDescriptionResult.h"
#include "model/ModifyParameterRequest.h"
#include "model/ModifyParameterResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/ResetPolarxPgAccountPasswordRequest.h"
#include "model/ResetPolarxPgAccountPasswordResult.h"
#include "model/RestartDBInstanceRequest.h"
#include "model/RestartDBInstanceResult.h"
#include "model/UpgradeDBInstanceKernelVersionRequest.h"
#include "model/UpgradeDBInstanceKernelVersionResult.h"


namespace AlibabaCloud
{
	namespace Polardbx
	{
		class ALIBABACLOUD_POLARDBX_EXPORT PolardbxClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CheckHealthResult> CheckHealthOutcome;
			typedef std::future<CheckHealthOutcome> CheckHealthOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CheckHealthRequest&, const CheckHealthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckHealthAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateDBResult> CreateDBOutcome;
			typedef std::future<CreateDBOutcome> CreateDBOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateDBRequest&, const CreateDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreatePolarxInstanceResult> CreatePolarxInstanceOutcome;
			typedef std::future<CreatePolarxInstanceOutcome> CreatePolarxInstanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreatePolarxInstanceRequest&, const CreatePolarxInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolarxInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateSuperAccountResult> CreateSuperAccountOutcome;
			typedef std::future<CreateSuperAccountOutcome> CreateSuperAccountOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateSuperAccountRequest&, const CreateSuperAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuperAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBResult> DeleteDBOutcome;
			typedef std::future<DeleteDBOutcome> DeleteDBOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DeleteDBRequest&, const DeleteDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceResult> DeleteDBInstanceOutcome;
			typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DeleteDBInstanceRequest&, const DeleteDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountListResult> DescribeAccountListOutcome;
			typedef std::future<DescribeAccountListOutcome> DescribeAccountListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeAccountListRequest&, const DescribeAccountListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCharacterSetResult> DescribeCharacterSetOutcome;
			typedef std::future<DescribeCharacterSetOutcome> DescribeCharacterSetOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeCharacterSetRequest&, const DescribeCharacterSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCharacterSetAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceConfigResult> DescribeDBInstanceConfigOutcome;
			typedef std::future<DescribeDBInstanceConfigOutcome> DescribeDBInstanceConfigOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceConfigRequest&, const DescribeDBInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesResult> DescribeDBInstancesOutcome;
			typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstancesRequest&, const DescribeDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbListResult> DescribeDbListOutcome;
			typedef std::future<DescribeDbListOutcome> DescribeDbListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDbListRequest&, const DescribeDbListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDistributeTableListResult> DescribeDistributeTableListOutcome;
			typedef std::future<DescribeDistributeTableListOutcome> DescribeDistributeTableListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDistributeTableListRequest&, const DescribeDistributeTableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDistributeTableListAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceDbPerformanceResult> DescribeInstanceDbPerformanceOutcome;
			typedef std::future<DescribeInstanceDbPerformanceOutcome> DescribeInstanceDbPerformanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeInstanceDbPerformanceRequest&, const DescribeInstanceDbPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDbPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancePerformanceResult> DescribeInstancePerformanceOutcome;
			typedef std::future<DescribeInstancePerformanceOutcome> DescribeInstancePerformanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeInstancePerformanceRequest&, const DescribeInstancePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceStoragePerformanceResult> DescribeInstanceStoragePerformanceOutcome;
			typedef std::future<DescribeInstanceStoragePerformanceOutcome> DescribeInstanceStoragePerformanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeInstanceStoragePerformanceRequest&, const DescribeInstanceStoragePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStoragePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeModifyParameterLogResult> DescribeModifyParameterLogOutcome;
			typedef std::future<DescribeModifyParameterLogOutcome> DescribeModifyParameterLogOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeModifyParameterLogRequest&, const DescribeModifyParameterLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyParameterLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterTemplatesResult> DescribeParameterTemplatesOutcome;
			typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeParameterTemplatesRequest&, const DescribeParameterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribePolarxDbInstancesResult> DescribePolarxDbInstancesOutcome;
			typedef std::future<DescribePolarxDbInstancesOutcome> DescribePolarxDbInstancesOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribePolarxDbInstancesRequest&, const DescribePolarxDbInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolarxDbInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScaleOutMigrateTaskListResult> DescribeScaleOutMigrateTaskListOutcome;
			typedef std::future<DescribeScaleOutMigrateTaskListOutcome> DescribeScaleOutMigrateTaskListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeScaleOutMigrateTaskListRequest&, const DescribeScaleOutMigrateTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScaleOutMigrateTaskListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityIpsResult> DescribeSecurityIpsOutcome;
			typedef std::future<DescribeSecurityIpsOutcome> DescribeSecurityIpsOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeSecurityIpsRequest&, const DescribeSecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSqlAuditInfoResult> DescribeSqlAuditInfoOutcome;
			typedef std::future<DescribeSqlAuditInfoOutcome> DescribeSqlAuditInfoOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeSqlAuditInfoRequest&, const DescribeSqlAuditInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlAuditInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableDetailResult> DescribeTableDetailOutcome;
			typedef std::future<DescribeTableDetailOutcome> DescribeTableDetailOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeTableDetailRequest&, const DescribeTableDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DisableSqlAuditResult> DisableSqlAuditOutcome;
			typedef std::future<DisableSqlAuditOutcome> DisableSqlAuditOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DisableSqlAuditRequest&, const DisableSqlAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSqlAuditAsyncHandler;
			typedef Outcome<Error, Model::EnableSqlAuditResult> EnableSqlAuditOutcome;
			typedef std::future<EnableSqlAuditOutcome> EnableSqlAuditOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::EnableSqlAuditRequest&, const EnableSqlAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSqlAuditAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPrivilegeResult> ModifyAccountPrivilegeOutcome;
			typedef std::future<ModifyAccountPrivilegeOutcome> ModifyAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyAccountPrivilegeRequest&, const ModifyAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceClassResult> ModifyDBInstanceClassOutcome;
			typedef std::future<ModifyDBInstanceClassOutcome> ModifyDBInstanceClassOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDBInstanceClassRequest&, const ModifyDBInstanceClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceClassAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConfigResult> ModifyDBInstanceConfigOutcome;
			typedef std::future<ModifyDBInstanceConfigOutcome> ModifyDBInstanceConfigOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDBInstanceConfigRequest&, const ModifyDBInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDescriptionResult> ModifyDBInstanceDescriptionOutcome;
			typedef std::future<ModifyDBInstanceDescriptionOutcome> ModifyDBInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDBInstanceDescriptionRequest&, const ModifyDBInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMaintainTimeResult> ModifyDBInstanceMaintainTimeOutcome;
			typedef std::future<ModifyDBInstanceMaintainTimeOutcome> ModifyDBInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDBInstanceMaintainTimeRequest&, const ModifyDBInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseDescriptionResult> ModifyDatabaseDescriptionOutcome;
			typedef std::future<ModifyDatabaseDescriptionOutcome> ModifyDatabaseDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDatabaseDescriptionRequest&, const ModifyDatabaseDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyParameterResult> ModifyParameterOutcome;
			typedef std::future<ModifyParameterOutcome> ModifyParameterOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyParameterRequest&, const ModifyParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ResetPolarxPgAccountPasswordResult> ResetPolarxPgAccountPasswordOutcome;
			typedef std::future<ResetPolarxPgAccountPasswordOutcome> ResetPolarxPgAccountPasswordOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ResetPolarxPgAccountPasswordRequest&, const ResetPolarxPgAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetPolarxPgAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartDBInstanceResult> RestartDBInstanceOutcome;
			typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::RestartDBInstanceRequest&, const RestartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceKernelVersionResult> UpgradeDBInstanceKernelVersionOutcome;
			typedef std::future<UpgradeDBInstanceKernelVersionOutcome> UpgradeDBInstanceKernelVersionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::UpgradeDBInstanceKernelVersionRequest&, const UpgradeDBInstanceKernelVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceKernelVersionAsyncHandler;

			PolardbxClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PolardbxClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PolardbxClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PolardbxClient();
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			CheckHealthOutcome checkHealth(const Model::CheckHealthRequest &request)const;
			void checkHealthAsync(const Model::CheckHealthRequest& request, const CheckHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckHealthOutcomeCallable checkHealthCallable(const Model::CheckHealthRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateDBOutcome createDB(const Model::CreateDBRequest &request)const;
			void createDBAsync(const Model::CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBOutcomeCallable createDBCallable(const Model::CreateDBRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			CreatePolarxInstanceOutcome createPolarxInstance(const Model::CreatePolarxInstanceRequest &request)const;
			void createPolarxInstanceAsync(const Model::CreatePolarxInstanceRequest& request, const CreatePolarxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePolarxInstanceOutcomeCallable createPolarxInstanceCallable(const Model::CreatePolarxInstanceRequest& request) const;
			CreateSuperAccountOutcome createSuperAccount(const Model::CreateSuperAccountRequest &request)const;
			void createSuperAccountAsync(const Model::CreateSuperAccountRequest& request, const CreateSuperAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSuperAccountOutcomeCallable createSuperAccountCallable(const Model::CreateSuperAccountRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteDBOutcome deleteDB(const Model::DeleteDBRequest &request)const;
			void deleteDBAsync(const Model::DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBOutcomeCallable deleteDBCallable(const Model::DeleteDBRequest& request) const;
			DeleteDBInstanceOutcome deleteDBInstance(const Model::DeleteDBInstanceRequest &request)const;
			void deleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceOutcomeCallable deleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;
			DescribeAccountListOutcome describeAccountList(const Model::DescribeAccountListRequest &request)const;
			void describeAccountListAsync(const Model::DescribeAccountListRequest& request, const DescribeAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountListOutcomeCallable describeAccountListCallable(const Model::DescribeAccountListRequest& request) const;
			DescribeCharacterSetOutcome describeCharacterSet(const Model::DescribeCharacterSetRequest &request)const;
			void describeCharacterSetAsync(const Model::DescribeCharacterSetRequest& request, const DescribeCharacterSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCharacterSetOutcomeCallable describeCharacterSetCallable(const Model::DescribeCharacterSetRequest& request) const;
			DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
			void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
			DescribeDBInstanceConfigOutcome describeDBInstanceConfig(const Model::DescribeDBInstanceConfigRequest &request)const;
			void describeDBInstanceConfigAsync(const Model::DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceConfigOutcomeCallable describeDBInstanceConfigCallable(const Model::DescribeDBInstanceConfigRequest& request) const;
			DescribeDBInstancesOutcome describeDBInstances(const Model::DescribeDBInstancesRequest &request)const;
			void describeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesOutcomeCallable describeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;
			DescribeDbListOutcome describeDbList(const Model::DescribeDbListRequest &request)const;
			void describeDbListAsync(const Model::DescribeDbListRequest& request, const DescribeDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbListOutcomeCallable describeDbListCallable(const Model::DescribeDbListRequest& request) const;
			DescribeDistributeTableListOutcome describeDistributeTableList(const Model::DescribeDistributeTableListRequest &request)const;
			void describeDistributeTableListAsync(const Model::DescribeDistributeTableListRequest& request, const DescribeDistributeTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDistributeTableListOutcomeCallable describeDistributeTableListCallable(const Model::DescribeDistributeTableListRequest& request) const;
			DescribeInstanceDbPerformanceOutcome describeInstanceDbPerformance(const Model::DescribeInstanceDbPerformanceRequest &request)const;
			void describeInstanceDbPerformanceAsync(const Model::DescribeInstanceDbPerformanceRequest& request, const DescribeInstanceDbPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceDbPerformanceOutcomeCallable describeInstanceDbPerformanceCallable(const Model::DescribeInstanceDbPerformanceRequest& request) const;
			DescribeInstancePerformanceOutcome describeInstancePerformance(const Model::DescribeInstancePerformanceRequest &request)const;
			void describeInstancePerformanceAsync(const Model::DescribeInstancePerformanceRequest& request, const DescribeInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancePerformanceOutcomeCallable describeInstancePerformanceCallable(const Model::DescribeInstancePerformanceRequest& request) const;
			DescribeInstanceStoragePerformanceOutcome describeInstanceStoragePerformance(const Model::DescribeInstanceStoragePerformanceRequest &request)const;
			void describeInstanceStoragePerformanceAsync(const Model::DescribeInstanceStoragePerformanceRequest& request, const DescribeInstanceStoragePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceStoragePerformanceOutcomeCallable describeInstanceStoragePerformanceCallable(const Model::DescribeInstanceStoragePerformanceRequest& request) const;
			DescribeModifyParameterLogOutcome describeModifyParameterLog(const Model::DescribeModifyParameterLogRequest &request)const;
			void describeModifyParameterLogAsync(const Model::DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModifyParameterLogOutcomeCallable describeModifyParameterLogCallable(const Model::DescribeModifyParameterLogRequest& request) const;
			DescribeParameterTemplatesOutcome describeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request)const;
			void describeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterTemplatesOutcomeCallable describeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request) const;
			DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
			void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
			DescribePolarxDbInstancesOutcome describePolarxDbInstances(const Model::DescribePolarxDbInstancesRequest &request)const;
			void describePolarxDbInstancesAsync(const Model::DescribePolarxDbInstancesRequest& request, const DescribePolarxDbInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePolarxDbInstancesOutcomeCallable describePolarxDbInstancesCallable(const Model::DescribePolarxDbInstancesRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeScaleOutMigrateTaskListOutcome describeScaleOutMigrateTaskList(const Model::DescribeScaleOutMigrateTaskListRequest &request)const;
			void describeScaleOutMigrateTaskListAsync(const Model::DescribeScaleOutMigrateTaskListRequest& request, const DescribeScaleOutMigrateTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScaleOutMigrateTaskListOutcomeCallable describeScaleOutMigrateTaskListCallable(const Model::DescribeScaleOutMigrateTaskListRequest& request) const;
			DescribeSecurityIpsOutcome describeSecurityIps(const Model::DescribeSecurityIpsRequest &request)const;
			void describeSecurityIpsAsync(const Model::DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityIpsOutcomeCallable describeSecurityIpsCallable(const Model::DescribeSecurityIpsRequest& request) const;
			DescribeSqlAuditInfoOutcome describeSqlAuditInfo(const Model::DescribeSqlAuditInfoRequest &request)const;
			void describeSqlAuditInfoAsync(const Model::DescribeSqlAuditInfoRequest& request, const DescribeSqlAuditInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSqlAuditInfoOutcomeCallable describeSqlAuditInfoCallable(const Model::DescribeSqlAuditInfoRequest& request) const;
			DescribeTableDetailOutcome describeTableDetail(const Model::DescribeTableDetailRequest &request)const;
			void describeTableDetailAsync(const Model::DescribeTableDetailRequest& request, const DescribeTableDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableDetailOutcomeCallable describeTableDetailCallable(const Model::DescribeTableDetailRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DisableSqlAuditOutcome disableSqlAudit(const Model::DisableSqlAuditRequest &request)const;
			void disableSqlAuditAsync(const Model::DisableSqlAuditRequest& request, const DisableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSqlAuditOutcomeCallable disableSqlAuditCallable(const Model::DisableSqlAuditRequest& request) const;
			EnableSqlAuditOutcome enableSqlAudit(const Model::EnableSqlAuditRequest &request)const;
			void enableSqlAuditAsync(const Model::EnableSqlAuditRequest& request, const EnableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSqlAuditOutcomeCallable enableSqlAuditCallable(const Model::EnableSqlAuditRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAccountPrivilegeOutcome modifyAccountPrivilege(const Model::ModifyAccountPrivilegeRequest &request)const;
			void modifyAccountPrivilegeAsync(const Model::ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPrivilegeOutcomeCallable modifyAccountPrivilegeCallable(const Model::ModifyAccountPrivilegeRequest& request) const;
			ModifyDBInstanceClassOutcome modifyDBInstanceClass(const Model::ModifyDBInstanceClassRequest &request)const;
			void modifyDBInstanceClassAsync(const Model::ModifyDBInstanceClassRequest& request, const ModifyDBInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceClassOutcomeCallable modifyDBInstanceClassCallable(const Model::ModifyDBInstanceClassRequest& request) const;
			ModifyDBInstanceConfigOutcome modifyDBInstanceConfig(const Model::ModifyDBInstanceConfigRequest &request)const;
			void modifyDBInstanceConfigAsync(const Model::ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConfigOutcomeCallable modifyDBInstanceConfigCallable(const Model::ModifyDBInstanceConfigRequest& request) const;
			ModifyDBInstanceDescriptionOutcome modifyDBInstanceDescription(const Model::ModifyDBInstanceDescriptionRequest &request)const;
			void modifyDBInstanceDescriptionAsync(const Model::ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDescriptionOutcomeCallable modifyDBInstanceDescriptionCallable(const Model::ModifyDBInstanceDescriptionRequest& request) const;
			ModifyDBInstanceMaintainTimeOutcome modifyDBInstanceMaintainTime(const Model::ModifyDBInstanceMaintainTimeRequest &request)const;
			void modifyDBInstanceMaintainTimeAsync(const Model::ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMaintainTimeOutcomeCallable modifyDBInstanceMaintainTimeCallable(const Model::ModifyDBInstanceMaintainTimeRequest& request) const;
			ModifyDatabaseDescriptionOutcome modifyDatabaseDescription(const Model::ModifyDatabaseDescriptionRequest &request)const;
			void modifyDatabaseDescriptionAsync(const Model::ModifyDatabaseDescriptionRequest& request, const ModifyDatabaseDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseDescriptionOutcomeCallable modifyDatabaseDescriptionCallable(const Model::ModifyDatabaseDescriptionRequest& request) const;
			ModifyParameterOutcome modifyParameter(const Model::ModifyParameterRequest &request)const;
			void modifyParameterAsync(const Model::ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParameterOutcomeCallable modifyParameterCallable(const Model::ModifyParameterRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
			void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			ResetPolarxPgAccountPasswordOutcome resetPolarxPgAccountPassword(const Model::ResetPolarxPgAccountPasswordRequest &request)const;
			void resetPolarxPgAccountPasswordAsync(const Model::ResetPolarxPgAccountPasswordRequest& request, const ResetPolarxPgAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetPolarxPgAccountPasswordOutcomeCallable resetPolarxPgAccountPasswordCallable(const Model::ResetPolarxPgAccountPasswordRequest& request) const;
			RestartDBInstanceOutcome restartDBInstance(const Model::RestartDBInstanceRequest &request)const;
			void restartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBInstanceOutcomeCallable restartDBInstanceCallable(const Model::RestartDBInstanceRequest& request) const;
			UpgradeDBInstanceKernelVersionOutcome upgradeDBInstanceKernelVersion(const Model::UpgradeDBInstanceKernelVersionRequest &request)const;
			void upgradeDBInstanceKernelVersionAsync(const Model::UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceKernelVersionOutcomeCallable upgradeDBInstanceKernelVersionCallable(const Model::UpgradeDBInstanceKernelVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_POLARDBX_POLARDBXCLIENT_H_
