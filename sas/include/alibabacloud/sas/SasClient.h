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

#ifndef ALIBABACLOUD_SAS_SASCLIENT_H_
#define ALIBABACLOUD_SAS_SASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SasExport.h"
#include "model/AddVpcHoneyPotRequest.h"
#include "model/AddVpcHoneyPotResult.h"
#include "model/CheckQuaraFileIdRequest.h"
#include "model/CheckQuaraFileIdResult.h"
#include "model/CheckSecurityEventIdRequest.h"
#include "model/CheckSecurityEventIdResult.h"
#include "model/CreateAntiBruteForceRuleRequest.h"
#include "model/CreateAntiBruteForceRuleResult.h"
#include "model/CreateBackupPolicyRequest.h"
#include "model/CreateBackupPolicyResult.h"
#include "model/CreateFileDetectRequest.h"
#include "model/CreateFileDetectResult.h"
#include "model/CreateFileDetectUploadUrlRequest.h"
#include "model/CreateFileDetectUploadUrlResult.h"
#include "model/CreateOrUpdateAssetGroupRequest.h"
#include "model/CreateOrUpdateAssetGroupResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/CreateSimilarSecurityEventsQueryTaskRequest.h"
#include "model/CreateSimilarSecurityEventsQueryTaskResult.h"
#include "model/CreateSuspEventNoteRequest.h"
#include "model/CreateSuspEventNoteResult.h"
#include "model/CreateVulAutoRepairConfigRequest.h"
#include "model/CreateVulAutoRepairConfigResult.h"
#include "model/DeleteBackupPolicyRequest.h"
#include "model/DeleteBackupPolicyResult.h"
#include "model/DeleteBackupPolicyMachineRequest.h"
#include "model/DeleteBackupPolicyMachineResult.h"
#include "model/DeleteGroupRequest.h"
#include "model/DeleteGroupResult.h"
#include "model/DeleteLoginBaseConfigRequest.h"
#include "model/DeleteLoginBaseConfigResult.h"
#include "model/DeleteStrategyRequest.h"
#include "model/DeleteStrategyResult.h"
#include "model/DeleteTagWithUuidRequest.h"
#include "model/DeleteTagWithUuidResult.h"
#include "model/DeleteVpcHoneyPotRequest.h"
#include "model/DeleteVpcHoneyPotResult.h"
#include "model/DescribeAccessKeyLeakDetailRequest.h"
#include "model/DescribeAccessKeyLeakDetailResult.h"
#include "model/DescribeAccesskeyLeakListRequest.h"
#include "model/DescribeAccesskeyLeakListResult.h"
#include "model/DescribeAffectedMaliciousFileImagesRequest.h"
#include "model/DescribeAffectedMaliciousFileImagesResult.h"
#include "model/DescribeAlarmEventDetailRequest.h"
#include "model/DescribeAlarmEventDetailResult.h"
#include "model/DescribeAlarmEventListRequest.h"
#include "model/DescribeAlarmEventListResult.h"
#include "model/DescribeAlarmEventStackInfoRequest.h"
#include "model/DescribeAlarmEventStackInfoResult.h"
#include "model/DescribeAllEntityRequest.h"
#include "model/DescribeAllEntityResult.h"
#include "model/DescribeAllGroupsRequest.h"
#include "model/DescribeAllGroupsResult.h"
#include "model/DescribeAntiBruteForceRulesRequest.h"
#include "model/DescribeAntiBruteForceRulesResult.h"
#include "model/DescribeAssetDetailByUuidRequest.h"
#include "model/DescribeAssetDetailByUuidResult.h"
#include "model/DescribeAssetDetailByUuidsRequest.h"
#include "model/DescribeAssetDetailByUuidsResult.h"
#include "model/DescribeAssetSummaryRequest.h"
#include "model/DescribeAssetSummaryResult.h"
#include "model/DescribeAttackAnalysisDataRequest.h"
#include "model/DescribeAttackAnalysisDataResult.h"
#include "model/DescribeAutoDelConfigRequest.h"
#include "model/DescribeAutoDelConfigResult.h"
#include "model/DescribeBackupClientsRequest.h"
#include "model/DescribeBackupClientsResult.h"
#include "model/DescribeBackupFilesRequest.h"
#include "model/DescribeBackupFilesResult.h"
#include "model/DescribeBackupPoliciesRequest.h"
#include "model/DescribeBackupPoliciesResult.h"
#include "model/DescribeBackupRestoreCountRequest.h"
#include "model/DescribeBackupRestoreCountResult.h"
#include "model/DescribeBruteForceSummaryRequest.h"
#include "model/DescribeBruteForceSummaryResult.h"
#include "model/DescribeCheckEcsWarningsRequest.h"
#include "model/DescribeCheckEcsWarningsResult.h"
#include "model/DescribeCheckWarningDetailRequest.h"
#include "model/DescribeCheckWarningDetailResult.h"
#include "model/DescribeCheckWarningSummaryRequest.h"
#include "model/DescribeCheckWarningSummaryResult.h"
#include "model/DescribeCheckWarningsRequest.h"
#include "model/DescribeCheckWarningsResult.h"
#include "model/DescribeCloudCenterInstancesRequest.h"
#include "model/DescribeCloudCenterInstancesResult.h"
#include "model/DescribeCloudProductFieldStatisticsRequest.h"
#include "model/DescribeCloudProductFieldStatisticsResult.h"
#include "model/DescribeConcernNecessityRequest.h"
#include "model/DescribeConcernNecessityResult.h"
#include "model/DescribeContainerStatisticsRequest.h"
#include "model/DescribeContainerStatisticsResult.h"
#include "model/DescribeCriteriaRequest.h"
#include "model/DescribeCriteriaResult.h"
#include "model/DescribeDingTalkRequest.h"
#include "model/DescribeDingTalkResult.h"
#include "model/DescribeDomainCountRequest.h"
#include "model/DescribeDomainCountResult.h"
#include "model/DescribeDomainDetailRequest.h"
#include "model/DescribeDomainDetailResult.h"
#include "model/DescribeDomainListRequest.h"
#include "model/DescribeDomainListResult.h"
#include "model/DescribeEmgVulItemRequest.h"
#include "model/DescribeEmgVulItemResult.h"
#include "model/DescribeExportInfoRequest.h"
#include "model/DescribeExportInfoResult.h"
#include "model/DescribeExposedInstanceCriteriaRequest.h"
#include "model/DescribeExposedInstanceCriteriaResult.h"
#include "model/DescribeExposedInstanceDetailRequest.h"
#include "model/DescribeExposedInstanceDetailResult.h"
#include "model/DescribeExposedInstanceListRequest.h"
#include "model/DescribeExposedInstanceListResult.h"
#include "model/DescribeExposedStatisticsRequest.h"
#include "model/DescribeExposedStatisticsResult.h"
#include "model/DescribeExposedStatisticsDetailRequest.h"
#include "model/DescribeExposedStatisticsDetailResult.h"
#include "model/DescribeFieldStatisticsRequest.h"
#include "model/DescribeFieldStatisticsResult.h"
#include "model/DescribeFrontVulPatchListRequest.h"
#include "model/DescribeFrontVulPatchListResult.h"
#include "model/DescribeGroupedContainerInstancesRequest.h"
#include "model/DescribeGroupedContainerInstancesResult.h"
#include "model/DescribeGroupedInstancesRequest.h"
#include "model/DescribeGroupedInstancesResult.h"
#include "model/DescribeGroupedMaliciousFilesRequest.h"
#include "model/DescribeGroupedMaliciousFilesResult.h"
#include "model/DescribeGroupedTagsRequest.h"
#include "model/DescribeGroupedTagsResult.h"
#include "model/DescribeGroupedVulRequest.h"
#include "model/DescribeGroupedVulResult.h"
#include "model/DescribeHoneyPotAuthRequest.h"
#include "model/DescribeHoneyPotAuthResult.h"
#include "model/DescribeHoneyPotSuspStatisticsRequest.h"
#include "model/DescribeHoneyPotSuspStatisticsResult.h"
#include "model/DescribeImageBaselineCheckSummaryRequest.h"
#include "model/DescribeImageBaselineCheckSummaryResult.h"
#include "model/DescribeImageFixTaskRequest.h"
#include "model/DescribeImageFixTaskResult.h"
#include "model/DescribeImageGroupedVulListRequest.h"
#include "model/DescribeImageGroupedVulListResult.h"
#include "model/DescribeImageListWithBaselineNameRequest.h"
#include "model/DescribeImageListWithBaselineNameResult.h"
#include "model/DescribeImageScanAuthCountRequest.h"
#include "model/DescribeImageScanAuthCountResult.h"
#include "model/DescribeImageStatisticsRequest.h"
#include "model/DescribeImageStatisticsResult.h"
#include "model/DescribeImageVulListRequest.h"
#include "model/DescribeImageVulListResult.h"
#include "model/DescribeInstallCaptchaRequest.h"
#include "model/DescribeInstallCaptchaResult.h"
#include "model/DescribeInstallCodesRequest.h"
#include "model/DescribeInstallCodesResult.h"
#include "model/DescribeInstanceAntiBruteForceRulesRequest.h"
#include "model/DescribeInstanceAntiBruteForceRulesResult.h"
#include "model/DescribeInstanceRebootStatusRequest.h"
#include "model/DescribeInstanceRebootStatusResult.h"
#include "model/DescribeInstanceStatisticsRequest.h"
#include "model/DescribeInstanceStatisticsResult.h"
#include "model/DescribeLoginBaseConfigsRequest.h"
#include "model/DescribeLoginBaseConfigsResult.h"
#include "model/DescribeLogstoreStorageRequest.h"
#include "model/DescribeLogstoreStorageResult.h"
#include "model/DescribeModuleConfigRequest.h"
#include "model/DescribeModuleConfigResult.h"
#include "model/DescribeNoticeConfigRequest.h"
#include "model/DescribeNoticeConfigResult.h"
#include "model/DescribeOnceTaskRequest.h"
#include "model/DescribeOnceTaskResult.h"
#include "model/DescribePropertyCountRequest.h"
#include "model/DescribePropertyCountResult.h"
#include "model/DescribePropertyCronDetailRequest.h"
#include "model/DescribePropertyCronDetailResult.h"
#include "model/DescribePropertyPortDetailRequest.h"
#include "model/DescribePropertyPortDetailResult.h"
#include "model/DescribePropertyPortItemRequest.h"
#include "model/DescribePropertyPortItemResult.h"
#include "model/DescribePropertyProcDetailRequest.h"
#include "model/DescribePropertyProcDetailResult.h"
#include "model/DescribePropertyProcItemRequest.h"
#include "model/DescribePropertyProcItemResult.h"
#include "model/DescribePropertyScaDetailRequest.h"
#include "model/DescribePropertyScaDetailResult.h"
#include "model/DescribePropertySoftwareDetailRequest.h"
#include "model/DescribePropertySoftwareDetailResult.h"
#include "model/DescribePropertySoftwareItemRequest.h"
#include "model/DescribePropertySoftwareItemResult.h"
#include "model/DescribePropertyUsageNewestRequest.h"
#include "model/DescribePropertyUsageNewestResult.h"
#include "model/DescribePropertyUserDetailRequest.h"
#include "model/DescribePropertyUserDetailResult.h"
#include "model/DescribePropertyUserItemRequest.h"
#include "model/DescribePropertyUserItemResult.h"
#include "model/DescribeRestoreJobsRequest.h"
#include "model/DescribeRestoreJobsResult.h"
#include "model/DescribeRiskCheckItemResultRequest.h"
#include "model/DescribeRiskCheckItemResultResult.h"
#include "model/DescribeRiskCheckResultRequest.h"
#include "model/DescribeRiskCheckResultResult.h"
#include "model/DescribeRiskCheckSummaryRequest.h"
#include "model/DescribeRiskCheckSummaryResult.h"
#include "model/DescribeRiskItemTypeRequest.h"
#include "model/DescribeRiskItemTypeResult.h"
#include "model/DescribeRiskListCheckResultRequest.h"
#include "model/DescribeRiskListCheckResultResult.h"
#include "model/DescribeRiskTypeRequest.h"
#include "model/DescribeRiskTypeResult.h"
#include "model/DescribeScanTaskProgressRequest.h"
#include "model/DescribeScanTaskProgressResult.h"
#include "model/DescribeSearchConditionRequest.h"
#include "model/DescribeSearchConditionResult.h"
#include "model/DescribeSecureSuggestionRequest.h"
#include "model/DescribeSecureSuggestionResult.h"
#include "model/DescribeSecurityCheckScheduleConfigRequest.h"
#include "model/DescribeSecurityCheckScheduleConfigResult.h"
#include "model/DescribeSecurityEventOperationStatusRequest.h"
#include "model/DescribeSecurityEventOperationStatusResult.h"
#include "model/DescribeSecurityEventOperationsRequest.h"
#include "model/DescribeSecurityEventOperationsResult.h"
#include "model/DescribeSecurityStatInfoRequest.h"
#include "model/DescribeSecurityStatInfoResult.h"
#include "model/DescribeServiceLinkedRoleStatusRequest.h"
#include "model/DescribeServiceLinkedRoleStatusResult.h"
#include "model/DescribeSimilarEventScenariosRequest.h"
#include "model/DescribeSimilarEventScenariosResult.h"
#include "model/DescribeSimilarSecurityEventsRequest.h"
#include "model/DescribeSimilarSecurityEventsResult.h"
#include "model/DescribeStrategyRequest.h"
#include "model/DescribeStrategyResult.h"
#include "model/DescribeStrategyDetailRequest.h"
#include "model/DescribeStrategyDetailResult.h"
#include "model/DescribeStrategyExecDetailRequest.h"
#include "model/DescribeStrategyExecDetailResult.h"
#include "model/DescribeStrategyTargetRequest.h"
#include "model/DescribeStrategyTargetResult.h"
#include "model/DescribeSummaryInfoRequest.h"
#include "model/DescribeSummaryInfoResult.h"
#include "model/DescribeSupportRegionRequest.h"
#include "model/DescribeSupportRegionResult.h"
#include "model/DescribeSuspEventDetailRequest.h"
#include "model/DescribeSuspEventDetailResult.h"
#include "model/DescribeSuspEventQuaraFilesRequest.h"
#include "model/DescribeSuspEventQuaraFilesResult.h"
#include "model/DescribeSuspEventsRequest.h"
#include "model/DescribeSuspEventsResult.h"
#include "model/DescribeSuspiciousUUIDConfigRequest.h"
#include "model/DescribeSuspiciousUUIDConfigResult.h"
#include "model/DescribeUserBackupMachinesRequest.h"
#include "model/DescribeUserBackupMachinesResult.h"
#include "model/DescribeUserBaselineAuthorizationRequest.h"
#include "model/DescribeUserBaselineAuthorizationResult.h"
#include "model/DescribeUserLayoutAuthorizationRequest.h"
#include "model/DescribeUserLayoutAuthorizationResult.h"
#include "model/DescribeUuidsByVulNamesRequest.h"
#include "model/DescribeUuidsByVulNamesResult.h"
#include "model/DescribeVersionConfigRequest.h"
#include "model/DescribeVersionConfigResult.h"
#include "model/DescribeVpcHoneyPotCriteriaRequest.h"
#include "model/DescribeVpcHoneyPotCriteriaResult.h"
#include "model/DescribeVpcHoneyPotListRequest.h"
#include "model/DescribeVpcHoneyPotListResult.h"
#include "model/DescribeVpcListRequest.h"
#include "model/DescribeVpcListResult.h"
#include "model/DescribeVulDetailsRequest.h"
#include "model/DescribeVulDetailsResult.h"
#include "model/DescribeVulExportInfoRequest.h"
#include "model/DescribeVulExportInfoResult.h"
#include "model/DescribeVulListRequest.h"
#include "model/DescribeVulListResult.h"
#include "model/DescribeVulWhitelistRequest.h"
#include "model/DescribeVulWhitelistResult.h"
#include "model/DescribeWarningExportInfoRequest.h"
#include "model/DescribeWarningExportInfoResult.h"
#include "model/DescribeWarningMachinesRequest.h"
#include "model/DescribeWarningMachinesResult.h"
#include "model/DescribeWebLockBindListRequest.h"
#include "model/DescribeWebLockBindListResult.h"
#include "model/DescribeWebLockConfigListRequest.h"
#include "model/DescribeWebLockConfigListResult.h"
#include "model/ExportRecordRequest.h"
#include "model/ExportRecordResult.h"
#include "model/ExportVulRequest.h"
#include "model/ExportVulResult.h"
#include "model/ExportWarningRequest.h"
#include "model/ExportWarningResult.h"
#include "model/FixCheckWarningsRequest.h"
#include "model/FixCheckWarningsResult.h"
#include "model/GetBackupStorageCountRequest.h"
#include "model/GetBackupStorageCountResult.h"
#include "model/GetFileDetectResultRequest.h"
#include "model/GetFileDetectResultResult.h"
#include "model/GetSuspiciousStatisticsRequest.h"
#include "model/GetSuspiciousStatisticsResult.h"
#include "model/GetVulStatisticsRequest.h"
#include "model/GetVulStatisticsResult.h"
#include "model/HandleSecurityEventsRequest.h"
#include "model/HandleSecurityEventsResult.h"
#include "model/HandleSimilarSecurityEventsRequest.h"
#include "model/HandleSimilarSecurityEventsResult.h"
#include "model/IgnoreHcCheckWarningsRequest.h"
#include "model/IgnoreHcCheckWarningsResult.h"
#include "model/InstallBackupClientRequest.h"
#include "model/InstallBackupClientResult.h"
#include "model/InstallCloudMonitorRequest.h"
#include "model/InstallCloudMonitorResult.h"
#include "model/ListCheckResultRequest.h"
#include "model/ListCheckResultResult.h"
#include "model/ListVulAutoRepairConfigRequest.h"
#include "model/ListVulAutoRepairConfigResult.h"
#include "model/ModifyAntiBruteForceRuleRequest.h"
#include "model/ModifyAntiBruteForceRuleResult.h"
#include "model/ModifyAssetGroupRequest.h"
#include "model/ModifyAssetGroupResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyBackupPolicyStatusRequest.h"
#include "model/ModifyBackupPolicyStatusResult.h"
#include "model/ModifyCreateVulWhitelistRequest.h"
#include "model/ModifyCreateVulWhitelistResult.h"
#include "model/ModifyEmgVulSubmitRequest.h"
#include "model/ModifyEmgVulSubmitResult.h"
#include "model/ModifyGroupPropertyRequest.h"
#include "model/ModifyGroupPropertyResult.h"
#include "model/ModifyInstanceAntiBruteForceRuleRequest.h"
#include "model/ModifyInstanceAntiBruteForceRuleResult.h"
#include "model/ModifyLoginBaseConfigRequest.h"
#include "model/ModifyLoginBaseConfigResult.h"
#include "model/ModifyLoginSwitchConfigRequest.h"
#include "model/ModifyLoginSwitchConfigResult.h"
#include "model/ModifyOpenLogShipperRequest.h"
#include "model/ModifyOpenLogShipperResult.h"
#include "model/ModifyOperateVulRequest.h"
#include "model/ModifyOperateVulResult.h"
#include "model/ModifyPropertyScheduleConfigRequest.h"
#include "model/ModifyPropertyScheduleConfigResult.h"
#include "model/ModifyPushAllTaskRequest.h"
#include "model/ModifyPushAllTaskResult.h"
#include "model/ModifyRiskCheckStatusRequest.h"
#include "model/ModifyRiskCheckStatusResult.h"
#include "model/ModifyRiskSingleResultStatusRequest.h"
#include "model/ModifyRiskSingleResultStatusResult.h"
#include "model/ModifySecurityCheckScheduleConfigRequest.h"
#include "model/ModifySecurityCheckScheduleConfigResult.h"
#include "model/ModifyStartVulScanRequest.h"
#include "model/ModifyStartVulScanResult.h"
#include "model/ModifyStrategyRequest.h"
#include "model/ModifyStrategyResult.h"
#include "model/ModifyStrategyTargetRequest.h"
#include "model/ModifyStrategyTargetResult.h"
#include "model/ModifyTagWithUuidRequest.h"
#include "model/ModifyTagWithUuidResult.h"
#include "model/ModifyVpcHoneyPotRequest.h"
#include "model/ModifyVpcHoneyPotResult.h"
#include "model/ModifyVulTargetConfigRequest.h"
#include "model/ModifyVulTargetConfigResult.h"
#include "model/ModifyWebLockCreateConfigRequest.h"
#include "model/ModifyWebLockCreateConfigResult.h"
#include "model/ModifyWebLockDeleteConfigRequest.h"
#include "model/ModifyWebLockDeleteConfigResult.h"
#include "model/ModifyWebLockStartRequest.h"
#include "model/ModifyWebLockStartResult.h"
#include "model/ModifyWebLockStatusRequest.h"
#include "model/ModifyWebLockStatusResult.h"
#include "model/ModifyWebLockUpdateConfigRequest.h"
#include "model/ModifyWebLockUpdateConfigResult.h"
#include "model/OperateAgentClientInstallRequest.h"
#include "model/OperateAgentClientInstallResult.h"
#include "model/OperateSuspiciousTargetConfigRequest.h"
#include "model/OperateSuspiciousTargetConfigResult.h"
#include "model/OperateVulsRequest.h"
#include "model/OperateVulsResult.h"
#include "model/OperationCancelIgnoreSuspEventRequest.h"
#include "model/OperationCancelIgnoreSuspEventResult.h"
#include "model/OperationSuspEventsRequest.h"
#include "model/OperationSuspEventsResult.h"
#include "model/PauseClientRequest.h"
#include "model/PauseClientResult.h"
#include "model/PublicCreateImageScanTaskRequest.h"
#include "model/PublicCreateImageScanTaskResult.h"
#include "model/PublicPreCheckImageScanTaskRequest.h"
#include "model/PublicPreCheckImageScanTaskResult.h"
#include "model/PublicSyncAndCreateImageScanTaskRequest.h"
#include "model/PublicSyncAndCreateImageScanTaskResult.h"
#include "model/QueryGroupIdByGroupNameRequest.h"
#include "model/QueryGroupIdByGroupNameResult.h"
#include "model/QueryGroupedSecurityEventMarkMissListRequest.h"
#include "model/QueryGroupedSecurityEventMarkMissListResult.h"
#include "model/RebootMachineRequest.h"
#include "model/RebootMachineResult.h"
#include "model/RefreshAssetsRequest.h"
#include "model/RefreshAssetsResult.h"
#include "model/RefreshContainerAssetsRequest.h"
#include "model/RefreshContainerAssetsResult.h"
#include "model/RollbackSuspEventQuaraFileRequest.h"
#include "model/RollbackSuspEventQuaraFileResult.h"
#include "model/SasInstallCodeRequest.h"
#include "model/SasInstallCodeResult.h"
#include "model/StartBaselineSecurityCheckRequest.h"
#include "model/StartBaselineSecurityCheckResult.h"
#include "model/StartVirusScanTaskRequest.h"
#include "model/StartVirusScanTaskResult.h"
#include "model/UnbindAegisRequest.h"
#include "model/UnbindAegisResult.h"
#include "model/UninstallBackupClientRequest.h"
#include "model/UninstallBackupClientResult.h"
#include "model/ValidateHcWarningsRequest.h"
#include "model/ValidateHcWarningsResult.h"


