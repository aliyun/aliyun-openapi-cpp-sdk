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

#ifndef ALIBABACLOUD_SWAS_OPEN_SWAS_OPENCLIENT_H_
#define ALIBABACLOUD_SWAS_OPEN_SWAS_OPENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SWAS_OPENExport.h"
#include "model/AllocatePublicConnectionRequest.h"
#include "model/AllocatePublicConnectionResult.h"
#include "model/CreateCustomImageRequest.h"
#include "model/CreateCustomImageResult.h"
#include "model/CreateFirewallRuleRequest.h"
#include "model/CreateFirewallRuleResult.h"
#include "model/CreateInstancesRequest.h"
#include "model/CreateInstancesResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/DeleteCustomImageRequest.h"
#include "model/DeleteCustomImageResult.h"
#include "model/DeleteFirewallRuleRequest.h"
#include "model/DeleteFirewallRuleResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/DescribeCloudAssistantStatusRequest.h"
#include "model/DescribeCloudAssistantStatusResult.h"
#include "model/DescribeDatabaseErrorLogsRequest.h"
#include "model/DescribeDatabaseErrorLogsResult.h"
#include "model/DescribeDatabaseInstanceMetricDataRequest.h"
#include "model/DescribeDatabaseInstanceMetricDataResult.h"
#include "model/DescribeDatabaseInstanceParametersRequest.h"
#include "model/DescribeDatabaseInstanceParametersResult.h"
#include "model/DescribeDatabaseInstancesRequest.h"
#include "model/DescribeDatabaseInstancesResult.h"
#include "model/DescribeDatabaseSlowLogRecordsRequest.h"
#include "model/DescribeDatabaseSlowLogRecordsResult.h"
#include "model/DescribeInvocationResultRequest.h"
#include "model/DescribeInvocationResultResult.h"
#include "model/DescribeInvocationsRequest.h"
#include "model/DescribeInvocationsResult.h"
#include "model/InstallCloudAssistantRequest.h"
#include "model/InstallCloudAssistantResult.h"
#include "model/ListDisksRequest.h"
#include "model/ListDisksResult.h"
#include "model/ListFirewallRulesRequest.h"
#include "model/ListFirewallRulesResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/ListInstancePlansModificationRequest.h"
#include "model/ListInstancePlansModificationResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListInstancesTrafficPackagesRequest.h"
#include "model/ListInstancesTrafficPackagesResult.h"
#include "model/ListPlansRequest.h"
#include "model/ListPlansResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/ListSnapshotsRequest.h"
#include "model/ListSnapshotsResult.h"
#include "model/LoginInstanceRequest.h"
#include "model/LoginInstanceResult.h"
#include "model/ModifyDatabaseInstanceDescriptionRequest.h"
#include "model/ModifyDatabaseInstanceDescriptionResult.h"
#include "model/ModifyDatabaseInstanceParameterRequest.h"
#include "model/ModifyDatabaseInstanceParameterResult.h"
#include "model/ModifyImageShareStatusRequest.h"
#include "model/ModifyImageShareStatusResult.h"
#include "model/RebootInstanceRequest.h"
#include "model/RebootInstanceResult.h"
#include "model/ReleasePublicConnectionRequest.h"
#include "model/ReleasePublicConnectionResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/ResetDatabaseAccountPasswordRequest.h"
#include "model/ResetDatabaseAccountPasswordResult.h"
#include "model/ResetDiskRequest.h"
#include "model/ResetDiskResult.h"
#include "model/ResetSystemRequest.h"
#include "model/ResetSystemResult.h"
#include "model/RestartDatabaseInstanceRequest.h"
#include "model/RestartDatabaseInstanceResult.h"
#include "model/RunCommandRequest.h"
#include "model/RunCommandResult.h"
#include "model/StartDatabaseInstanceRequest.h"
#include "model/StartDatabaseInstanceResult.h"
#include "model/StartInstanceRequest.h"
#include "model/StartInstanceResult.h"
#include "model/StopDatabaseInstanceRequest.h"
#include "model/StopDatabaseInstanceResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/UpdateInstanceAttributeRequest.h"
#include "model/UpdateInstanceAttributeResult.h"
#include "model/UpgradeInstanceRequest.h"
#include "model/UpgradeInstanceResult.h"


