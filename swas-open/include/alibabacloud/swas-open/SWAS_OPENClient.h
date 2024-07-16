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
#include "model/AddCustomImageShareAccountRequest.h"
#include "model/AddCustomImageShareAccountResult.h"
#include "model/AllocatePublicConnectionRequest.h"
#include "model/AllocatePublicConnectionResult.h"
#include "model/ApplyFirewallTemplateRequest.h"
#include "model/ApplyFirewallTemplateResult.h"
#include "model/AttachKeyPairRequest.h"
#include "model/AttachKeyPairResult.h"
#include "model/CreateCommandRequest.h"
#include "model/CreateCommandResult.h"
#include "model/CreateCustomImageRequest.h"
#include "model/CreateCustomImageResult.h"
#include "model/CreateFirewallRuleRequest.h"
#include "model/CreateFirewallRuleResult.h"
#include "model/CreateFirewallRulesRequest.h"
#include "model/CreateFirewallRulesResult.h"
#include "model/CreateFirewallTemplateRequest.h"
#include "model/CreateFirewallTemplateResult.h"
#include "model/CreateFirewallTemplateRulesRequest.h"
#include "model/CreateFirewallTemplateRulesResult.h"
#include "model/CreateInstanceKeyPairRequest.h"
#include "model/CreateInstanceKeyPairResult.h"
#include "model/CreateInstancesRequest.h"
#include "model/CreateInstancesResult.h"
#include "model/CreateKeyPairRequest.h"
#include "model/CreateKeyPairResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/DeleteCommandRequest.h"
#include "model/DeleteCommandResult.h"
#include "model/DeleteCustomImageRequest.h"
#include "model/DeleteCustomImageResult.h"
#include "model/DeleteCustomImagesRequest.h"
#include "model/DeleteCustomImagesResult.h"
#include "model/DeleteFirewallRuleRequest.h"
#include "model/DeleteFirewallRuleResult.h"
#include "model/DeleteFirewallRulesRequest.h"
#include "model/DeleteFirewallRulesResult.h"
#include "model/DeleteFirewallTemplateRulesRequest.h"
#include "model/DeleteFirewallTemplateRulesResult.h"
#include "model/DeleteFirewallTemplatesRequest.h"
#include "model/DeleteFirewallTemplatesResult.h"
#include "model/DeleteInstanceKeyPairRequest.h"
#include "model/DeleteInstanceKeyPairResult.h"
#include "model/DeleteKeyPairsRequest.h"
#include "model/DeleteKeyPairsResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/DeleteSnapshotsRequest.h"
#include "model/DeleteSnapshotsResult.h"
#include "model/DescribeCloudAssistantAttributesRequest.h"
#include "model/DescribeCloudAssistantAttributesResult.h"
#include "model/DescribeCloudAssistantStatusRequest.h"
#include "model/DescribeCloudAssistantStatusResult.h"
#include "model/DescribeCloudMonitorAgentStatusesRequest.h"
#include "model/DescribeCloudMonitorAgentStatusesResult.h"
#include "model/DescribeCommandInvocationsRequest.h"
#include "model/DescribeCommandInvocationsResult.h"
#include "model/DescribeCommandsRequest.h"
#include "model/DescribeCommandsResult.h"
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
#include "model/DescribeFirewallTemplateApplyResultsRequest.h"
#include "model/DescribeFirewallTemplateApplyResultsResult.h"
#include "model/DescribeFirewallTemplateRulesApplyResultRequest.h"
#include "model/DescribeFirewallTemplateRulesApplyResultResult.h"
#include "model/DescribeFirewallTemplatesRequest.h"
#include "model/DescribeFirewallTemplatesResult.h"
#include "model/DescribeInstanceKeyPairRequest.h"
#include "model/DescribeInstanceKeyPairResult.h"
#include "model/DescribeInstancePasswordsSettingRequest.h"
#include "model/DescribeInstancePasswordsSettingResult.h"
#include "model/DescribeInstanceVncUrlRequest.h"
#include "model/DescribeInstanceVncUrlResult.h"
#include "model/DescribeInvocationResultRequest.h"
#include "model/DescribeInvocationResultResult.h"
#include "model/DescribeInvocationsRequest.h"
#include "model/DescribeInvocationsResult.h"
#include "model/DescribeMonitorDataRequest.h"
#include "model/DescribeMonitorDataResult.h"
#include "model/DescribeSecurityAgentStatusRequest.h"
#include "model/DescribeSecurityAgentStatusResult.h"
#include "model/DetachKeyPairRequest.h"
#include "model/DetachKeyPairResult.h"
#include "model/DisableFirewallRuleRequest.h"
#include "model/DisableFirewallRuleResult.h"
#include "model/EnableFirewallRuleRequest.h"
#include "model/EnableFirewallRuleResult.h"
#include "model/ImportKeyPairRequest.h"
#include "model/ImportKeyPairResult.h"
#include "model/InstallCloudAssistantRequest.h"
#include "model/InstallCloudAssistantResult.h"
#include "model/InstallCloudMonitorAgentRequest.h"
#include "model/InstallCloudMonitorAgentResult.h"
#include "model/InvokeCommandRequest.h"
#include "model/InvokeCommandResult.h"
#include "model/ListCustomImageShareAccountsRequest.h"
#include "model/ListCustomImageShareAccountsResult.h"
#include "model/ListCustomImagesRequest.h"
#include "model/ListCustomImagesResult.h"
#include "model/ListDisksRequest.h"
#include "model/ListDisksResult.h"
#include "model/ListFirewallRulesRequest.h"
#include "model/ListFirewallRulesResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/ListInstancePlansModificationRequest.h"
#include "model/ListInstancePlansModificationResult.h"
#include "model/ListInstanceStatusRequest.h"
#include "model/ListInstanceStatusResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListInstancesTrafficPackagesRequest.h"
#include "model/ListInstancesTrafficPackagesResult.h"
#include "model/ListKeyPairsRequest.h"
#include "model/ListKeyPairsResult.h"
#include "model/ListPlansRequest.h"
#include "model/ListPlansResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/ListSnapshotsRequest.h"
#include "model/ListSnapshotsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/LoginInstanceRequest.h"
#include "model/LoginInstanceResult.h"
#include "model/ModifyDatabaseInstanceDescriptionRequest.h"
#include "model/ModifyDatabaseInstanceDescriptionResult.h"
#include "model/ModifyDatabaseInstanceParameterRequest.h"
#include "model/ModifyDatabaseInstanceParameterResult.h"
#include "model/ModifyFirewallRuleRequest.h"
#include "model/ModifyFirewallRuleResult.h"
#include "model/ModifyFirewallTemplateRequest.h"
#include "model/ModifyFirewallTemplateResult.h"
#include "model/ModifyImageShareStatusRequest.h"
#include "model/ModifyImageShareStatusResult.h"
#include "model/ModifyInstanceVncPasswordRequest.h"
#include "model/ModifyInstanceVncPasswordResult.h"
#include "model/RebootInstanceRequest.h"
#include "model/RebootInstanceResult.h"
#include "model/RebootInstancesRequest.h"
#include "model/RebootInstancesResult.h"
#include "model/ReleasePublicConnectionRequest.h"
#include "model/ReleasePublicConnectionResult.h"
#include "model/RemoveCustomImageShareAccountRequest.h"
#include "model/RemoveCustomImageShareAccountResult.h"
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
#include "model/StartInstancesRequest.h"
#include "model/StartInstancesResult.h"
#include "model/StartTerminalSessionRequest.h"
#include "model/StartTerminalSessionResult.h"
#include "model/StopDatabaseInstanceRequest.h"
#include "model/StopDatabaseInstanceResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/StopInstancesRequest.h"
#include "model/StopInstancesResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateCommandAttributeRequest.h"
#include "model/UpdateCommandAttributeResult.h"
#include "model/UpdateDiskAttributeRequest.h"
#include "model/UpdateDiskAttributeResult.h"
#include "model/UpdateInstanceAttributeRequest.h"
#include "model/UpdateInstanceAttributeResult.h"
#include "model/UpdateSnapshotAttributeRequest.h"
#include "model/UpdateSnapshotAttributeResult.h"
#include "model/UpgradeInstanceRequest.h"
#include "model/UpgradeInstanceResult.h"
#include "model/UploadInstanceKeyPairRequest.h"
#include "model/UploadInstanceKeyPairResult.h"