namespace AlibabaCloud
{
	namespace Sas
	{
		class ALIBABACLOUD_SAS_EXPORT SasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddVpcHoneyPotResult> AddVpcHoneyPotOutcome;
			typedef std::future<AddVpcHoneyPotOutcome> AddVpcHoneyPotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddVpcHoneyPotRequest&, const AddVpcHoneyPotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVpcHoneyPotAsyncHandler;
			typedef Outcome<Error, Model::CheckQuaraFileIdResult> CheckQuaraFileIdOutcome;
			typedef std::future<CheckQuaraFileIdOutcome> CheckQuaraFileIdOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CheckQuaraFileIdRequest&, const CheckQuaraFileIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckQuaraFileIdAsyncHandler;
			typedef Outcome<Error, Model::CheckSecurityEventIdResult> CheckSecurityEventIdOutcome;
			typedef std::future<CheckSecurityEventIdOutcome> CheckSecurityEventIdOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CheckSecurityEventIdRequest&, const CheckSecurityEventIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSecurityEventIdAsyncHandler;
			typedef Outcome<Error, Model::CreateAntiBruteForceRuleResult> CreateAntiBruteForceRuleOutcome;
			typedef std::future<CreateAntiBruteForceRuleOutcome> CreateAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateAntiBruteForceRuleRequest&, const CreateAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupPolicyResult> CreateBackupPolicyOutcome;
			typedef std::future<CreateBackupPolicyOutcome> CreateBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateBackupPolicyRequest&, const CreateBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateFileDetectResult> CreateFileDetectOutcome;
			typedef std::future<CreateFileDetectOutcome> CreateFileDetectOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateFileDetectRequest&, const CreateFileDetectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileDetectAsyncHandler;
			typedef Outcome<Error, Model::CreateFileDetectUploadUrlResult> CreateFileDetectUploadUrlOutcome;
			typedef std::future<CreateFileDetectUploadUrlOutcome> CreateFileDetectUploadUrlOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateFileDetectUploadUrlRequest&, const CreateFileDetectUploadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileDetectUploadUrlAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateAssetGroupResult> CreateOrUpdateAssetGroupOutcome;
			typedef std::future<CreateOrUpdateAssetGroupOutcome> CreateOrUpdateAssetGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateOrUpdateAssetGroupRequest&, const CreateOrUpdateAssetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateAssetGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateSimilarSecurityEventsQueryTaskResult> CreateSimilarSecurityEventsQueryTaskOutcome;
			typedef std::future<CreateSimilarSecurityEventsQueryTaskOutcome> CreateSimilarSecurityEventsQueryTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateSimilarSecurityEventsQueryTaskRequest&, const CreateSimilarSecurityEventsQueryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSimilarSecurityEventsQueryTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateSuspEventNoteResult> CreateSuspEventNoteOutcome;
			typedef std::future<CreateSuspEventNoteOutcome> CreateSuspEventNoteOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateSuspEventNoteRequest&, const CreateSuspEventNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuspEventNoteAsyncHandler;
			typedef Outcome<Error, Model::CreateVulAutoRepairConfigResult> CreateVulAutoRepairConfigOutcome;
			typedef std::future<CreateVulAutoRepairConfigOutcome> CreateVulAutoRepairConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateVulAutoRepairConfigRequest&, const CreateVulAutoRepairConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulAutoRepairConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupPolicyResult> DeleteBackupPolicyOutcome;
			typedef std::future<DeleteBackupPolicyOutcome> DeleteBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteBackupPolicyRequest&, const DeleteBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupPolicyMachineResult> DeleteBackupPolicyMachineOutcome;
			typedef std::future<DeleteBackupPolicyMachineOutcome> DeleteBackupPolicyMachineOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteBackupPolicyMachineRequest&, const DeleteBackupPolicyMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupPolicyMachineAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupResult> DeleteGroupOutcome;
			typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteGroupRequest&, const DeleteGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoginBaseConfigResult> DeleteLoginBaseConfigOutcome;
			typedef std::future<DeleteLoginBaseConfigOutcome> DeleteLoginBaseConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteLoginBaseConfigRequest&, const DeleteLoginBaseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginBaseConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteStrategyResult> DeleteStrategyOutcome;
			typedef std::future<DeleteStrategyOutcome> DeleteStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteStrategyRequest&, const DeleteStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStrategyAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagWithUuidResult> DeleteTagWithUuidOutcome;
			typedef std::future<DeleteTagWithUuidOutcome> DeleteTagWithUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteTagWithUuidRequest&, const DeleteTagWithUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagWithUuidAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcHoneyPotResult> DeleteVpcHoneyPotOutcome;
			typedef std::future<DeleteVpcHoneyPotOutcome> DeleteVpcHoneyPotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteVpcHoneyPotRequest&, const DeleteVpcHoneyPotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcHoneyPotAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessKeyLeakDetailResult> DescribeAccessKeyLeakDetailOutcome;
			typedef std::future<DescribeAccessKeyLeakDetailOutcome> DescribeAccessKeyLeakDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAccessKeyLeakDetailRequest&, const DescribeAccessKeyLeakDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyLeakDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccesskeyLeakListResult> DescribeAccesskeyLeakListOutcome;
			typedef std::future<DescribeAccesskeyLeakListOutcome> DescribeAccesskeyLeakListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAccesskeyLeakListRequest&, const DescribeAccesskeyLeakListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccesskeyLeakListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAffectedMaliciousFileImagesResult> DescribeAffectedMaliciousFileImagesOutcome;
			typedef std::future<DescribeAffectedMaliciousFileImagesOutcome> DescribeAffectedMaliciousFileImagesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAffectedMaliciousFileImagesRequest&, const DescribeAffectedMaliciousFileImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedMaliciousFileImagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventDetailResult> DescribeAlarmEventDetailOutcome;
			typedef std::future<DescribeAlarmEventDetailOutcome> DescribeAlarmEventDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventDetailRequest&, const DescribeAlarmEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventListResult> DescribeAlarmEventListOutcome;
			typedef std::future<DescribeAlarmEventListOutcome> DescribeAlarmEventListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventListRequest&, const DescribeAlarmEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventStackInfoResult> DescribeAlarmEventStackInfoOutcome;
			typedef std::future<DescribeAlarmEventStackInfoOutcome> DescribeAlarmEventStackInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventStackInfoRequest&, const DescribeAlarmEventStackInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventStackInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllEntityResult> DescribeAllEntityOutcome;
			typedef std::future<DescribeAllEntityOutcome> DescribeAllEntityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAllEntityRequest&, const DescribeAllEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllEntityAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllGroupsResult> DescribeAllGroupsOutcome;
			typedef std::future<DescribeAllGroupsOutcome> DescribeAllGroupsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAllGroupsRequest&, const DescribeAllGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAntiBruteForceRulesResult> DescribeAntiBruteForceRulesOutcome;
			typedef std::future<DescribeAntiBruteForceRulesOutcome> DescribeAntiBruteForceRulesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAntiBruteForceRulesRequest&, const DescribeAntiBruteForceRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAntiBruteForceRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetDetailByUuidResult> DescribeAssetDetailByUuidOutcome;
			typedef std::future<DescribeAssetDetailByUuidOutcome> DescribeAssetDetailByUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetDetailByUuidRequest&, const DescribeAssetDetailByUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailByUuidAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetDetailByUuidsResult> DescribeAssetDetailByUuidsOutcome;
			typedef std::future<DescribeAssetDetailByUuidsOutcome> DescribeAssetDetailByUuidsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetDetailByUuidsRequest&, const DescribeAssetDetailByUuidsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailByUuidsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetSummaryResult> DescribeAssetSummaryOutcome;
			typedef std::future<DescribeAssetSummaryOutcome> DescribeAssetSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetSummaryRequest&, const DescribeAssetSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeAttackAnalysisDataResult> DescribeAttackAnalysisDataOutcome;
			typedef std::future<DescribeAttackAnalysisDataOutcome> DescribeAttackAnalysisDataOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAttackAnalysisDataRequest&, const DescribeAttackAnalysisDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackAnalysisDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoDelConfigResult> DescribeAutoDelConfigOutcome;
			typedef std::future<DescribeAutoDelConfigOutcome> DescribeAutoDelConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAutoDelConfigRequest&, const DescribeAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupClientsResult> DescribeBackupClientsOutcome;
			typedef std::future<DescribeBackupClientsOutcome> DescribeBackupClientsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupClientsRequest&, const DescribeBackupClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupFilesResult> DescribeBackupFilesOutcome;
			typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupFilesRequest&, const DescribeBackupFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPoliciesResult> DescribeBackupPoliciesOutcome;
			typedef std::future<DescribeBackupPoliciesOutcome> DescribeBackupPoliciesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupPoliciesRequest&, const DescribeBackupPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupRestoreCountResult> DescribeBackupRestoreCountOutcome;
			typedef std::future<DescribeBackupRestoreCountOutcome> DescribeBackupRestoreCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupRestoreCountRequest&, const DescribeBackupRestoreCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupRestoreCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeBruteForceSummaryResult> DescribeBruteForceSummaryOutcome;
			typedef std::future<DescribeBruteForceSummaryOutcome> DescribeBruteForceSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBruteForceSummaryRequest&, const DescribeBruteForceSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteForceSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckEcsWarningsResult> DescribeCheckEcsWarningsOutcome;
			typedef std::future<DescribeCheckEcsWarningsOutcome> DescribeCheckEcsWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckEcsWarningsRequest&, const DescribeCheckEcsWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckEcsWarningsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningDetailResult> DescribeCheckWarningDetailOutcome;
			typedef std::future<DescribeCheckWarningDetailOutcome> DescribeCheckWarningDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningDetailRequest&, const DescribeCheckWarningDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningSummaryResult> DescribeCheckWarningSummaryOutcome;
			typedef std::future<DescribeCheckWarningSummaryOutcome> DescribeCheckWarningSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningSummaryRequest&, const DescribeCheckWarningSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningsResult> DescribeCheckWarningsOutcome;
			typedef std::future<DescribeCheckWarningsOutcome> DescribeCheckWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningsRequest&, const DescribeCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudCenterInstancesResult> DescribeCloudCenterInstancesOutcome;
			typedef std::future<DescribeCloudCenterInstancesOutcome> DescribeCloudCenterInstancesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCloudCenterInstancesRequest&, const DescribeCloudCenterInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudCenterInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudProductFieldStatisticsResult> DescribeCloudProductFieldStatisticsOutcome;
			typedef std::future<DescribeCloudProductFieldStatisticsOutcome> DescribeCloudProductFieldStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCloudProductFieldStatisticsRequest&, const DescribeCloudProductFieldStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudProductFieldStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeConcernNecessityResult> DescribeConcernNecessityOutcome;
			typedef std::future<DescribeConcernNecessityOutcome> DescribeConcernNecessityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeConcernNecessityRequest&, const DescribeConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcernNecessityAsyncHandler;
			typedef Outcome<Error, Model::DescribeContainerStatisticsResult> DescribeContainerStatisticsOutcome;
			typedef std::future<DescribeContainerStatisticsOutcome> DescribeContainerStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeContainerStatisticsRequest&, const DescribeContainerStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCriteriaResult> DescribeCriteriaOutcome;
			typedef std::future<DescribeCriteriaOutcome> DescribeCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCriteriaRequest&, const DescribeCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCriteriaAsyncHandler;
			typedef Outcome<Error, Model::DescribeDingTalkResult> DescribeDingTalkOutcome;
			typedef std::future<DescribeDingTalkOutcome> DescribeDingTalkOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDingTalkRequest&, const DescribeDingTalkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDingTalkAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainCountResult> DescribeDomainCountOutcome;
			typedef std::future<DescribeDomainCountOutcome> DescribeDomainCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDomainCountRequest&, const DescribeDomainCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainDetailResult> DescribeDomainDetailOutcome;
			typedef std::future<DescribeDomainDetailOutcome> DescribeDomainDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDomainDetailRequest&, const DescribeDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainListResult> DescribeDomainListOutcome;
			typedef std::future<DescribeDomainListOutcome> DescribeDomainListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDomainListRequest&, const DescribeDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmgVulItemResult> DescribeEmgVulItemOutcome;
			typedef std::future<DescribeEmgVulItemOutcome> DescribeEmgVulItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeEmgVulItemRequest&, const DescribeEmgVulItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmgVulItemAsyncHandler;
			typedef Outcome<Error, Model::DescribeExportInfoResult> DescribeExportInfoOutcome;
			typedef std::future<DescribeExportInfoOutcome> DescribeExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExportInfoRequest&, const DescribeExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeExposedInstanceCriteriaResult> DescribeExposedInstanceCriteriaOutcome;
			typedef std::future<DescribeExposedInstanceCriteriaOutcome> DescribeExposedInstanceCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExposedInstanceCriteriaRequest&, const DescribeExposedInstanceCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposedInstanceCriteriaAsyncHandler;
			typedef Outcome<Error, Model::DescribeExposedInstanceDetailResult> DescribeExposedInstanceDetailOutcome;
			typedef std::future<DescribeExposedInstanceDetailOutcome> DescribeExposedInstanceDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExposedInstanceDetailRequest&, const DescribeExposedInstanceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposedInstanceDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeExposedInstanceListResult> DescribeExposedInstanceListOutcome;
			typedef std::future<DescribeExposedInstanceListOutcome> DescribeExposedInstanceListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExposedInstanceListRequest&, const DescribeExposedInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposedInstanceListAsyncHandler;
			typedef Outcome<Error, Model::DescribeExposedStatisticsResult> DescribeExposedStatisticsOutcome;
			typedef std::future<DescribeExposedStatisticsOutcome> DescribeExposedStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExposedStatisticsRequest&, const DescribeExposedStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposedStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeExposedStatisticsDetailResult> DescribeExposedStatisticsDetailOutcome;
			typedef std::future<DescribeExposedStatisticsDetailOutcome> DescribeExposedStatisticsDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExposedStatisticsDetailRequest&, const DescribeExposedStatisticsDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposedStatisticsDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeFieldStatisticsResult> DescribeFieldStatisticsOutcome;
			typedef std::future<DescribeFieldStatisticsOutcome> DescribeFieldStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeFieldStatisticsRequest&, const DescribeFieldStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFieldStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFrontVulPatchListResult> DescribeFrontVulPatchListOutcome;
			typedef std::future<DescribeFrontVulPatchListOutcome> DescribeFrontVulPatchListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeFrontVulPatchListRequest&, const DescribeFrontVulPatchListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFrontVulPatchListAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedContainerInstancesResult> DescribeGroupedContainerInstancesOutcome;
			typedef std::future<DescribeGroupedContainerInstancesOutcome> DescribeGroupedContainerInstancesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupedContainerInstancesRequest&, const DescribeGroupedContainerInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedContainerInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedInstancesResult> DescribeGroupedInstancesOutcome;
			typedef std::future<DescribeGroupedInstancesOutcome> DescribeGroupedInstancesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupedInstancesRequest&, const DescribeGroupedInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedMaliciousFilesResult> DescribeGroupedMaliciousFilesOutcome;
			typedef std::future<DescribeGroupedMaliciousFilesOutcome> DescribeGroupedMaliciousFilesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupedMaliciousFilesRequest&, const DescribeGroupedMaliciousFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedMaliciousFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedTagsResult> DescribeGroupedTagsOutcome;
			typedef std::future<DescribeGroupedTagsOutcome> DescribeGroupedTagsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupedTagsRequest&, const DescribeGroupedTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedVulResult> DescribeGroupedVulOutcome;
			typedef std::future<DescribeGroupedVulOutcome> DescribeGroupedVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupedVulRequest&, const DescribeGroupedVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedVulAsyncHandler;
			typedef Outcome<Error, Model::DescribeHoneyPotAuthResult> DescribeHoneyPotAuthOutcome;
			typedef std::future<DescribeHoneyPotAuthOutcome> DescribeHoneyPotAuthOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeHoneyPotAuthRequest&, const DescribeHoneyPotAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHoneyPotAuthAsyncHandler;
			typedef Outcome<Error, Model::DescribeHoneyPotSuspStatisticsResult> DescribeHoneyPotSuspStatisticsOutcome;
			typedef std::future<DescribeHoneyPotSuspStatisticsOutcome> DescribeHoneyPotSuspStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeHoneyPotSuspStatisticsRequest&, const DescribeHoneyPotSuspStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHoneyPotSuspStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageBaselineCheckSummaryResult> DescribeImageBaselineCheckSummaryOutcome;
			typedef std::future<DescribeImageBaselineCheckSummaryOutcome> DescribeImageBaselineCheckSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageBaselineCheckSummaryRequest&, const DescribeImageBaselineCheckSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageBaselineCheckSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageFixTaskResult> DescribeImageFixTaskOutcome;
			typedef std::future<DescribeImageFixTaskOutcome> DescribeImageFixTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageFixTaskRequest&, const DescribeImageFixTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageFixTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageGroupedVulListResult> DescribeImageGroupedVulListOutcome;
			typedef std::future<DescribeImageGroupedVulListOutcome> DescribeImageGroupedVulListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageGroupedVulListRequest&, const DescribeImageGroupedVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageGroupedVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageListWithBaselineNameResult> DescribeImageListWithBaselineNameOutcome;
			typedef std::future<DescribeImageListWithBaselineNameOutcome> DescribeImageListWithBaselineNameOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageListWithBaselineNameRequest&, const DescribeImageListWithBaselineNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageListWithBaselineNameAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageScanAuthCountResult> DescribeImageScanAuthCountOutcome;
			typedef std::future<DescribeImageScanAuthCountOutcome> DescribeImageScanAuthCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageScanAuthCountRequest&, const DescribeImageScanAuthCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageScanAuthCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageStatisticsResult> DescribeImageStatisticsOutcome;
			typedef std::future<DescribeImageStatisticsOutcome> DescribeImageStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageStatisticsRequest&, const DescribeImageStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageVulListResult> DescribeImageVulListOutcome;
			typedef std::future<DescribeImageVulListOutcome> DescribeImageVulListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageVulListRequest&, const DescribeImageVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstallCaptchaResult> DescribeInstallCaptchaOutcome;
			typedef std::future<DescribeInstallCaptchaOutcome> DescribeInstallCaptchaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeInstallCaptchaRequest&, const DescribeInstallCaptchaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstallCaptchaAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstallCodesResult> DescribeInstallCodesOutcome;
			typedef std::future<DescribeInstallCodesOutcome> DescribeInstallCodesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeInstallCodesRequest&, const DescribeInstallCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstallCodesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAntiBruteForceRulesResult> DescribeInstanceAntiBruteForceRulesOutcome;
			typedef std::future<DescribeInstanceAntiBruteForceRulesOutcome> DescribeInstanceAntiBruteForceRulesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeInstanceAntiBruteForceRulesRequest&, const DescribeInstanceAntiBruteForceRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAntiBruteForceRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceRebootStatusResult> DescribeInstanceRebootStatusOutcome;
			typedef std::future<DescribeInstanceRebootStatusOutcome> DescribeInstanceRebootStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeInstanceRebootStatusRequest&, const DescribeInstanceRebootStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceRebootStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceStatisticsResult> DescribeInstanceStatisticsOutcome;
			typedef std::future<DescribeInstanceStatisticsOutcome> DescribeInstanceStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeInstanceStatisticsRequest&, const DescribeInstanceStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoginBaseConfigsResult> DescribeLoginBaseConfigsOutcome;
			typedef std::future<DescribeLoginBaseConfigsOutcome> DescribeLoginBaseConfigsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeLoginBaseConfigsRequest&, const DescribeLoginBaseConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginBaseConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogstoreStorageResult> DescribeLogstoreStorageOutcome;
			typedef std::future<DescribeLogstoreStorageOutcome> DescribeLogstoreStorageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeLogstoreStorageRequest&, const DescribeLogstoreStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstoreStorageAsyncHandler;
			typedef Outcome<Error, Model::DescribeModuleConfigResult> DescribeModuleConfigOutcome;
			typedef std::future<DescribeModuleConfigOutcome> DescribeModuleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeModuleConfigRequest&, const DescribeModuleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeNoticeConfigResult> DescribeNoticeConfigOutcome;
			typedef std::future<DescribeNoticeConfigOutcome> DescribeNoticeConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeNoticeConfigRequest&, const DescribeNoticeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoticeConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeOnceTaskResult> DescribeOnceTaskOutcome;
			typedef std::future<DescribeOnceTaskOutcome> DescribeOnceTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeOnceTaskRequest&, const DescribeOnceTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnceTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyCountResult> DescribePropertyCountOutcome;
			typedef std::future<DescribePropertyCountOutcome> DescribePropertyCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyCountRequest&, const DescribePropertyCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyCountAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyCronDetailResult> DescribePropertyCronDetailOutcome;
			typedef std::future<DescribePropertyCronDetailOutcome> DescribePropertyCronDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyCronDetailRequest&, const DescribePropertyCronDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyCronDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyPortDetailResult> DescribePropertyPortDetailOutcome;
			typedef std::future<DescribePropertyPortDetailOutcome> DescribePropertyPortDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyPortDetailRequest&, const DescribePropertyPortDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyPortDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyPortItemResult> DescribePropertyPortItemOutcome;
			typedef std::future<DescribePropertyPortItemOutcome> DescribePropertyPortItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyPortItemRequest&, const DescribePropertyPortItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyPortItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyProcDetailResult> DescribePropertyProcDetailOutcome;
			typedef std::future<DescribePropertyProcDetailOutcome> DescribePropertyProcDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyProcDetailRequest&, const DescribePropertyProcDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyProcDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyProcItemResult> DescribePropertyProcItemOutcome;
			typedef std::future<DescribePropertyProcItemOutcome> DescribePropertyProcItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyProcItemRequest&, const DescribePropertyProcItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyProcItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyScaDetailResult> DescribePropertyScaDetailOutcome;
			typedef std::future<DescribePropertyScaDetailOutcome> DescribePropertyScaDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyScaDetailRequest&, const DescribePropertyScaDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyScaDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertySoftwareDetailResult> DescribePropertySoftwareDetailOutcome;
			typedef std::future<DescribePropertySoftwareDetailOutcome> DescribePropertySoftwareDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertySoftwareDetailRequest&, const DescribePropertySoftwareDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertySoftwareDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertySoftwareItemResult> DescribePropertySoftwareItemOutcome;
			typedef std::future<DescribePropertySoftwareItemOutcome> DescribePropertySoftwareItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertySoftwareItemRequest&, const DescribePropertySoftwareItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertySoftwareItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUsageNewestResult> DescribePropertyUsageNewestOutcome;
			typedef std::future<DescribePropertyUsageNewestOutcome> DescribePropertyUsageNewestOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUsageNewestRequest&, const DescribePropertyUsageNewestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUsageNewestAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUserDetailResult> DescribePropertyUserDetailOutcome;
			typedef std::future<DescribePropertyUserDetailOutcome> DescribePropertyUserDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUserDetailRequest&, const DescribePropertyUserDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUserDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUserItemResult> DescribePropertyUserItemOutcome;
			typedef std::future<DescribePropertyUserItemOutcome> DescribePropertyUserItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUserItemRequest&, const DescribePropertyUserItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUserItemAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreJobsResult> DescribeRestoreJobsOutcome;
			typedef std::future<DescribeRestoreJobsOutcome> DescribeRestoreJobsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRestoreJobsRequest&, const DescribeRestoreJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskCheckItemResultResult> DescribeRiskCheckItemResultOutcome;
			typedef std::future<DescribeRiskCheckItemResultOutcome> DescribeRiskCheckItemResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskCheckItemResultRequest&, const DescribeRiskCheckItemResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCheckItemResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskCheckResultResult> DescribeRiskCheckResultOutcome;
			typedef std::future<DescribeRiskCheckResultOutcome> DescribeRiskCheckResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskCheckResultRequest&, const DescribeRiskCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskCheckSummaryResult> DescribeRiskCheckSummaryOutcome;
			typedef std::future<DescribeRiskCheckSummaryOutcome> DescribeRiskCheckSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskCheckSummaryRequest&, const DescribeRiskCheckSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCheckSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskItemTypeResult> DescribeRiskItemTypeOutcome;
			typedef std::future<DescribeRiskItemTypeOutcome> DescribeRiskItemTypeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskItemTypeRequest&, const DescribeRiskItemTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskItemTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskListCheckResultResult> DescribeRiskListCheckResultOutcome;
			typedef std::future<DescribeRiskListCheckResultOutcome> DescribeRiskListCheckResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskListCheckResultRequest&, const DescribeRiskListCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskListCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskTypeResult> DescribeRiskTypeOutcome;
			typedef std::future<DescribeRiskTypeOutcome> DescribeRiskTypeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskTypeRequest&, const DescribeRiskTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeScanTaskProgressResult> DescribeScanTaskProgressOutcome;
			typedef std::future<DescribeScanTaskProgressOutcome> DescribeScanTaskProgressOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeScanTaskProgressRequest&, const DescribeScanTaskProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeSearchConditionResult> DescribeSearchConditionOutcome;
			typedef std::future<DescribeSearchConditionOutcome> DescribeSearchConditionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSearchConditionRequest&, const DescribeSearchConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchConditionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecureSuggestionResult> DescribeSecureSuggestionOutcome;
			typedef std::future<DescribeSecureSuggestionOutcome> DescribeSecureSuggestionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecureSuggestionRequest&, const DescribeSecureSuggestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecureSuggestionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityCheckScheduleConfigResult> DescribeSecurityCheckScheduleConfigOutcome;
			typedef std::future<DescribeSecurityCheckScheduleConfigOutcome> DescribeSecurityCheckScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityCheckScheduleConfigRequest&, const DescribeSecurityCheckScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityCheckScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityEventOperationStatusResult> DescribeSecurityEventOperationStatusOutcome;
			typedef std::future<DescribeSecurityEventOperationStatusOutcome> DescribeSecurityEventOperationStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityEventOperationStatusRequest&, const DescribeSecurityEventOperationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventOperationStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityEventOperationsResult> DescribeSecurityEventOperationsOutcome;
			typedef std::future<DescribeSecurityEventOperationsOutcome> DescribeSecurityEventOperationsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityEventOperationsRequest&, const DescribeSecurityEventOperationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventOperationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityStatInfoResult> DescribeSecurityStatInfoOutcome;
			typedef std::future<DescribeSecurityStatInfoOutcome> DescribeSecurityStatInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityStatInfoRequest&, const DescribeSecurityStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceLinkedRoleStatusResult> DescribeServiceLinkedRoleStatusOutcome;
			typedef std::future<DescribeServiceLinkedRoleStatusOutcome> DescribeServiceLinkedRoleStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeServiceLinkedRoleStatusRequest&, const DescribeServiceLinkedRoleStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceLinkedRoleStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSimilarEventScenariosResult> DescribeSimilarEventScenariosOutcome;
			typedef std::future<DescribeSimilarEventScenariosOutcome> DescribeSimilarEventScenariosOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSimilarEventScenariosRequest&, const DescribeSimilarEventScenariosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimilarEventScenariosAsyncHandler;
			typedef Outcome<Error, Model::DescribeSimilarSecurityEventsResult> DescribeSimilarSecurityEventsOutcome;
			typedef std::future<DescribeSimilarSecurityEventsOutcome> DescribeSimilarSecurityEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSimilarSecurityEventsRequest&, const DescribeSimilarSecurityEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimilarSecurityEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyResult> DescribeStrategyOutcome;
			typedef std::future<DescribeStrategyOutcome> DescribeStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeStrategyRequest&, const DescribeStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyDetailResult> DescribeStrategyDetailOutcome;
			typedef std::future<DescribeStrategyDetailOutcome> DescribeStrategyDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeStrategyDetailRequest&, const DescribeStrategyDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyExecDetailResult> DescribeStrategyExecDetailOutcome;
			typedef std::future<DescribeStrategyExecDetailOutcome> DescribeStrategyExecDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeStrategyExecDetailRequest&, const DescribeStrategyExecDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyExecDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyTargetResult> DescribeStrategyTargetOutcome;
			typedef std::future<DescribeStrategyTargetOutcome> DescribeStrategyTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeStrategyTargetRequest&, const DescribeStrategyTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyTargetAsyncHandler;
			typedef Outcome<Error, Model::DescribeSummaryInfoResult> DescribeSummaryInfoOutcome;
			typedef std::future<DescribeSummaryInfoOutcome> DescribeSummaryInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSummaryInfoRequest&, const DescribeSummaryInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSummaryInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSupportRegionResult> DescribeSupportRegionOutcome;
			typedef std::future<DescribeSupportRegionOutcome> DescribeSupportRegionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSupportRegionRequest&, const DescribeSupportRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportRegionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventDetailResult> DescribeSuspEventDetailOutcome;
			typedef std::future<DescribeSuspEventDetailOutcome> DescribeSuspEventDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventDetailRequest&, const DescribeSuspEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventQuaraFilesResult> DescribeSuspEventQuaraFilesOutcome;
			typedef std::future<DescribeSuspEventQuaraFilesOutcome> DescribeSuspEventQuaraFilesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventQuaraFilesRequest&, const DescribeSuspEventQuaraFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventQuaraFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventsResult> DescribeSuspEventsOutcome;
			typedef std::future<DescribeSuspEventsOutcome> DescribeSuspEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventsRequest&, const DescribeSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspiciousUUIDConfigResult> DescribeSuspiciousUUIDConfigOutcome;
			typedef std::future<DescribeSuspiciousUUIDConfigOutcome> DescribeSuspiciousUUIDConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspiciousUUIDConfigRequest&, const DescribeSuspiciousUUIDConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousUUIDConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBackupMachinesResult> DescribeUserBackupMachinesOutcome;
			typedef std::future<DescribeUserBackupMachinesOutcome> DescribeUserBackupMachinesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUserBackupMachinesRequest&, const DescribeUserBackupMachinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBackupMachinesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBaselineAuthorizationResult> DescribeUserBaselineAuthorizationOutcome;
			typedef std::future<DescribeUserBaselineAuthorizationOutcome> DescribeUserBaselineAuthorizationOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUserBaselineAuthorizationRequest&, const DescribeUserBaselineAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBaselineAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserLayoutAuthorizationResult> DescribeUserLayoutAuthorizationOutcome;
			typedef std::future<DescribeUserLayoutAuthorizationOutcome> DescribeUserLayoutAuthorizationOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUserLayoutAuthorizationRequest&, const DescribeUserLayoutAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserLayoutAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::DescribeUuidsByVulNamesResult> DescribeUuidsByVulNamesOutcome;
			typedef std::future<DescribeUuidsByVulNamesOutcome> DescribeUuidsByVulNamesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUuidsByVulNamesRequest&, const DescribeUuidsByVulNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUuidsByVulNamesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVersionConfigResult> DescribeVersionConfigOutcome;
			typedef std::future<DescribeVersionConfigOutcome> DescribeVersionConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVersionConfigRequest&, const DescribeVersionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcHoneyPotCriteriaResult> DescribeVpcHoneyPotCriteriaOutcome;
			typedef std::future<DescribeVpcHoneyPotCriteriaOutcome> DescribeVpcHoneyPotCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVpcHoneyPotCriteriaRequest&, const DescribeVpcHoneyPotCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcHoneyPotCriteriaAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcHoneyPotListResult> DescribeVpcHoneyPotListOutcome;
			typedef std::future<DescribeVpcHoneyPotListOutcome> DescribeVpcHoneyPotListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVpcHoneyPotListRequest&, const DescribeVpcHoneyPotListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcHoneyPotListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcListResult> DescribeVpcListOutcome;
			typedef std::future<DescribeVpcListOutcome> DescribeVpcListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVpcListRequest&, const DescribeVpcListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulDetailsResult> DescribeVulDetailsOutcome;
			typedef std::future<DescribeVulDetailsOutcome> DescribeVulDetailsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulDetailsRequest&, const DescribeVulDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulExportInfoResult> DescribeVulExportInfoOutcome;
			typedef std::future<DescribeVulExportInfoOutcome> DescribeVulExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulExportInfoRequest&, const DescribeVulExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulListResult> DescribeVulListOutcome;
			typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulListRequest&, const DescribeVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulWhitelistResult> DescribeVulWhitelistOutcome;
			typedef std::future<DescribeVulWhitelistOutcome> DescribeVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulWhitelistRequest&, const DescribeVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeWarningExportInfoResult> DescribeWarningExportInfoOutcome;
			typedef std::future<DescribeWarningExportInfoOutcome> DescribeWarningExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWarningExportInfoRequest&, const DescribeWarningExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeWarningMachinesResult> DescribeWarningMachinesOutcome;
			typedef std::future<DescribeWarningMachinesOutcome> DescribeWarningMachinesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWarningMachinesRequest&, const DescribeWarningMachinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningMachinesAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockBindListResult> DescribeWebLockBindListOutcome;
			typedef std::future<DescribeWebLockBindListOutcome> DescribeWebLockBindListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockBindListRequest&, const DescribeWebLockBindListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockBindListAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockConfigListResult> DescribeWebLockConfigListOutcome;
			typedef std::future<DescribeWebLockConfigListOutcome> DescribeWebLockConfigListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockConfigListRequest&, const DescribeWebLockConfigListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockConfigListAsyncHandler;
			typedef Outcome<Error, Model::ExportRecordResult> ExportRecordOutcome;
			typedef std::future<ExportRecordOutcome> ExportRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExportRecordRequest&, const ExportRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportRecordAsyncHandler;
			typedef Outcome<Error, Model::ExportVulResult> ExportVulOutcome;
			typedef std::future<ExportVulOutcome> ExportVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExportVulRequest&, const ExportVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulAsyncHandler;
			typedef Outcome<Error, Model::ExportWarningResult> ExportWarningOutcome;
			typedef std::future<ExportWarningOutcome> ExportWarningOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExportWarningRequest&, const ExportWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportWarningAsyncHandler;
			typedef Outcome<Error, Model::FixCheckWarningsResult> FixCheckWarningsOutcome;
			typedef std::future<FixCheckWarningsOutcome> FixCheckWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::FixCheckWarningsRequest&, const FixCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FixCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::GetBackupStorageCountResult> GetBackupStorageCountOutcome;
			typedef std::future<GetBackupStorageCountOutcome> GetBackupStorageCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetBackupStorageCountRequest&, const GetBackupStorageCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBackupStorageCountAsyncHandler;
			typedef Outcome<Error, Model::GetFileDetectResultResult> GetFileDetectResultOutcome;
			typedef std::future<GetFileDetectResultOutcome> GetFileDetectResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetFileDetectResultRequest&, const GetFileDetectResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileDetectResultAsyncHandler;
			typedef Outcome<Error, Model::GetSuspiciousStatisticsResult> GetSuspiciousStatisticsOutcome;
			typedef std::future<GetSuspiciousStatisticsOutcome> GetSuspiciousStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetSuspiciousStatisticsRequest&, const GetSuspiciousStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSuspiciousStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetVulStatisticsResult> GetVulStatisticsOutcome;
			typedef std::future<GetVulStatisticsOutcome> GetVulStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetVulStatisticsRequest&, const GetVulStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVulStatisticsAsyncHandler;
			typedef Outcome<Error, Model::HandleSecurityEventsResult> HandleSecurityEventsOutcome;
			typedef std::future<HandleSecurityEventsOutcome> HandleSecurityEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::HandleSecurityEventsRequest&, const HandleSecurityEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HandleSecurityEventsAsyncHandler;
			typedef Outcome<Error, Model::HandleSimilarSecurityEventsResult> HandleSimilarSecurityEventsOutcome;
			typedef std::future<HandleSimilarSecurityEventsOutcome> HandleSimilarSecurityEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::HandleSimilarSecurityEventsRequest&, const HandleSimilarSecurityEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HandleSimilarSecurityEventsAsyncHandler;
			typedef Outcome<Error, Model::IgnoreHcCheckWarningsResult> IgnoreHcCheckWarningsOutcome;
			typedef std::future<IgnoreHcCheckWarningsOutcome> IgnoreHcCheckWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::IgnoreHcCheckWarningsRequest&, const IgnoreHcCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreHcCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::InstallBackupClientResult> InstallBackupClientOutcome;
			typedef std::future<InstallBackupClientOutcome> InstallBackupClientOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::InstallBackupClientRequest&, const InstallBackupClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallBackupClientAsyncHandler;
			typedef Outcome<Error, Model::InstallCloudMonitorResult> InstallCloudMonitorOutcome;
			typedef std::future<InstallCloudMonitorOutcome> InstallCloudMonitorOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::InstallCloudMonitorRequest&, const InstallCloudMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallCloudMonitorAsyncHandler;
			typedef Outcome<Error, Model::ListCheckResultResult> ListCheckResultOutcome;
			typedef std::future<ListCheckResultOutcome> ListCheckResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListCheckResultRequest&, const ListCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckResultAsyncHandler;
			typedef Outcome<Error, Model::ListVulAutoRepairConfigResult> ListVulAutoRepairConfigOutcome;
			typedef std::future<ListVulAutoRepairConfigOutcome> ListVulAutoRepairConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListVulAutoRepairConfigRequest&, const ListVulAutoRepairConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVulAutoRepairConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyAntiBruteForceRuleResult> ModifyAntiBruteForceRuleOutcome;
			typedef std::future<ModifyAntiBruteForceRuleOutcome> ModifyAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAntiBruteForceRuleRequest&, const ModifyAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyAssetGroupResult> ModifyAssetGroupOutcome;
			typedef std::future<ModifyAssetGroupOutcome> ModifyAssetGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAssetGroupRequest&, const ModifyAssetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyStatusResult> ModifyBackupPolicyStatusOutcome;
			typedef std::future<ModifyBackupPolicyStatusOutcome> ModifyBackupPolicyStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyBackupPolicyStatusRequest&, const ModifyBackupPolicyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyCreateVulWhitelistResult> ModifyCreateVulWhitelistOutcome;
			typedef std::future<ModifyCreateVulWhitelistOutcome> ModifyCreateVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyCreateVulWhitelistRequest&, const ModifyCreateVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCreateVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyEmgVulSubmitResult> ModifyEmgVulSubmitOutcome;
			typedef std::future<ModifyEmgVulSubmitOutcome> ModifyEmgVulSubmitOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyEmgVulSubmitRequest&, const ModifyEmgVulSubmitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEmgVulSubmitAsyncHandler;
			typedef Outcome<Error, Model::ModifyGroupPropertyResult> ModifyGroupPropertyOutcome;
			typedef std::future<ModifyGroupPropertyOutcome> ModifyGroupPropertyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyGroupPropertyRequest&, const ModifyGroupPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupPropertyAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAntiBruteForceRuleResult> ModifyInstanceAntiBruteForceRuleOutcome;
			typedef std::future<ModifyInstanceAntiBruteForceRuleOutcome> ModifyInstanceAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyInstanceAntiBruteForceRuleRequest&, const ModifyInstanceAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoginBaseConfigResult> ModifyLoginBaseConfigOutcome;
			typedef std::future<ModifyLoginBaseConfigOutcome> ModifyLoginBaseConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyLoginBaseConfigRequest&, const ModifyLoginBaseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginBaseConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoginSwitchConfigResult> ModifyLoginSwitchConfigOutcome;
			typedef std::future<ModifyLoginSwitchConfigOutcome> ModifyLoginSwitchConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyLoginSwitchConfigRequest&, const ModifyLoginSwitchConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginSwitchConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyOpenLogShipperResult> ModifyOpenLogShipperOutcome;
			typedef std::future<ModifyOpenLogShipperOutcome> ModifyOpenLogShipperOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyOpenLogShipperRequest&, const ModifyOpenLogShipperOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOpenLogShipperAsyncHandler;
			typedef Outcome<Error, Model::ModifyOperateVulResult> ModifyOperateVulOutcome;
			typedef std::future<ModifyOperateVulOutcome> ModifyOperateVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyOperateVulRequest&, const ModifyOperateVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOperateVulAsyncHandler;
			typedef Outcome<Error, Model::ModifyPropertyScheduleConfigResult> ModifyPropertyScheduleConfigOutcome;
			typedef std::future<ModifyPropertyScheduleConfigOutcome> ModifyPropertyScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyPropertyScheduleConfigRequest&, const ModifyPropertyScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPropertyScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyPushAllTaskResult> ModifyPushAllTaskOutcome;
			typedef std::future<ModifyPushAllTaskOutcome> ModifyPushAllTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyPushAllTaskRequest&, const ModifyPushAllTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPushAllTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyRiskCheckStatusResult> ModifyRiskCheckStatusOutcome;
			typedef std::future<ModifyRiskCheckStatusOutcome> ModifyRiskCheckStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRiskCheckStatusRequest&, const ModifyRiskCheckStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCheckStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyRiskSingleResultStatusResult> ModifyRiskSingleResultStatusOutcome;
			typedef std::future<ModifyRiskSingleResultStatusOutcome> ModifyRiskSingleResultStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRiskSingleResultStatusRequest&, const ModifyRiskSingleResultStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskSingleResultStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityCheckScheduleConfigResult> ModifySecurityCheckScheduleConfigOutcome;
			typedef std::future<ModifySecurityCheckScheduleConfigOutcome> ModifySecurityCheckScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifySecurityCheckScheduleConfigRequest&, const ModifySecurityCheckScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityCheckScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyStartVulScanResult> ModifyStartVulScanOutcome;
			typedef std::future<ModifyStartVulScanOutcome> ModifyStartVulScanOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyStartVulScanRequest&, const ModifyStartVulScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStartVulScanAsyncHandler;
			typedef Outcome<Error, Model::ModifyStrategyResult> ModifyStrategyOutcome;
			typedef std::future<ModifyStrategyOutcome> ModifyStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyStrategyRequest&, const ModifyStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategyAsyncHandler;
			typedef Outcome<Error, Model::ModifyStrategyTargetResult> ModifyStrategyTargetOutcome;
			typedef std::future<ModifyStrategyTargetOutcome> ModifyStrategyTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyStrategyTargetRequest&, const ModifyStrategyTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategyTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyTagWithUuidResult> ModifyTagWithUuidOutcome;
			typedef std::future<ModifyTagWithUuidOutcome> ModifyTagWithUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyTagWithUuidRequest&, const ModifyTagWithUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagWithUuidAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpcHoneyPotResult> ModifyVpcHoneyPotOutcome;
			typedef std::future<ModifyVpcHoneyPotOutcome> ModifyVpcHoneyPotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyVpcHoneyPotRequest&, const ModifyVpcHoneyPotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcHoneyPotAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulTargetConfigResult> ModifyVulTargetConfigOutcome;
			typedef std::future<ModifyVulTargetConfigOutcome> ModifyVulTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyVulTargetConfigRequest&, const ModifyVulTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockCreateConfigResult> ModifyWebLockCreateConfigOutcome;
			typedef std::future<ModifyWebLockCreateConfigOutcome> ModifyWebLockCreateConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockCreateConfigRequest&, const ModifyWebLockCreateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockCreateConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockDeleteConfigResult> ModifyWebLockDeleteConfigOutcome;
			typedef std::future<ModifyWebLockDeleteConfigOutcome> ModifyWebLockDeleteConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockDeleteConfigRequest&, const ModifyWebLockDeleteConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockDeleteConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockStartResult> ModifyWebLockStartOutcome;
			typedef std::future<ModifyWebLockStartOutcome> ModifyWebLockStartOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockStartRequest&, const ModifyWebLockStartOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockStartAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockStatusResult> ModifyWebLockStatusOutcome;
			typedef std::future<ModifyWebLockStatusOutcome> ModifyWebLockStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockStatusRequest&, const ModifyWebLockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockUpdateConfigResult> ModifyWebLockUpdateConfigOutcome;
			typedef std::future<ModifyWebLockUpdateConfigOutcome> ModifyWebLockUpdateConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockUpdateConfigRequest&, const ModifyWebLockUpdateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockUpdateConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateAgentClientInstallResult> OperateAgentClientInstallOutcome;
			typedef std::future<OperateAgentClientInstallOutcome> OperateAgentClientInstallOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateAgentClientInstallRequest&, const OperateAgentClientInstallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateAgentClientInstallAsyncHandler;
			typedef Outcome<Error, Model::OperateSuspiciousTargetConfigResult> OperateSuspiciousTargetConfigOutcome;
			typedef std::future<OperateSuspiciousTargetConfigOutcome> OperateSuspiciousTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateSuspiciousTargetConfigRequest&, const OperateSuspiciousTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateSuspiciousTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateVulsResult> OperateVulsOutcome;
			typedef std::future<OperateVulsOutcome> OperateVulsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateVulsRequest&, const OperateVulsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateVulsAsyncHandler;
			typedef Outcome<Error, Model::OperationCancelIgnoreSuspEventResult> OperationCancelIgnoreSuspEventOutcome;
			typedef std::future<OperationCancelIgnoreSuspEventOutcome> OperationCancelIgnoreSuspEventOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperationCancelIgnoreSuspEventRequest&, const OperationCancelIgnoreSuspEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperationCancelIgnoreSuspEventAsyncHandler;
			typedef Outcome<Error, Model::OperationSuspEventsResult> OperationSuspEventsOutcome;
			typedef std::future<OperationSuspEventsOutcome> OperationSuspEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperationSuspEventsRequest&, const OperationSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperationSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::PauseClientResult> PauseClientOutcome;
			typedef std::future<PauseClientOutcome> PauseClientOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::PauseClientRequest&, const PauseClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseClientAsyncHandler;
			typedef Outcome<Error, Model::PublicCreateImageScanTaskResult> PublicCreateImageScanTaskOutcome;
			typedef std::future<PublicCreateImageScanTaskOutcome> PublicCreateImageScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::PublicCreateImageScanTaskRequest&, const PublicCreateImageScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublicCreateImageScanTaskAsyncHandler;
			typedef Outcome<Error, Model::PublicPreCheckImageScanTaskResult> PublicPreCheckImageScanTaskOutcome;
			typedef std::future<PublicPreCheckImageScanTaskOutcome> PublicPreCheckImageScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::PublicPreCheckImageScanTaskRequest&, const PublicPreCheckImageScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublicPreCheckImageScanTaskAsyncHandler;
			typedef Outcome<Error, Model::PublicSyncAndCreateImageScanTaskResult> PublicSyncAndCreateImageScanTaskOutcome;
			typedef std::future<PublicSyncAndCreateImageScanTaskOutcome> PublicSyncAndCreateImageScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::PublicSyncAndCreateImageScanTaskRequest&, const PublicSyncAndCreateImageScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublicSyncAndCreateImageScanTaskAsyncHandler;
			typedef Outcome<Error, Model::QueryGroupIdByGroupNameResult> QueryGroupIdByGroupNameOutcome;
			typedef std::future<QueryGroupIdByGroupNameOutcome> QueryGroupIdByGroupNameOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::QueryGroupIdByGroupNameRequest&, const QueryGroupIdByGroupNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGroupIdByGroupNameAsyncHandler;
			typedef Outcome<Error, Model::QueryGroupedSecurityEventMarkMissListResult> QueryGroupedSecurityEventMarkMissListOutcome;
			typedef std::future<QueryGroupedSecurityEventMarkMissListOutcome> QueryGroupedSecurityEventMarkMissListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::QueryGroupedSecurityEventMarkMissListRequest&, const QueryGroupedSecurityEventMarkMissListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGroupedSecurityEventMarkMissListAsyncHandler;
			typedef Outcome<Error, Model::RebootMachineResult> RebootMachineOutcome;
			typedef std::future<RebootMachineOutcome> RebootMachineOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RebootMachineRequest&, const RebootMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootMachineAsyncHandler;
			typedef Outcome<Error, Model::RefreshAssetsResult> RefreshAssetsOutcome;
			typedef std::future<RefreshAssetsOutcome> RefreshAssetsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RefreshAssetsRequest&, const RefreshAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshAssetsAsyncHandler;
			typedef Outcome<Error, Model::RefreshContainerAssetsResult> RefreshContainerAssetsOutcome;
			typedef std::future<RefreshContainerAssetsOutcome> RefreshContainerAssetsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RefreshContainerAssetsRequest&, const RefreshContainerAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshContainerAssetsAsyncHandler;
			typedef Outcome<Error, Model::RollbackSuspEventQuaraFileResult> RollbackSuspEventQuaraFileOutcome;
			typedef std::future<RollbackSuspEventQuaraFileOutcome> RollbackSuspEventQuaraFileOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RollbackSuspEventQuaraFileRequest&, const RollbackSuspEventQuaraFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackSuspEventQuaraFileAsyncHandler;
			typedef Outcome<Error, Model::SasInstallCodeResult> SasInstallCodeOutcome;
			typedef std::future<SasInstallCodeOutcome> SasInstallCodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::SasInstallCodeRequest&, const SasInstallCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SasInstallCodeAsyncHandler;
			typedef Outcome<Error, Model::StartBaselineSecurityCheckResult> StartBaselineSecurityCheckOutcome;
			typedef std::future<StartBaselineSecurityCheckOutcome> StartBaselineSecurityCheckOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::StartBaselineSecurityCheckRequest&, const StartBaselineSecurityCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBaselineSecurityCheckAsyncHandler;
			typedef Outcome<Error, Model::StartVirusScanTaskResult> StartVirusScanTaskOutcome;
			typedef std::future<StartVirusScanTaskOutcome> StartVirusScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::StartVirusScanTaskRequest&, const StartVirusScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartVirusScanTaskAsyncHandler;
			typedef Outcome<Error, Model::UnbindAegisResult> UnbindAegisOutcome;
			typedef std::future<UnbindAegisOutcome> UnbindAegisOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UnbindAegisRequest&, const UnbindAegisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAegisAsyncHandler;
			typedef Outcome<Error, Model::UninstallBackupClientResult> UninstallBackupClientOutcome;
			typedef std::future<UninstallBackupClientOutcome> UninstallBackupClientOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UninstallBackupClientRequest&, const UninstallBackupClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallBackupClientAsyncHandler;
			typedef Outcome<Error, Model::ValidateHcWarningsResult> ValidateHcWarningsOutcome;
			typedef std::future<ValidateHcWarningsOutcome> ValidateHcWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ValidateHcWarningsRequest&, const ValidateHcWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateHcWarningsAsyncHandler;

			SasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SasClient();
			AddVpcHoneyPotOutcome addVpcHoneyPot(const Model::AddVpcHoneyPotRequest &request)const;
			void addVpcHoneyPotAsync(const Model::AddVpcHoneyPotRequest& request, const AddVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVpcHoneyPotOutcomeCallable addVpcHoneyPotCallable(const Model::AddVpcHoneyPotRequest& request) const;
			CheckQuaraFileIdOutcome checkQuaraFileId(const Model::CheckQuaraFileIdRequest &request)const;
			void checkQuaraFileIdAsync(const Model::CheckQuaraFileIdRequest& request, const CheckQuaraFileIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckQuaraFileIdOutcomeCallable checkQuaraFileIdCallable(const Model::CheckQuaraFileIdRequest& request) const;
			CheckSecurityEventIdOutcome checkSecurityEventId(const Model::CheckSecurityEventIdRequest &request)const;
			void checkSecurityEventIdAsync(const Model::CheckSecurityEventIdRequest& request, const CheckSecurityEventIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSecurityEventIdOutcomeCallable checkSecurityEventIdCallable(const Model::CheckSecurityEventIdRequest& request) const;
			CreateAntiBruteForceRuleOutcome createAntiBruteForceRule(const Model::CreateAntiBruteForceRuleRequest &request)const;
			void createAntiBruteForceRuleAsync(const Model::CreateAntiBruteForceRuleRequest& request, const CreateAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAntiBruteForceRuleOutcomeCallable createAntiBruteForceRuleCallable(const Model::CreateAntiBruteForceRuleRequest& request) const;
			CreateBackupPolicyOutcome createBackupPolicy(const Model::CreateBackupPolicyRequest &request)const;
			void createBackupPolicyAsync(const Model::CreateBackupPolicyRequest& request, const CreateBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupPolicyOutcomeCallable createBackupPolicyCallable(const Model::CreateBackupPolicyRequest& request) const;
			CreateFileDetectOutcome createFileDetect(const Model::CreateFileDetectRequest &request)const;
			void createFileDetectAsync(const Model::CreateFileDetectRequest& request, const CreateFileDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileDetectOutcomeCallable createFileDetectCallable(const Model::CreateFileDetectRequest& request) const;
			CreateFileDetectUploadUrlOutcome createFileDetectUploadUrl(const Model::CreateFileDetectUploadUrlRequest &request)const;
			void createFileDetectUploadUrlAsync(const Model::CreateFileDetectUploadUrlRequest& request, const CreateFileDetectUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileDetectUploadUrlOutcomeCallable createFileDetectUploadUrlCallable(const Model::CreateFileDetectUploadUrlRequest& request) const;
			CreateOrUpdateAssetGroupOutcome createOrUpdateAssetGroup(const Model::CreateOrUpdateAssetGroupRequest &request)const;
			void createOrUpdateAssetGroupAsync(const Model::CreateOrUpdateAssetGroupRequest& request, const CreateOrUpdateAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateAssetGroupOutcomeCallable createOrUpdateAssetGroupCallable(const Model::CreateOrUpdateAssetGroupRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			CreateSimilarSecurityEventsQueryTaskOutcome createSimilarSecurityEventsQueryTask(const Model::CreateSimilarSecurityEventsQueryTaskRequest &request)const;
			void createSimilarSecurityEventsQueryTaskAsync(const Model::CreateSimilarSecurityEventsQueryTaskRequest& request, const CreateSimilarSecurityEventsQueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSimilarSecurityEventsQueryTaskOutcomeCallable createSimilarSecurityEventsQueryTaskCallable(const Model::CreateSimilarSecurityEventsQueryTaskRequest& request) const;
			CreateSuspEventNoteOutcome createSuspEventNote(const Model::CreateSuspEventNoteRequest &request)const;
			void createSuspEventNoteAsync(const Model::CreateSuspEventNoteRequest& request, const CreateSuspEventNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSuspEventNoteOutcomeCallable createSuspEventNoteCallable(const Model::CreateSuspEventNoteRequest& request) const;
			CreateVulAutoRepairConfigOutcome createVulAutoRepairConfig(const Model::CreateVulAutoRepairConfigRequest &request)const;
			void createVulAutoRepairConfigAsync(const Model::CreateVulAutoRepairConfigRequest& request, const CreateVulAutoRepairConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVulAutoRepairConfigOutcomeCallable createVulAutoRepairConfigCallable(const Model::CreateVulAutoRepairConfigRequest& request) const;
			DeleteBackupPolicyOutcome deleteBackupPolicy(const Model::DeleteBackupPolicyRequest &request)const;
			void deleteBackupPolicyAsync(const Model::DeleteBackupPolicyRequest& request, const DeleteBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupPolicyOutcomeCallable deleteBackupPolicyCallable(const Model::DeleteBackupPolicyRequest& request) const;
			DeleteBackupPolicyMachineOutcome deleteBackupPolicyMachine(const Model::DeleteBackupPolicyMachineRequest &request)const;
			void deleteBackupPolicyMachineAsync(const Model::DeleteBackupPolicyMachineRequest& request, const DeleteBackupPolicyMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupPolicyMachineOutcomeCallable deleteBackupPolicyMachineCallable(const Model::DeleteBackupPolicyMachineRequest& request) const;
			DeleteGroupOutcome deleteGroup(const Model::DeleteGroupRequest &request)const;
			void deleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupOutcomeCallable deleteGroupCallable(const Model::DeleteGroupRequest& request) const;
			DeleteLoginBaseConfigOutcome deleteLoginBaseConfig(const Model::DeleteLoginBaseConfigRequest &request)const;
			void deleteLoginBaseConfigAsync(const Model::DeleteLoginBaseConfigRequest& request, const DeleteLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoginBaseConfigOutcomeCallable deleteLoginBaseConfigCallable(const Model::DeleteLoginBaseConfigRequest& request) const;
			DeleteStrategyOutcome deleteStrategy(const Model::DeleteStrategyRequest &request)const;
			void deleteStrategyAsync(const Model::DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStrategyOutcomeCallable deleteStrategyCallable(const Model::DeleteStrategyRequest& request) const;
			DeleteTagWithUuidOutcome deleteTagWithUuid(const Model::DeleteTagWithUuidRequest &request)const;
			void deleteTagWithUuidAsync(const Model::DeleteTagWithUuidRequest& request, const DeleteTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagWithUuidOutcomeCallable deleteTagWithUuidCallable(const Model::DeleteTagWithUuidRequest& request) const;
			DeleteVpcHoneyPotOutcome deleteVpcHoneyPot(const Model::DeleteVpcHoneyPotRequest &request)const;
			void deleteVpcHoneyPotAsync(const Model::DeleteVpcHoneyPotRequest& request, const DeleteVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcHoneyPotOutcomeCallable deleteVpcHoneyPotCallable(const Model::DeleteVpcHoneyPotRequest& request) const;
			DescribeAccessKeyLeakDetailOutcome describeAccessKeyLeakDetail(const Model::DescribeAccessKeyLeakDetailRequest &request)const;
			void describeAccessKeyLeakDetailAsync(const Model::DescribeAccessKeyLeakDetailRequest& request, const DescribeAccessKeyLeakDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessKeyLeakDetailOutcomeCallable describeAccessKeyLeakDetailCallable(const Model::DescribeAccessKeyLeakDetailRequest& request) const;
			DescribeAccesskeyLeakListOutcome describeAccesskeyLeakList(const Model::DescribeAccesskeyLeakListRequest &request)const;
			void describeAccesskeyLeakListAsync(const Model::DescribeAccesskeyLeakListRequest& request, const DescribeAccesskeyLeakListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccesskeyLeakListOutcomeCallable describeAccesskeyLeakListCallable(const Model::DescribeAccesskeyLeakListRequest& request) const;
			DescribeAffectedMaliciousFileImagesOutcome describeAffectedMaliciousFileImages(const Model::DescribeAffectedMaliciousFileImagesRequest &request)const;
			void describeAffectedMaliciousFileImagesAsync(const Model::DescribeAffectedMaliciousFileImagesRequest& request, const DescribeAffectedMaliciousFileImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAffectedMaliciousFileImagesOutcomeCallable describeAffectedMaliciousFileImagesCallable(const Model::DescribeAffectedMaliciousFileImagesRequest& request) const;
			DescribeAlarmEventDetailOutcome describeAlarmEventDetail(const Model::DescribeAlarmEventDetailRequest &request)const;
			void describeAlarmEventDetailAsync(const Model::DescribeAlarmEventDetailRequest& request, const DescribeAlarmEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventDetailOutcomeCallable describeAlarmEventDetailCallable(const Model::DescribeAlarmEventDetailRequest& request) const;
			DescribeAlarmEventListOutcome describeAlarmEventList(const Model::DescribeAlarmEventListRequest &request)const;
			void describeAlarmEventListAsync(const Model::DescribeAlarmEventListRequest& request, const DescribeAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventListOutcomeCallable describeAlarmEventListCallable(const Model::DescribeAlarmEventListRequest& request) const;
			DescribeAlarmEventStackInfoOutcome describeAlarmEventStackInfo(const Model::DescribeAlarmEventStackInfoRequest &request)const;
			void describeAlarmEventStackInfoAsync(const Model::DescribeAlarmEventStackInfoRequest& request, const DescribeAlarmEventStackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventStackInfoOutcomeCallable describeAlarmEventStackInfoCallable(const Model::DescribeAlarmEventStackInfoRequest& request) const;
			DescribeAllEntityOutcome describeAllEntity(const Model::DescribeAllEntityRequest &request)const;
			void describeAllEntityAsync(const Model::DescribeAllEntityRequest& request, const DescribeAllEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllEntityOutcomeCallable describeAllEntityCallable(const Model::DescribeAllEntityRequest& request) const;
			DescribeAllGroupsOutcome describeAllGroups(const Model::DescribeAllGroupsRequest &request)const;
			void describeAllGroupsAsync(const Model::DescribeAllGroupsRequest& request, const DescribeAllGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllGroupsOutcomeCallable describeAllGroupsCallable(const Model::DescribeAllGroupsRequest& request) const;
			DescribeAntiBruteForceRulesOutcome describeAntiBruteForceRules(const Model::DescribeAntiBruteForceRulesRequest &request)const;
			void describeAntiBruteForceRulesAsync(const Model::DescribeAntiBruteForceRulesRequest& request, const DescribeAntiBruteForceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAntiBruteForceRulesOutcomeCallable describeAntiBruteForceRulesCallable(const Model::DescribeAntiBruteForceRulesRequest& request) const;
			DescribeAssetDetailByUuidOutcome describeAssetDetailByUuid(const Model::DescribeAssetDetailByUuidRequest &request)const;
			void describeAssetDetailByUuidAsync(const Model::DescribeAssetDetailByUuidRequest& request, const DescribeAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetDetailByUuidOutcomeCallable describeAssetDetailByUuidCallable(const Model::DescribeAssetDetailByUuidRequest& request) const;
			DescribeAssetDetailByUuidsOutcome describeAssetDetailByUuids(const Model::DescribeAssetDetailByUuidsRequest &request)const;
			void describeAssetDetailByUuidsAsync(const Model::DescribeAssetDetailByUuidsRequest& request, const DescribeAssetDetailByUuidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetDetailByUuidsOutcomeCallable describeAssetDetailByUuidsCallable(const Model::DescribeAssetDetailByUuidsRequest& request) const;
			DescribeAssetSummaryOutcome describeAssetSummary(const Model::DescribeAssetSummaryRequest &request)const;
			void describeAssetSummaryAsync(const Model::DescribeAssetSummaryRequest& request, const DescribeAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetSummaryOutcomeCallable describeAssetSummaryCallable(const Model::DescribeAssetSummaryRequest& request) const;
			DescribeAttackAnalysisDataOutcome describeAttackAnalysisData(const Model::DescribeAttackAnalysisDataRequest &request)const;
			void describeAttackAnalysisDataAsync(const Model::DescribeAttackAnalysisDataRequest& request, const DescribeAttackAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAttackAnalysisDataOutcomeCallable describeAttackAnalysisDataCallable(const Model::DescribeAttackAnalysisDataRequest& request) const;
			DescribeAutoDelConfigOutcome describeAutoDelConfig(const Model::DescribeAutoDelConfigRequest &request)const;
			void describeAutoDelConfigAsync(const Model::DescribeAutoDelConfigRequest& request, const DescribeAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoDelConfigOutcomeCallable describeAutoDelConfigCallable(const Model::DescribeAutoDelConfigRequest& request) const;
			DescribeBackupClientsOutcome describeBackupClients(const Model::DescribeBackupClientsRequest &request)const;
			void describeBackupClientsAsync(const Model::DescribeBackupClientsRequest& request, const DescribeBackupClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupClientsOutcomeCallable describeBackupClientsCallable(const Model::DescribeBackupClientsRequest& request) const;
			DescribeBackupFilesOutcome describeBackupFiles(const Model::DescribeBackupFilesRequest &request)const;
			void describeBackupFilesAsync(const Model::DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupFilesOutcomeCallable describeBackupFilesCallable(const Model::DescribeBackupFilesRequest& request) const;
			DescribeBackupPoliciesOutcome describeBackupPolicies(const Model::DescribeBackupPoliciesRequest &request)const;
			void describeBackupPoliciesAsync(const Model::DescribeBackupPoliciesRequest& request, const DescribeBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPoliciesOutcomeCallable describeBackupPoliciesCallable(const Model::DescribeBackupPoliciesRequest& request) const;
			DescribeBackupRestoreCountOutcome describeBackupRestoreCount(const Model::DescribeBackupRestoreCountRequest &request)const;
			void describeBackupRestoreCountAsync(const Model::DescribeBackupRestoreCountRequest& request, const DescribeBackupRestoreCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupRestoreCountOutcomeCallable describeBackupRestoreCountCallable(const Model::DescribeBackupRestoreCountRequest& request) const;
			DescribeBruteForceSummaryOutcome describeBruteForceSummary(const Model::DescribeBruteForceSummaryRequest &request)const;
			void describeBruteForceSummaryAsync(const Model::DescribeBruteForceSummaryRequest& request, const DescribeBruteForceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBruteForceSummaryOutcomeCallable describeBruteForceSummaryCallable(const Model::DescribeBruteForceSummaryRequest& request) const;
			DescribeCheckEcsWarningsOutcome describeCheckEcsWarnings(const Model::DescribeCheckEcsWarningsRequest &request)const;
			void describeCheckEcsWarningsAsync(const Model::DescribeCheckEcsWarningsRequest& request, const DescribeCheckEcsWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckEcsWarningsOutcomeCallable describeCheckEcsWarningsCallable(const Model::DescribeCheckEcsWarningsRequest& request) const;
			DescribeCheckWarningDetailOutcome describeCheckWarningDetail(const Model::DescribeCheckWarningDetailRequest &request)const;
			void describeCheckWarningDetailAsync(const Model::DescribeCheckWarningDetailRequest& request, const DescribeCheckWarningDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningDetailOutcomeCallable describeCheckWarningDetailCallable(const Model::DescribeCheckWarningDetailRequest& request) const;
			DescribeCheckWarningSummaryOutcome describeCheckWarningSummary(const Model::DescribeCheckWarningSummaryRequest &request)const;
			void describeCheckWarningSummaryAsync(const Model::DescribeCheckWarningSummaryRequest& request, const DescribeCheckWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningSummaryOutcomeCallable describeCheckWarningSummaryCallable(const Model::DescribeCheckWarningSummaryRequest& request) const;
			DescribeCheckWarningsOutcome describeCheckWarnings(const Model::DescribeCheckWarningsRequest &request)const;
			void describeCheckWarningsAsync(const Model::DescribeCheckWarningsRequest& request, const DescribeCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningsOutcomeCallable describeCheckWarningsCallable(const Model::DescribeCheckWarningsRequest& request) const;
			DescribeCloudCenterInstancesOutcome describeCloudCenterInstances(const Model::DescribeCloudCenterInstancesRequest &request)const;
			void describeCloudCenterInstancesAsync(const Model::DescribeCloudCenterInstancesRequest& request, const DescribeCloudCenterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudCenterInstancesOutcomeCallable describeCloudCenterInstancesCallable(const Model::DescribeCloudCenterInstancesRequest& request) const;
			DescribeCloudProductFieldStatisticsOutcome describeCloudProductFieldStatistics(const Model::DescribeCloudProductFieldStatisticsRequest &request)const;
			void describeCloudProductFieldStatisticsAsync(const Model::DescribeCloudProductFieldStatisticsRequest& request, const DescribeCloudProductFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudProductFieldStatisticsOutcomeCallable describeCloudProductFieldStatisticsCallable(const Model::DescribeCloudProductFieldStatisticsRequest& request) const;
			DescribeConcernNecessityOutcome describeConcernNecessity(const Model::DescribeConcernNecessityRequest &request)const;
			void describeConcernNecessityAsync(const Model::DescribeConcernNecessityRequest& request, const DescribeConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConcernNecessityOutcomeCallable describeConcernNecessityCallable(const Model::DescribeConcernNecessityRequest& request) const;
			DescribeContainerStatisticsOutcome describeContainerStatistics(const Model::DescribeContainerStatisticsRequest &request)const;
			void describeContainerStatisticsAsync(const Model::DescribeContainerStatisticsRequest& request, const DescribeContainerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContainerStatisticsOutcomeCallable describeContainerStatisticsCallable(const Model::DescribeContainerStatisticsRequest& request) const;
			DescribeCriteriaOutcome describeCriteria(const Model::DescribeCriteriaRequest &request)const;
			void describeCriteriaAsync(const Model::DescribeCriteriaRequest& request, const DescribeCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCriteriaOutcomeCallable describeCriteriaCallable(const Model::DescribeCriteriaRequest& request) const;
			DescribeDingTalkOutcome describeDingTalk(const Model::DescribeDingTalkRequest &request)const;
			void describeDingTalkAsync(const Model::DescribeDingTalkRequest& request, const DescribeDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDingTalkOutcomeCallable describeDingTalkCallable(const Model::DescribeDingTalkRequest& request) const;
			DescribeDomainCountOutcome describeDomainCount(const Model::DescribeDomainCountRequest &request)const;
			void describeDomainCountAsync(const Model::DescribeDomainCountRequest& request, const DescribeDomainCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainCountOutcomeCallable describeDomainCountCallable(const Model::DescribeDomainCountRequest& request) const;
			DescribeDomainDetailOutcome describeDomainDetail(const Model::DescribeDomainDetailRequest &request)const;
			void describeDomainDetailAsync(const Model::DescribeDomainDetailRequest& request, const DescribeDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainDetailOutcomeCallable describeDomainDetailCallable(const Model::DescribeDomainDetailRequest& request) const;
			DescribeDomainListOutcome describeDomainList(const Model::DescribeDomainListRequest &request)const;
			void describeDomainListAsync(const Model::DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainListOutcomeCallable describeDomainListCallable(const Model::DescribeDomainListRequest& request) const;
			DescribeEmgVulItemOutcome describeEmgVulItem(const Model::DescribeEmgVulItemRequest &request)const;
			void describeEmgVulItemAsync(const Model::DescribeEmgVulItemRequest& request, const DescribeEmgVulItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmgVulItemOutcomeCallable describeEmgVulItemCallable(const Model::DescribeEmgVulItemRequest& request) const;
			DescribeExportInfoOutcome describeExportInfo(const Model::DescribeExportInfoRequest &request)const;
			void describeExportInfoAsync(const Model::DescribeExportInfoRequest& request, const DescribeExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExportInfoOutcomeCallable describeExportInfoCallable(const Model::DescribeExportInfoRequest& request) const;
			DescribeExposedInstanceCriteriaOutcome describeExposedInstanceCriteria(const Model::DescribeExposedInstanceCriteriaRequest &request)const;
			void describeExposedInstanceCriteriaAsync(const Model::DescribeExposedInstanceCriteriaRequest& request, const DescribeExposedInstanceCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExposedInstanceCriteriaOutcomeCallable describeExposedInstanceCriteriaCallable(const Model::DescribeExposedInstanceCriteriaRequest& request) const;
			DescribeExposedInstanceDetailOutcome describeExposedInstanceDetail(const Model::DescribeExposedInstanceDetailRequest &request)const;
			void describeExposedInstanceDetailAsync(const Model::DescribeExposedInstanceDetailRequest& request, const DescribeExposedInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExposedInstanceDetailOutcomeCallable describeExposedInstanceDetailCallable(const Model::DescribeExposedInstanceDetailRequest& request) const;
			DescribeExposedInstanceListOutcome describeExposedInstanceList(const Model::DescribeExposedInstanceListRequest &request)const;
			void describeExposedInstanceListAsync(const Model::DescribeExposedInstanceListRequest& request, const DescribeExposedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExposedInstanceListOutcomeCallable describeExposedInstanceListCallable(const Model::DescribeExposedInstanceListRequest& request) const;
			DescribeExposedStatisticsOutcome describeExposedStatistics(const Model::DescribeExposedStatisticsRequest &request)const;
			void describeExposedStatisticsAsync(const Model::DescribeExposedStatisticsRequest& request, const DescribeExposedStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExposedStatisticsOutcomeCallable describeExposedStatisticsCallable(const Model::DescribeExposedStatisticsRequest& request) const;
			DescribeExposedStatisticsDetailOutcome describeExposedStatisticsDetail(const Model::DescribeExposedStatisticsDetailRequest &request)const;
			void describeExposedStatisticsDetailAsync(const Model::DescribeExposedStatisticsDetailRequest& request, const DescribeExposedStatisticsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExposedStatisticsDetailOutcomeCallable describeExposedStatisticsDetailCallable(const Model::DescribeExposedStatisticsDetailRequest& request) const;
			DescribeFieldStatisticsOutcome describeFieldStatistics(const Model::DescribeFieldStatisticsRequest &request)const;
			void describeFieldStatisticsAsync(const Model::DescribeFieldStatisticsRequest& request, const DescribeFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFieldStatisticsOutcomeCallable describeFieldStatisticsCallable(const Model::DescribeFieldStatisticsRequest& request) const;
			DescribeFrontVulPatchListOutcome describeFrontVulPatchList(const Model::DescribeFrontVulPatchListRequest &request)const;
			void describeFrontVulPatchListAsync(const Model::DescribeFrontVulPatchListRequest& request, const DescribeFrontVulPatchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFrontVulPatchListOutcomeCallable describeFrontVulPatchListCallable(const Model::DescribeFrontVulPatchListRequest& request) const;
			DescribeGroupedContainerInstancesOutcome describeGroupedContainerInstances(const Model::DescribeGroupedContainerInstancesRequest &request)const;
			void describeGroupedContainerInstancesAsync(const Model::DescribeGroupedContainerInstancesRequest& request, const DescribeGroupedContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedContainerInstancesOutcomeCallable describeGroupedContainerInstancesCallable(const Model::DescribeGroupedContainerInstancesRequest& request) const;
			DescribeGroupedInstancesOutcome describeGroupedInstances(const Model::DescribeGroupedInstancesRequest &request)const;
			void describeGroupedInstancesAsync(const Model::DescribeGroupedInstancesRequest& request, const DescribeGroupedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedInstancesOutcomeCallable describeGroupedInstancesCallable(const Model::DescribeGroupedInstancesRequest& request) const;
			DescribeGroupedMaliciousFilesOutcome describeGroupedMaliciousFiles(const Model::DescribeGroupedMaliciousFilesRequest &request)const;
			void describeGroupedMaliciousFilesAsync(const Model::DescribeGroupedMaliciousFilesRequest& request, const DescribeGroupedMaliciousFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedMaliciousFilesOutcomeCallable describeGroupedMaliciousFilesCallable(const Model::DescribeGroupedMaliciousFilesRequest& request) const;
			DescribeGroupedTagsOutcome describeGroupedTags(const Model::DescribeGroupedTagsRequest &request)const;
			void describeGroupedTagsAsync(const Model::DescribeGroupedTagsRequest& request, const DescribeGroupedTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedTagsOutcomeCallable describeGroupedTagsCallable(const Model::DescribeGroupedTagsRequest& request) const;
			DescribeGroupedVulOutcome describeGroupedVul(const Model::DescribeGroupedVulRequest &request)const;
			void describeGroupedVulAsync(const Model::DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedVulOutcomeCallable describeGroupedVulCallable(const Model::DescribeGroupedVulRequest& request) const;
			DescribeHoneyPotAuthOutcome describeHoneyPotAuth(const Model::DescribeHoneyPotAuthRequest &request)const;
			void describeHoneyPotAuthAsync(const Model::DescribeHoneyPotAuthRequest& request, const DescribeHoneyPotAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHoneyPotAuthOutcomeCallable describeHoneyPotAuthCallable(const Model::DescribeHoneyPotAuthRequest& request) const;
			DescribeHoneyPotSuspStatisticsOutcome describeHoneyPotSuspStatistics(const Model::DescribeHoneyPotSuspStatisticsRequest &request)const;
			void describeHoneyPotSuspStatisticsAsync(const Model::DescribeHoneyPotSuspStatisticsRequest& request, const DescribeHoneyPotSuspStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHoneyPotSuspStatisticsOutcomeCallable describeHoneyPotSuspStatisticsCallable(const Model::DescribeHoneyPotSuspStatisticsRequest& request) const;
			DescribeImageBaselineCheckSummaryOutcome describeImageBaselineCheckSummary(const Model::DescribeImageBaselineCheckSummaryRequest &request)const;
			void describeImageBaselineCheckSummaryAsync(const Model::DescribeImageBaselineCheckSummaryRequest& request, const DescribeImageBaselineCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageBaselineCheckSummaryOutcomeCallable describeImageBaselineCheckSummaryCallable(const Model::DescribeImageBaselineCheckSummaryRequest& request) const;
			DescribeImageFixTaskOutcome describeImageFixTask(const Model::DescribeImageFixTaskRequest &request)const;
			void describeImageFixTaskAsync(const Model::DescribeImageFixTaskRequest& request, const DescribeImageFixTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageFixTaskOutcomeCallable describeImageFixTaskCallable(const Model::DescribeImageFixTaskRequest& request) const;
			DescribeImageGroupedVulListOutcome describeImageGroupedVulList(const Model::DescribeImageGroupedVulListRequest &request)const;
			void describeImageGroupedVulListAsync(const Model::DescribeImageGroupedVulListRequest& request, const DescribeImageGroupedVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageGroupedVulListOutcomeCallable describeImageGroupedVulListCallable(const Model::DescribeImageGroupedVulListRequest& request) const;
			DescribeImageListWithBaselineNameOutcome describeImageListWithBaselineName(const Model::DescribeImageListWithBaselineNameRequest &request)const;
			void describeImageListWithBaselineNameAsync(const Model::DescribeImageListWithBaselineNameRequest& request, const DescribeImageListWithBaselineNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageListWithBaselineNameOutcomeCallable describeImageListWithBaselineNameCallable(const Model::DescribeImageListWithBaselineNameRequest& request) const;
			DescribeImageScanAuthCountOutcome describeImageScanAuthCount(const Model::DescribeImageScanAuthCountRequest &request)const;
			void describeImageScanAuthCountAsync(const Model::DescribeImageScanAuthCountRequest& request, const DescribeImageScanAuthCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageScanAuthCountOutcomeCallable describeImageScanAuthCountCallable(const Model::DescribeImageScanAuthCountRequest& request) const;
			DescribeImageStatisticsOutcome describeImageStatistics(const Model::DescribeImageStatisticsRequest &request)const;
			void describeImageStatisticsAsync(const Model::DescribeImageStatisticsRequest& request, const DescribeImageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageStatisticsOutcomeCallable describeImageStatisticsCallable(const Model::DescribeImageStatisticsRequest& request) const;
			DescribeImageVulListOutcome describeImageVulList(const Model::DescribeImageVulListRequest &request)const;
			void describeImageVulListAsync(const Model::DescribeImageVulListRequest& request, const DescribeImageVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageVulListOutcomeCallable describeImageVulListCallable(const Model::DescribeImageVulListRequest& request) const;
			DescribeInstallCaptchaOutcome describeInstallCaptcha(const Model::DescribeInstallCaptchaRequest &request)const;
			void describeInstallCaptchaAsync(const Model::DescribeInstallCaptchaRequest& request, const DescribeInstallCaptchaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstallCaptchaOutcomeCallable describeInstallCaptchaCallable(const Model::DescribeInstallCaptchaRequest& request) const;
			DescribeInstallCodesOutcome describeInstallCodes(const Model::DescribeInstallCodesRequest &request)const;
			void describeInstallCodesAsync(const Model::DescribeInstallCodesRequest& request, const DescribeInstallCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstallCodesOutcomeCallable describeInstallCodesCallable(const Model::DescribeInstallCodesRequest& request) const;
			DescribeInstanceAntiBruteForceRulesOutcome describeInstanceAntiBruteForceRules(const Model::DescribeInstanceAntiBruteForceRulesRequest &request)const;
			void describeInstanceAntiBruteForceRulesAsync(const Model::DescribeInstanceAntiBruteForceRulesRequest& request, const DescribeInstanceAntiBruteForceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAntiBruteForceRulesOutcomeCallable describeInstanceAntiBruteForceRulesCallable(const Model::DescribeInstanceAntiBruteForceRulesRequest& request) const;
			DescribeInstanceRebootStatusOutcome describeInstanceRebootStatus(const Model::DescribeInstanceRebootStatusRequest &request)const;
			void describeInstanceRebootStatusAsync(const Model::DescribeInstanceRebootStatusRequest& request, const DescribeInstanceRebootStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceRebootStatusOutcomeCallable describeInstanceRebootStatusCallable(const Model::DescribeInstanceRebootStatusRequest& request) const;
			DescribeInstanceStatisticsOutcome describeInstanceStatistics(const Model::DescribeInstanceStatisticsRequest &request)const;
			void describeInstanceStatisticsAsync(const Model::DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceStatisticsOutcomeCallable describeInstanceStatisticsCallable(const Model::DescribeInstanceStatisticsRequest& request) const;
			DescribeLoginBaseConfigsOutcome describeLoginBaseConfigs(const Model::DescribeLoginBaseConfigsRequest &request)const;
			void describeLoginBaseConfigsAsync(const Model::DescribeLoginBaseConfigsRequest& request, const DescribeLoginBaseConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoginBaseConfigsOutcomeCallable describeLoginBaseConfigsCallable(const Model::DescribeLoginBaseConfigsRequest& request) const;
			DescribeLogstoreStorageOutcome describeLogstoreStorage(const Model::DescribeLogstoreStorageRequest &request)const;
			void describeLogstoreStorageAsync(const Model::DescribeLogstoreStorageRequest& request, const DescribeLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogstoreStorageOutcomeCallable describeLogstoreStorageCallable(const Model::DescribeLogstoreStorageRequest& request) const;
			DescribeModuleConfigOutcome describeModuleConfig(const Model::DescribeModuleConfigRequest &request)const;
			void describeModuleConfigAsync(const Model::DescribeModuleConfigRequest& request, const DescribeModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModuleConfigOutcomeCallable describeModuleConfigCallable(const Model::DescribeModuleConfigRequest& request) const;
			DescribeNoticeConfigOutcome describeNoticeConfig(const Model::DescribeNoticeConfigRequest &request)const;
			void describeNoticeConfigAsync(const Model::DescribeNoticeConfigRequest& request, const DescribeNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNoticeConfigOutcomeCallable describeNoticeConfigCallable(const Model::DescribeNoticeConfigRequest& request) const;
			DescribeOnceTaskOutcome describeOnceTask(const Model::DescribeOnceTaskRequest &request)const;
			void describeOnceTaskAsync(const Model::DescribeOnceTaskRequest& request, const DescribeOnceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOnceTaskOutcomeCallable describeOnceTaskCallable(const Model::DescribeOnceTaskRequest& request) const;
			DescribePropertyCountOutcome describePropertyCount(const Model::DescribePropertyCountRequest &request)const;
			void describePropertyCountAsync(const Model::DescribePropertyCountRequest& request, const DescribePropertyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyCountOutcomeCallable describePropertyCountCallable(const Model::DescribePropertyCountRequest& request) const;
			DescribePropertyCronDetailOutcome describePropertyCronDetail(const Model::DescribePropertyCronDetailRequest &request)const;
			void describePropertyCronDetailAsync(const Model::DescribePropertyCronDetailRequest& request, const DescribePropertyCronDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyCronDetailOutcomeCallable describePropertyCronDetailCallable(const Model::DescribePropertyCronDetailRequest& request) const;
			DescribePropertyPortDetailOutcome describePropertyPortDetail(const Model::DescribePropertyPortDetailRequest &request)const;
			void describePropertyPortDetailAsync(const Model::DescribePropertyPortDetailRequest& request, const DescribePropertyPortDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyPortDetailOutcomeCallable describePropertyPortDetailCallable(const Model::DescribePropertyPortDetailRequest& request) const;
			DescribePropertyPortItemOutcome describePropertyPortItem(const Model::DescribePropertyPortItemRequest &request)const;
			void describePropertyPortItemAsync(const Model::DescribePropertyPortItemRequest& request, const DescribePropertyPortItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyPortItemOutcomeCallable describePropertyPortItemCallable(const Model::DescribePropertyPortItemRequest& request) const;
			DescribePropertyProcDetailOutcome describePropertyProcDetail(const Model::DescribePropertyProcDetailRequest &request)const;
			void describePropertyProcDetailAsync(const Model::DescribePropertyProcDetailRequest& request, const DescribePropertyProcDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyProcDetailOutcomeCallable describePropertyProcDetailCallable(const Model::DescribePropertyProcDetailRequest& request) const;
			DescribePropertyProcItemOutcome describePropertyProcItem(const Model::DescribePropertyProcItemRequest &request)const;
			void describePropertyProcItemAsync(const Model::DescribePropertyProcItemRequest& request, const DescribePropertyProcItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyProcItemOutcomeCallable describePropertyProcItemCallable(const Model::DescribePropertyProcItemRequest& request) const;
			DescribePropertyScaDetailOutcome describePropertyScaDetail(const Model::DescribePropertyScaDetailRequest &request)const;
			void describePropertyScaDetailAsync(const Model::DescribePropertyScaDetailRequest& request, const DescribePropertyScaDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyScaDetailOutcomeCallable describePropertyScaDetailCallable(const Model::DescribePropertyScaDetailRequest& request) const;
			DescribePropertySoftwareDetailOutcome describePropertySoftwareDetail(const Model::DescribePropertySoftwareDetailRequest &request)const;
			void describePropertySoftwareDetailAsync(const Model::DescribePropertySoftwareDetailRequest& request, const DescribePropertySoftwareDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertySoftwareDetailOutcomeCallable describePropertySoftwareDetailCallable(const Model::DescribePropertySoftwareDetailRequest& request) const;
			DescribePropertySoftwareItemOutcome describePropertySoftwareItem(const Model::DescribePropertySoftwareItemRequest &request)const;
			void describePropertySoftwareItemAsync(const Model::DescribePropertySoftwareItemRequest& request, const DescribePropertySoftwareItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertySoftwareItemOutcomeCallable describePropertySoftwareItemCallable(const Model::DescribePropertySoftwareItemRequest& request) const;
			DescribePropertyUsageNewestOutcome describePropertyUsageNewest(const Model::DescribePropertyUsageNewestRequest &request)const;
			void describePropertyUsageNewestAsync(const Model::DescribePropertyUsageNewestRequest& request, const DescribePropertyUsageNewestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUsageNewestOutcomeCallable describePropertyUsageNewestCallable(const Model::DescribePropertyUsageNewestRequest& request) const;
			DescribePropertyUserDetailOutcome describePropertyUserDetail(const Model::DescribePropertyUserDetailRequest &request)const;
			void describePropertyUserDetailAsync(const Model::DescribePropertyUserDetailRequest& request, const DescribePropertyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUserDetailOutcomeCallable describePropertyUserDetailCallable(const Model::DescribePropertyUserDetailRequest& request) const;
			DescribePropertyUserItemOutcome describePropertyUserItem(const Model::DescribePropertyUserItemRequest &request)const;
			void describePropertyUserItemAsync(const Model::DescribePropertyUserItemRequest& request, const DescribePropertyUserItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUserItemOutcomeCallable describePropertyUserItemCallable(const Model::DescribePropertyUserItemRequest& request) const;
			DescribeRestoreJobsOutcome describeRestoreJobs(const Model::DescribeRestoreJobsRequest &request)const;
			void describeRestoreJobsAsync(const Model::DescribeRestoreJobsRequest& request, const DescribeRestoreJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreJobsOutcomeCallable describeRestoreJobsCallable(const Model::DescribeRestoreJobsRequest& request) const;
			DescribeRiskCheckItemResultOutcome describeRiskCheckItemResult(const Model::DescribeRiskCheckItemResultRequest &request)const;
			void describeRiskCheckItemResultAsync(const Model::DescribeRiskCheckItemResultRequest& request, const DescribeRiskCheckItemResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskCheckItemResultOutcomeCallable describeRiskCheckItemResultCallable(const Model::DescribeRiskCheckItemResultRequest& request) const;
			DescribeRiskCheckResultOutcome describeRiskCheckResult(const Model::DescribeRiskCheckResultRequest &request)const;
			void describeRiskCheckResultAsync(const Model::DescribeRiskCheckResultRequest& request, const DescribeRiskCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskCheckResultOutcomeCallable describeRiskCheckResultCallable(const Model::DescribeRiskCheckResultRequest& request) const;
			DescribeRiskCheckSummaryOutcome describeRiskCheckSummary(const Model::DescribeRiskCheckSummaryRequest &request)const;
			void describeRiskCheckSummaryAsync(const Model::DescribeRiskCheckSummaryRequest& request, const DescribeRiskCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskCheckSummaryOutcomeCallable describeRiskCheckSummaryCallable(const Model::DescribeRiskCheckSummaryRequest& request) const;
			DescribeRiskItemTypeOutcome describeRiskItemType(const Model::DescribeRiskItemTypeRequest &request)const;
			void describeRiskItemTypeAsync(const Model::DescribeRiskItemTypeRequest& request, const DescribeRiskItemTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskItemTypeOutcomeCallable describeRiskItemTypeCallable(const Model::DescribeRiskItemTypeRequest& request) const;
			DescribeRiskListCheckResultOutcome describeRiskListCheckResult(const Model::DescribeRiskListCheckResultRequest &request)const;
			void describeRiskListCheckResultAsync(const Model::DescribeRiskListCheckResultRequest& request, const DescribeRiskListCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskListCheckResultOutcomeCallable describeRiskListCheckResultCallable(const Model::DescribeRiskListCheckResultRequest& request) const;
			DescribeRiskTypeOutcome describeRiskType(const Model::DescribeRiskTypeRequest &request)const;
			void describeRiskTypeAsync(const Model::DescribeRiskTypeRequest& request, const DescribeRiskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskTypeOutcomeCallable describeRiskTypeCallable(const Model::DescribeRiskTypeRequest& request) const;
			DescribeScanTaskProgressOutcome describeScanTaskProgress(const Model::DescribeScanTaskProgressRequest &request)const;
			void describeScanTaskProgressAsync(const Model::DescribeScanTaskProgressRequest& request, const DescribeScanTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScanTaskProgressOutcomeCallable describeScanTaskProgressCallable(const Model::DescribeScanTaskProgressRequest& request) const;
			DescribeSearchConditionOutcome describeSearchCondition(const Model::DescribeSearchConditionRequest &request)const;
			void describeSearchConditionAsync(const Model::DescribeSearchConditionRequest& request, const DescribeSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSearchConditionOutcomeCallable describeSearchConditionCallable(const Model::DescribeSearchConditionRequest& request) const;
			DescribeSecureSuggestionOutcome describeSecureSuggestion(const Model::DescribeSecureSuggestionRequest &request)const;
			void describeSecureSuggestionAsync(const Model::DescribeSecureSuggestionRequest& request, const DescribeSecureSuggestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecureSuggestionOutcomeCallable describeSecureSuggestionCallable(const Model::DescribeSecureSuggestionRequest& request) const;
			DescribeSecurityCheckScheduleConfigOutcome describeSecurityCheckScheduleConfig(const Model::DescribeSecurityCheckScheduleConfigRequest &request)const;
			void describeSecurityCheckScheduleConfigAsync(const Model::DescribeSecurityCheckScheduleConfigRequest& request, const DescribeSecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityCheckScheduleConfigOutcomeCallable describeSecurityCheckScheduleConfigCallable(const Model::DescribeSecurityCheckScheduleConfigRequest& request) const;
			DescribeSecurityEventOperationStatusOutcome describeSecurityEventOperationStatus(const Model::DescribeSecurityEventOperationStatusRequest &request)const;
			void describeSecurityEventOperationStatusAsync(const Model::DescribeSecurityEventOperationStatusRequest& request, const DescribeSecurityEventOperationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityEventOperationStatusOutcomeCallable describeSecurityEventOperationStatusCallable(const Model::DescribeSecurityEventOperationStatusRequest& request) const;
			DescribeSecurityEventOperationsOutcome describeSecurityEventOperations(const Model::DescribeSecurityEventOperationsRequest &request)const;
			void describeSecurityEventOperationsAsync(const Model::DescribeSecurityEventOperationsRequest& request, const DescribeSecurityEventOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityEventOperationsOutcomeCallable describeSecurityEventOperationsCallable(const Model::DescribeSecurityEventOperationsRequest& request) const;
			DescribeSecurityStatInfoOutcome describeSecurityStatInfo(const Model::DescribeSecurityStatInfoRequest &request)const;
			void describeSecurityStatInfoAsync(const Model::DescribeSecurityStatInfoRequest& request, const DescribeSecurityStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityStatInfoOutcomeCallable describeSecurityStatInfoCallable(const Model::DescribeSecurityStatInfoRequest& request) const;
			DescribeServiceLinkedRoleStatusOutcome describeServiceLinkedRoleStatus(const Model::DescribeServiceLinkedRoleStatusRequest &request)const;
			void describeServiceLinkedRoleStatusAsync(const Model::DescribeServiceLinkedRoleStatusRequest& request, const DescribeServiceLinkedRoleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceLinkedRoleStatusOutcomeCallable describeServiceLinkedRoleStatusCallable(const Model::DescribeServiceLinkedRoleStatusRequest& request) const;
			DescribeSimilarEventScenariosOutcome describeSimilarEventScenarios(const Model::DescribeSimilarEventScenariosRequest &request)const;
			void describeSimilarEventScenariosAsync(const Model::DescribeSimilarEventScenariosRequest& request, const DescribeSimilarEventScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSimilarEventScenariosOutcomeCallable describeSimilarEventScenariosCallable(const Model::DescribeSimilarEventScenariosRequest& request) const;
			DescribeSimilarSecurityEventsOutcome describeSimilarSecurityEvents(const Model::DescribeSimilarSecurityEventsRequest &request)const;
			void describeSimilarSecurityEventsAsync(const Model::DescribeSimilarSecurityEventsRequest& request, const DescribeSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSimilarSecurityEventsOutcomeCallable describeSimilarSecurityEventsCallable(const Model::DescribeSimilarSecurityEventsRequest& request) const;
			DescribeStrategyOutcome describeStrategy(const Model::DescribeStrategyRequest &request)const;
			void describeStrategyAsync(const Model::DescribeStrategyRequest& request, const DescribeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyOutcomeCallable describeStrategyCallable(const Model::DescribeStrategyRequest& request) const;
			DescribeStrategyDetailOutcome describeStrategyDetail(const Model::DescribeStrategyDetailRequest &request)const;
			void describeStrategyDetailAsync(const Model::DescribeStrategyDetailRequest& request, const DescribeStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyDetailOutcomeCallable describeStrategyDetailCallable(const Model::DescribeStrategyDetailRequest& request) const;
			DescribeStrategyExecDetailOutcome describeStrategyExecDetail(const Model::DescribeStrategyExecDetailRequest &request)const;
			void describeStrategyExecDetailAsync(const Model::DescribeStrategyExecDetailRequest& request, const DescribeStrategyExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyExecDetailOutcomeCallable describeStrategyExecDetailCallable(const Model::DescribeStrategyExecDetailRequest& request) const;
			DescribeStrategyTargetOutcome describeStrategyTarget(const Model::DescribeStrategyTargetRequest &request)const;
			void describeStrategyTargetAsync(const Model::DescribeStrategyTargetRequest& request, const DescribeStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyTargetOutcomeCallable describeStrategyTargetCallable(const Model::DescribeStrategyTargetRequest& request) const;
			DescribeSummaryInfoOutcome describeSummaryInfo(const Model::DescribeSummaryInfoRequest &request)const;
			void describeSummaryInfoAsync(const Model::DescribeSummaryInfoRequest& request, const DescribeSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSummaryInfoOutcomeCallable describeSummaryInfoCallable(const Model::DescribeSummaryInfoRequest& request) const;
			DescribeSupportRegionOutcome describeSupportRegion(const Model::DescribeSupportRegionRequest &request)const;
			void describeSupportRegionAsync(const Model::DescribeSupportRegionRequest& request, const DescribeSupportRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSupportRegionOutcomeCallable describeSupportRegionCallable(const Model::DescribeSupportRegionRequest& request) const;
			DescribeSuspEventDetailOutcome describeSuspEventDetail(const Model::DescribeSuspEventDetailRequest &request)const;
			void describeSuspEventDetailAsync(const Model::DescribeSuspEventDetailRequest& request, const DescribeSuspEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventDetailOutcomeCallable describeSuspEventDetailCallable(const Model::DescribeSuspEventDetailRequest& request) const;
			DescribeSuspEventQuaraFilesOutcome describeSuspEventQuaraFiles(const Model::DescribeSuspEventQuaraFilesRequest &request)const;
			void describeSuspEventQuaraFilesAsync(const Model::DescribeSuspEventQuaraFilesRequest& request, const DescribeSuspEventQuaraFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventQuaraFilesOutcomeCallable describeSuspEventQuaraFilesCallable(const Model::DescribeSuspEventQuaraFilesRequest& request) const;
			DescribeSuspEventsOutcome describeSuspEvents(const Model::DescribeSuspEventsRequest &request)const;
			void describeSuspEventsAsync(const Model::DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventsOutcomeCallable describeSuspEventsCallable(const Model::DescribeSuspEventsRequest& request) const;
			DescribeSuspiciousUUIDConfigOutcome describeSuspiciousUUIDConfig(const Model::DescribeSuspiciousUUIDConfigRequest &request)const;
			void describeSuspiciousUUIDConfigAsync(const Model::DescribeSuspiciousUUIDConfigRequest& request, const DescribeSuspiciousUUIDConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspiciousUUIDConfigOutcomeCallable describeSuspiciousUUIDConfigCallable(const Model::DescribeSuspiciousUUIDConfigRequest& request) const;
			DescribeUserBackupMachinesOutcome describeUserBackupMachines(const Model::DescribeUserBackupMachinesRequest &request)const;
			void describeUserBackupMachinesAsync(const Model::DescribeUserBackupMachinesRequest& request, const DescribeUserBackupMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBackupMachinesOutcomeCallable describeUserBackupMachinesCallable(const Model::DescribeUserBackupMachinesRequest& request) const;
			DescribeUserBaselineAuthorizationOutcome describeUserBaselineAuthorization(const Model::DescribeUserBaselineAuthorizationRequest &request)const;
			void describeUserBaselineAuthorizationAsync(const Model::DescribeUserBaselineAuthorizationRequest& request, const DescribeUserBaselineAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBaselineAuthorizationOutcomeCallable describeUserBaselineAuthorizationCallable(const Model::DescribeUserBaselineAuthorizationRequest& request) const;
			DescribeUserLayoutAuthorizationOutcome describeUserLayoutAuthorization(const Model::DescribeUserLayoutAuthorizationRequest &request)const;
			void describeUserLayoutAuthorizationAsync(const Model::DescribeUserLayoutAuthorizationRequest& request, const DescribeUserLayoutAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserLayoutAuthorizationOutcomeCallable describeUserLayoutAuthorizationCallable(const Model::DescribeUserLayoutAuthorizationRequest& request) const;
			DescribeUuidsByVulNamesOutcome describeUuidsByVulNames(const Model::DescribeUuidsByVulNamesRequest &request)const;
			void describeUuidsByVulNamesAsync(const Model::DescribeUuidsByVulNamesRequest& request, const DescribeUuidsByVulNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUuidsByVulNamesOutcomeCallable describeUuidsByVulNamesCallable(const Model::DescribeUuidsByVulNamesRequest& request) const;
			DescribeVersionConfigOutcome describeVersionConfig(const Model::DescribeVersionConfigRequest &request)const;
			void describeVersionConfigAsync(const Model::DescribeVersionConfigRequest& request, const DescribeVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVersionConfigOutcomeCallable describeVersionConfigCallable(const Model::DescribeVersionConfigRequest& request) const;
			DescribeVpcHoneyPotCriteriaOutcome describeVpcHoneyPotCriteria(const Model::DescribeVpcHoneyPotCriteriaRequest &request)const;
			void describeVpcHoneyPotCriteriaAsync(const Model::DescribeVpcHoneyPotCriteriaRequest& request, const DescribeVpcHoneyPotCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcHoneyPotCriteriaOutcomeCallable describeVpcHoneyPotCriteriaCallable(const Model::DescribeVpcHoneyPotCriteriaRequest& request) const;
			DescribeVpcHoneyPotListOutcome describeVpcHoneyPotList(const Model::DescribeVpcHoneyPotListRequest &request)const;
			void describeVpcHoneyPotListAsync(const Model::DescribeVpcHoneyPotListRequest& request, const DescribeVpcHoneyPotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcHoneyPotListOutcomeCallable describeVpcHoneyPotListCallable(const Model::DescribeVpcHoneyPotListRequest& request) const;
			DescribeVpcListOutcome describeVpcList(const Model::DescribeVpcListRequest &request)const;
			void describeVpcListAsync(const Model::DescribeVpcListRequest& request, const DescribeVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcListOutcomeCallable describeVpcListCallable(const Model::DescribeVpcListRequest& request) const;
			DescribeVulDetailsOutcome describeVulDetails(const Model::DescribeVulDetailsRequest &request)const;
			void describeVulDetailsAsync(const Model::DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulDetailsOutcomeCallable describeVulDetailsCallable(const Model::DescribeVulDetailsRequest& request) const;
			DescribeVulExportInfoOutcome describeVulExportInfo(const Model::DescribeVulExportInfoRequest &request)const;
			void describeVulExportInfoAsync(const Model::DescribeVulExportInfoRequest& request, const DescribeVulExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulExportInfoOutcomeCallable describeVulExportInfoCallable(const Model::DescribeVulExportInfoRequest& request) const;
			DescribeVulListOutcome describeVulList(const Model::DescribeVulListRequest &request)const;
			void describeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulListOutcomeCallable describeVulListCallable(const Model::DescribeVulListRequest& request) const;
			DescribeVulWhitelistOutcome describeVulWhitelist(const Model::DescribeVulWhitelistRequest &request)const;
			void describeVulWhitelistAsync(const Model::DescribeVulWhitelistRequest& request, const DescribeVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulWhitelistOutcomeCallable describeVulWhitelistCallable(const Model::DescribeVulWhitelistRequest& request) const;
			DescribeWarningExportInfoOutcome describeWarningExportInfo(const Model::DescribeWarningExportInfoRequest &request)const;
			void describeWarningExportInfoAsync(const Model::DescribeWarningExportInfoRequest& request, const DescribeWarningExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWarningExportInfoOutcomeCallable describeWarningExportInfoCallable(const Model::DescribeWarningExportInfoRequest& request) const;
			DescribeWarningMachinesOutcome describeWarningMachines(const Model::DescribeWarningMachinesRequest &request)const;
			void describeWarningMachinesAsync(const Model::DescribeWarningMachinesRequest& request, const DescribeWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWarningMachinesOutcomeCallable describeWarningMachinesCallable(const Model::DescribeWarningMachinesRequest& request) const;
			DescribeWebLockBindListOutcome describeWebLockBindList(const Model::DescribeWebLockBindListRequest &request)const;
			void describeWebLockBindListAsync(const Model::DescribeWebLockBindListRequest& request, const DescribeWebLockBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockBindListOutcomeCallable describeWebLockBindListCallable(const Model::DescribeWebLockBindListRequest& request) const;
			DescribeWebLockConfigListOutcome describeWebLockConfigList(const Model::DescribeWebLockConfigListRequest &request)const;
			void describeWebLockConfigListAsync(const Model::DescribeWebLockConfigListRequest& request, const DescribeWebLockConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockConfigListOutcomeCallable describeWebLockConfigListCallable(const Model::DescribeWebLockConfigListRequest& request) const;
			ExportRecordOutcome exportRecord(const Model::ExportRecordRequest &request)const;
			void exportRecordAsync(const Model::ExportRecordRequest& request, const ExportRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportRecordOutcomeCallable exportRecordCallable(const Model::ExportRecordRequest& request) const;
			ExportVulOutcome exportVul(const Model::ExportVulRequest &request)const;
			void exportVulAsync(const Model::ExportVulRequest& request, const ExportVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportVulOutcomeCallable exportVulCallable(const Model::ExportVulRequest& request) const;
			ExportWarningOutcome exportWarning(const Model::ExportWarningRequest &request)const;
			void exportWarningAsync(const Model::ExportWarningRequest& request, const ExportWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportWarningOutcomeCallable exportWarningCallable(const Model::ExportWarningRequest& request) const;
			FixCheckWarningsOutcome fixCheckWarnings(const Model::FixCheckWarningsRequest &request)const;
			void fixCheckWarningsAsync(const Model::FixCheckWarningsRequest& request, const FixCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FixCheckWarningsOutcomeCallable fixCheckWarningsCallable(const Model::FixCheckWarningsRequest& request) const;
			GetBackupStorageCountOutcome getBackupStorageCount(const Model::GetBackupStorageCountRequest &request)const;
			void getBackupStorageCountAsync(const Model::GetBackupStorageCountRequest& request, const GetBackupStorageCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBackupStorageCountOutcomeCallable getBackupStorageCountCallable(const Model::GetBackupStorageCountRequest& request) const;
			GetFileDetectResultOutcome getFileDetectResult(const Model::GetFileDetectResultRequest &request)const;
			void getFileDetectResultAsync(const Model::GetFileDetectResultRequest& request, const GetFileDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileDetectResultOutcomeCallable getFileDetectResultCallable(const Model::GetFileDetectResultRequest& request) const;
			GetSuspiciousStatisticsOutcome getSuspiciousStatistics(const Model::GetSuspiciousStatisticsRequest &request)const;
			void getSuspiciousStatisticsAsync(const Model::GetSuspiciousStatisticsRequest& request, const GetSuspiciousStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSuspiciousStatisticsOutcomeCallable getSuspiciousStatisticsCallable(const Model::GetSuspiciousStatisticsRequest& request) const;
			GetVulStatisticsOutcome getVulStatistics(const Model::GetVulStatisticsRequest &request)const;
			void getVulStatisticsAsync(const Model::GetVulStatisticsRequest& request, const GetVulStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVulStatisticsOutcomeCallable getVulStatisticsCallable(const Model::GetVulStatisticsRequest& request) const;
			HandleSecurityEventsOutcome handleSecurityEvents(const Model::HandleSecurityEventsRequest &request)const;
			void handleSecurityEventsAsync(const Model::HandleSecurityEventsRequest& request, const HandleSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HandleSecurityEventsOutcomeCallable handleSecurityEventsCallable(const Model::HandleSecurityEventsRequest& request) const;
			HandleSimilarSecurityEventsOutcome handleSimilarSecurityEvents(const Model::HandleSimilarSecurityEventsRequest &request)const;
			void handleSimilarSecurityEventsAsync(const Model::HandleSimilarSecurityEventsRequest& request, const HandleSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HandleSimilarSecurityEventsOutcomeCallable handleSimilarSecurityEventsCallable(const Model::HandleSimilarSecurityEventsRequest& request) const;
			IgnoreHcCheckWarningsOutcome ignoreHcCheckWarnings(const Model::IgnoreHcCheckWarningsRequest &request)const;
			void ignoreHcCheckWarningsAsync(const Model::IgnoreHcCheckWarningsRequest& request, const IgnoreHcCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IgnoreHcCheckWarningsOutcomeCallable ignoreHcCheckWarningsCallable(const Model::IgnoreHcCheckWarningsRequest& request) const;
			InstallBackupClientOutcome installBackupClient(const Model::InstallBackupClientRequest &request)const;
			void installBackupClientAsync(const Model::InstallBackupClientRequest& request, const InstallBackupClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallBackupClientOutcomeCallable installBackupClientCallable(const Model::InstallBackupClientRequest& request) const;
			InstallCloudMonitorOutcome installCloudMonitor(const Model::InstallCloudMonitorRequest &request)const;
			void installCloudMonitorAsync(const Model::InstallCloudMonitorRequest& request, const InstallCloudMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallCloudMonitorOutcomeCallable installCloudMonitorCallable(const Model::InstallCloudMonitorRequest& request) const;
			ListCheckResultOutcome listCheckResult(const Model::ListCheckResultRequest &request)const;
			void listCheckResultAsync(const Model::ListCheckResultRequest& request, const ListCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckResultOutcomeCallable listCheckResultCallable(const Model::ListCheckResultRequest& request) const;
			ListVulAutoRepairConfigOutcome listVulAutoRepairConfig(const Model::ListVulAutoRepairConfigRequest &request)const;
			void listVulAutoRepairConfigAsync(const Model::ListVulAutoRepairConfigRequest& request, const ListVulAutoRepairConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVulAutoRepairConfigOutcomeCallable listVulAutoRepairConfigCallable(const Model::ListVulAutoRepairConfigRequest& request) const;
			ModifyAntiBruteForceRuleOutcome modifyAntiBruteForceRule(const Model::ModifyAntiBruteForceRuleRequest &request)const;
			void modifyAntiBruteForceRuleAsync(const Model::ModifyAntiBruteForceRuleRequest& request, const ModifyAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAntiBruteForceRuleOutcomeCallable modifyAntiBruteForceRuleCallable(const Model::ModifyAntiBruteForceRuleRequest& request) const;
			ModifyAssetGroupOutcome modifyAssetGroup(const Model::ModifyAssetGroupRequest &request)const;
			void modifyAssetGroupAsync(const Model::ModifyAssetGroupRequest& request, const ModifyAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAssetGroupOutcomeCallable modifyAssetGroupCallable(const Model::ModifyAssetGroupRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyBackupPolicyStatusOutcome modifyBackupPolicyStatus(const Model::ModifyBackupPolicyStatusRequest &request)const;
			void modifyBackupPolicyStatusAsync(const Model::ModifyBackupPolicyStatusRequest& request, const ModifyBackupPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyStatusOutcomeCallable modifyBackupPolicyStatusCallable(const Model::ModifyBackupPolicyStatusRequest& request) const;
			ModifyCreateVulWhitelistOutcome modifyCreateVulWhitelist(const Model::ModifyCreateVulWhitelistRequest &request)const;
			void modifyCreateVulWhitelistAsync(const Model::ModifyCreateVulWhitelistRequest& request, const ModifyCreateVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCreateVulWhitelistOutcomeCallable modifyCreateVulWhitelistCallable(const Model::ModifyCreateVulWhitelistRequest& request) const;
			ModifyEmgVulSubmitOutcome modifyEmgVulSubmit(const Model::ModifyEmgVulSubmitRequest &request)const;
			void modifyEmgVulSubmitAsync(const Model::ModifyEmgVulSubmitRequest& request, const ModifyEmgVulSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEmgVulSubmitOutcomeCallable modifyEmgVulSubmitCallable(const Model::ModifyEmgVulSubmitRequest& request) const;
			ModifyGroupPropertyOutcome modifyGroupProperty(const Model::ModifyGroupPropertyRequest &request)const;
			void modifyGroupPropertyAsync(const Model::ModifyGroupPropertyRequest& request, const ModifyGroupPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGroupPropertyOutcomeCallable modifyGroupPropertyCallable(const Model::ModifyGroupPropertyRequest& request) const;
			ModifyInstanceAntiBruteForceRuleOutcome modifyInstanceAntiBruteForceRule(const Model::ModifyInstanceAntiBruteForceRuleRequest &request)const;
			void modifyInstanceAntiBruteForceRuleAsync(const Model::ModifyInstanceAntiBruteForceRuleRequest& request, const ModifyInstanceAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAntiBruteForceRuleOutcomeCallable modifyInstanceAntiBruteForceRuleCallable(const Model::ModifyInstanceAntiBruteForceRuleRequest& request) const;
			ModifyLoginBaseConfigOutcome modifyLoginBaseConfig(const Model::ModifyLoginBaseConfigRequest &request)const;
			void modifyLoginBaseConfigAsync(const Model::ModifyLoginBaseConfigRequest& request, const ModifyLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoginBaseConfigOutcomeCallable modifyLoginBaseConfigCallable(const Model::ModifyLoginBaseConfigRequest& request) const;
			ModifyLoginSwitchConfigOutcome modifyLoginSwitchConfig(const Model::ModifyLoginSwitchConfigRequest &request)const;
			void modifyLoginSwitchConfigAsync(const Model::ModifyLoginSwitchConfigRequest& request, const ModifyLoginSwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoginSwitchConfigOutcomeCallable modifyLoginSwitchConfigCallable(const Model::ModifyLoginSwitchConfigRequest& request) const;
			ModifyOpenLogShipperOutcome modifyOpenLogShipper(const Model::ModifyOpenLogShipperRequest &request)const;
			void modifyOpenLogShipperAsync(const Model::ModifyOpenLogShipperRequest& request, const ModifyOpenLogShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOpenLogShipperOutcomeCallable modifyOpenLogShipperCallable(const Model::ModifyOpenLogShipperRequest& request) const;
			ModifyOperateVulOutcome modifyOperateVul(const Model::ModifyOperateVulRequest &request)const;
			void modifyOperateVulAsync(const Model::ModifyOperateVulRequest& request, const ModifyOperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOperateVulOutcomeCallable modifyOperateVulCallable(const Model::ModifyOperateVulRequest& request) const;
			ModifyPropertyScheduleConfigOutcome modifyPropertyScheduleConfig(const Model::ModifyPropertyScheduleConfigRequest &request)const;
			void modifyPropertyScheduleConfigAsync(const Model::ModifyPropertyScheduleConfigRequest& request, const ModifyPropertyScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPropertyScheduleConfigOutcomeCallable modifyPropertyScheduleConfigCallable(const Model::ModifyPropertyScheduleConfigRequest& request) const;
			ModifyPushAllTaskOutcome modifyPushAllTask(const Model::ModifyPushAllTaskRequest &request)const;
			void modifyPushAllTaskAsync(const Model::ModifyPushAllTaskRequest& request, const ModifyPushAllTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPushAllTaskOutcomeCallable modifyPushAllTaskCallable(const Model::ModifyPushAllTaskRequest& request) const;
			ModifyRiskCheckStatusOutcome modifyRiskCheckStatus(const Model::ModifyRiskCheckStatusRequest &request)const;
			void modifyRiskCheckStatusAsync(const Model::ModifyRiskCheckStatusRequest& request, const ModifyRiskCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRiskCheckStatusOutcomeCallable modifyRiskCheckStatusCallable(const Model::ModifyRiskCheckStatusRequest& request) const;
			ModifyRiskSingleResultStatusOutcome modifyRiskSingleResultStatus(const Model::ModifyRiskSingleResultStatusRequest &request)const;
			void modifyRiskSingleResultStatusAsync(const Model::ModifyRiskSingleResultStatusRequest& request, const ModifyRiskSingleResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRiskSingleResultStatusOutcomeCallable modifyRiskSingleResultStatusCallable(const Model::ModifyRiskSingleResultStatusRequest& request) const;
			ModifySecurityCheckScheduleConfigOutcome modifySecurityCheckScheduleConfig(const Model::ModifySecurityCheckScheduleConfigRequest &request)const;
			void modifySecurityCheckScheduleConfigAsync(const Model::ModifySecurityCheckScheduleConfigRequest& request, const ModifySecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityCheckScheduleConfigOutcomeCallable modifySecurityCheckScheduleConfigCallable(const Model::ModifySecurityCheckScheduleConfigRequest& request) const;
			ModifyStartVulScanOutcome modifyStartVulScan(const Model::ModifyStartVulScanRequest &request)const;
			void modifyStartVulScanAsync(const Model::ModifyStartVulScanRequest& request, const ModifyStartVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStartVulScanOutcomeCallable modifyStartVulScanCallable(const Model::ModifyStartVulScanRequest& request) const;
			ModifyStrategyOutcome modifyStrategy(const Model::ModifyStrategyRequest &request)const;
			void modifyStrategyAsync(const Model::ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStrategyOutcomeCallable modifyStrategyCallable(const Model::ModifyStrategyRequest& request) const;
			ModifyStrategyTargetOutcome modifyStrategyTarget(const Model::ModifyStrategyTargetRequest &request)const;
			void modifyStrategyTargetAsync(const Model::ModifyStrategyTargetRequest& request, const ModifyStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStrategyTargetOutcomeCallable modifyStrategyTargetCallable(const Model::ModifyStrategyTargetRequest& request) const;
			ModifyTagWithUuidOutcome modifyTagWithUuid(const Model::ModifyTagWithUuidRequest &request)const;
			void modifyTagWithUuidAsync(const Model::ModifyTagWithUuidRequest& request, const ModifyTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTagWithUuidOutcomeCallable modifyTagWithUuidCallable(const Model::ModifyTagWithUuidRequest& request) const;
			ModifyVpcHoneyPotOutcome modifyVpcHoneyPot(const Model::ModifyVpcHoneyPotRequest &request)const;
			void modifyVpcHoneyPotAsync(const Model::ModifyVpcHoneyPotRequest& request, const ModifyVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpcHoneyPotOutcomeCallable modifyVpcHoneyPotCallable(const Model::ModifyVpcHoneyPotRequest& request) const;
			ModifyVulTargetConfigOutcome modifyVulTargetConfig(const Model::ModifyVulTargetConfigRequest &request)const;
			void modifyVulTargetConfigAsync(const Model::ModifyVulTargetConfigRequest& request, const ModifyVulTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulTargetConfigOutcomeCallable modifyVulTargetConfigCallable(const Model::ModifyVulTargetConfigRequest& request) const;
			ModifyWebLockCreateConfigOutcome modifyWebLockCreateConfig(const Model::ModifyWebLockCreateConfigRequest &request)const;
			void modifyWebLockCreateConfigAsync(const Model::ModifyWebLockCreateConfigRequest& request, const ModifyWebLockCreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockCreateConfigOutcomeCallable modifyWebLockCreateConfigCallable(const Model::ModifyWebLockCreateConfigRequest& request) const;
			ModifyWebLockDeleteConfigOutcome modifyWebLockDeleteConfig(const Model::ModifyWebLockDeleteConfigRequest &request)const;
			void modifyWebLockDeleteConfigAsync(const Model::ModifyWebLockDeleteConfigRequest& request, const ModifyWebLockDeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockDeleteConfigOutcomeCallable modifyWebLockDeleteConfigCallable(const Model::ModifyWebLockDeleteConfigRequest& request) const;
			ModifyWebLockStartOutcome modifyWebLockStart(const Model::ModifyWebLockStartRequest &request)const;
			void modifyWebLockStartAsync(const Model::ModifyWebLockStartRequest& request, const ModifyWebLockStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockStartOutcomeCallable modifyWebLockStartCallable(const Model::ModifyWebLockStartRequest& request) const;
			ModifyWebLockStatusOutcome modifyWebLockStatus(const Model::ModifyWebLockStatusRequest &request)const;
			void modifyWebLockStatusAsync(const Model::ModifyWebLockStatusRequest& request, const ModifyWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockStatusOutcomeCallable modifyWebLockStatusCallable(const Model::ModifyWebLockStatusRequest& request) const;
			ModifyWebLockUpdateConfigOutcome modifyWebLockUpdateConfig(const Model::ModifyWebLockUpdateConfigRequest &request)const;
			void modifyWebLockUpdateConfigAsync(const Model::ModifyWebLockUpdateConfigRequest& request, const ModifyWebLockUpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockUpdateConfigOutcomeCallable modifyWebLockUpdateConfigCallable(const Model::ModifyWebLockUpdateConfigRequest& request) const;
			OperateAgentClientInstallOutcome operateAgentClientInstall(const Model::OperateAgentClientInstallRequest &request)const;
			void operateAgentClientInstallAsync(const Model::OperateAgentClientInstallRequest& request, const OperateAgentClientInstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateAgentClientInstallOutcomeCallable operateAgentClientInstallCallable(const Model::OperateAgentClientInstallRequest& request) const;
			OperateSuspiciousTargetConfigOutcome operateSuspiciousTargetConfig(const Model::OperateSuspiciousTargetConfigRequest &request)const;
			void operateSuspiciousTargetConfigAsync(const Model::OperateSuspiciousTargetConfigRequest& request, const OperateSuspiciousTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateSuspiciousTargetConfigOutcomeCallable operateSuspiciousTargetConfigCallable(const Model::OperateSuspiciousTargetConfigRequest& request) const;
			OperateVulsOutcome operateVuls(const Model::OperateVulsRequest &request)const;
			void operateVulsAsync(const Model::OperateVulsRequest& request, const OperateVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateVulsOutcomeCallable operateVulsCallable(const Model::OperateVulsRequest& request) const;
			OperationCancelIgnoreSuspEventOutcome operationCancelIgnoreSuspEvent(const Model::OperationCancelIgnoreSuspEventRequest &request)const;
			void operationCancelIgnoreSuspEventAsync(const Model::OperationCancelIgnoreSuspEventRequest& request, const OperationCancelIgnoreSuspEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperationCancelIgnoreSuspEventOutcomeCallable operationCancelIgnoreSuspEventCallable(const Model::OperationCancelIgnoreSuspEventRequest& request) const;
			OperationSuspEventsOutcome operationSuspEvents(const Model::OperationSuspEventsRequest &request)const;
			void operationSuspEventsAsync(const Model::OperationSuspEventsRequest& request, const OperationSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperationSuspEventsOutcomeCallable operationSuspEventsCallable(const Model::OperationSuspEventsRequest& request) const;
			PauseClientOutcome pauseClient(const Model::PauseClientRequest &request)const;
			void pauseClientAsync(const Model::PauseClientRequest& request, const PauseClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseClientOutcomeCallable pauseClientCallable(const Model::PauseClientRequest& request) const;
			PublicCreateImageScanTaskOutcome publicCreateImageScanTask(const Model::PublicCreateImageScanTaskRequest &request)const;
			void publicCreateImageScanTaskAsync(const Model::PublicCreateImageScanTaskRequest& request, const PublicCreateImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublicCreateImageScanTaskOutcomeCallable publicCreateImageScanTaskCallable(const Model::PublicCreateImageScanTaskRequest& request) const;
			PublicPreCheckImageScanTaskOutcome publicPreCheckImageScanTask(const Model::PublicPreCheckImageScanTaskRequest &request)const;
			void publicPreCheckImageScanTaskAsync(const Model::PublicPreCheckImageScanTaskRequest& request, const PublicPreCheckImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublicPreCheckImageScanTaskOutcomeCallable publicPreCheckImageScanTaskCallable(const Model::PublicPreCheckImageScanTaskRequest& request) const;
			PublicSyncAndCreateImageScanTaskOutcome publicSyncAndCreateImageScanTask(const Model::PublicSyncAndCreateImageScanTaskRequest &request)const;
			void publicSyncAndCreateImageScanTaskAsync(const Model::PublicSyncAndCreateImageScanTaskRequest& request, const PublicSyncAndCreateImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublicSyncAndCreateImageScanTaskOutcomeCallable publicSyncAndCreateImageScanTaskCallable(const Model::PublicSyncAndCreateImageScanTaskRequest& request) const;
			QueryGroupIdByGroupNameOutcome queryGroupIdByGroupName(const Model::QueryGroupIdByGroupNameRequest &request)const;
			void queryGroupIdByGroupNameAsync(const Model::QueryGroupIdByGroupNameRequest& request, const QueryGroupIdByGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGroupIdByGroupNameOutcomeCallable queryGroupIdByGroupNameCallable(const Model::QueryGroupIdByGroupNameRequest& request) const;
			QueryGroupedSecurityEventMarkMissListOutcome queryGroupedSecurityEventMarkMissList(const Model::QueryGroupedSecurityEventMarkMissListRequest &request)const;
			void queryGroupedSecurityEventMarkMissListAsync(const Model::QueryGroupedSecurityEventMarkMissListRequest& request, const QueryGroupedSecurityEventMarkMissListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGroupedSecurityEventMarkMissListOutcomeCallable queryGroupedSecurityEventMarkMissListCallable(const Model::QueryGroupedSecurityEventMarkMissListRequest& request) const;
			RebootMachineOutcome rebootMachine(const Model::RebootMachineRequest &request)const;
			void rebootMachineAsync(const Model::RebootMachineRequest& request, const RebootMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootMachineOutcomeCallable rebootMachineCallable(const Model::RebootMachineRequest& request) const;
			RefreshAssetsOutcome refreshAssets(const Model::RefreshAssetsRequest &request)const;
			void refreshAssetsAsync(const Model::RefreshAssetsRequest& request, const RefreshAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshAssetsOutcomeCallable refreshAssetsCallable(const Model::RefreshAssetsRequest& request) const;
			RefreshContainerAssetsOutcome refreshContainerAssets(const Model::RefreshContainerAssetsRequest &request)const;
			void refreshContainerAssetsAsync(const Model::RefreshContainerAssetsRequest& request, const RefreshContainerAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshContainerAssetsOutcomeCallable refreshContainerAssetsCallable(const Model::RefreshContainerAssetsRequest& request) const;
			RollbackSuspEventQuaraFileOutcome rollbackSuspEventQuaraFile(const Model::RollbackSuspEventQuaraFileRequest &request)const;
			void rollbackSuspEventQuaraFileAsync(const Model::RollbackSuspEventQuaraFileRequest& request, const RollbackSuspEventQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackSuspEventQuaraFileOutcomeCallable rollbackSuspEventQuaraFileCallable(const Model::RollbackSuspEventQuaraFileRequest& request) const;
			SasInstallCodeOutcome sasInstallCode(const Model::SasInstallCodeRequest &request)const;
			void sasInstallCodeAsync(const Model::SasInstallCodeRequest& request, const SasInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SasInstallCodeOutcomeCallable sasInstallCodeCallable(const Model::SasInstallCodeRequest& request) const;
			StartBaselineSecurityCheckOutcome startBaselineSecurityCheck(const Model::StartBaselineSecurityCheckRequest &request)const;
			void startBaselineSecurityCheckAsync(const Model::StartBaselineSecurityCheckRequest& request, const StartBaselineSecurityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBaselineSecurityCheckOutcomeCallable startBaselineSecurityCheckCallable(const Model::StartBaselineSecurityCheckRequest& request) const;
			StartVirusScanTaskOutcome startVirusScanTask(const Model::StartVirusScanTaskRequest &request)const;
			void startVirusScanTaskAsync(const Model::StartVirusScanTaskRequest& request, const StartVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartVirusScanTaskOutcomeCallable startVirusScanTaskCallable(const Model::StartVirusScanTaskRequest& request) const;
			UnbindAegisOutcome unbindAegis(const Model::UnbindAegisRequest &request)const;
			void unbindAegisAsync(const Model::UnbindAegisRequest& request, const UnbindAegisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindAegisOutcomeCallable unbindAegisCallable(const Model::UnbindAegisRequest& request) const;
			UninstallBackupClientOutcome uninstallBackupClient(const Model::UninstallBackupClientRequest &request)const;
			void uninstallBackupClientAsync(const Model::UninstallBackupClientRequest& request, const UninstallBackupClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallBackupClientOutcomeCallable uninstallBackupClientCallable(const Model::UninstallBackupClientRequest& request) const;
			ValidateHcWarningsOutcome validateHcWarnings(const Model::ValidateHcWarningsRequest &request)const;
			void validateHcWarningsAsync(const Model::ValidateHcWarningsRequest& request, const ValidateHcWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateHcWarningsOutcomeCallable validateHcWarningsCallable(const Model::ValidateHcWarningsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAS_SASCLIENT_H_