namespace AlibabaCloud
{
	namespace SWAS_OPEN
	{
		class ALIBABACLOUD_SWAS_OPEN_EXPORT SWAS_OPENClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocatePublicConnectionResult> AllocatePublicConnectionOutcome;
			typedef std::future<AllocatePublicConnectionOutcome> AllocatePublicConnectionOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::AllocatePublicConnectionRequest&, const AllocatePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocatePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomImageResult> CreateCustomImageOutcome;
			typedef std::future<CreateCustomImageOutcome> CreateCustomImageOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateCustomImageRequest&, const CreateCustomImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomImageAsyncHandler;
			typedef Outcome<Error, Model::CreateFirewallRuleResult> CreateFirewallRuleOutcome;
			typedef std::future<CreateFirewallRuleOutcome> CreateFirewallRuleOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateFirewallRuleRequest&, const CreateFirewallRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirewallRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateInstancesResult> CreateInstancesOutcome;
			typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateInstancesRequest&, const CreateInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomImageResult> DeleteCustomImageOutcome;
			typedef std::future<DeleteCustomImageOutcome> DeleteCustomImageOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteCustomImageRequest&, const DeleteCustomImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteFirewallRuleResult> DeleteFirewallRuleOutcome;
			typedef std::future<DeleteFirewallRuleOutcome> DeleteFirewallRuleOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteFirewallRuleRequest&, const DeleteFirewallRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudAssistantStatusResult> DescribeCloudAssistantStatusOutcome;
			typedef std::future<DescribeCloudAssistantStatusOutcome> DescribeCloudAssistantStatusOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeCloudAssistantStatusRequest&, const DescribeCloudAssistantStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudAssistantStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabaseErrorLogsResult> DescribeDatabaseErrorLogsOutcome;
			typedef std::future<DescribeDatabaseErrorLogsOutcome> DescribeDatabaseErrorLogsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeDatabaseErrorLogsRequest&, const DescribeDatabaseErrorLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseErrorLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabaseInstanceMetricDataResult> DescribeDatabaseInstanceMetricDataOutcome;
			typedef std::future<DescribeDatabaseInstanceMetricDataOutcome> DescribeDatabaseInstanceMetricDataOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeDatabaseInstanceMetricDataRequest&, const DescribeDatabaseInstanceMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseInstanceMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabaseInstanceParametersResult> DescribeDatabaseInstanceParametersOutcome;
			typedef std::future<DescribeDatabaseInstanceParametersOutcome> DescribeDatabaseInstanceParametersOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeDatabaseInstanceParametersRequest&, const DescribeDatabaseInstanceParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseInstanceParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabaseInstancesResult> DescribeDatabaseInstancesOutcome;
			typedef std::future<DescribeDatabaseInstancesOutcome> DescribeDatabaseInstancesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeDatabaseInstancesRequest&, const DescribeDatabaseInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabaseSlowLogRecordsResult> DescribeDatabaseSlowLogRecordsOutcome;
			typedef std::future<DescribeDatabaseSlowLogRecordsOutcome> DescribeDatabaseSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeDatabaseSlowLogRecordsRequest&, const DescribeDatabaseSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInvocationResultResult> DescribeInvocationResultOutcome;
			typedef std::future<DescribeInvocationResultOutcome> DescribeInvocationResultOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeInvocationResultRequest&, const DescribeInvocationResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeInvocationsResult> DescribeInvocationsOutcome;
			typedef std::future<DescribeInvocationsOutcome> DescribeInvocationsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeInvocationsRequest&, const DescribeInvocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationsAsyncHandler;
			typedef Outcome<Error, Model::InstallCloudAssistantResult> InstallCloudAssistantOutcome;
			typedef std::future<InstallCloudAssistantOutcome> InstallCloudAssistantOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::InstallCloudAssistantRequest&, const InstallCloudAssistantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallCloudAssistantAsyncHandler;
			typedef Outcome<Error, Model::ListDisksResult> ListDisksOutcome;
			typedef std::future<ListDisksOutcome> ListDisksOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListDisksRequest&, const ListDisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDisksAsyncHandler;
			typedef Outcome<Error, Model::ListFirewallRulesResult> ListFirewallRulesOutcome;
			typedef std::future<ListFirewallRulesOutcome> ListFirewallRulesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListFirewallRulesRequest&, const ListFirewallRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFirewallRulesAsyncHandler;
			typedef Outcome<Error, Model::ListImagesResult> ListImagesOutcome;
			typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListImagesRequest&, const ListImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImagesAsyncHandler;
			typedef Outcome<Error, Model::ListInstancePlansModificationResult> ListInstancePlansModificationOutcome;
			typedef std::future<ListInstancePlansModificationOutcome> ListInstancePlansModificationOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListInstancePlansModificationRequest&, const ListInstancePlansModificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancePlansModificationAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesTrafficPackagesResult> ListInstancesTrafficPackagesOutcome;
			typedef std::future<ListInstancesTrafficPackagesOutcome> ListInstancesTrafficPackagesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListInstancesTrafficPackagesRequest&, const ListInstancesTrafficPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesTrafficPackagesAsyncHandler;
			typedef Outcome<Error, Model::ListPlansResult> ListPlansOutcome;
			typedef std::future<ListPlansOutcome> ListPlansOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListPlansRequest&, const ListPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPlansAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotsResult> ListSnapshotsOutcome;
			typedef std::future<ListSnapshotsOutcome> ListSnapshotsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListSnapshotsRequest&, const ListSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::LoginInstanceResult> LoginInstanceOutcome;
			typedef std::future<LoginInstanceOutcome> LoginInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::LoginInstanceRequest&, const LoginInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LoginInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseInstanceDescriptionResult> ModifyDatabaseInstanceDescriptionOutcome;
			typedef std::future<ModifyDatabaseInstanceDescriptionOutcome> ModifyDatabaseInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyDatabaseInstanceDescriptionRequest&, const ModifyDatabaseInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseInstanceParameterResult> ModifyDatabaseInstanceParameterOutcome;
			typedef std::future<ModifyDatabaseInstanceParameterOutcome> ModifyDatabaseInstanceParameterOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyDatabaseInstanceParameterRequest&, const ModifyDatabaseInstanceParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseInstanceParameterAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageShareStatusResult> ModifyImageShareStatusOutcome;
			typedef std::future<ModifyImageShareStatusOutcome> ModifyImageShareStatusOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyImageShareStatusRequest&, const ModifyImageShareStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageShareStatusAsyncHandler;
			typedef Outcome<Error, Model::RebootInstanceResult> RebootInstanceOutcome;
			typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::RebootInstanceRequest&, const RebootInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleasePublicConnectionResult> ReleasePublicConnectionOutcome;
			typedef std::future<ReleasePublicConnectionOutcome> ReleasePublicConnectionOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ReleasePublicConnectionRequest&, const ReleasePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResetDatabaseAccountPasswordResult> ResetDatabaseAccountPasswordOutcome;
			typedef std::future<ResetDatabaseAccountPasswordOutcome> ResetDatabaseAccountPasswordOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ResetDatabaseAccountPasswordRequest&, const ResetDatabaseAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDatabaseAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ResetDiskResult> ResetDiskOutcome;
			typedef std::future<ResetDiskOutcome> ResetDiskOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ResetDiskRequest&, const ResetDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDiskAsyncHandler;
			typedef Outcome<Error, Model::ResetSystemResult> ResetSystemOutcome;
			typedef std::future<ResetSystemOutcome> ResetSystemOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ResetSystemRequest&, const ResetSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSystemAsyncHandler;
			typedef Outcome<Error, Model::RestartDatabaseInstanceResult> RestartDatabaseInstanceOutcome;
			typedef std::future<RestartDatabaseInstanceOutcome> RestartDatabaseInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::RestartDatabaseInstanceRequest&, const RestartDatabaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDatabaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::RunCommandResult> RunCommandOutcome;
			typedef std::future<RunCommandOutcome> RunCommandOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::RunCommandRequest&, const RunCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunCommandAsyncHandler;
			typedef Outcome<Error, Model::StartDatabaseInstanceResult> StartDatabaseInstanceOutcome;
			typedef std::future<StartDatabaseInstanceOutcome> StartDatabaseInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StartDatabaseInstanceRequest&, const StartDatabaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDatabaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartInstanceResult> StartInstanceOutcome;
			typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StartInstanceRequest&, const StartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopDatabaseInstanceResult> StopDatabaseInstanceOutcome;
			typedef std::future<StopDatabaseInstanceOutcome> StopDatabaseInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StopDatabaseInstanceRequest&, const StopDatabaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDatabaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceAttributeResult> UpdateInstanceAttributeOutcome;
			typedef std::future<UpdateInstanceAttributeOutcome> UpdateInstanceAttributeOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UpdateInstanceAttributeRequest&, const UpdateInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceResult> UpgradeInstanceOutcome;
			typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UpgradeInstanceRequest&, const UpgradeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;