namespace AlibabaCloud
{
	namespace SWAS_OPEN
	{
		class ALIBABACLOUD_SWAS_OPEN_EXPORT SWAS_OPENClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddCustomImageShareAccountResult> AddCustomImageShareAccountOutcome;
			typedef std::future<AddCustomImageShareAccountOutcome> AddCustomImageShareAccountOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::AddCustomImageShareAccountRequest&, const AddCustomImageShareAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomImageShareAccountAsyncHandler;
			typedef Outcome<Error, Model::AllocatePublicConnectionResult> AllocatePublicConnectionOutcome;
			typedef std::future<AllocatePublicConnectionOutcome> AllocatePublicConnectionOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::AllocatePublicConnectionRequest&, const AllocatePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocatePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ApplyFirewallTemplateResult> ApplyFirewallTemplateOutcome;
			typedef std::future<ApplyFirewallTemplateOutcome> ApplyFirewallTemplateOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ApplyFirewallTemplateRequest&, const ApplyFirewallTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyFirewallTemplateAsyncHandler;
			typedef Outcome<Error, Model::AttachKeyPairResult> AttachKeyPairOutcome;
			typedef std::future<AttachKeyPairOutcome> AttachKeyPairOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::AttachKeyPairRequest&, const AttachKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachKeyPairAsyncHandler;
			typedef Outcome<Error, Model::CreateCommandResult> CreateCommandOutcome;
			typedef std::future<CreateCommandOutcome> CreateCommandOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateCommandRequest&, const CreateCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommandAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomImageResult> CreateCustomImageOutcome;
			typedef std::future<CreateCustomImageOutcome> CreateCustomImageOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateCustomImageRequest&, const CreateCustomImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomImageAsyncHandler;
			typedef Outcome<Error, Model::CreateFirewallRuleResult> CreateFirewallRuleOutcome;
			typedef std::future<CreateFirewallRuleOutcome> CreateFirewallRuleOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateFirewallRuleRequest&, const CreateFirewallRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirewallRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateFirewallRulesResult> CreateFirewallRulesOutcome;
			typedef std::future<CreateFirewallRulesOutcome> CreateFirewallRulesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateFirewallRulesRequest&, const CreateFirewallRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirewallRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateFirewallTemplateResult> CreateFirewallTemplateOutcome;
			typedef std::future<CreateFirewallTemplateOutcome> CreateFirewallTemplateOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateFirewallTemplateRequest&, const CreateFirewallTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirewallTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateFirewallTemplateRulesResult> CreateFirewallTemplateRulesOutcome;
			typedef std::future<CreateFirewallTemplateRulesOutcome> CreateFirewallTemplateRulesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateFirewallTemplateRulesRequest&, const CreateFirewallTemplateRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirewallTemplateRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceKeyPairResult> CreateInstanceKeyPairOutcome;
			typedef std::future<CreateInstanceKeyPairOutcome> CreateInstanceKeyPairOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateInstanceKeyPairRequest&, const CreateInstanceKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceKeyPairAsyncHandler;
			typedef Outcome<Error, Model::CreateInstancesResult> CreateInstancesOutcome;
			typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateInstancesRequest&, const CreateInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateKeyPairResult> CreateKeyPairOutcome;
			typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateKeyPairRequest&, const CreateKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyPairAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteCommandResult> DeleteCommandOutcome;
			typedef std::future<DeleteCommandOutcome> DeleteCommandOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteCommandRequest&, const DeleteCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommandAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomImageResult> DeleteCustomImageOutcome;
			typedef std::future<DeleteCustomImageOutcome> DeleteCustomImageOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteCustomImageRequest&, const DeleteCustomImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomImagesResult> DeleteCustomImagesOutcome;
			typedef std::future<DeleteCustomImagesOutcome> DeleteCustomImagesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteCustomImagesRequest&, const DeleteCustomImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomImagesAsyncHandler;
			typedef Outcome<Error, Model::DeleteFirewallRuleResult> DeleteFirewallRuleOutcome;
			typedef std::future<DeleteFirewallRuleOutcome> DeleteFirewallRuleOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteFirewallRuleRequest&, const DeleteFirewallRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteFirewallRulesResult> DeleteFirewallRulesOutcome;
			typedef std::future<DeleteFirewallRulesOutcome> DeleteFirewallRulesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteFirewallRulesRequest&, const DeleteFirewallRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteFirewallTemplateRulesResult> DeleteFirewallTemplateRulesOutcome;
			typedef std::future<DeleteFirewallTemplateRulesOutcome> DeleteFirewallTemplateRulesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteFirewallTemplateRulesRequest&, const DeleteFirewallTemplateRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallTemplateRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteFirewallTemplatesResult> DeleteFirewallTemplatesOutcome;
			typedef std::future<DeleteFirewallTemplatesOutcome> DeleteFirewallTemplatesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteFirewallTemplatesRequest&, const DeleteFirewallTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceKeyPairResult> DeleteInstanceKeyPairOutcome;
			typedef std::future<DeleteInstanceKeyPairOutcome> DeleteInstanceKeyPairOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteInstanceKeyPairRequest&, const DeleteInstanceKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceKeyPairAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeyPairsResult> DeleteKeyPairsOutcome;
			typedef std::future<DeleteKeyPairsOutcome> DeleteKeyPairsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteKeyPairsRequest&, const DeleteKeyPairsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyPairsAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotsResult> DeleteSnapshotsOutcome;
			typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DeleteSnapshotsRequest&, const DeleteSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudAssistantAttributesResult> DescribeCloudAssistantAttributesOutcome;
			typedef std::future<DescribeCloudAssistantAttributesOutcome> DescribeCloudAssistantAttributesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeCloudAssistantAttributesRequest&, const DescribeCloudAssistantAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudAssistantAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudAssistantStatusResult> DescribeCloudAssistantStatusOutcome;
			typedef std::future<DescribeCloudAssistantStatusOutcome> DescribeCloudAssistantStatusOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeCloudAssistantStatusRequest&, const DescribeCloudAssistantStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudAssistantStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudMonitorAgentStatusesResult> DescribeCloudMonitorAgentStatusesOutcome;
			typedef std::future<DescribeCloudMonitorAgentStatusesOutcome> DescribeCloudMonitorAgentStatusesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeCloudMonitorAgentStatusesRequest&, const DescribeCloudMonitorAgentStatusesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudMonitorAgentStatusesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommandInvocationsResult> DescribeCommandInvocationsOutcome;
			typedef std::future<DescribeCommandInvocationsOutcome> DescribeCommandInvocationsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeCommandInvocationsRequest&, const DescribeCommandInvocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommandInvocationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommandsResult> DescribeCommandsOutcome;
			typedef std::future<DescribeCommandsOutcome> DescribeCommandsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeCommandsRequest&, const DescribeCommandsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommandsAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeFirewallTemplateApplyResultsResult> DescribeFirewallTemplateApplyResultsOutcome;
			typedef std::future<DescribeFirewallTemplateApplyResultsOutcome> DescribeFirewallTemplateApplyResultsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeFirewallTemplateApplyResultsRequest&, const DescribeFirewallTemplateApplyResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallTemplateApplyResultsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFirewallTemplateRulesApplyResultResult> DescribeFirewallTemplateRulesApplyResultOutcome;
			typedef std::future<DescribeFirewallTemplateRulesApplyResultOutcome> DescribeFirewallTemplateRulesApplyResultOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeFirewallTemplateRulesApplyResultRequest&, const DescribeFirewallTemplateRulesApplyResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallTemplateRulesApplyResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeFirewallTemplatesResult> DescribeFirewallTemplatesOutcome;
			typedef std::future<DescribeFirewallTemplatesOutcome> DescribeFirewallTemplatesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeFirewallTemplatesRequest&, const DescribeFirewallTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceKeyPairResult> DescribeInstanceKeyPairOutcome;
			typedef std::future<DescribeInstanceKeyPairOutcome> DescribeInstanceKeyPairOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeInstanceKeyPairRequest&, const DescribeInstanceKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceKeyPairAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancePasswordsSettingResult> DescribeInstancePasswordsSettingOutcome;
			typedef std::future<DescribeInstancePasswordsSettingOutcome> DescribeInstancePasswordsSettingOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeInstancePasswordsSettingRequest&, const DescribeInstancePasswordsSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancePasswordsSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceVncUrlResult> DescribeInstanceVncUrlOutcome;
			typedef std::future<DescribeInstanceVncUrlOutcome> DescribeInstanceVncUrlOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeInstanceVncUrlRequest&, const DescribeInstanceVncUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeInvocationResultResult> DescribeInvocationResultOutcome;
			typedef std::future<DescribeInvocationResultOutcome> DescribeInvocationResultOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeInvocationResultRequest&, const DescribeInvocationResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeInvocationsResult> DescribeInvocationsOutcome;
			typedef std::future<DescribeInvocationsOutcome> DescribeInvocationsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeInvocationsRequest&, const DescribeInvocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorDataResult> DescribeMonitorDataOutcome;
			typedef std::future<DescribeMonitorDataOutcome> DescribeMonitorDataOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeMonitorDataRequest&, const DescribeMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityAgentStatusResult> DescribeSecurityAgentStatusOutcome;
			typedef std::future<DescribeSecurityAgentStatusOutcome> DescribeSecurityAgentStatusOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DescribeSecurityAgentStatusRequest&, const DescribeSecurityAgentStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityAgentStatusAsyncHandler;
			typedef Outcome<Error, Model::DetachKeyPairResult> DetachKeyPairOutcome;
			typedef std::future<DetachKeyPairOutcome> DetachKeyPairOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DetachKeyPairRequest&, const DetachKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachKeyPairAsyncHandler;
			typedef Outcome<Error, Model::DisableFirewallRuleResult> DisableFirewallRuleOutcome;
			typedef std::future<DisableFirewallRuleOutcome> DisableFirewallRuleOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::DisableFirewallRuleRequest&, const DisableFirewallRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableFirewallRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableFirewallRuleResult> EnableFirewallRuleOutcome;
			typedef std::future<EnableFirewallRuleOutcome> EnableFirewallRuleOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::EnableFirewallRuleRequest&, const EnableFirewallRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableFirewallRuleAsyncHandler;
			typedef Outcome<Error, Model::ImportKeyPairResult> ImportKeyPairOutcome;
			typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ImportKeyPairRequest&, const ImportKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyPairAsyncHandler;
			typedef Outcome<Error, Model::InstallCloudAssistantResult> InstallCloudAssistantOutcome;
			typedef std::future<InstallCloudAssistantOutcome> InstallCloudAssistantOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::InstallCloudAssistantRequest&, const InstallCloudAssistantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallCloudAssistantAsyncHandler;
			typedef Outcome<Error, Model::InstallCloudMonitorAgentResult> InstallCloudMonitorAgentOutcome;
			typedef std::future<InstallCloudMonitorAgentOutcome> InstallCloudMonitorAgentOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::InstallCloudMonitorAgentRequest&, const InstallCloudMonitorAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallCloudMonitorAgentAsyncHandler;
			typedef Outcome<Error, Model::InvokeCommandResult> InvokeCommandOutcome;
			typedef std::future<InvokeCommandOutcome> InvokeCommandOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::InvokeCommandRequest&, const InvokeCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeCommandAsyncHandler;
			typedef Outcome<Error, Model::ListCustomImageShareAccountsResult> ListCustomImageShareAccountsOutcome;
			typedef std::future<ListCustomImageShareAccountsOutcome> ListCustomImageShareAccountsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListCustomImageShareAccountsRequest&, const ListCustomImageShareAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomImageShareAccountsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomImagesResult> ListCustomImagesOutcome;
			typedef std::future<ListCustomImagesOutcome> ListCustomImagesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListCustomImagesRequest&, const ListCustomImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomImagesAsyncHandler;
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
			typedef Outcome<Error, Model::ListInstanceStatusResult> ListInstanceStatusOutcome;
			typedef std::future<ListInstanceStatusOutcome> ListInstanceStatusOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListInstanceStatusRequest&, const ListInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesTrafficPackagesResult> ListInstancesTrafficPackagesOutcome;
			typedef std::future<ListInstancesTrafficPackagesOutcome> ListInstancesTrafficPackagesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListInstancesTrafficPackagesRequest&, const ListInstancesTrafficPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesTrafficPackagesAsyncHandler;
			typedef Outcome<Error, Model::ListKeyPairsResult> ListKeyPairsOutcome;
			typedef std::future<ListKeyPairsOutcome> ListKeyPairsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListKeyPairsRequest&, const ListKeyPairsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKeyPairsAsyncHandler;
			typedef Outcome<Error, Model::ListPlansResult> ListPlansOutcome;
			typedef std::future<ListPlansOutcome> ListPlansOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListPlansRequest&, const ListPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPlansAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotsResult> ListSnapshotsOutcome;
			typedef std::future<ListSnapshotsOutcome> ListSnapshotsOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListSnapshotsRequest&, const ListSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::LoginInstanceResult> LoginInstanceOutcome;
			typedef std::future<LoginInstanceOutcome> LoginInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::LoginInstanceRequest&, const LoginInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LoginInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseInstanceDescriptionResult> ModifyDatabaseInstanceDescriptionOutcome;
			typedef std::future<ModifyDatabaseInstanceDescriptionOutcome> ModifyDatabaseInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyDatabaseInstanceDescriptionRequest&, const ModifyDatabaseInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseInstanceParameterResult> ModifyDatabaseInstanceParameterOutcome;
			typedef std::future<ModifyDatabaseInstanceParameterOutcome> ModifyDatabaseInstanceParameterOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyDatabaseInstanceParameterRequest&, const ModifyDatabaseInstanceParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseInstanceParameterAsyncHandler;
			typedef Outcome<Error, Model::ModifyFirewallRuleResult> ModifyFirewallRuleOutcome;
			typedef std::future<ModifyFirewallRuleOutcome> ModifyFirewallRuleOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyFirewallRuleRequest&, const ModifyFirewallRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFirewallRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyFirewallTemplateResult> ModifyFirewallTemplateOutcome;
			typedef std::future<ModifyFirewallTemplateOutcome> ModifyFirewallTemplateOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyFirewallTemplateRequest&, const ModifyFirewallTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFirewallTemplateAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageShareStatusResult> ModifyImageShareStatusOutcome;
			typedef std::future<ModifyImageShareStatusOutcome> ModifyImageShareStatusOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyImageShareStatusRequest&, const ModifyImageShareStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageShareStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceVncPasswordResult> ModifyInstanceVncPasswordOutcome;
			typedef std::future<ModifyInstanceVncPasswordOutcome> ModifyInstanceVncPasswordOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ModifyInstanceVncPasswordRequest&, const ModifyInstanceVncPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVncPasswordAsyncHandler;
			typedef Outcome<Error, Model::RebootInstanceResult> RebootInstanceOutcome;
			typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::RebootInstanceRequest&, const RebootInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstanceAsyncHandler;
			typedef Outcome<Error, Model::RebootInstancesResult> RebootInstancesOutcome;
			typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::RebootInstancesRequest&, const RebootInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
			typedef Outcome<Error, Model::ReleasePublicConnectionResult> ReleasePublicConnectionOutcome;
			typedef std::future<ReleasePublicConnectionOutcome> ReleasePublicConnectionOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::ReleasePublicConnectionRequest&, const ReleasePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::RemoveCustomImageShareAccountResult> RemoveCustomImageShareAccountOutcome;
			typedef std::future<RemoveCustomImageShareAccountOutcome> RemoveCustomImageShareAccountOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::RemoveCustomImageShareAccountRequest&, const RemoveCustomImageShareAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCustomImageShareAccountAsyncHandler;
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
			typedef Outcome<Error, Model::StartInstancesResult> StartInstancesOutcome;
			typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StartInstancesRequest&, const StartInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
			typedef Outcome<Error, Model::StartTerminalSessionResult> StartTerminalSessionOutcome;
			typedef std::future<StartTerminalSessionOutcome> StartTerminalSessionOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StartTerminalSessionRequest&, const StartTerminalSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTerminalSessionAsyncHandler;
			typedef Outcome<Error, Model::StopDatabaseInstanceResult> StopDatabaseInstanceOutcome;
			typedef std::future<StopDatabaseInstanceOutcome> StopDatabaseInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StopDatabaseInstanceRequest&, const StopDatabaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDatabaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstancesResult> StopInstancesOutcome;
			typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::StopInstancesRequest&, const StopInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateCommandAttributeResult> UpdateCommandAttributeOutcome;
			typedef std::future<UpdateCommandAttributeOutcome> UpdateCommandAttributeOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UpdateCommandAttributeRequest&, const UpdateCommandAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCommandAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateDiskAttributeResult> UpdateDiskAttributeOutcome;
			typedef std::future<UpdateDiskAttributeOutcome> UpdateDiskAttributeOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UpdateDiskAttributeRequest&, const UpdateDiskAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDiskAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceAttributeResult> UpdateInstanceAttributeOutcome;
			typedef std::future<UpdateInstanceAttributeOutcome> UpdateInstanceAttributeOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UpdateInstanceAttributeRequest&, const UpdateInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateSnapshotAttributeResult> UpdateSnapshotAttributeOutcome;
			typedef std::future<UpdateSnapshotAttributeOutcome> UpdateSnapshotAttributeOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UpdateSnapshotAttributeRequest&, const UpdateSnapshotAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSnapshotAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceResult> UpgradeInstanceOutcome;
			typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UpgradeInstanceRequest&, const UpgradeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
			typedef Outcome<Error, Model::UploadInstanceKeyPairResult> UploadInstanceKeyPairOutcome;
			typedef std::future<UploadInstanceKeyPairOutcome> UploadInstanceKeyPairOutcomeCallable;
			typedef std::function<void(const SWAS_OPENClient*, const Model::UploadInstanceKeyPairRequest&, const UploadInstanceKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadInstanceKeyPairAsyncHandler;

			SWAS_OPENClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SWAS_OPENClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SWAS_OPENClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SWAS_OPENClient();
			AddCustomImageShareAccountOutcome addCustomImageShareAccount(const Model::AddCustomImageShareAccountRequest &request)const;
			void addCustomImageShareAccountAsync(const Model::AddCustomImageShareAccountRequest& request, const AddCustomImageShareAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCustomImageShareAccountOutcomeCallable addCustomImageShareAccountCallable(const Model::AddCustomImageShareAccountRequest& request) const;
			AllocatePublicConnectionOutcome allocatePublicConnection(const Model::AllocatePublicConnectionRequest &request)const;
			void allocatePublicConnectionAsync(const Model::AllocatePublicConnectionRequest& request, const AllocatePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocatePublicConnectionOutcomeCallable allocatePublicConnectionCallable(const Model::AllocatePublicConnectionRequest& request) const;
			ApplyFirewallTemplateOutcome applyFirewallTemplate(const Model::ApplyFirewallTemplateRequest &request)const;
			void applyFirewallTemplateAsync(const Model::ApplyFirewallTemplateRequest& request, const ApplyFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyFirewallTemplateOutcomeCallable applyFirewallTemplateCallable(const Model::ApplyFirewallTemplateRequest& request) const;
			AttachKeyPairOutcome attachKeyPair(const Model::AttachKeyPairRequest &request)const;
			void attachKeyPairAsync(const Model::AttachKeyPairRequest& request, const AttachKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachKeyPairOutcomeCallable attachKeyPairCallable(const Model::AttachKeyPairRequest& request) const;
			CreateCommandOutcome createCommand(const Model::CreateCommandRequest &request)const;
			void createCommandAsync(const Model::CreateCommandRequest& request, const CreateCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCommandOutcomeCallable createCommandCallable(const Model::CreateCommandRequest& request) const;
			CreateCustomImageOutcome createCustomImage(const Model::CreateCustomImageRequest &request)const;
			void createCustomImageAsync(const Model::CreateCustomImageRequest& request, const CreateCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomImageOutcomeCallable createCustomImageCallable(const Model::CreateCustomImageRequest& request) const;
			CreateFirewallRuleOutcome createFirewallRule(const Model::CreateFirewallRuleRequest &request)const;
			void createFirewallRuleAsync(const Model::CreateFirewallRuleRequest& request, const CreateFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFirewallRuleOutcomeCallable createFirewallRuleCallable(const Model::CreateFirewallRuleRequest& request) const;
			CreateFirewallRulesOutcome createFirewallRules(const Model::CreateFirewallRulesRequest &request)const;
			void createFirewallRulesAsync(const Model::CreateFirewallRulesRequest& request, const CreateFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFirewallRulesOutcomeCallable createFirewallRulesCallable(const Model::CreateFirewallRulesRequest& request) const;
			CreateFirewallTemplateOutcome createFirewallTemplate(const Model::CreateFirewallTemplateRequest &request)const;
			void createFirewallTemplateAsync(const Model::CreateFirewallTemplateRequest& request, const CreateFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFirewallTemplateOutcomeCallable createFirewallTemplateCallable(const Model::CreateFirewallTemplateRequest& request) const;
			CreateFirewallTemplateRulesOutcome createFirewallTemplateRules(const Model::CreateFirewallTemplateRulesRequest &request)const;
			void createFirewallTemplateRulesAsync(const Model::CreateFirewallTemplateRulesRequest& request, const CreateFirewallTemplateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFirewallTemplateRulesOutcomeCallable createFirewallTemplateRulesCallable(const Model::CreateFirewallTemplateRulesRequest& request) const;
			CreateInstanceKeyPairOutcome createInstanceKeyPair(const Model::CreateInstanceKeyPairRequest &request)const;
			void createInstanceKeyPairAsync(const Model::CreateInstanceKeyPairRequest& request, const CreateInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceKeyPairOutcomeCallable createInstanceKeyPairCallable(const Model::CreateInstanceKeyPairRequest& request) const;
			CreateInstancesOutcome createInstances(const Model::CreateInstancesRequest &request)const;
			void createInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstancesOutcomeCallable createInstancesCallable(const Model::CreateInstancesRequest& request) const;
			CreateKeyPairOutcome createKeyPair(const Model::CreateKeyPairRequest &request)const;
			void createKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeyPairOutcomeCallable createKeyPairCallable(const Model::CreateKeyPairRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			DeleteCommandOutcome deleteCommand(const Model::DeleteCommandRequest &request)const;
			void deleteCommandAsync(const Model::DeleteCommandRequest& request, const DeleteCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCommandOutcomeCallable deleteCommandCallable(const Model::DeleteCommandRequest& request) const;
			DeleteCustomImageOutcome deleteCustomImage(const Model::DeleteCustomImageRequest &request)const;
			void deleteCustomImageAsync(const Model::DeleteCustomImageRequest& request, const DeleteCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomImageOutcomeCallable deleteCustomImageCallable(const Model::DeleteCustomImageRequest& request) const;
			DeleteCustomImagesOutcome deleteCustomImages(const Model::DeleteCustomImagesRequest &request)const;
			void deleteCustomImagesAsync(const Model::DeleteCustomImagesRequest& request, const DeleteCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomImagesOutcomeCallable deleteCustomImagesCallable(const Model::DeleteCustomImagesRequest& request) const;
			DeleteFirewallRuleOutcome deleteFirewallRule(const Model::DeleteFirewallRuleRequest &request)const;
			void deleteFirewallRuleAsync(const Model::DeleteFirewallRuleRequest& request, const DeleteFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFirewallRuleOutcomeCallable deleteFirewallRuleCallable(const Model::DeleteFirewallRuleRequest& request) const;
			DeleteFirewallRulesOutcome deleteFirewallRules(const Model::DeleteFirewallRulesRequest &request)const;
			void deleteFirewallRulesAsync(const Model::DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFirewallRulesOutcomeCallable deleteFirewallRulesCallable(const Model::DeleteFirewallRulesRequest& request) const;
			DeleteFirewallTemplateRulesOutcome deleteFirewallTemplateRules(const Model::DeleteFirewallTemplateRulesRequest &request)const;
			void deleteFirewallTemplateRulesAsync(const Model::DeleteFirewallTemplateRulesRequest& request, const DeleteFirewallTemplateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFirewallTemplateRulesOutcomeCallable deleteFirewallTemplateRulesCallable(const Model::DeleteFirewallTemplateRulesRequest& request) const;
			DeleteFirewallTemplatesOutcome deleteFirewallTemplates(const Model::DeleteFirewallTemplatesRequest &request)const;
			void deleteFirewallTemplatesAsync(const Model::DeleteFirewallTemplatesRequest& request, const DeleteFirewallTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFirewallTemplatesOutcomeCallable deleteFirewallTemplatesCallable(const Model::DeleteFirewallTemplatesRequest& request) const;
			DeleteInstanceKeyPairOutcome deleteInstanceKeyPair(const Model::DeleteInstanceKeyPairRequest &request)const;
			void deleteInstanceKeyPairAsync(const Model::DeleteInstanceKeyPairRequest& request, const DeleteInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceKeyPairOutcomeCallable deleteInstanceKeyPairCallable(const Model::DeleteInstanceKeyPairRequest& request) const;
			DeleteKeyPairsOutcome deleteKeyPairs(const Model::DeleteKeyPairsRequest &request)const;
			void deleteKeyPairsAsync(const Model::DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeyPairsOutcomeCallable deleteKeyPairsCallable(const Model::DeleteKeyPairsRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			DeleteSnapshotsOutcome deleteSnapshots(const Model::DeleteSnapshotsRequest &request)const;
			void deleteSnapshotsAsync(const Model::DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotsOutcomeCallable deleteSnapshotsCallable(const Model::DeleteSnapshotsRequest& request) const;
			DescribeCloudAssistantAttributesOutcome describeCloudAssistantAttributes(const Model::DescribeCloudAssistantAttributesRequest &request)const;
			void describeCloudAssistantAttributesAsync(const Model::DescribeCloudAssistantAttributesRequest& request, const DescribeCloudAssistantAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudAssistantAttributesOutcomeCallable describeCloudAssistantAttributesCallable(const Model::DescribeCloudAssistantAttributesRequest& request) const;
			DescribeCloudAssistantStatusOutcome describeCloudAssistantStatus(const Model::DescribeCloudAssistantStatusRequest &request)const;
			void describeCloudAssistantStatusAsync(const Model::DescribeCloudAssistantStatusRequest& request, const DescribeCloudAssistantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudAssistantStatusOutcomeCallable describeCloudAssistantStatusCallable(const Model::DescribeCloudAssistantStatusRequest& request) const;
			DescribeCloudMonitorAgentStatusesOutcome describeCloudMonitorAgentStatuses(const Model::DescribeCloudMonitorAgentStatusesRequest &request)const;
			void describeCloudMonitorAgentStatusesAsync(const Model::DescribeCloudMonitorAgentStatusesRequest& request, const DescribeCloudMonitorAgentStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudMonitorAgentStatusesOutcomeCallable describeCloudMonitorAgentStatusesCallable(const Model::DescribeCloudMonitorAgentStatusesRequest& request) const;
			DescribeCommandInvocationsOutcome describeCommandInvocations(const Model::DescribeCommandInvocationsRequest &request)const;
			void describeCommandInvocationsAsync(const Model::DescribeCommandInvocationsRequest& request, const DescribeCommandInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommandInvocationsOutcomeCallable describeCommandInvocationsCallable(const Model::DescribeCommandInvocationsRequest& request) const;
			DescribeCommandsOutcome describeCommands(const Model::DescribeCommandsRequest &request)const;
			void describeCommandsAsync(const Model::DescribeCommandsRequest& request, const DescribeCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommandsOutcomeCallable describeCommandsCallable(const Model::DescribeCommandsRequest& request) const;
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
			DescribeFirewallTemplateApplyResultsOutcome describeFirewallTemplateApplyResults(const Model::DescribeFirewallTemplateApplyResultsRequest &request)const;
			void describeFirewallTemplateApplyResultsAsync(const Model::DescribeFirewallTemplateApplyResultsRequest& request, const DescribeFirewallTemplateApplyResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFirewallTemplateApplyResultsOutcomeCallable describeFirewallTemplateApplyResultsCallable(const Model::DescribeFirewallTemplateApplyResultsRequest& request) const;
			DescribeFirewallTemplateRulesApplyResultOutcome describeFirewallTemplateRulesApplyResult(const Model::DescribeFirewallTemplateRulesApplyResultRequest &request)const;
			void describeFirewallTemplateRulesApplyResultAsync(const Model::DescribeFirewallTemplateRulesApplyResultRequest& request, const DescribeFirewallTemplateRulesApplyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFirewallTemplateRulesApplyResultOutcomeCallable describeFirewallTemplateRulesApplyResultCallable(const Model::DescribeFirewallTemplateRulesApplyResultRequest& request) const;
			DescribeFirewallTemplatesOutcome describeFirewallTemplates(const Model::DescribeFirewallTemplatesRequest &request)const;
			void describeFirewallTemplatesAsync(const Model::DescribeFirewallTemplatesRequest& request, const DescribeFirewallTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFirewallTemplatesOutcomeCallable describeFirewallTemplatesCallable(const Model::DescribeFirewallTemplatesRequest& request) const;
			DescribeInstanceKeyPairOutcome describeInstanceKeyPair(const Model::DescribeInstanceKeyPairRequest &request)const;
			void describeInstanceKeyPairAsync(const Model::DescribeInstanceKeyPairRequest& request, const DescribeInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceKeyPairOutcomeCallable describeInstanceKeyPairCallable(const Model::DescribeInstanceKeyPairRequest& request) const;
			DescribeInstancePasswordsSettingOutcome describeInstancePasswordsSetting(const Model::DescribeInstancePasswordsSettingRequest &request)const;
			void describeInstancePasswordsSettingAsync(const Model::DescribeInstancePasswordsSettingRequest& request, const DescribeInstancePasswordsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancePasswordsSettingOutcomeCallable describeInstancePasswordsSettingCallable(const Model::DescribeInstancePasswordsSettingRequest& request) const;
			DescribeInstanceVncUrlOutcome describeInstanceVncUrl(const Model::DescribeInstanceVncUrlRequest &request)const;
			void describeInstanceVncUrlAsync(const Model::DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceVncUrlOutcomeCallable describeInstanceVncUrlCallable(const Model::DescribeInstanceVncUrlRequest& request) const;
			DescribeInvocationResultOutcome describeInvocationResult(const Model::DescribeInvocationResultRequest &request)const;
			void describeInvocationResultAsync(const Model::DescribeInvocationResultRequest& request, const DescribeInvocationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInvocationResultOutcomeCallable describeInvocationResultCallable(const Model::DescribeInvocationResultRequest& request) const;
			DescribeInvocationsOutcome describeInvocations(const Model::DescribeInvocationsRequest &request)const;
			void describeInvocationsAsync(const Model::DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInvocationsOutcomeCallable describeInvocationsCallable(const Model::DescribeInvocationsRequest& request) const;
			DescribeMonitorDataOutcome describeMonitorData(const Model::DescribeMonitorDataRequest &request)const;
			void describeMonitorDataAsync(const Model::DescribeMonitorDataRequest& request, const DescribeMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorDataOutcomeCallable describeMonitorDataCallable(const Model::DescribeMonitorDataRequest& request) const;
			DescribeSecurityAgentStatusOutcome describeSecurityAgentStatus(const Model::DescribeSecurityAgentStatusRequest &request)const;
			void describeSecurityAgentStatusAsync(const Model::DescribeSecurityAgentStatusRequest& request, const DescribeSecurityAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityAgentStatusOutcomeCallable describeSecurityAgentStatusCallable(const Model::DescribeSecurityAgentStatusRequest& request) const;
			DetachKeyPairOutcome detachKeyPair(const Model::DetachKeyPairRequest &request)const;
			void detachKeyPairAsync(const Model::DetachKeyPairRequest& request, const DetachKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachKeyPairOutcomeCallable detachKeyPairCallable(const Model::DetachKeyPairRequest& request) const;
			DisableFirewallRuleOutcome disableFirewallRule(const Model::DisableFirewallRuleRequest &request)const;
			void disableFirewallRuleAsync(const Model::DisableFirewallRuleRequest& request, const DisableFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableFirewallRuleOutcomeCallable disableFirewallRuleCallable(const Model::DisableFirewallRuleRequest& request) const;
			EnableFirewallRuleOutcome enableFirewallRule(const Model::EnableFirewallRuleRequest &request)const;
			void enableFirewallRuleAsync(const Model::EnableFirewallRuleRequest& request, const EnableFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableFirewallRuleOutcomeCallable enableFirewallRuleCallable(const Model::EnableFirewallRuleRequest& request) const;
			ImportKeyPairOutcome importKeyPair(const Model::ImportKeyPairRequest &request)const;
			void importKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportKeyPairOutcomeCallable importKeyPairCallable(const Model::ImportKeyPairRequest& request) const;
			InstallCloudAssistantOutcome installCloudAssistant(const Model::InstallCloudAssistantRequest &request)const;
			void installCloudAssistantAsync(const Model::InstallCloudAssistantRequest& request, const InstallCloudAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallCloudAssistantOutcomeCallable installCloudAssistantCallable(const Model::InstallCloudAssistantRequest& request) const;
			InstallCloudMonitorAgentOutcome installCloudMonitorAgent(const Model::InstallCloudMonitorAgentRequest &request)const;
			void installCloudMonitorAgentAsync(const Model::InstallCloudMonitorAgentRequest& request, const InstallCloudMonitorAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallCloudMonitorAgentOutcomeCallable installCloudMonitorAgentCallable(const Model::InstallCloudMonitorAgentRequest& request) const;
			InvokeCommandOutcome invokeCommand(const Model::InvokeCommandRequest &request)const;
			void invokeCommandAsync(const Model::InvokeCommandRequest& request, const InvokeCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeCommandOutcomeCallable invokeCommandCallable(const Model::InvokeCommandRequest& request) const;
			ListCustomImageShareAccountsOutcome listCustomImageShareAccounts(const Model::ListCustomImageShareAccountsRequest &request)const;
			void listCustomImageShareAccountsAsync(const Model::ListCustomImageShareAccountsRequest& request, const ListCustomImageShareAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomImageShareAccountsOutcomeCallable listCustomImageShareAccountsCallable(const Model::ListCustomImageShareAccountsRequest& request) const;
			ListCustomImagesOutcome listCustomImages(const Model::ListCustomImagesRequest &request)const;
			void listCustomImagesAsync(const Model::ListCustomImagesRequest& request, const ListCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomImagesOutcomeCallable listCustomImagesCallable(const Model::ListCustomImagesRequest& request) const;
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
			ListInstanceStatusOutcome listInstanceStatus(const Model::ListInstanceStatusRequest &request)const;
			void listInstanceStatusAsync(const Model::ListInstanceStatusRequest& request, const ListInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceStatusOutcomeCallable listInstanceStatusCallable(const Model::ListInstanceStatusRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListInstancesTrafficPackagesOutcome listInstancesTrafficPackages(const Model::ListInstancesTrafficPackagesRequest &request)const;
			void listInstancesTrafficPackagesAsync(const Model::ListInstancesTrafficPackagesRequest& request, const ListInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesTrafficPackagesOutcomeCallable listInstancesTrafficPackagesCallable(const Model::ListInstancesTrafficPackagesRequest& request) const;
			ListKeyPairsOutcome listKeyPairs(const Model::ListKeyPairsRequest &request)const;
			void listKeyPairsAsync(const Model::ListKeyPairsRequest& request, const ListKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKeyPairsOutcomeCallable listKeyPairsCallable(const Model::ListKeyPairsRequest& request) const;
			ListPlansOutcome listPlans(const Model::ListPlansRequest &request)const;
			void listPlansAsync(const Model::ListPlansRequest& request, const ListPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPlansOutcomeCallable listPlansCallable(const Model::ListPlansRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			ListSnapshotsOutcome listSnapshots(const Model::ListSnapshotsRequest &request)const;
			void listSnapshotsAsync(const Model::ListSnapshotsRequest& request, const ListSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotsOutcomeCallable listSnapshotsCallable(const Model::ListSnapshotsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			LoginInstanceOutcome loginInstance(const Model::LoginInstanceRequest &request)const;
			void loginInstanceAsync(const Model::LoginInstanceRequest& request, const LoginInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LoginInstanceOutcomeCallable loginInstanceCallable(const Model::LoginInstanceRequest& request) const;
			ModifyDatabaseInstanceDescriptionOutcome modifyDatabaseInstanceDescription(const Model::ModifyDatabaseInstanceDescriptionRequest &request)const;
			void modifyDatabaseInstanceDescriptionAsync(const Model::ModifyDatabaseInstanceDescriptionRequest& request, const ModifyDatabaseInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseInstanceDescriptionOutcomeCallable modifyDatabaseInstanceDescriptionCallable(const Model::ModifyDatabaseInstanceDescriptionRequest& request) const;
			ModifyDatabaseInstanceParameterOutcome modifyDatabaseInstanceParameter(const Model::ModifyDatabaseInstanceParameterRequest &request)const;
			void modifyDatabaseInstanceParameterAsync(const Model::ModifyDatabaseInstanceParameterRequest& request, const ModifyDatabaseInstanceParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseInstanceParameterOutcomeCallable modifyDatabaseInstanceParameterCallable(const Model::ModifyDatabaseInstanceParameterRequest& request) const;
			ModifyFirewallRuleOutcome modifyFirewallRule(const Model::ModifyFirewallRuleRequest &request)const;
			void modifyFirewallRuleAsync(const Model::ModifyFirewallRuleRequest& request, const ModifyFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFirewallRuleOutcomeCallable modifyFirewallRuleCallable(const Model::ModifyFirewallRuleRequest& request) const;
			ModifyFirewallTemplateOutcome modifyFirewallTemplate(const Model::ModifyFirewallTemplateRequest &request)const;
			void modifyFirewallTemplateAsync(const Model::ModifyFirewallTemplateRequest& request, const ModifyFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFirewallTemplateOutcomeCallable modifyFirewallTemplateCallable(const Model::ModifyFirewallTemplateRequest& request) const;
			ModifyImageShareStatusOutcome modifyImageShareStatus(const Model::ModifyImageShareStatusRequest &request)const;
			void modifyImageShareStatusAsync(const Model::ModifyImageShareStatusRequest& request, const ModifyImageShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageShareStatusOutcomeCallable modifyImageShareStatusCallable(const Model::ModifyImageShareStatusRequest& request) const;
			ModifyInstanceVncPasswordOutcome modifyInstanceVncPassword(const Model::ModifyInstanceVncPasswordRequest &request)const;
			void modifyInstanceVncPasswordAsync(const Model::ModifyInstanceVncPasswordRequest& request, const ModifyInstanceVncPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceVncPasswordOutcomeCallable modifyInstanceVncPasswordCallable(const Model::ModifyInstanceVncPasswordRequest& request) const;
			RebootInstanceOutcome rebootInstance(const Model::RebootInstanceRequest &request)const;
			void rebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootInstanceOutcomeCallable rebootInstanceCallable(const Model::RebootInstanceRequest& request) const;
			RebootInstancesOutcome rebootInstances(const Model::RebootInstancesRequest &request)const;
			void rebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootInstancesOutcomeCallable rebootInstancesCallable(const Model::RebootInstancesRequest& request) const;
			ReleasePublicConnectionOutcome releasePublicConnection(const Model::ReleasePublicConnectionRequest &request)const;
			void releasePublicConnectionAsync(const Model::ReleasePublicConnectionRequest& request, const ReleasePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleasePublicConnectionOutcomeCallable releasePublicConnectionCallable(const Model::ReleasePublicConnectionRequest& request) const;
			RemoveCustomImageShareAccountOutcome removeCustomImageShareAccount(const Model::RemoveCustomImageShareAccountRequest &request)const;
			void removeCustomImageShareAccountAsync(const Model::RemoveCustomImageShareAccountRequest& request, const RemoveCustomImageShareAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveCustomImageShareAccountOutcomeCallable removeCustomImageShareAccountCallable(const Model::RemoveCustomImageShareAccountRequest& request) const;
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
			StartInstancesOutcome startInstances(const Model::StartInstancesRequest &request)const;
			void startInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartInstancesOutcomeCallable startInstancesCallable(const Model::StartInstancesRequest& request) const;
			StartTerminalSessionOutcome startTerminalSession(const Model::StartTerminalSessionRequest &request)const;
			void startTerminalSessionAsync(const Model::StartTerminalSessionRequest& request, const StartTerminalSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTerminalSessionOutcomeCallable startTerminalSessionCallable(const Model::StartTerminalSessionRequest& request) const;
			StopDatabaseInstanceOutcome stopDatabaseInstance(const Model::StopDatabaseInstanceRequest &request)const;
			void stopDatabaseInstanceAsync(const Model::StopDatabaseInstanceRequest& request, const StopDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDatabaseInstanceOutcomeCallable stopDatabaseInstanceCallable(const Model::StopDatabaseInstanceRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			StopInstancesOutcome stopInstances(const Model::StopInstancesRequest &request)const;
			void stopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstancesOutcomeCallable stopInstancesCallable(const Model::StopInstancesRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateCommandAttributeOutcome updateCommandAttribute(const Model::UpdateCommandAttributeRequest &request)const;
			void updateCommandAttributeAsync(const Model::UpdateCommandAttributeRequest& request, const UpdateCommandAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCommandAttributeOutcomeCallable updateCommandAttributeCallable(const Model::UpdateCommandAttributeRequest& request) const;
			UpdateDiskAttributeOutcome updateDiskAttribute(const Model::UpdateDiskAttributeRequest &request)const;
			void updateDiskAttributeAsync(const Model::UpdateDiskAttributeRequest& request, const UpdateDiskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDiskAttributeOutcomeCallable updateDiskAttributeCallable(const Model::UpdateDiskAttributeRequest& request) const;
			UpdateInstanceAttributeOutcome updateInstanceAttribute(const Model::UpdateInstanceAttributeRequest &request)const;
			void updateInstanceAttributeAsync(const Model::UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceAttributeOutcomeCallable updateInstanceAttributeCallable(const Model::UpdateInstanceAttributeRequest& request) const;
			UpdateSnapshotAttributeOutcome updateSnapshotAttribute(const Model::UpdateSnapshotAttributeRequest &request)const;
			void updateSnapshotAttributeAsync(const Model::UpdateSnapshotAttributeRequest& request, const UpdateSnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSnapshotAttributeOutcomeCallable updateSnapshotAttributeCallable(const Model::UpdateSnapshotAttributeRequest& request) const;
			UpgradeInstanceOutcome upgradeInstance(const Model::UpgradeInstanceRequest &request)const;
			void upgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeInstanceOutcomeCallable upgradeInstanceCallable(const Model::UpgradeInstanceRequest& request) const;
			UploadInstanceKeyPairOutcome uploadInstanceKeyPair(const Model::UploadInstanceKeyPairRequest &request)const;
			void uploadInstanceKeyPairAsync(const Model::UploadInstanceKeyPairRequest& request, const UploadInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadInstanceKeyPairOutcomeCallable uploadInstanceKeyPairCallable(const Model::UploadInstanceKeyPairRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SWAS_OPEN_SWAS_OPENCLIENT_H_