			SWAS_OPENClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SWAS_OPENClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SWAS_OPENClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SWAS_OPENClient();
			AllocatePublicConnectionOutcome allocatePublicConnection(const Model::AllocatePublicConnectionRequest &request)const;
			void allocatePublicConnectionAsync(const Model::AllocatePublicConnectionRequest& request, const AllocatePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocatePublicConnectionOutcomeCallable allocatePublicConnectionCallable(const Model::AllocatePublicConnectionRequest& request) const;
			CreateCustomImageOutcome createCustomImage(const Model::CreateCustomImageRequest &request)const;
			void createCustomImageAsync(const Model::CreateCustomImageRequest& request, const CreateCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomImageOutcomeCallable createCustomImageCallable(const Model::CreateCustomImageRequest& request) const;
			CreateFirewallRuleOutcome createFirewallRule(const Model::CreateFirewallRuleRequest &request)const;
			void createFirewallRuleAsync(const Model::CreateFirewallRuleRequest& request, const CreateFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFirewallRuleOutcomeCallable createFirewallRuleCallable(const Model::CreateFirewallRuleRequest& request) const;
			CreateInstancesOutcome createInstances(const Model::CreateInstancesRequest &request)const;
			void createInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstancesOutcomeCallable createInstancesCallable(const Model::CreateInstancesRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			DeleteCustomImageOutcome deleteCustomImage(const Model::DeleteCustomImageRequest &request)const;
			void deleteCustomImageAsync(const Model::DeleteCustomImageRequest& request, const DeleteCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomImageOutcomeCallable deleteCustomImageCallable(const Model::DeleteCustomImageRequest& request) const;
			DeleteFirewallRuleOutcome deleteFirewallRule(const Model::DeleteFirewallRuleRequest &request)const;
			void deleteFirewallRuleAsync(const Model::DeleteFirewallRuleRequest& request, const DeleteFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFirewallRuleOutcomeCallable deleteFirewallRuleCallable(const Model::DeleteFirewallRuleRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			DescribeCloudAssistantStatusOutcome describeCloudAssistantStatus(const Model::DescribeCloudAssistantStatusRequest &request)const;
			void describeCloudAssistantStatusAsync(const Model::DescribeCloudAssistantStatusRequest& request, const DescribeCloudAssistantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudAssistantStatusOutcomeCallable describeCloudAssistantStatusCallable(const Model::DescribeCloudAssistantStatusRequest& request) const;
			DescribeDatabaseErrorLogsOutcome describeDatabaseErrorLogs(const Model::DescribeDatabaseErrorLogsRequest &request)const;
			void describeDatabaseErrorLogsAsync(const Model::DescribeDatabaseErrorLogsRequest& request, const DescribeDatabaseErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabaseErrorLogsOutcomeCallable describeDatabaseErrorLogsCallable(const Model::DescribeDatabaseErrorLogsRequest& request) const;
			DescribeDatabaseInstanceMetricDataOutcome describeDatabaseInstanceMetricData(const Model::DescribeDatabaseInstanceMetricDataRequest &request)const;
			void describeDatabaseInstanceMetricDataAsync(const Model::DescribeDatabaseInstanceMetricDataRequest& request, const DescribeDatabaseInstanceMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabaseInstanceMetricDataOutcomeCallable describeDatabaseInstanceMetricDataCallable(const Model::DescribeDatabaseInstanceMetricDataRequest& request) const;
			DescribeDatabaseInstanceParametersOutcome describeDatabaseInstanceParameters(const Model::DescribeDatabaseInstanceParametersRequest &request)const;
			void describeDatabaseInstanceParametersAsync(const Model::DescribeDatabaseInstanceParametersRequest& request, const DescribeDatabaseInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabaseInstanceParametersOutcomeCallable describeDatabaseInstanceParametersCallable(const Model::DescribeDatabaseInstanceParametersRequest& request) const;
			DescribeDatabaseInstancesOutcome describeDatabaseInstances(const Model::DescribeDatabaseInstancesRequest &request)const;
			void describeDatabaseInstancesAsync(const Model::DescribeDatabaseInstancesRequest& request, const DescribeDatabaseInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabaseInstancesOutcomeCallable describeDatabaseInstancesCallable(const Model::DescribeDatabaseInstancesRequest& request) const;
			DescribeDatabaseSlowLogRecordsOutcome describeDatabaseSlowLogRecords(const Model::DescribeDatabaseSlowLogRecordsRequest &request)const;
			void describeDatabaseSlowLogRecordsAsync(const Model::DescribeDatabaseSlowLogRecordsRequest& request, const DescribeDatabaseSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabaseSlowLogRecordsOutcomeCallable describeDatabaseSlowLogRecordsCallable(const Model::DescribeDatabaseSlowLogRecordsRequest& request) const;
			DescribeInvocationResultOutcome describeInvocationResult(const Model::DescribeInvocationResultRequest &request)const;
			void describeInvocationResultAsync(const Model::DescribeInvocationResultRequest& request, const DescribeInvocationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInvocationResultOutcomeCallable describeInvocationResultCallable(const Model::DescribeInvocationResultRequest& request) const;
			DescribeInvocationsOutcome describeInvocations(const Model::DescribeInvocationsRequest &request)const;
			void describeInvocationsAsync(const Model::DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInvocationsOutcomeCallable describeInvocationsCallable(const Model::DescribeInvocationsRequest& request) const;
			InstallCloudAssistantOutcome installCloudAssistant(const Model::InstallCloudAssistantRequest &request)const;
			void installCloudAssistantAsync(const Model::InstallCloudAssistantRequest& request, const InstallCloudAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallCloudAssistantOutcomeCallable installCloudAssistantCallable(const Model::InstallCloudAssistantRequest& request) const;
			ListDisksOutcome listDisks(const Model::ListDisksRequest &request)const;
			void listDisksAsync(const Model::ListDisksRequest& request, const ListDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDisksOutcomeCallable listDisksCallable(const Model::ListDisksRequest& request) const;
			ListFirewallRulesOutcome listFirewallRules(const Model::ListFirewallRulesRequest &request)const;
			void listFirewallRulesAsync(const Model::ListFirewallRulesRequest& request, const ListFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFirewallRulesOutcomeCallable listFirewallRulesCallable(const Model::ListFirewallRulesRequest& request) const;
			ListImagesOutcome listImages(const Model::ListImagesRequest &request)const;
			void listImagesAsync(const Model::ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImagesOutcomeCallable listImagesCallable(const Model::ListImagesRequest& request) const;
			ListInstancePlansModificationOutcome listInstancePlansModification(const Model::ListInstancePlansModificationRequest &request)const;
			void listInstancePlansModificationAsync(const Model::ListInstancePlansModificationRequest& request, const ListInstancePlansModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancePlansModificationOutcomeCallable listInstancePlansModificationCallable(const Model::ListInstancePlansModificationRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListInstancesTrafficPackagesOutcome listInstancesTrafficPackages(const Model::ListInstancesTrafficPackagesRequest &request)const;
			void listInstancesTrafficPackagesAsync(const Model::ListInstancesTrafficPackagesRequest& request, const ListInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesTrafficPackagesOutcomeCallable listInstancesTrafficPackagesCallable(const Model::ListInstancesTrafficPackagesRequest& request) const;
			ListPlansOutcome listPlans(const Model::ListPlansRequest &request)const;
			void listPlansAsync(const Model::ListPlansRequest& request, const ListPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPlansOutcomeCallable listPlansCallable(const Model::ListPlansRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			ListSnapshotsOutcome listSnapshots(const Model::ListSnapshotsRequest &request)const;
			void listSnapshotsAsync(const Model::ListSnapshotsRequest& request, const ListSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotsOutcomeCallable listSnapshotsCallable(const Model::ListSnapshotsRequest& request) const;
			LoginInstanceOutcome loginInstance(const Model::LoginInstanceRequest &request)const;
			void loginInstanceAsync(const Model::LoginInstanceRequest& request, const LoginInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LoginInstanceOutcomeCallable loginInstanceCallable(const Model::LoginInstanceRequest& request) const;
			ModifyDatabaseInstanceDescriptionOutcome modifyDatabaseInstanceDescription(const Model::ModifyDatabaseInstanceDescriptionRequest &request)const;
			void modifyDatabaseInstanceDescriptionAsync(const Model::ModifyDatabaseInstanceDescriptionRequest& request, const ModifyDatabaseInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseInstanceDescriptionOutcomeCallable modifyDatabaseInstanceDescriptionCallable(const Model::ModifyDatabaseInstanceDescriptionRequest& request) const;
			ModifyDatabaseInstanceParameterOutcome modifyDatabaseInstanceParameter(const Model::ModifyDatabaseInstanceParameterRequest &request)const;
			void modifyDatabaseInstanceParameterAsync(const Model::ModifyDatabaseInstanceParameterRequest& request, const ModifyDatabaseInstanceParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseInstanceParameterOutcomeCallable modifyDatabaseInstanceParameterCallable(const Model::ModifyDatabaseInstanceParameterRequest& request) const;
			ModifyImageShareStatusOutcome modifyImageShareStatus(const Model::ModifyImageShareStatusRequest &request)const;
			void modifyImageShareStatusAsync(const Model::ModifyImageShareStatusRequest& request, const ModifyImageShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageShareStatusOutcomeCallable modifyImageShareStatusCallable(const Model::ModifyImageShareStatusRequest& request) const;
			RebootInstanceOutcome rebootInstance(const Model::RebootInstanceRequest &request)const;
			void rebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootInstanceOutcomeCallable rebootInstanceCallable(const Model::RebootInstanceRequest& request) const;
			ReleasePublicConnectionOutcome releasePublicConnection(const Model::ReleasePublicConnectionRequest &request)const;
			void releasePublicConnectionAsync(const Model::ReleasePublicConnectionRequest& request, const ReleasePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleasePublicConnectionOutcomeCallable releasePublicConnectionCallable(const Model::ReleasePublicConnectionRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			ResetDatabaseAccountPasswordOutcome resetDatabaseAccountPassword(const Model::ResetDatabaseAccountPasswordRequest &request)const;
			void resetDatabaseAccountPasswordAsync(const Model::ResetDatabaseAccountPasswordRequest& request, const ResetDatabaseAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDatabaseAccountPasswordOutcomeCallable resetDatabaseAccountPasswordCallable(const Model::ResetDatabaseAccountPasswordRequest& request) const;
			ResetDiskOutcome resetDisk(const Model::ResetDiskRequest &request)const;
			void resetDiskAsync(const Model::ResetDiskRequest& request, const ResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDiskOutcomeCallable resetDiskCallable(const Model::ResetDiskRequest& request) const;
			ResetSystemOutcome resetSystem(const Model::ResetSystemRequest &request)const;
			void resetSystemAsync(const Model::ResetSystemRequest& request, const ResetSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSystemOutcomeCallable resetSystemCallable(const Model::ResetSystemRequest& request) const;
			RestartDatabaseInstanceOutcome restartDatabaseInstance(const Model::RestartDatabaseInstanceRequest &request)const;
			void restartDatabaseInstanceAsync(const Model::RestartDatabaseInstanceRequest& request, const RestartDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDatabaseInstanceOutcomeCallable restartDatabaseInstanceCallable(const Model::RestartDatabaseInstanceRequest& request) const;
			RunCommandOutcome runCommand(const Model::RunCommandRequest &request)const;
			void runCommandAsync(const Model::RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunCommandOutcomeCallable runCommandCallable(const Model::RunCommandRequest& request) const;
			StartDatabaseInstanceOutcome startDatabaseInstance(const Model::StartDatabaseInstanceRequest &request)const;
			void startDatabaseInstanceAsync(const Model::StartDatabaseInstanceRequest& request, const StartDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDatabaseInstanceOutcomeCallable startDatabaseInstanceCallable(const Model::StartDatabaseInstanceRequest& request) const;
			StartInstanceOutcome startInstance(const Model::StartInstanceRequest &request)const;
			void startInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartInstanceOutcomeCallable startInstanceCallable(const Model::StartInstanceRequest& request) const;
			StopDatabaseInstanceOutcome stopDatabaseInstance(const Model::StopDatabaseInstanceRequest &request)const;
			void stopDatabaseInstanceAsync(const Model::StopDatabaseInstanceRequest& request, const StopDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDatabaseInstanceOutcomeCallable stopDatabaseInstanceCallable(const Model::StopDatabaseInstanceRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			UpdateInstanceAttributeOutcome updateInstanceAttribute(const Model::UpdateInstanceAttributeRequest &request)const;
			void updateInstanceAttributeAsync(const Model::UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceAttributeOutcomeCallable updateInstanceAttributeCallable(const Model::UpdateInstanceAttributeRequest& request) const;
			UpgradeInstanceOutcome upgradeInstance(const Model::UpgradeInstanceRequest &request)const;
			void upgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeInstanceOutcomeCallable upgradeInstanceCallable(const Model::UpgradeInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SWAS_OPEN_SWAS_OPENCLIENT_H_
