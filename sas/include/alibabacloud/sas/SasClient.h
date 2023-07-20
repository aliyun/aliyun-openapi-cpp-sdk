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
#include "model/AddAssetSelectionCriteriaRequest.h"
#include "model/AddAssetSelectionCriteriaResult.h"
#include "model/AddCheckInstanceResultWhiteListRequest.h"
#include "model/AddCheckInstanceResultWhiteListResult.h"
#include "model/AddCheckResultWhiteListRequest.h"
#include "model/AddCheckResultWhiteListResult.h"
#include "model/AddClientUserDefineRuleRequest.h"
#include "model/AddClientUserDefineRuleResult.h"
#include "model/AddImageVulWhiteListRequest.h"
#include "model/AddImageVulWhiteListResult.h"
#include "model/AddInstallCodeRequest.h"
#include "model/AddInstallCodeResult.h"
#include "model/AddPrivateRegistryRequest.h"
#include "model/AddPrivateRegistryResult.h"
#include "model/AddTagWithUuidRequest.h"
#include "model/AddTagWithUuidResult.h"
#include "model/AddUninstallClientsByUuidsRequest.h"
#include "model/AddUninstallClientsByUuidsResult.h"
#include "model/AddVpcHoneyPotRequest.h"
#include "model/AddVpcHoneyPotResult.h"
#include "model/AdvanceSecurityEventOperationsRequest.h"
#include "model/AdvanceSecurityEventOperationsResult.h"
#include "model/BatchOperateCommonOverallConfigRequest.h"
#include "model/BatchOperateCommonOverallConfigResult.h"
#include "model/BindAuthToMachineRequest.h"
#include "model/BindAuthToMachineResult.h"
#include "model/CancelOnceTaskRequest.h"
#include "model/CancelOnceTaskResult.h"
#include "model/ChangeAssetRefreshTaskConfigRequest.h"
#include "model/ChangeAssetRefreshTaskConfigResult.h"
#include "model/ChangeCheckConfigRequest.h"
#include "model/ChangeCheckConfigResult.h"
#include "model/ChangeCheckCustomConfigRequest.h"
#include "model/ChangeCheckCustomConfigResult.h"
#include "model/CheckQuaraFileIdRequest.h"
#include "model/CheckQuaraFileIdResult.h"
#include "model/CheckSecurityEventIdRequest.h"
#include "model/CheckSecurityEventIdResult.h"
#include "model/CheckUserHasEcsRequest.h"
#include "model/CheckUserHasEcsResult.h"
#include "model/ConfirmVirusEventsRequest.h"
#include "model/ConfirmVirusEventsResult.h"
#include "model/CreateAgentlessScanTaskRequest.h"
#include "model/CreateAgentlessScanTaskResult.h"
#include "model/CreateAntiBruteForceRuleRequest.h"
#include "model/CreateAntiBruteForceRuleResult.h"
#include "model/CreateAssetSelectionConfigRequest.h"
#include "model/CreateAssetSelectionConfigResult.h"
#include "model/CreateBackupPolicyRequest.h"
#include "model/CreateBackupPolicyResult.h"
#include "model/CreateContainerScanTaskRequest.h"
#include "model/CreateContainerScanTaskResult.h"
#include "model/CreateCustomBlockRecordRequest.h"
#include "model/CreateCustomBlockRecordResult.h"
#include "model/CreateCycleTaskRequest.h"
#include "model/CreateCycleTaskResult.h"
#include "model/CreateFileDetectRequest.h"
#include "model/CreateFileDetectResult.h"
#include "model/CreateFileDetectUploadUrlRequest.h"
#include "model/CreateFileDetectUploadUrlResult.h"
#include "model/CreateHoneypotRequest.h"
#include "model/CreateHoneypotResult.h"
#include "model/CreateHoneypotNodeRequest.h"
#include "model/CreateHoneypotNodeResult.h"
#include "model/CreateHoneypotPresetRequest.h"
#include "model/CreateHoneypotPresetResult.h"
#include "model/CreateHoneypotProbeRequest.h"
#include "model/CreateHoneypotProbeResult.h"
#include "model/CreateInterceptionRuleRequest.h"
#include "model/CreateInterceptionRuleResult.h"
#include "model/CreateInterceptionTargetRequest.h"
#include "model/CreateInterceptionTargetResult.h"
#include "model/CreateJenkinsImageRegistryRequest.h"
#include "model/CreateJenkinsImageRegistryResult.h"
#include "model/CreateOrUpdateAssetGroupRequest.h"
#include "model/CreateOrUpdateAssetGroupResult.h"
#include "model/CreateOrUpdateDingTalkRequest.h"
#include "model/CreateOrUpdateDingTalkResult.h"
#include "model/CreateRestoreJobRequest.h"
#include "model/CreateRestoreJobResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/CreateServiceTrailRequest.h"
#include "model/CreateServiceTrailResult.h"
#include "model/CreateSimilarSecurityEventsQueryTaskRequest.h"
#include "model/CreateSimilarSecurityEventsQueryTaskResult.h"
#include "model/CreateSuspEventNoteRequest.h"
#include "model/CreateSuspEventNoteResult.h"
#include "model/CreateUniBackupPolicyRequest.h"
#include "model/CreateUniBackupPolicyResult.h"
#include "model/CreateUniRestorePlanRequest.h"
#include "model/CreateUniRestorePlanResult.h"
#include "model/CreateVulAutoRepairConfigRequest.h"
#include "model/CreateVulAutoRepairConfigResult.h"
#include "model/DeleteAntiBruteForceRuleRequest.h"
#include "model/DeleteAntiBruteForceRuleResult.h"
#include "model/DeleteBackupPolicyRequest.h"
#include "model/DeleteBackupPolicyResult.h"
#include "model/DeleteBackupPolicyMachineRequest.h"
#include "model/DeleteBackupPolicyMachineResult.h"
#include "model/DeleteBinarySecurityPolicyRequest.h"
#include "model/DeleteBinarySecurityPolicyResult.h"
#include "model/DeleteClientUserDefineRuleRequest.h"
#include "model/DeleteClientUserDefineRuleResult.h"
#include "model/DeleteCustomBlockRecordRequest.h"
#include "model/DeleteCustomBlockRecordResult.h"
#include "model/DeleteCycleTaskRequest.h"
#include "model/DeleteCycleTaskResult.h"
#include "model/DeleteGroupRequest.h"
#include "model/DeleteGroupResult.h"
#include "model/DeleteHoneypotRequest.h"
#include "model/DeleteHoneypotResult.h"
#include "model/DeleteHoneypotNodeRequest.h"
#include "model/DeleteHoneypotNodeResult.h"
#include "model/DeleteHoneypotPresetRequest.h"
#include "model/DeleteHoneypotPresetResult.h"
#include "model/DeleteHoneypotProbeRequest.h"
#include "model/DeleteHoneypotProbeResult.h"
#include "model/DeleteInstallCodeRequest.h"
#include "model/DeleteInstallCodeResult.h"
#include "model/DeleteInterceptionRuleRequest.h"
#include "model/DeleteInterceptionRuleResult.h"
#include "model/DeleteInterceptionTargetRequest.h"
#include "model/DeleteInterceptionTargetResult.h"
#include "model/DeleteLoginBaseConfigRequest.h"
#include "model/DeleteLoginBaseConfigResult.h"
#include "model/DeletePrivateRegistryRequest.h"
#include "model/DeletePrivateRegistryResult.h"
#include "model/DeleteSecurityEventMarkMissListRequest.h"
#include "model/DeleteSecurityEventMarkMissListResult.h"
#include "model/DeleteServiceTrailRequest.h"
#include "model/DeleteServiceTrailResult.h"
#include "model/DeleteStrategyRequest.h"
#include "model/DeleteStrategyResult.h"
#include "model/DeleteSuspEventNodeRequest.h"
#include "model/DeleteSuspEventNodeResult.h"
#include "model/DeleteTagWithUuidRequest.h"
#include "model/DeleteTagWithUuidResult.h"
#include "model/DeleteUniBackupPolicyRequest.h"
#include "model/DeleteUniBackupPolicyResult.h"
#include "model/DeleteVpcHoneyPotRequest.h"
#include "model/DeleteVpcHoneyPotResult.h"
#include "model/DeleteVulWhitelistRequest.h"
#include "model/DeleteVulWhitelistResult.h"
#include "model/DescribeAccessKeyLeakDetailRequest.h"
#include "model/DescribeAccessKeyLeakDetailResult.h"
#include "model/DescribeAccesskeyLeakListRequest.h"
#include "model/DescribeAccesskeyLeakListResult.h"
#include "model/DescribeAffectedAssetsRequest.h"
#include "model/DescribeAffectedAssetsResult.h"
#include "model/DescribeAffectedMaliciousFileImagesRequest.h"
#include "model/DescribeAffectedMaliciousFileImagesResult.h"
#include "model/DescribeAgentInstallStatusRequest.h"
#include "model/DescribeAgentInstallStatusResult.h"
#include "model/DescribeAlarmEventDetailRequest.h"
#include "model/DescribeAlarmEventDetailResult.h"
#include "model/DescribeAlarmEventStackInfoRequest.h"
#include "model/DescribeAlarmEventStackInfoResult.h"
#include "model/DescribeAllEntityRequest.h"
#include "model/DescribeAllEntityResult.h"
#include "model/DescribeAllGroupsRequest.h"
#include "model/DescribeAllGroupsResult.h"
#include "model/DescribeAllImageBaselineRequest.h"
#include "model/DescribeAllImageBaselineResult.h"
#include "model/DescribeAntiBruteForceRulesRequest.h"
#include "model/DescribeAntiBruteForceRulesResult.h"
#include "model/DescribeAppVulScanCycleRequest.h"
#include "model/DescribeAppVulScanCycleResult.h"
#include "model/DescribeAssetDetailByUuidRequest.h"
#include "model/DescribeAssetDetailByUuidResult.h"
#include "model/DescribeAssetDetailByUuidsRequest.h"
#include "model/DescribeAssetDetailByUuidsResult.h"
#include "model/DescribeAssetSummaryRequest.h"
#include "model/DescribeAssetSummaryResult.h"
#include "model/DescribeAssetsSecurityEventSummaryRequest.h"
#include "model/DescribeAssetsSecurityEventSummaryResult.h"
#include "model/DescribeAttackAnalysisDataRequest.h"
#include "model/DescribeAttackAnalysisDataResult.h"
#include "model/DescribeAutoDelConfigRequest.h"
#include "model/DescribeAutoDelConfigResult.h"
#include "model/DescribeBackUpExportInfoRequest.h"
#include "model/DescribeBackUpExportInfoResult.h"
#include "model/DescribeBackupClientsRequest.h"
#include "model/DescribeBackupClientsResult.h"
#include "model/DescribeBackupFilesRequest.h"
#include "model/DescribeBackupFilesResult.h"
#include "model/DescribeBackupMachineStatusRequest.h"
#include "model/DescribeBackupMachineStatusResult.h"
#include "model/DescribeBackupPoliciesRequest.h"
#include "model/DescribeBackupPoliciesResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupRestoreCountRequest.h"
#include "model/DescribeBackupRestoreCountResult.h"
#include "model/DescribeBruteForceRecordsRequest.h"
#include "model/DescribeBruteForceRecordsResult.h"
#include "model/DescribeBruteForceSummaryRequest.h"
#include "model/DescribeBruteForceSummaryResult.h"
#include "model/DescribeCheckEcsWarningsRequest.h"
#include "model/DescribeCheckEcsWarningsResult.h"
#include "model/DescribeCheckFixDetailsRequest.h"
#include "model/DescribeCheckFixDetailsResult.h"
#include "model/DescribeCheckWarningDetailRequest.h"
#include "model/DescribeCheckWarningDetailResult.h"
#include "model/DescribeCheckWarningMachinesRequest.h"
#include "model/DescribeCheckWarningMachinesResult.h"
#include "model/DescribeCheckWarningSummaryRequest.h"
#include "model/DescribeCheckWarningSummaryResult.h"
#include "model/DescribeCheckWarningsRequest.h"
#include "model/DescribeCheckWarningsResult.h"
#include "model/DescribeClientConfSetupRequest.h"
#include "model/DescribeClientConfSetupResult.h"
#include "model/DescribeClientConfStrategyRequest.h"
#include "model/DescribeClientConfStrategyResult.h"
#include "model/DescribeCloudCenterInstancesRequest.h"
#include "model/DescribeCloudCenterInstancesResult.h"
#include "model/DescribeCloudProductFieldStatisticsRequest.h"
#include "model/DescribeCloudProductFieldStatisticsResult.h"
#include "model/DescribeClusterBasicInfoRequest.h"
#include "model/DescribeClusterBasicInfoResult.h"
#include "model/DescribeClusterInfoListRequest.h"
#include "model/DescribeClusterInfoListResult.h"
#include "model/DescribeClusterNetworkRequest.h"
#include "model/DescribeClusterNetworkResult.h"
#include "model/DescribeClusterVulStatisticsRequest.h"
#include "model/DescribeClusterVulStatisticsResult.h"
#include "model/DescribeCommonOverallConfigRequest.h"
#include "model/DescribeCommonOverallConfigResult.h"
#include "model/DescribeCommonOverallConfigListRequest.h"
#include "model/DescribeCommonOverallConfigListResult.h"
#include "model/DescribeCommonTargetConfigRequest.h"
#include "model/DescribeCommonTargetConfigResult.h"
#include "model/DescribeCommonTargetResultListRequest.h"
#include "model/DescribeCommonTargetResultListResult.h"
#include "model/DescribeConcernNecessityRequest.h"
#include "model/DescribeConcernNecessityResult.h"
#include "model/DescribeContainerCriteriaRequest.h"
#include "model/DescribeContainerCriteriaResult.h"
#include "model/DescribeContainerInstancesRequest.h"
#include "model/DescribeContainerInstancesResult.h"
#include "model/DescribeContainerStatisticsRequest.h"
#include "model/DescribeContainerStatisticsResult.h"
#include "model/DescribeContainerTagsRequest.h"
#include "model/DescribeContainerTagsResult.h"
#include "model/DescribeCountNotScannedImageRequest.h"
#include "model/DescribeCountNotScannedImageResult.h"
#include "model/DescribeCountScannedImageRequest.h"
#include "model/DescribeCountScannedImageResult.h"
#include "model/DescribeCriteriaRequest.h"
#include "model/DescribeCriteriaResult.h"
#include "model/DescribeCustomBlockRecordsRequest.h"
#include "model/DescribeCustomBlockRecordsResult.h"
#include "model/DescribeCycleTaskListRequest.h"
#include "model/DescribeCycleTaskListResult.h"
#include "model/DescribeDingTalkRequest.h"
#include "model/DescribeDingTalkResult.h"
#include "model/DescribeDomainCountRequest.h"
#include "model/DescribeDomainCountResult.h"
#include "model/DescribeDomainDetailRequest.h"
#include "model/DescribeDomainDetailResult.h"
#include "model/DescribeDomainListRequest.h"
#include "model/DescribeDomainListResult.h"
#include "model/DescribeEmgUserAgreementRequest.h"
#include "model/DescribeEmgUserAgreementResult.h"
#include "model/DescribeEmgVulItemRequest.h"
#include "model/DescribeEmgVulItemResult.h"
#include "model/DescribeEventLevelCountRequest.h"
#include "model/DescribeEventLevelCountResult.h"
#include "model/DescribeEventOnStageRequest.h"
#include "model/DescribeEventOnStageResult.h"
#include "model/DescribeExcludeSystemPathRequest.h"
#include "model/DescribeExcludeSystemPathResult.h"
#include "model/DescribeExportInfoRequest.h"
#include "model/DescribeExportInfoResult.h"
#include "model/DescribeExposedCheckWarningRequest.h"
#include "model/DescribeExposedCheckWarningResult.h"
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
#include "model/DescribeGroupStructRequest.h"
#include "model/DescribeGroupStructResult.h"
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
#include "model/DescribeHcExportInfoRequest.h"
#include "model/DescribeHcExportInfoResult.h"
#include "model/DescribeHoneyPotAuthRequest.h"
#include "model/DescribeHoneyPotAuthResult.h"
#include "model/DescribeHoneyPotSuspStatisticsRequest.h"
#include "model/DescribeHoneyPotSuspStatisticsResult.h"
#include "model/DescribeImageRequest.h"
#include "model/DescribeImageResult.h"
#include "model/DescribeImageBaselineCheckResultRequest.h"
#include "model/DescribeImageBaselineCheckResultResult.h"
#include "model/DescribeImageBaselineCheckSummaryRequest.h"
#include "model/DescribeImageBaselineCheckSummaryResult.h"
#include "model/DescribeImageBaselineDetailRequest.h"
#include "model/DescribeImageBaselineDetailResult.h"
#include "model/DescribeImageBaselineItemListRequest.h"
#include "model/DescribeImageBaselineItemListResult.h"
#include "model/DescribeImageBaselineStrategyRequest.h"
#include "model/DescribeImageBaselineStrategyResult.h"
#include "model/DescribeImageCriteriaRequest.h"
#include "model/DescribeImageCriteriaResult.h"
#include "model/DescribeImageFixTaskRequest.h"
#include "model/DescribeImageFixTaskResult.h"
#include "model/DescribeImageGroupedVulListRequest.h"
#include "model/DescribeImageGroupedVulListResult.h"
#include "model/DescribeImageInfoListRequest.h"
#include "model/DescribeImageInfoListResult.h"
#include "model/DescribeImageInstancesRequest.h"
#include "model/DescribeImageInstancesResult.h"
#include "model/DescribeImageLatestScanTaskRequest.h"
#include "model/DescribeImageLatestScanTaskResult.h"
#include "model/DescribeImageListBySensitiveFileRequest.h"
#include "model/DescribeImageListBySensitiveFileResult.h"
#include "model/DescribeImageListWithBaselineNameRequest.h"
#include "model/DescribeImageListWithBaselineNameResult.h"
#include "model/DescribeImageRepoCriteriaRequest.h"
#include "model/DescribeImageRepoCriteriaResult.h"
#include "model/DescribeImageRepoDetailListRequest.h"
#include "model/DescribeImageRepoDetailListResult.h"
#include "model/DescribeImageRepoListRequest.h"
#include "model/DescribeImageRepoListResult.h"
#include "model/DescribeImageScanAuthCountRequest.h"
#include "model/DescribeImageScanAuthCountResult.h"
#include "model/DescribeImageScanAuthorizationRequest.h"
#include "model/DescribeImageScanAuthorizationResult.h"
#include "model/DescribeImageSensitiveFileByKeyRequest.h"
#include "model/DescribeImageSensitiveFileByKeyResult.h"
#include "model/DescribeImageSensitiveFileListRequest.h"
#include "model/DescribeImageSensitiveFileListResult.h"
#include "model/DescribeImageStatisticsRequest.h"
#include "model/DescribeImageStatisticsResult.h"
#include "model/DescribeImageVulListRequest.h"
#include "model/DescribeImageVulListResult.h"
#include "model/DescribeImageVulWhiteListRequest.h"
#include "model/DescribeImageVulWhiteListResult.h"
#include "model/DescribeInstallCaptchaRequest.h"
#include "model/DescribeInstallCaptchaResult.h"
#include "model/DescribeInstallCodeRequest.h"
#include "model/DescribeInstallCodeResult.h"
#include "model/DescribeInstallCodesRequest.h"
#include "model/DescribeInstallCodesResult.h"
#include "model/DescribeInstanceAntiBruteForceRulesRequest.h"
#include "model/DescribeInstanceAntiBruteForceRulesResult.h"
#include "model/DescribeInstanceRebootStatusRequest.h"
#include "model/DescribeInstanceRebootStatusResult.h"
#include "model/DescribeInstanceStatisticsRequest.h"
#include "model/DescribeInstanceStatisticsResult.h"
#include "model/DescribeIpTagsRequest.h"
#include "model/DescribeIpTagsResult.h"
#include "model/DescribeLatestScanTaskRequest.h"
#include "model/DescribeLatestScanTaskResult.h"
#include "model/DescribeLogMetaRequest.h"
#include "model/DescribeLogMetaResult.h"
#include "model/DescribeLogShipperStatusRequest.h"
#include "model/DescribeLogShipperStatusResult.h"
#include "model/DescribeLoginBaseConfigsRequest.h"
#include "model/DescribeLoginBaseConfigsResult.h"
#include "model/DescribeLoginSwitchConfigsRequest.h"
#include "model/DescribeLoginSwitchConfigsResult.h"
#include "model/DescribeLogstoreStorageRequest.h"
#include "model/DescribeLogstoreStorageResult.h"
#include "model/DescribeMachineCanRebootRequest.h"
#include "model/DescribeMachineCanRebootResult.h"
#include "model/DescribeModuleConfigRequest.h"
#include "model/DescribeModuleConfigResult.h"
#include "model/DescribeMonitorAccountsRequest.h"
#include "model/DescribeMonitorAccountsResult.h"
#include "model/DescribeNoticeConfigRequest.h"
#include "model/DescribeNoticeConfigResult.h"
#include "model/DescribeNsasSuspEventTypeRequest.h"
#include "model/DescribeNsasSuspEventTypeResult.h"
#include "model/DescribeOfflineMachinesRequest.h"
#include "model/DescribeOfflineMachinesResult.h"
#include "model/DescribeOnceTaskRequest.h"
#include "model/DescribeOnceTaskResult.h"
#include "model/DescribeOnceTaskLeafRecordPageRequest.h"
#include "model/DescribeOnceTaskLeafRecordPageResult.h"
#include "model/DescribePropertyCountRequest.h"
#include "model/DescribePropertyCountResult.h"
#include "model/DescribePropertyCronDetailRequest.h"
#include "model/DescribePropertyCronDetailResult.h"
#include "model/DescribePropertyCronItemRequest.h"
#include "model/DescribePropertyCronItemResult.h"
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
#include "model/DescribePropertyScaItemRequest.h"
#include "model/DescribePropertyScaItemResult.h"
#include "model/DescribePropertyScheduleConfigRequest.h"
#include "model/DescribePropertyScheduleConfigResult.h"
#include "model/DescribePropertySoftwareDetailRequest.h"
#include "model/DescribePropertySoftwareDetailResult.h"
#include "model/DescribePropertySoftwareItemRequest.h"
#include "model/DescribePropertySoftwareItemResult.h"
#include "model/DescribePropertyTypeScaItemRequest.h"
#include "model/DescribePropertyTypeScaItemResult.h"
#include "model/DescribePropertyUsageNewestRequest.h"
#include "model/DescribePropertyUsageNewestResult.h"
#include "model/DescribePropertyUserDetailRequest.h"
#include "model/DescribePropertyUserDetailResult.h"
#include "model/DescribePropertyUserItemRequest.h"
#include "model/DescribePropertyUserItemResult.h"
#include "model/DescribeQuaraFileDownloadInfoRequest.h"
#include "model/DescribeQuaraFileDownloadInfoResult.h"
#include "model/DescribeRestoreJobsRequest.h"
#include "model/DescribeRestoreJobsResult.h"
#include "model/DescribeRestorePlansRequest.h"
#include "model/DescribeRestorePlansResult.h"
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
#include "model/DescribeRisksRequest.h"
#include "model/DescribeRisksResult.h"
#include "model/DescribeSasPmAgentListRequest.h"
#include "model/DescribeSasPmAgentListResult.h"
#include "model/DescribeScanTaskProgressRequest.h"
#include "model/DescribeScanTaskProgressResult.h"
#include "model/DescribeScanTaskStatisticsRequest.h"
#include "model/DescribeScanTaskStatisticsResult.h"
#include "model/DescribeSearchConditionRequest.h"
#include "model/DescribeSearchConditionResult.h"
#include "model/DescribeSecureSuggestionRequest.h"
#include "model/DescribeSecureSuggestionResult.h"
#include "model/DescribeSecurityCheckScheduleConfigRequest.h"
#include "model/DescribeSecurityCheckScheduleConfigResult.h"
#include "model/DescribeSecurityEventMarkMissListRequest.h"
#include "model/DescribeSecurityEventMarkMissListResult.h"
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
#include "model/DescribeSnapshotsRequest.h"
#include "model/DescribeSnapshotsResult.h"
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
#include "model/DescribeSuspEventExportInfoRequest.h"
#include "model/DescribeSuspEventExportInfoResult.h"
#include "model/DescribeSuspEventQuaraFilesRequest.h"
#include "model/DescribeSuspEventQuaraFilesResult.h"
#include "model/DescribeSuspEventUserSettingRequest.h"
#include "model/DescribeSuspEventUserSettingResult.h"
#include "model/DescribeSuspEventsRequest.h"
#include "model/DescribeSuspEventsResult.h"
#include "model/DescribeSuspiciousOverallConfigRequest.h"
#include "model/DescribeSuspiciousOverallConfigResult.h"
#include "model/DescribeSuspiciousUUIDConfigRequest.h"
#include "model/DescribeSuspiciousUUIDConfigResult.h"
#include "model/DescribeTargetRequest.h"
#include "model/DescribeTargetResult.h"
#include "model/DescribeTaskErrorLogRequest.h"
#include "model/DescribeTaskErrorLogResult.h"
#include "model/DescribeTotalStatisticsRequest.h"
#include "model/DescribeTotalStatisticsResult.h"
#include "model/DescribeTraceInfoDetailRequest.h"
#include "model/DescribeTraceInfoDetailResult.h"
#include "model/DescribeTraceInfoNodeRequest.h"
#include "model/DescribeTraceInfoNodeResult.h"
#include "model/DescribeUniBackupDatabaseRequest.h"
#include "model/DescribeUniBackupDatabaseResult.h"
#include "model/DescribeUniBackupPoliciesRequest.h"
#include "model/DescribeUniBackupPoliciesResult.h"
#include "model/DescribeUniBackupPolicyDetailRequest.h"
#include "model/DescribeUniBackupPolicyDetailResult.h"
#include "model/DescribeUniRecoverableListRequest.h"
#include "model/DescribeUniRecoverableListResult.h"
#include "model/DescribeUniSupportRegionRequest.h"
#include "model/DescribeUniSupportRegionResult.h"
#include "model/DescribeUserBackupMachinesRequest.h"
#include "model/DescribeUserBackupMachinesResult.h"
#include "model/DescribeUserBaselineAuthorizationRequest.h"
#include "model/DescribeUserBaselineAuthorizationResult.h"
#include "model/DescribeUserLayoutAuthorizationRequest.h"
#include "model/DescribeUserLayoutAuthorizationResult.h"
#include "model/DescribeUuidsByVulNamesRequest.h"
#include "model/DescribeUuidsByVulNamesResult.h"
#include "model/DescribeVendorListRequest.h"
#include "model/DescribeVendorListResult.h"
#include "model/DescribeVersionConfigRequest.h"
#include "model/DescribeVersionConfigResult.h"
#include "model/DescribeVpcHoneyPotCriteriaRequest.h"
#include "model/DescribeVpcHoneyPotCriteriaResult.h"
#include "model/DescribeVpcHoneyPotListRequest.h"
#include "model/DescribeVpcHoneyPotListResult.h"
#include "model/DescribeVpcListRequest.h"
#include "model/DescribeVpcListResult.h"
#include "model/DescribeVulCheckTaskStatusDetailRequest.h"
#include "model/DescribeVulCheckTaskStatusDetailResult.h"
#include "model/DescribeVulConfigRequest.h"
#include "model/DescribeVulConfigResult.h"
#include "model/DescribeVulDetailsRequest.h"
#include "model/DescribeVulDetailsResult.h"
#include "model/DescribeVulExportInfoRequest.h"
#include "model/DescribeVulExportInfoResult.h"
#include "model/DescribeVulFixStatisticsRequest.h"
#include "model/DescribeVulFixStatisticsResult.h"
#include "model/DescribeVulListRequest.h"
#include "model/DescribeVulListResult.h"
#include "model/DescribeVulListPageRequest.h"
#include "model/DescribeVulListPageResult.h"
#include "model/DescribeVulNumStatisticsRequest.h"
#include "model/DescribeVulNumStatisticsResult.h"
#include "model/DescribeVulTargetConfigRequest.h"
#include "model/DescribeVulTargetConfigResult.h"
#include "model/DescribeVulTargetStatisticsRequest.h"
#include "model/DescribeVulTargetStatisticsResult.h"
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
#include "model/DescribeWebLockExclusiveFileTypeRequest.h"
#include "model/DescribeWebLockExclusiveFileTypeResult.h"
#include "model/DescribeWebLockFileChangeStatisticsRequest.h"
#include "model/DescribeWebLockFileChangeStatisticsResult.h"
#include "model/DescribeWebLockFileEventsRequest.h"
#include "model/DescribeWebLockFileEventsResult.h"
#include "model/DescribeWebLockFileTypeSummaryRequest.h"
#include "model/DescribeWebLockFileTypeSummaryResult.h"
#include "model/DescribeWebLockInclusiveFileTypeRequest.h"
#include "model/DescribeWebLockInclusiveFileTypeResult.h"
#include "model/DescribeWebLockProcessBlockStatisticsRequest.h"
#include "model/DescribeWebLockProcessBlockStatisticsResult.h"
#include "model/DescribeWebLockProcessListRequest.h"
#include "model/DescribeWebLockProcessListResult.h"
#include "model/DescribeWebLockStatusRequest.h"
#include "model/DescribeWebLockStatusResult.h"
#include "model/DescribeWebLockTotalFileChangeCountRequest.h"
#include "model/DescribeWebLockTotalFileChangeCountResult.h"
#include "model/DescribeWebPathRequest.h"
#include "model/DescribeWebPathResult.h"
#include "model/DisableBruteForceRecordRequest.h"
#include "model/DisableBruteForceRecordResult.h"
#include "model/DisableCustomBlockRecordRequest.h"
#include "model/DisableCustomBlockRecordResult.h"
#include "model/EnableBruteForceRecordRequest.h"
#include "model/EnableBruteForceRecordResult.h"
#include "model/EnableCustomBlockRecordRequest.h"
#include "model/EnableCustomBlockRecordResult.h"
#include "model/ExecStrategyRequest.h"
#include "model/ExecStrategyResult.h"
#include "model/ExportRecordRequest.h"
#include "model/ExportRecordResult.h"
#include "model/ExportSuspEventsRequest.h"
#include "model/ExportSuspEventsResult.h"
#include "model/ExportVulRequest.h"
#include "model/ExportVulResult.h"
#include "model/ExportWarningRequest.h"
#include "model/ExportWarningResult.h"
#include "model/FindContainerNetworkConnectRequest.h"
#include "model/FindContainerNetworkConnectResult.h"
#include "model/FixCheckWarningsRequest.h"
#include "model/FixCheckWarningsResult.h"
#include "model/GenerateOnceTaskRequest.h"
#include "model/GenerateOnceTaskResult.h"
#include "model/GetAgentlessTaskCountRequest.h"
#include "model/GetAgentlessTaskCountResult.h"
#include "model/GetAlarmMachineCountRequest.h"
#include "model/GetAlarmMachineCountResult.h"
#include "model/GetAppNetworkRequest.h"
#include "model/GetAppNetworkResult.h"
#include "model/GetAssetDetailByUuidRequest.h"
#include "model/GetAssetDetailByUuidResult.h"
#include "model/GetAssetSelectionConfigRequest.h"
#include "model/GetAssetSelectionConfigResult.h"
#include "model/GetAssetsPropertyDetailRequest.h"
#include "model/GetAssetsPropertyDetailResult.h"
#include "model/GetAssetsPropertyItemRequest.h"
#include "model/GetAssetsPropertyItemResult.h"
#include "model/GetBackupStorageCountRequest.h"
#include "model/GetBackupStorageCountResult.h"
#include "model/GetCheckConfigRequest.h"
#include "model/GetCheckConfigResult.h"
#include "model/GetCheckDetailRequest.h"
#include "model/GetCheckDetailResult.h"
#include "model/GetCheckProcessRequest.h"
#include "model/GetCheckProcessResult.h"
#include "model/GetCheckRiskStatisticsRequest.h"
#include "model/GetCheckRiskStatisticsResult.h"
#include "model/GetCheckSummaryRequest.h"
#include "model/GetCheckSummaryResult.h"
#include "model/GetClientRatioStatisticRequest.h"
#include "model/GetClientRatioStatisticResult.h"
#include "model/GetClientUserDefineRuleRequest.h"
#include "model/GetClientUserDefineRuleResult.h"
#include "model/GetCloudAssetCriteriaRequest.h"
#include "model/GetCloudAssetCriteriaResult.h"
#include "model/GetCloudAssetDetailRequest.h"
#include "model/GetCloudAssetDetailResult.h"
#include "model/GetCloudAssetSummaryRequest.h"
#include "model/GetCloudAssetSummaryResult.h"
#include "model/GetClusterCheckItemWarningStatisticsRequest.h"
#include "model/GetClusterCheckItemWarningStatisticsResult.h"
#include "model/GetClusterRuleSummaryRequest.h"
#include "model/GetClusterRuleSummaryResult.h"
#include "model/GetClusterSuspEventStatisticsRequest.h"
#include "model/GetClusterSuspEventStatisticsResult.h"
#include "model/GetFileDetectApiInvokeInfoRequest.h"
#include "model/GetFileDetectApiInvokeInfoResult.h"
#include "model/GetFileDetectResultRequest.h"
#include "model/GetFileDetectResultResult.h"
#include "model/GetHoneypotNodeRequest.h"
#include "model/GetHoneypotNodeResult.h"
#include "model/GetHoneypotPresetRequest.h"
#include "model/GetHoneypotPresetResult.h"
#include "model/GetHoneypotProbeRequest.h"
#include "model/GetHoneypotProbeResult.h"
#include "model/GetImageScanNumInPeriodRequest.h"
#include "model/GetImageScanNumInPeriodResult.h"
#include "model/GetInterceptionRuleDetailRequest.h"
#include "model/GetInterceptionRuleDetailResult.h"
#include "model/GetInterceptionSummaryRequest.h"
#include "model/GetInterceptionSummaryResult.h"
#include "model/GetInterceptionTargetDetailRequest.h"
#include "model/GetInterceptionTargetDetailResult.h"
#include "model/GetLastOnceTaskInfoRequest.h"
#include "model/GetLastOnceTaskInfoResult.h"
#include "model/GetModuleConfigRequest.h"
#include "model/GetModuleConfigResult.h"
#include "model/GetOnceTaskResultInfoRequest.h"
#include "model/GetOnceTaskResultInfoResult.h"
#include "model/GetPropertyScheduleConfigRequest.h"
#include "model/GetPropertyScheduleConfigResult.h"
#include "model/GetRulesCountRequest.h"
#include "model/GetRulesCountResult.h"
#include "model/GetServiceTrailRequest.h"
#include "model/GetServiceTrailResult.h"
#include "model/GetSuspiciousStatisticsRequest.h"
#include "model/GetSuspiciousStatisticsResult.h"
#include "model/GetVulStatisticsRequest.h"
#include "model/GetVulStatisticsResult.h"
#include "model/GetVulWhitelistRequest.h"
#include "model/GetVulWhitelistResult.h"
#include "model/HandleSecurityEventsRequest.h"
#include "model/HandleSecurityEventsResult.h"
#include "model/HandleSimilarSecurityEventsRequest.h"
#include "model/HandleSimilarSecurityEventsResult.h"
#include "model/IgnoreCheckItemsRequest.h"
#include "model/IgnoreCheckItemsResult.h"
#include "model/IgnoreHcCheckWarningsRequest.h"
#include "model/IgnoreHcCheckWarningsResult.h"
#include "model/InstallBackupClientRequest.h"
#include "model/InstallBackupClientResult.h"
#include "model/InstallCloudMonitorRequest.h"
#include "model/InstallCloudMonitorResult.h"
#include "model/InstallPmAgentRequest.h"
#include "model/InstallPmAgentResult.h"
#include "model/InstallUniBackupAgentRequest.h"
#include "model/InstallUniBackupAgentResult.h"
#include "model/JoinWebLockProcessWhiteListRequest.h"
#include "model/JoinWebLockProcessWhiteListResult.h"
#include "model/ListAgentlessRegionRequest.h"
#include "model/ListAgentlessRegionResult.h"
#include "model/ListAgentlessRelateMaliciousRequest.h"
#include "model/ListAgentlessRelateMaliciousResult.h"
#include "model/ListAgentlessRiskUuidRequest.h"
#include "model/ListAgentlessRiskUuidResult.h"
#include "model/ListAgentlessTaskRequest.h"
#include "model/ListAgentlessTaskResult.h"
#include "model/ListAssetRefreshTaskConfigRequest.h"
#include "model/ListAssetRefreshTaskConfigResult.h"
#include "model/ListAssetSelectionSelectedTargetRequest.h"
#include "model/ListAssetSelectionSelectedTargetResult.h"
#include "model/ListAssetSelectionTargetRequest.h"
#include "model/ListAssetSelectionTargetResult.h"
#include "model/ListAvailableHoneypotRequest.h"
#include "model/ListAvailableHoneypotResult.h"
#include "model/ListCheckInstanceResultRequest.h"
#include "model/ListCheckInstanceResultResult.h"
#include "model/ListCheckItemWarningMachineRequest.h"
#include "model/ListCheckItemWarningMachineResult.h"
#include "model/ListCheckItemWarningSummaryRequest.h"
#include "model/ListCheckItemWarningSummaryResult.h"
#include "model/ListCheckResultRequest.h"
#include "model/ListCheckResultResult.h"
#include "model/ListCheckStandardRequest.h"
#include "model/ListCheckStandardResult.h"
#include "model/ListClientUserDefineRuleTypesRequest.h"
#include "model/ListClientUserDefineRuleTypesResult.h"
#include "model/ListClientUserDefineRulesRequest.h"
#include "model/ListClientUserDefineRulesResult.h"
#include "model/ListCloudAssetInstancesRequest.h"
#include "model/ListCloudAssetInstancesResult.h"
#include "model/ListClusterCnnfStatusDetailRequest.h"
#include "model/ListClusterCnnfStatusDetailResult.h"
#include "model/ListClusterInterceptionConfigRequest.h"
#include "model/ListClusterInterceptionConfigResult.h"
#include "model/ListHoneypotRequest.h"
#include "model/ListHoneypotResult.h"
#include "model/ListHoneypotAlarmEventsRequest.h"
#include "model/ListHoneypotAlarmEventsResult.h"
#include "model/ListHoneypotNodeRequest.h"
#include "model/ListHoneypotNodeResult.h"
#include "model/ListHoneypotPresetRequest.h"
#include "model/ListHoneypotPresetResult.h"
#include "model/ListHoneypotProbeRequest.h"
#include "model/ListHoneypotProbeResult.h"
#include "model/ListImageRegistryRegionRequest.h"
#include "model/ListImageRegistryRegionResult.h"
#include "model/ListImageRiskRequest.h"
#include "model/ListImageRiskResult.h"
#include "model/ListInstanceCatalogRequest.h"
#include "model/ListInstanceCatalogResult.h"
#include "model/ListInterceptionHistoryRequest.h"
#include "model/ListInterceptionHistoryResult.h"
#include "model/ListInterceptionRulePageRequest.h"
#include "model/ListInterceptionRulePageResult.h"
#include "model/ListInterceptionTargetPageRequest.h"
#include "model/ListInterceptionTargetPageResult.h"
#include "model/ListPluginForUuidRequest.h"
#include "model/ListPluginForUuidResult.h"
#include "model/ListPodRiskRequest.h"
#include "model/ListPodRiskResult.h"
#include "model/ListPrivateRegistryListRequest.h"
#include "model/ListPrivateRegistryListResult.h"
#include "model/ListPrivateRegistryTypeRequest.h"
#include "model/ListPrivateRegistryTypeResult.h"
#include "model/ListQueryRaspAppInfoRequest.h"
#include "model/ListQueryRaspAppInfoResult.h"
#include "model/ListRuleTargetAllRequest.h"
#include "model/ListRuleTargetAllResult.h"
#include "model/ListSystemAggregationRulesRequest.h"
#include "model/ListSystemAggregationRulesResult.h"
#include "model/ListSystemClientRuleTypesRequest.h"
#include "model/ListSystemClientRuleTypesResult.h"
#include "model/ListSystemClientRulesRequest.h"
#include "model/ListSystemClientRulesResult.h"
#include "model/ListSystemRuleAggregationTypesRequest.h"
#include "model/ListSystemRuleAggregationTypesResult.h"
#include "model/ListUninstallAegisMachinesRequest.h"
#include "model/ListUninstallAegisMachinesResult.h"
#include "model/ListUuidsByWebPathRequest.h"
#include "model/ListUuidsByWebPathResult.h"
#include "model/ListVulAutoRepairConfigRequest.h"
#include "model/ListVulAutoRepairConfigResult.h"
#include "model/ModifyAccessKeyLeakDealRequest.h"
#include "model/ModifyAccessKeyLeakDealResult.h"
#include "model/ModifyAntiBruteForceRuleRequest.h"
#include "model/ModifyAntiBruteForceRuleResult.h"
#include "model/ModifyAppVulScanCycleRequest.h"
#include "model/ModifyAppVulScanCycleResult.h"
#include "model/ModifyAssetGroupRequest.h"
#include "model/ModifyAssetGroupResult.h"
#include "model/ModifyAssetImportantRequest.h"
#include "model/ModifyAssetImportantResult.h"
#include "model/ModifyAutoDelConfigRequest.h"
#include "model/ModifyAutoDelConfigResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyBackupPolicyStatusRequest.h"
#include "model/ModifyBackupPolicyStatusResult.h"
#include "model/ModifyClearLogstoreStorageRequest.h"
#include "model/ModifyClearLogstoreStorageResult.h"
#include "model/ModifyClientConfSetupRequest.h"
#include "model/ModifyClientConfSetupResult.h"
#include "model/ModifyClientConfStrategyRequest.h"
#include "model/ModifyClientConfStrategyResult.h"
#include "model/ModifyClientUserDefineRuleRequest.h"
#include "model/ModifyClientUserDefineRuleResult.h"
#include "model/ModifyClusterCnnfStatusUserConfirmRequest.h"
#include "model/ModifyClusterCnnfStatusUserConfirmResult.h"
#include "model/ModifyConcernNecessityRequest.h"
#include "model/ModifyConcernNecessityResult.h"
#include "model/ModifyCreateVulWhitelistRequest.h"
#include "model/ModifyCreateVulWhitelistResult.h"
#include "model/ModifyCustomBlockRecordRequest.h"
#include "model/ModifyCustomBlockRecordResult.h"
#include "model/ModifyCycleTaskRequest.h"
#include "model/ModifyCycleTaskResult.h"
#include "model/ModifyEmgVulSubmitRequest.h"
#include "model/ModifyEmgVulSubmitResult.h"
#include "model/ModifyGroupPropertyRequest.h"
#include "model/ModifyGroupPropertyResult.h"
#include "model/ModifyInstanceAntiBruteForceRuleRequest.h"
#include "model/ModifyInstanceAntiBruteForceRuleResult.h"
#include "model/ModifyInterceptionRuleRequest.h"
#include "model/ModifyInterceptionRuleResult.h"
#include "model/ModifyInterceptionRuleSwitchRequest.h"
#include "model/ModifyInterceptionRuleSwitchResult.h"
#include "model/ModifyInterceptionTargetRequest.h"
#include "model/ModifyInterceptionTargetResult.h"
#include "model/ModifyLogMetaStatusRequest.h"
#include "model/ModifyLogMetaStatusResult.h"
#include "model/ModifyLoginBaseConfigRequest.h"
#include "model/ModifyLoginBaseConfigResult.h"
#include "model/ModifyLoginSwitchConfigRequest.h"
#include "model/ModifyLoginSwitchConfigResult.h"
#include "model/ModifyNoticeConfigRequest.h"
#include "model/ModifyNoticeConfigResult.h"
#include "model/ModifyOpenLogShipperRequest.h"
#include "model/ModifyOpenLogShipperResult.h"
#include "model/ModifyOperateVulRequest.h"
#include "model/ModifyOperateVulResult.h"
#include "model/ModifyPropertyScheduleConfigRequest.h"
#include "model/ModifyPropertyScheduleConfigResult.h"
#include "model/ModifyPushAllTaskRequest.h"
#include "model/ModifyPushAllTaskResult.h"
#include "model/ModifyRefreshProcessInfoRequest.h"
#include "model/ModifyRefreshProcessInfoResult.h"
#include "model/ModifyRiskCheckStatusRequest.h"
#include "model/ModifyRiskCheckStatusResult.h"
#include "model/ModifyRiskSingleResultStatusRequest.h"
#include "model/ModifyRiskSingleResultStatusResult.h"
#include "model/ModifySecurityCheckScheduleConfigRequest.h"
#include "model/ModifySecurityCheckScheduleConfigResult.h"
#include "model/ModifySecurityEventMarkMissIndividuallyRequest.h"
#include "model/ModifySecurityEventMarkMissIndividuallyResult.h"
#include "model/ModifyStartVulScanRequest.h"
#include "model/ModifyStartVulScanResult.h"
#include "model/ModifyStrategyRequest.h"
#include "model/ModifyStrategyResult.h"
#include "model/ModifyStrategyTargetRequest.h"
#include "model/ModifyStrategyTargetResult.h"
#include "model/ModifyTagWithUuidRequest.h"
#include "model/ModifyTagWithUuidResult.h"
#include "model/ModifyUniBackupPolicyRequest.h"
#include "model/ModifyUniBackupPolicyResult.h"
#include "model/ModifyVpcHoneyPotRequest.h"
#include "model/ModifyVpcHoneyPotResult.h"
#include "model/ModifyVulConfigRequest.h"
#include "model/ModifyVulConfigResult.h"
#include "model/ModifyVulTargetRequest.h"
#include "model/ModifyVulTargetResult.h"
#include "model/ModifyVulTargetConfigRequest.h"
#include "model/ModifyVulTargetConfigResult.h"
#include "model/ModifyVulWhitelistTargetRequest.h"
#include "model/ModifyVulWhitelistTargetResult.h"
#include "model/ModifyWebLockCreateConfigRequest.h"
#include "model/ModifyWebLockCreateConfigResult.h"
#include "model/ModifyWebLockDeleteConfigRequest.h"
#include "model/ModifyWebLockDeleteConfigResult.h"
#include "model/ModifyWebLockProcessStatusRequest.h"
#include "model/ModifyWebLockProcessStatusResult.h"
#include "model/ModifyWebLockStartRequest.h"
#include "model/ModifyWebLockStartResult.h"
#include "model/ModifyWebLockStatusRequest.h"
#include "model/ModifyWebLockStatusResult.h"
#include "model/ModifyWebLockUnbindRequest.h"
#include "model/ModifyWebLockUnbindResult.h"
#include "model/ModifyWebLockUpdateConfigRequest.h"
#include "model/ModifyWebLockUpdateConfigResult.h"
#include "model/ModifyWebPathRequest.h"
#include "model/ModifyWebPathResult.h"
#include "model/OpenSensitiveFileScanRequest.h"
#include "model/OpenSensitiveFileScanResult.h"
#include "model/OperateAgentClientInstallRequest.h"
#include "model/OperateAgentClientInstallResult.h"
#include "model/OperateCommonOverallConfigRequest.h"
#include "model/OperateCommonOverallConfigResult.h"
#include "model/OperateCommonTargetConfigRequest.h"
#include "model/OperateCommonTargetConfigResult.h"
#include "model/OperateImageBaselineWhitelistRequest.h"
#include "model/OperateImageBaselineWhitelistResult.h"
#include "model/OperateImageVulRequest.h"
#include "model/OperateImageVulResult.h"
#include "model/OperateSuspiciousOverallConfigRequest.h"
#include "model/OperateSuspiciousOverallConfigResult.h"
#include "model/OperateSuspiciousTargetConfigRequest.h"
#include "model/OperateSuspiciousTargetConfigResult.h"
#include "model/OperateVirusEventsRequest.h"
#include "model/OperateVirusEventsResult.h"
#include "model/OperateVulsRequest.h"
#include "model/OperateVulsResult.h"
#include "model/OperateWebLockFileEventsRequest.h"
#include "model/OperateWebLockFileEventsResult.h"
#include "model/OperationCancelIgnoreSuspEventRequest.h"
#include "model/OperationCancelIgnoreSuspEventResult.h"
#include "model/OperationSuspEventsRequest.h"
#include "model/OperationSuspEventsResult.h"
#include "model/PageImageRegistryRequest.h"
#include "model/PageImageRegistryResult.h"
#include "model/PauseClientRequest.h"
#include "model/PauseClientResult.h"
#include "model/PublicCreateImageScanTaskRequest.h"
#include "model/PublicCreateImageScanTaskResult.h"
#include "model/PublicPreCheckImageScanTaskRequest.h"
#include "model/PublicPreCheckImageScanTaskResult.h"
#include "model/PublicSyncAndCreateImageScanTaskRequest.h"
#include "model/PublicSyncAndCreateImageScanTaskResult.h"
#include "model/QueryDiscoverDatabaseRequest.h"
#include "model/QueryDiscoverDatabaseResult.h"
#include "model/QueryGroupIdByGroupNameRequest.h"
#include "model/QueryGroupIdByGroupNameResult.h"
#include "model/QueryGroupedSecurityEventMarkMissListRequest.h"
#include "model/QueryGroupedSecurityEventMarkMissListResult.h"
#include "model/QueryJenkinsImageRegistryPersistenceDayRequest.h"
#include "model/QueryJenkinsImageRegistryPersistenceDayResult.h"
#include "model/QueryPreCheckDatabaseRequest.h"
#include "model/QueryPreCheckDatabaseResult.h"
#include "model/RebootMachineRequest.h"
#include "model/RebootMachineResult.h"
#include "model/RefreshAssetsRequest.h"
#include "model/RefreshAssetsResult.h"
#include "model/RefreshContainerAssetsRequest.h"
#include "model/RefreshContainerAssetsResult.h"
#include "model/RemoveCheckInstanceResultWhiteListRequest.h"
#include "model/RemoveCheckInstanceResultWhiteListResult.h"
#include "model/RemoveCheckResultWhiteListRequest.h"
#include "model/RemoveCheckResultWhiteListResult.h"
#include "model/RollbackSuspEventQuaraFileRequest.h"
#include "model/RollbackSuspEventQuaraFileResult.h"
#include "model/SasInstallCodeRequest.h"
#include "model/SasInstallCodeResult.h"
#include "model/SaveImageBaselineStrategyRequest.h"
#include "model/SaveImageBaselineStrategyResult.h"
#include "model/SaveSuspEventUserSettingRequest.h"
#include "model/SaveSuspEventUserSettingResult.h"
#include "model/SetClusterInterceptionConfigRequest.h"
#include "model/SetClusterInterceptionConfigResult.h"
#include "model/SetRegistryScanDayNumRequest.h"
#include "model/SetRegistryScanDayNumResult.h"
#include "model/StartBaselineSecurityCheckRequest.h"
#include "model/StartBaselineSecurityCheckResult.h"
#include "model/StartDiscoverDatabaseTaskRequest.h"
#include "model/StartDiscoverDatabaseTaskResult.h"
#include "model/StartPreCheckDatabaseRequest.h"
#include "model/StartPreCheckDatabaseResult.h"
#include "model/StartVirusScanTaskRequest.h"
#include "model/StartVirusScanTaskResult.h"
#include "model/SubmitCheckRequest.h"
#include "model/SubmitCheckResult.h"
#include "model/UnbindAegisRequest.h"
#include "model/UnbindAegisResult.h"
#include "model/UninstallBackupClientRequest.h"
#include "model/UninstallBackupClientResult.h"
#include "model/UninstallUniBackupAgentRequest.h"
#include "model/UninstallUniBackupAgentResult.h"
#include "model/UpdateHoneypotRequest.h"
#include "model/UpdateHoneypotResult.h"
#include "model/UpdateHoneypotNodeRequest.h"
#include "model/UpdateHoneypotNodeResult.h"
#include "model/UpdateHoneypotPresetRequest.h"
#include "model/UpdateHoneypotPresetResult.h"
#include "model/UpdateHoneypotProbeRequest.h"
#include "model/UpdateHoneypotProbeResult.h"
#include "model/UpdateJenkinsImageRegistryNameRequest.h"
#include "model/UpdateJenkinsImageRegistryNameResult.h"
#include "model/UpdateJenkinsImageRegistryPersistenceDayRequest.h"
#include "model/UpdateJenkinsImageRegistryPersistenceDayResult.h"
#include "model/UpgradeBackupPolicyVersionRequest.h"
#include "model/UpgradeBackupPolicyVersionResult.h"
#include "model/ValidateHcWarningsRequest.h"
#include "model/ValidateHcWarningsResult.h"
#include "model/VerifyCheckInstanceResultRequest.h"
#include "model/VerifyCheckInstanceResultResult.h"
#include "model/VerifyCheckResultRequest.h"
#include "model/VerifyCheckResultResult.h"


namespace AlibabaCloud
{
	namespace Sas
	{
		class ALIBABACLOUD_SAS_EXPORT SasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAssetSelectionCriteriaResult> AddAssetSelectionCriteriaOutcome;
			typedef std::future<AddAssetSelectionCriteriaOutcome> AddAssetSelectionCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddAssetSelectionCriteriaRequest&, const AddAssetSelectionCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAssetSelectionCriteriaAsyncHandler;
			typedef Outcome<Error, Model::AddCheckInstanceResultWhiteListResult> AddCheckInstanceResultWhiteListOutcome;
			typedef std::future<AddCheckInstanceResultWhiteListOutcome> AddCheckInstanceResultWhiteListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddCheckInstanceResultWhiteListRequest&, const AddCheckInstanceResultWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCheckInstanceResultWhiteListAsyncHandler;
			typedef Outcome<Error, Model::AddCheckResultWhiteListResult> AddCheckResultWhiteListOutcome;
			typedef std::future<AddCheckResultWhiteListOutcome> AddCheckResultWhiteListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddCheckResultWhiteListRequest&, const AddCheckResultWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCheckResultWhiteListAsyncHandler;
			typedef Outcome<Error, Model::AddClientUserDefineRuleResult> AddClientUserDefineRuleOutcome;
			typedef std::future<AddClientUserDefineRuleOutcome> AddClientUserDefineRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddClientUserDefineRuleRequest&, const AddClientUserDefineRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddClientUserDefineRuleAsyncHandler;
			typedef Outcome<Error, Model::AddImageVulWhiteListResult> AddImageVulWhiteListOutcome;
			typedef std::future<AddImageVulWhiteListOutcome> AddImageVulWhiteListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddImageVulWhiteListRequest&, const AddImageVulWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddImageVulWhiteListAsyncHandler;
			typedef Outcome<Error, Model::AddInstallCodeResult> AddInstallCodeOutcome;
			typedef std::future<AddInstallCodeOutcome> AddInstallCodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddInstallCodeRequest&, const AddInstallCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddInstallCodeAsyncHandler;
			typedef Outcome<Error, Model::AddPrivateRegistryResult> AddPrivateRegistryOutcome;
			typedef std::future<AddPrivateRegistryOutcome> AddPrivateRegistryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddPrivateRegistryRequest&, const AddPrivateRegistryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPrivateRegistryAsyncHandler;
			typedef Outcome<Error, Model::AddTagWithUuidResult> AddTagWithUuidOutcome;
			typedef std::future<AddTagWithUuidOutcome> AddTagWithUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddTagWithUuidRequest&, const AddTagWithUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagWithUuidAsyncHandler;
			typedef Outcome<Error, Model::AddUninstallClientsByUuidsResult> AddUninstallClientsByUuidsOutcome;
			typedef std::future<AddUninstallClientsByUuidsOutcome> AddUninstallClientsByUuidsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddUninstallClientsByUuidsRequest&, const AddUninstallClientsByUuidsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUninstallClientsByUuidsAsyncHandler;
			typedef Outcome<Error, Model::AddVpcHoneyPotResult> AddVpcHoneyPotOutcome;
			typedef std::future<AddVpcHoneyPotOutcome> AddVpcHoneyPotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AddVpcHoneyPotRequest&, const AddVpcHoneyPotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVpcHoneyPotAsyncHandler;
			typedef Outcome<Error, Model::AdvanceSecurityEventOperationsResult> AdvanceSecurityEventOperationsOutcome;
			typedef std::future<AdvanceSecurityEventOperationsOutcome> AdvanceSecurityEventOperationsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::AdvanceSecurityEventOperationsRequest&, const AdvanceSecurityEventOperationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AdvanceSecurityEventOperationsAsyncHandler;
			typedef Outcome<Error, Model::BatchOperateCommonOverallConfigResult> BatchOperateCommonOverallConfigOutcome;
			typedef std::future<BatchOperateCommonOverallConfigOutcome> BatchOperateCommonOverallConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::BatchOperateCommonOverallConfigRequest&, const BatchOperateCommonOverallConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchOperateCommonOverallConfigAsyncHandler;
			typedef Outcome<Error, Model::BindAuthToMachineResult> BindAuthToMachineOutcome;
			typedef std::future<BindAuthToMachineOutcome> BindAuthToMachineOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::BindAuthToMachineRequest&, const BindAuthToMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAuthToMachineAsyncHandler;
			typedef Outcome<Error, Model::CancelOnceTaskResult> CancelOnceTaskOutcome;
			typedef std::future<CancelOnceTaskOutcome> CancelOnceTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CancelOnceTaskRequest&, const CancelOnceTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOnceTaskAsyncHandler;
			typedef Outcome<Error, Model::ChangeAssetRefreshTaskConfigResult> ChangeAssetRefreshTaskConfigOutcome;
			typedef std::future<ChangeAssetRefreshTaskConfigOutcome> ChangeAssetRefreshTaskConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ChangeAssetRefreshTaskConfigRequest&, const ChangeAssetRefreshTaskConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeAssetRefreshTaskConfigAsyncHandler;
			typedef Outcome<Error, Model::ChangeCheckConfigResult> ChangeCheckConfigOutcome;
			typedef std::future<ChangeCheckConfigOutcome> ChangeCheckConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ChangeCheckConfigRequest&, const ChangeCheckConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeCheckConfigAsyncHandler;
			typedef Outcome<Error, Model::ChangeCheckCustomConfigResult> ChangeCheckCustomConfigOutcome;
			typedef std::future<ChangeCheckCustomConfigOutcome> ChangeCheckCustomConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ChangeCheckCustomConfigRequest&, const ChangeCheckCustomConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeCheckCustomConfigAsyncHandler;
			typedef Outcome<Error, Model::CheckQuaraFileIdResult> CheckQuaraFileIdOutcome;
			typedef std::future<CheckQuaraFileIdOutcome> CheckQuaraFileIdOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CheckQuaraFileIdRequest&, const CheckQuaraFileIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckQuaraFileIdAsyncHandler;
			typedef Outcome<Error, Model::CheckSecurityEventIdResult> CheckSecurityEventIdOutcome;
			typedef std::future<CheckSecurityEventIdOutcome> CheckSecurityEventIdOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CheckSecurityEventIdRequest&, const CheckSecurityEventIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSecurityEventIdAsyncHandler;
			typedef Outcome<Error, Model::CheckUserHasEcsResult> CheckUserHasEcsOutcome;
			typedef std::future<CheckUserHasEcsOutcome> CheckUserHasEcsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CheckUserHasEcsRequest&, const CheckUserHasEcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckUserHasEcsAsyncHandler;
			typedef Outcome<Error, Model::ConfirmVirusEventsResult> ConfirmVirusEventsOutcome;
			typedef std::future<ConfirmVirusEventsOutcome> ConfirmVirusEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ConfirmVirusEventsRequest&, const ConfirmVirusEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmVirusEventsAsyncHandler;
			typedef Outcome<Error, Model::CreateAgentlessScanTaskResult> CreateAgentlessScanTaskOutcome;
			typedef std::future<CreateAgentlessScanTaskOutcome> CreateAgentlessScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateAgentlessScanTaskRequest&, const CreateAgentlessScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentlessScanTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateAntiBruteForceRuleResult> CreateAntiBruteForceRuleOutcome;
			typedef std::future<CreateAntiBruteForceRuleOutcome> CreateAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateAntiBruteForceRuleRequest&, const CreateAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateAssetSelectionConfigResult> CreateAssetSelectionConfigOutcome;
			typedef std::future<CreateAssetSelectionConfigOutcome> CreateAssetSelectionConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateAssetSelectionConfigRequest&, const CreateAssetSelectionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetSelectionConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupPolicyResult> CreateBackupPolicyOutcome;
			typedef std::future<CreateBackupPolicyOutcome> CreateBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateBackupPolicyRequest&, const CreateBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateContainerScanTaskResult> CreateContainerScanTaskOutcome;
			typedef std::future<CreateContainerScanTaskOutcome> CreateContainerScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateContainerScanTaskRequest&, const CreateContainerScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateContainerScanTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomBlockRecordResult> CreateCustomBlockRecordOutcome;
			typedef std::future<CreateCustomBlockRecordOutcome> CreateCustomBlockRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateCustomBlockRecordRequest&, const CreateCustomBlockRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomBlockRecordAsyncHandler;
			typedef Outcome<Error, Model::CreateCycleTaskResult> CreateCycleTaskOutcome;
			typedef std::future<CreateCycleTaskOutcome> CreateCycleTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateCycleTaskRequest&, const CreateCycleTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCycleTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateFileDetectResult> CreateFileDetectOutcome;
			typedef std::future<CreateFileDetectOutcome> CreateFileDetectOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateFileDetectRequest&, const CreateFileDetectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileDetectAsyncHandler;
			typedef Outcome<Error, Model::CreateFileDetectUploadUrlResult> CreateFileDetectUploadUrlOutcome;
			typedef std::future<CreateFileDetectUploadUrlOutcome> CreateFileDetectUploadUrlOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateFileDetectUploadUrlRequest&, const CreateFileDetectUploadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileDetectUploadUrlAsyncHandler;
			typedef Outcome<Error, Model::CreateHoneypotResult> CreateHoneypotOutcome;
			typedef std::future<CreateHoneypotOutcome> CreateHoneypotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateHoneypotRequest&, const CreateHoneypotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHoneypotAsyncHandler;
			typedef Outcome<Error, Model::CreateHoneypotNodeResult> CreateHoneypotNodeOutcome;
			typedef std::future<CreateHoneypotNodeOutcome> CreateHoneypotNodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateHoneypotNodeRequest&, const CreateHoneypotNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHoneypotNodeAsyncHandler;
			typedef Outcome<Error, Model::CreateHoneypotPresetResult> CreateHoneypotPresetOutcome;
			typedef std::future<CreateHoneypotPresetOutcome> CreateHoneypotPresetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateHoneypotPresetRequest&, const CreateHoneypotPresetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHoneypotPresetAsyncHandler;
			typedef Outcome<Error, Model::CreateHoneypotProbeResult> CreateHoneypotProbeOutcome;
			typedef std::future<CreateHoneypotProbeOutcome> CreateHoneypotProbeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateHoneypotProbeRequest&, const CreateHoneypotProbeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHoneypotProbeAsyncHandler;
			typedef Outcome<Error, Model::CreateInterceptionRuleResult> CreateInterceptionRuleOutcome;
			typedef std::future<CreateInterceptionRuleOutcome> CreateInterceptionRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateInterceptionRuleRequest&, const CreateInterceptionRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInterceptionRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateInterceptionTargetResult> CreateInterceptionTargetOutcome;
			typedef std::future<CreateInterceptionTargetOutcome> CreateInterceptionTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateInterceptionTargetRequest&, const CreateInterceptionTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInterceptionTargetAsyncHandler;
			typedef Outcome<Error, Model::CreateJenkinsImageRegistryResult> CreateJenkinsImageRegistryOutcome;
			typedef std::future<CreateJenkinsImageRegistryOutcome> CreateJenkinsImageRegistryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateJenkinsImageRegistryRequest&, const CreateJenkinsImageRegistryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJenkinsImageRegistryAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateAssetGroupResult> CreateOrUpdateAssetGroupOutcome;
			typedef std::future<CreateOrUpdateAssetGroupOutcome> CreateOrUpdateAssetGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateOrUpdateAssetGroupRequest&, const CreateOrUpdateAssetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateAssetGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateDingTalkResult> CreateOrUpdateDingTalkOutcome;
			typedef std::future<CreateOrUpdateDingTalkOutcome> CreateOrUpdateDingTalkOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateOrUpdateDingTalkRequest&, const CreateOrUpdateDingTalkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateDingTalkAsyncHandler;
			typedef Outcome<Error, Model::CreateRestoreJobResult> CreateRestoreJobOutcome;
			typedef std::future<CreateRestoreJobOutcome> CreateRestoreJobOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateRestoreJobRequest&, const CreateRestoreJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRestoreJobAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceTrailResult> CreateServiceTrailOutcome;
			typedef std::future<CreateServiceTrailOutcome> CreateServiceTrailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateServiceTrailRequest&, const CreateServiceTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTrailAsyncHandler;
			typedef Outcome<Error, Model::CreateSimilarSecurityEventsQueryTaskResult> CreateSimilarSecurityEventsQueryTaskOutcome;
			typedef std::future<CreateSimilarSecurityEventsQueryTaskOutcome> CreateSimilarSecurityEventsQueryTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateSimilarSecurityEventsQueryTaskRequest&, const CreateSimilarSecurityEventsQueryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSimilarSecurityEventsQueryTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateSuspEventNoteResult> CreateSuspEventNoteOutcome;
			typedef std::future<CreateSuspEventNoteOutcome> CreateSuspEventNoteOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateSuspEventNoteRequest&, const CreateSuspEventNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuspEventNoteAsyncHandler;
			typedef Outcome<Error, Model::CreateUniBackupPolicyResult> CreateUniBackupPolicyOutcome;
			typedef std::future<CreateUniBackupPolicyOutcome> CreateUniBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateUniBackupPolicyRequest&, const CreateUniBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUniBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateUniRestorePlanResult> CreateUniRestorePlanOutcome;
			typedef std::future<CreateUniRestorePlanOutcome> CreateUniRestorePlanOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateUniRestorePlanRequest&, const CreateUniRestorePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUniRestorePlanAsyncHandler;
			typedef Outcome<Error, Model::CreateVulAutoRepairConfigResult> CreateVulAutoRepairConfigOutcome;
			typedef std::future<CreateVulAutoRepairConfigOutcome> CreateVulAutoRepairConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateVulAutoRepairConfigRequest&, const CreateVulAutoRepairConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulAutoRepairConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteAntiBruteForceRuleResult> DeleteAntiBruteForceRuleOutcome;
			typedef std::future<DeleteAntiBruteForceRuleOutcome> DeleteAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteAntiBruteForceRuleRequest&, const DeleteAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupPolicyResult> DeleteBackupPolicyOutcome;
			typedef std::future<DeleteBackupPolicyOutcome> DeleteBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteBackupPolicyRequest&, const DeleteBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupPolicyMachineResult> DeleteBackupPolicyMachineOutcome;
			typedef std::future<DeleteBackupPolicyMachineOutcome> DeleteBackupPolicyMachineOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteBackupPolicyMachineRequest&, const DeleteBackupPolicyMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupPolicyMachineAsyncHandler;
			typedef Outcome<Error, Model::DeleteBinarySecurityPolicyResult> DeleteBinarySecurityPolicyOutcome;
			typedef std::future<DeleteBinarySecurityPolicyOutcome> DeleteBinarySecurityPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteBinarySecurityPolicyRequest&, const DeleteBinarySecurityPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBinarySecurityPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteClientUserDefineRuleResult> DeleteClientUserDefineRuleOutcome;
			typedef std::future<DeleteClientUserDefineRuleOutcome> DeleteClientUserDefineRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteClientUserDefineRuleRequest&, const DeleteClientUserDefineRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClientUserDefineRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomBlockRecordResult> DeleteCustomBlockRecordOutcome;
			typedef std::future<DeleteCustomBlockRecordOutcome> DeleteCustomBlockRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteCustomBlockRecordRequest&, const DeleteCustomBlockRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomBlockRecordAsyncHandler;
			typedef Outcome<Error, Model::DeleteCycleTaskResult> DeleteCycleTaskOutcome;
			typedef std::future<DeleteCycleTaskOutcome> DeleteCycleTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteCycleTaskRequest&, const DeleteCycleTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCycleTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupResult> DeleteGroupOutcome;
			typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteGroupRequest&, const DeleteGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteHoneypotResult> DeleteHoneypotOutcome;
			typedef std::future<DeleteHoneypotOutcome> DeleteHoneypotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteHoneypotRequest&, const DeleteHoneypotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHoneypotAsyncHandler;
			typedef Outcome<Error, Model::DeleteHoneypotNodeResult> DeleteHoneypotNodeOutcome;
			typedef std::future<DeleteHoneypotNodeOutcome> DeleteHoneypotNodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteHoneypotNodeRequest&, const DeleteHoneypotNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHoneypotNodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteHoneypotPresetResult> DeleteHoneypotPresetOutcome;
			typedef std::future<DeleteHoneypotPresetOutcome> DeleteHoneypotPresetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteHoneypotPresetRequest&, const DeleteHoneypotPresetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHoneypotPresetAsyncHandler;
			typedef Outcome<Error, Model::DeleteHoneypotProbeResult> DeleteHoneypotProbeOutcome;
			typedef std::future<DeleteHoneypotProbeOutcome> DeleteHoneypotProbeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteHoneypotProbeRequest&, const DeleteHoneypotProbeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHoneypotProbeAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstallCodeResult> DeleteInstallCodeOutcome;
			typedef std::future<DeleteInstallCodeOutcome> DeleteInstallCodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteInstallCodeRequest&, const DeleteInstallCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstallCodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteInterceptionRuleResult> DeleteInterceptionRuleOutcome;
			typedef std::future<DeleteInterceptionRuleOutcome> DeleteInterceptionRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteInterceptionRuleRequest&, const DeleteInterceptionRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInterceptionRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteInterceptionTargetResult> DeleteInterceptionTargetOutcome;
			typedef std::future<DeleteInterceptionTargetOutcome> DeleteInterceptionTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteInterceptionTargetRequest&, const DeleteInterceptionTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInterceptionTargetAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoginBaseConfigResult> DeleteLoginBaseConfigOutcome;
			typedef std::future<DeleteLoginBaseConfigOutcome> DeleteLoginBaseConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteLoginBaseConfigRequest&, const DeleteLoginBaseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginBaseConfigAsyncHandler;
			typedef Outcome<Error, Model::DeletePrivateRegistryResult> DeletePrivateRegistryOutcome;
			typedef std::future<DeletePrivateRegistryOutcome> DeletePrivateRegistryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeletePrivateRegistryRequest&, const DeletePrivateRegistryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateRegistryAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecurityEventMarkMissListResult> DeleteSecurityEventMarkMissListOutcome;
			typedef std::future<DeleteSecurityEventMarkMissListOutcome> DeleteSecurityEventMarkMissListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteSecurityEventMarkMissListRequest&, const DeleteSecurityEventMarkMissListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityEventMarkMissListAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceTrailResult> DeleteServiceTrailOutcome;
			typedef std::future<DeleteServiceTrailOutcome> DeleteServiceTrailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteServiceTrailRequest&, const DeleteServiceTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTrailAsyncHandler;
			typedef Outcome<Error, Model::DeleteStrategyResult> DeleteStrategyOutcome;
			typedef std::future<DeleteStrategyOutcome> DeleteStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteStrategyRequest&, const DeleteStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStrategyAsyncHandler;
			typedef Outcome<Error, Model::DeleteSuspEventNodeResult> DeleteSuspEventNodeOutcome;
			typedef std::future<DeleteSuspEventNodeOutcome> DeleteSuspEventNodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteSuspEventNodeRequest&, const DeleteSuspEventNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSuspEventNodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagWithUuidResult> DeleteTagWithUuidOutcome;
			typedef std::future<DeleteTagWithUuidOutcome> DeleteTagWithUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteTagWithUuidRequest&, const DeleteTagWithUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagWithUuidAsyncHandler;
			typedef Outcome<Error, Model::DeleteUniBackupPolicyResult> DeleteUniBackupPolicyOutcome;
			typedef std::future<DeleteUniBackupPolicyOutcome> DeleteUniBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteUniBackupPolicyRequest&, const DeleteUniBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUniBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcHoneyPotResult> DeleteVpcHoneyPotOutcome;
			typedef std::future<DeleteVpcHoneyPotOutcome> DeleteVpcHoneyPotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteVpcHoneyPotRequest&, const DeleteVpcHoneyPotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcHoneyPotAsyncHandler;
			typedef Outcome<Error, Model::DeleteVulWhitelistResult> DeleteVulWhitelistOutcome;
			typedef std::future<DeleteVulWhitelistOutcome> DeleteVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteVulWhitelistRequest&, const DeleteVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessKeyLeakDetailResult> DescribeAccessKeyLeakDetailOutcome;
			typedef std::future<DescribeAccessKeyLeakDetailOutcome> DescribeAccessKeyLeakDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAccessKeyLeakDetailRequest&, const DescribeAccessKeyLeakDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyLeakDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccesskeyLeakListResult> DescribeAccesskeyLeakListOutcome;
			typedef std::future<DescribeAccesskeyLeakListOutcome> DescribeAccesskeyLeakListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAccesskeyLeakListRequest&, const DescribeAccesskeyLeakListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccesskeyLeakListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAffectedAssetsResult> DescribeAffectedAssetsOutcome;
			typedef std::future<DescribeAffectedAssetsOutcome> DescribeAffectedAssetsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAffectedAssetsRequest&, const DescribeAffectedAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedAssetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAffectedMaliciousFileImagesResult> DescribeAffectedMaliciousFileImagesOutcome;
			typedef std::future<DescribeAffectedMaliciousFileImagesOutcome> DescribeAffectedMaliciousFileImagesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAffectedMaliciousFileImagesRequest&, const DescribeAffectedMaliciousFileImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAffectedMaliciousFileImagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAgentInstallStatusResult> DescribeAgentInstallStatusOutcome;
			typedef std::future<DescribeAgentInstallStatusOutcome> DescribeAgentInstallStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAgentInstallStatusRequest&, const DescribeAgentInstallStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstallStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventDetailResult> DescribeAlarmEventDetailOutcome;
			typedef std::future<DescribeAlarmEventDetailOutcome> DescribeAlarmEventDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventDetailRequest&, const DescribeAlarmEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventStackInfoResult> DescribeAlarmEventStackInfoOutcome;
			typedef std::future<DescribeAlarmEventStackInfoOutcome> DescribeAlarmEventStackInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventStackInfoRequest&, const DescribeAlarmEventStackInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventStackInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllEntityResult> DescribeAllEntityOutcome;
			typedef std::future<DescribeAllEntityOutcome> DescribeAllEntityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAllEntityRequest&, const DescribeAllEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllEntityAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllGroupsResult> DescribeAllGroupsOutcome;
			typedef std::future<DescribeAllGroupsOutcome> DescribeAllGroupsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAllGroupsRequest&, const DescribeAllGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllImageBaselineResult> DescribeAllImageBaselineOutcome;
			typedef std::future<DescribeAllImageBaselineOutcome> DescribeAllImageBaselineOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAllImageBaselineRequest&, const DescribeAllImageBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllImageBaselineAsyncHandler;
			typedef Outcome<Error, Model::DescribeAntiBruteForceRulesResult> DescribeAntiBruteForceRulesOutcome;
			typedef std::future<DescribeAntiBruteForceRulesOutcome> DescribeAntiBruteForceRulesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAntiBruteForceRulesRequest&, const DescribeAntiBruteForceRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAntiBruteForceRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppVulScanCycleResult> DescribeAppVulScanCycleOutcome;
			typedef std::future<DescribeAppVulScanCycleOutcome> DescribeAppVulScanCycleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAppVulScanCycleRequest&, const DescribeAppVulScanCycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppVulScanCycleAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetDetailByUuidResult> DescribeAssetDetailByUuidOutcome;
			typedef std::future<DescribeAssetDetailByUuidOutcome> DescribeAssetDetailByUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetDetailByUuidRequest&, const DescribeAssetDetailByUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailByUuidAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetDetailByUuidsResult> DescribeAssetDetailByUuidsOutcome;
			typedef std::future<DescribeAssetDetailByUuidsOutcome> DescribeAssetDetailByUuidsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetDetailByUuidsRequest&, const DescribeAssetDetailByUuidsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailByUuidsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetSummaryResult> DescribeAssetSummaryOutcome;
			typedef std::future<DescribeAssetSummaryOutcome> DescribeAssetSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetSummaryRequest&, const DescribeAssetSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetsSecurityEventSummaryResult> DescribeAssetsSecurityEventSummaryOutcome;
			typedef std::future<DescribeAssetsSecurityEventSummaryOutcome> DescribeAssetsSecurityEventSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetsSecurityEventSummaryRequest&, const DescribeAssetsSecurityEventSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetsSecurityEventSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeAttackAnalysisDataResult> DescribeAttackAnalysisDataOutcome;
			typedef std::future<DescribeAttackAnalysisDataOutcome> DescribeAttackAnalysisDataOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAttackAnalysisDataRequest&, const DescribeAttackAnalysisDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackAnalysisDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoDelConfigResult> DescribeAutoDelConfigOutcome;
			typedef std::future<DescribeAutoDelConfigOutcome> DescribeAutoDelConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAutoDelConfigRequest&, const DescribeAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackUpExportInfoResult> DescribeBackUpExportInfoOutcome;
			typedef std::future<DescribeBackUpExportInfoOutcome> DescribeBackUpExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackUpExportInfoRequest&, const DescribeBackUpExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackUpExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupClientsResult> DescribeBackupClientsOutcome;
			typedef std::future<DescribeBackupClientsOutcome> DescribeBackupClientsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupClientsRequest&, const DescribeBackupClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupFilesResult> DescribeBackupFilesOutcome;
			typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupFilesRequest&, const DescribeBackupFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupMachineStatusResult> DescribeBackupMachineStatusOutcome;
			typedef std::future<DescribeBackupMachineStatusOutcome> DescribeBackupMachineStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupMachineStatusRequest&, const DescribeBackupMachineStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupMachineStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPoliciesResult> DescribeBackupPoliciesOutcome;
			typedef std::future<DescribeBackupPoliciesOutcome> DescribeBackupPoliciesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupPoliciesRequest&, const DescribeBackupPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupRestoreCountResult> DescribeBackupRestoreCountOutcome;
			typedef std::future<DescribeBackupRestoreCountOutcome> DescribeBackupRestoreCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBackupRestoreCountRequest&, const DescribeBackupRestoreCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupRestoreCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeBruteForceRecordsResult> DescribeBruteForceRecordsOutcome;
			typedef std::future<DescribeBruteForceRecordsOutcome> DescribeBruteForceRecordsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBruteForceRecordsRequest&, const DescribeBruteForceRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteForceRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBruteForceSummaryResult> DescribeBruteForceSummaryOutcome;
			typedef std::future<DescribeBruteForceSummaryOutcome> DescribeBruteForceSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeBruteForceSummaryRequest&, const DescribeBruteForceSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteForceSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckEcsWarningsResult> DescribeCheckEcsWarningsOutcome;
			typedef std::future<DescribeCheckEcsWarningsOutcome> DescribeCheckEcsWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckEcsWarningsRequest&, const DescribeCheckEcsWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckEcsWarningsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckFixDetailsResult> DescribeCheckFixDetailsOutcome;
			typedef std::future<DescribeCheckFixDetailsOutcome> DescribeCheckFixDetailsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckFixDetailsRequest&, const DescribeCheckFixDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckFixDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningDetailResult> DescribeCheckWarningDetailOutcome;
			typedef std::future<DescribeCheckWarningDetailOutcome> DescribeCheckWarningDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningDetailRequest&, const DescribeCheckWarningDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningMachinesResult> DescribeCheckWarningMachinesOutcome;
			typedef std::future<DescribeCheckWarningMachinesOutcome> DescribeCheckWarningMachinesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningMachinesRequest&, const DescribeCheckWarningMachinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningMachinesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningSummaryResult> DescribeCheckWarningSummaryOutcome;
			typedef std::future<DescribeCheckWarningSummaryOutcome> DescribeCheckWarningSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningSummaryRequest&, const DescribeCheckWarningSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningsResult> DescribeCheckWarningsOutcome;
			typedef std::future<DescribeCheckWarningsOutcome> DescribeCheckWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningsRequest&, const DescribeCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClientConfSetupResult> DescribeClientConfSetupOutcome;
			typedef std::future<DescribeClientConfSetupOutcome> DescribeClientConfSetupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeClientConfSetupRequest&, const DescribeClientConfSetupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientConfSetupAsyncHandler;
			typedef Outcome<Error, Model::DescribeClientConfStrategyResult> DescribeClientConfStrategyOutcome;
			typedef std::future<DescribeClientConfStrategyOutcome> DescribeClientConfStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeClientConfStrategyRequest&, const DescribeClientConfStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientConfStrategyAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudCenterInstancesResult> DescribeCloudCenterInstancesOutcome;
			typedef std::future<DescribeCloudCenterInstancesOutcome> DescribeCloudCenterInstancesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCloudCenterInstancesRequest&, const DescribeCloudCenterInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudCenterInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudProductFieldStatisticsResult> DescribeCloudProductFieldStatisticsOutcome;
			typedef std::future<DescribeCloudProductFieldStatisticsOutcome> DescribeCloudProductFieldStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCloudProductFieldStatisticsRequest&, const DescribeCloudProductFieldStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudProductFieldStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterBasicInfoResult> DescribeClusterBasicInfoOutcome;
			typedef std::future<DescribeClusterBasicInfoOutcome> DescribeClusterBasicInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeClusterBasicInfoRequest&, const DescribeClusterBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterInfoListResult> DescribeClusterInfoListOutcome;
			typedef std::future<DescribeClusterInfoListOutcome> DescribeClusterInfoListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeClusterInfoListRequest&, const DescribeClusterInfoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInfoListAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterNetworkResult> DescribeClusterNetworkOutcome;
			typedef std::future<DescribeClusterNetworkOutcome> DescribeClusterNetworkOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeClusterNetworkRequest&, const DescribeClusterNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNetworkAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterVulStatisticsResult> DescribeClusterVulStatisticsOutcome;
			typedef std::future<DescribeClusterVulStatisticsOutcome> DescribeClusterVulStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeClusterVulStatisticsRequest&, const DescribeClusterVulStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterVulStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommonOverallConfigResult> DescribeCommonOverallConfigOutcome;
			typedef std::future<DescribeCommonOverallConfigOutcome> DescribeCommonOverallConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCommonOverallConfigRequest&, const DescribeCommonOverallConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonOverallConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommonOverallConfigListResult> DescribeCommonOverallConfigListOutcome;
			typedef std::future<DescribeCommonOverallConfigListOutcome> DescribeCommonOverallConfigListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCommonOverallConfigListRequest&, const DescribeCommonOverallConfigListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonOverallConfigListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommonTargetConfigResult> DescribeCommonTargetConfigOutcome;
			typedef std::future<DescribeCommonTargetConfigOutcome> DescribeCommonTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCommonTargetConfigRequest&, const DescribeCommonTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommonTargetResultListResult> DescribeCommonTargetResultListOutcome;
			typedef std::future<DescribeCommonTargetResultListOutcome> DescribeCommonTargetResultListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCommonTargetResultListRequest&, const DescribeCommonTargetResultListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonTargetResultListAsyncHandler;
			typedef Outcome<Error, Model::DescribeConcernNecessityResult> DescribeConcernNecessityOutcome;
			typedef std::future<DescribeConcernNecessityOutcome> DescribeConcernNecessityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeConcernNecessityRequest&, const DescribeConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcernNecessityAsyncHandler;
			typedef Outcome<Error, Model::DescribeContainerCriteriaResult> DescribeContainerCriteriaOutcome;
			typedef std::future<DescribeContainerCriteriaOutcome> DescribeContainerCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeContainerCriteriaRequest&, const DescribeContainerCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerCriteriaAsyncHandler;
			typedef Outcome<Error, Model::DescribeContainerInstancesResult> DescribeContainerInstancesOutcome;
			typedef std::future<DescribeContainerInstancesOutcome> DescribeContainerInstancesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeContainerInstancesRequest&, const DescribeContainerInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeContainerStatisticsResult> DescribeContainerStatisticsOutcome;
			typedef std::future<DescribeContainerStatisticsOutcome> DescribeContainerStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeContainerStatisticsRequest&, const DescribeContainerStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeContainerTagsResult> DescribeContainerTagsOutcome;
			typedef std::future<DescribeContainerTagsOutcome> DescribeContainerTagsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeContainerTagsRequest&, const DescribeContainerTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCountNotScannedImageResult> DescribeCountNotScannedImageOutcome;
			typedef std::future<DescribeCountNotScannedImageOutcome> DescribeCountNotScannedImageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCountNotScannedImageRequest&, const DescribeCountNotScannedImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCountNotScannedImageAsyncHandler;
			typedef Outcome<Error, Model::DescribeCountScannedImageResult> DescribeCountScannedImageOutcome;
			typedef std::future<DescribeCountScannedImageOutcome> DescribeCountScannedImageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCountScannedImageRequest&, const DescribeCountScannedImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCountScannedImageAsyncHandler;
			typedef Outcome<Error, Model::DescribeCriteriaResult> DescribeCriteriaOutcome;
			typedef std::future<DescribeCriteriaOutcome> DescribeCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCriteriaRequest&, const DescribeCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCriteriaAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomBlockRecordsResult> DescribeCustomBlockRecordsOutcome;
			typedef std::future<DescribeCustomBlockRecordsOutcome> DescribeCustomBlockRecordsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCustomBlockRecordsRequest&, const DescribeCustomBlockRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomBlockRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCycleTaskListResult> DescribeCycleTaskListOutcome;
			typedef std::future<DescribeCycleTaskListOutcome> DescribeCycleTaskListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCycleTaskListRequest&, const DescribeCycleTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCycleTaskListAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeEmgUserAgreementResult> DescribeEmgUserAgreementOutcome;
			typedef std::future<DescribeEmgUserAgreementOutcome> DescribeEmgUserAgreementOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeEmgUserAgreementRequest&, const DescribeEmgUserAgreementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmgUserAgreementAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmgVulItemResult> DescribeEmgVulItemOutcome;
			typedef std::future<DescribeEmgVulItemOutcome> DescribeEmgVulItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeEmgVulItemRequest&, const DescribeEmgVulItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmgVulItemAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventLevelCountResult> DescribeEventLevelCountOutcome;
			typedef std::future<DescribeEventLevelCountOutcome> DescribeEventLevelCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeEventLevelCountRequest&, const DescribeEventLevelCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventLevelCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventOnStageResult> DescribeEventOnStageOutcome;
			typedef std::future<DescribeEventOnStageOutcome> DescribeEventOnStageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeEventOnStageRequest&, const DescribeEventOnStageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventOnStageAsyncHandler;
			typedef Outcome<Error, Model::DescribeExcludeSystemPathResult> DescribeExcludeSystemPathOutcome;
			typedef std::future<DescribeExcludeSystemPathOutcome> DescribeExcludeSystemPathOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExcludeSystemPathRequest&, const DescribeExcludeSystemPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExcludeSystemPathAsyncHandler;
			typedef Outcome<Error, Model::DescribeExportInfoResult> DescribeExportInfoOutcome;
			typedef std::future<DescribeExportInfoOutcome> DescribeExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExportInfoRequest&, const DescribeExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeExposedCheckWarningResult> DescribeExposedCheckWarningOutcome;
			typedef std::future<DescribeExposedCheckWarningOutcome> DescribeExposedCheckWarningOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExposedCheckWarningRequest&, const DescribeExposedCheckWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposedCheckWarningAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeGroupStructResult> DescribeGroupStructOutcome;
			typedef std::future<DescribeGroupStructOutcome> DescribeGroupStructOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupStructRequest&, const DescribeGroupStructOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupStructAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeHcExportInfoResult> DescribeHcExportInfoOutcome;
			typedef std::future<DescribeHcExportInfoOutcome> DescribeHcExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeHcExportInfoRequest&, const DescribeHcExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHcExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeHoneyPotAuthResult> DescribeHoneyPotAuthOutcome;
			typedef std::future<DescribeHoneyPotAuthOutcome> DescribeHoneyPotAuthOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeHoneyPotAuthRequest&, const DescribeHoneyPotAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHoneyPotAuthAsyncHandler;
			typedef Outcome<Error, Model::DescribeHoneyPotSuspStatisticsResult> DescribeHoneyPotSuspStatisticsOutcome;
			typedef std::future<DescribeHoneyPotSuspStatisticsOutcome> DescribeHoneyPotSuspStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeHoneyPotSuspStatisticsRequest&, const DescribeHoneyPotSuspStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHoneyPotSuspStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageResult> DescribeImageOutcome;
			typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageRequest&, const DescribeImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageBaselineCheckResultResult> DescribeImageBaselineCheckResultOutcome;
			typedef std::future<DescribeImageBaselineCheckResultOutcome> DescribeImageBaselineCheckResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageBaselineCheckResultRequest&, const DescribeImageBaselineCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageBaselineCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageBaselineCheckSummaryResult> DescribeImageBaselineCheckSummaryOutcome;
			typedef std::future<DescribeImageBaselineCheckSummaryOutcome> DescribeImageBaselineCheckSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageBaselineCheckSummaryRequest&, const DescribeImageBaselineCheckSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageBaselineCheckSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageBaselineDetailResult> DescribeImageBaselineDetailOutcome;
			typedef std::future<DescribeImageBaselineDetailOutcome> DescribeImageBaselineDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageBaselineDetailRequest&, const DescribeImageBaselineDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageBaselineDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageBaselineItemListResult> DescribeImageBaselineItemListOutcome;
			typedef std::future<DescribeImageBaselineItemListOutcome> DescribeImageBaselineItemListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageBaselineItemListRequest&, const DescribeImageBaselineItemListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageBaselineItemListAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageBaselineStrategyResult> DescribeImageBaselineStrategyOutcome;
			typedef std::future<DescribeImageBaselineStrategyOutcome> DescribeImageBaselineStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageBaselineStrategyRequest&, const DescribeImageBaselineStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageBaselineStrategyAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageCriteriaResult> DescribeImageCriteriaOutcome;
			typedef std::future<DescribeImageCriteriaOutcome> DescribeImageCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageCriteriaRequest&, const DescribeImageCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageCriteriaAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageFixTaskResult> DescribeImageFixTaskOutcome;
			typedef std::future<DescribeImageFixTaskOutcome> DescribeImageFixTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageFixTaskRequest&, const DescribeImageFixTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageFixTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageGroupedVulListResult> DescribeImageGroupedVulListOutcome;
			typedef std::future<DescribeImageGroupedVulListOutcome> DescribeImageGroupedVulListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageGroupedVulListRequest&, const DescribeImageGroupedVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageGroupedVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageInfoListResult> DescribeImageInfoListOutcome;
			typedef std::future<DescribeImageInfoListOutcome> DescribeImageInfoListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageInfoListRequest&, const DescribeImageInfoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageInfoListAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageInstancesResult> DescribeImageInstancesOutcome;
			typedef std::future<DescribeImageInstancesOutcome> DescribeImageInstancesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageInstancesRequest&, const DescribeImageInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageLatestScanTaskResult> DescribeImageLatestScanTaskOutcome;
			typedef std::future<DescribeImageLatestScanTaskOutcome> DescribeImageLatestScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageLatestScanTaskRequest&, const DescribeImageLatestScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLatestScanTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageListBySensitiveFileResult> DescribeImageListBySensitiveFileOutcome;
			typedef std::future<DescribeImageListBySensitiveFileOutcome> DescribeImageListBySensitiveFileOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageListBySensitiveFileRequest&, const DescribeImageListBySensitiveFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageListBySensitiveFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageListWithBaselineNameResult> DescribeImageListWithBaselineNameOutcome;
			typedef std::future<DescribeImageListWithBaselineNameOutcome> DescribeImageListWithBaselineNameOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageListWithBaselineNameRequest&, const DescribeImageListWithBaselineNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageListWithBaselineNameAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageRepoCriteriaResult> DescribeImageRepoCriteriaOutcome;
			typedef std::future<DescribeImageRepoCriteriaOutcome> DescribeImageRepoCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageRepoCriteriaRequest&, const DescribeImageRepoCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRepoCriteriaAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageRepoDetailListResult> DescribeImageRepoDetailListOutcome;
			typedef std::future<DescribeImageRepoDetailListOutcome> DescribeImageRepoDetailListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageRepoDetailListRequest&, const DescribeImageRepoDetailListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRepoDetailListAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageRepoListResult> DescribeImageRepoListOutcome;
			typedef std::future<DescribeImageRepoListOutcome> DescribeImageRepoListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageRepoListRequest&, const DescribeImageRepoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRepoListAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageScanAuthCountResult> DescribeImageScanAuthCountOutcome;
			typedef std::future<DescribeImageScanAuthCountOutcome> DescribeImageScanAuthCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageScanAuthCountRequest&, const DescribeImageScanAuthCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageScanAuthCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageScanAuthorizationResult> DescribeImageScanAuthorizationOutcome;
			typedef std::future<DescribeImageScanAuthorizationOutcome> DescribeImageScanAuthorizationOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageScanAuthorizationRequest&, const DescribeImageScanAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageScanAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageSensitiveFileByKeyResult> DescribeImageSensitiveFileByKeyOutcome;
			typedef std::future<DescribeImageSensitiveFileByKeyOutcome> DescribeImageSensitiveFileByKeyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageSensitiveFileByKeyRequest&, const DescribeImageSensitiveFileByKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSensitiveFileByKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageSensitiveFileListResult> DescribeImageSensitiveFileListOutcome;
			typedef std::future<DescribeImageSensitiveFileListOutcome> DescribeImageSensitiveFileListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageSensitiveFileListRequest&, const DescribeImageSensitiveFileListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSensitiveFileListAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageStatisticsResult> DescribeImageStatisticsOutcome;
			typedef std::future<DescribeImageStatisticsOutcome> DescribeImageStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageStatisticsRequest&, const DescribeImageStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageVulListResult> DescribeImageVulListOutcome;
			typedef std::future<DescribeImageVulListOutcome> DescribeImageVulListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageVulListRequest&, const DescribeImageVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageVulWhiteListResult> DescribeImageVulWhiteListOutcome;
			typedef std::future<DescribeImageVulWhiteListOutcome> DescribeImageVulWhiteListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeImageVulWhiteListRequest&, const DescribeImageVulWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstallCaptchaResult> DescribeInstallCaptchaOutcome;
			typedef std::future<DescribeInstallCaptchaOutcome> DescribeInstallCaptchaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeInstallCaptchaRequest&, const DescribeInstallCaptchaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstallCaptchaAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstallCodeResult> DescribeInstallCodeOutcome;
			typedef std::future<DescribeInstallCodeOutcome> DescribeInstallCodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeInstallCodeRequest&, const DescribeInstallCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstallCodeAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeIpTagsResult> DescribeIpTagsOutcome;
			typedef std::future<DescribeIpTagsOutcome> DescribeIpTagsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeIpTagsRequest&, const DescribeIpTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLatestScanTaskResult> DescribeLatestScanTaskOutcome;
			typedef std::future<DescribeLatestScanTaskOutcome> DescribeLatestScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeLatestScanTaskRequest&, const DescribeLatestScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLatestScanTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogMetaResult> DescribeLogMetaOutcome;
			typedef std::future<DescribeLogMetaOutcome> DescribeLogMetaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeLogMetaRequest&, const DescribeLogMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogMetaAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogShipperStatusResult> DescribeLogShipperStatusOutcome;
			typedef std::future<DescribeLogShipperStatusOutcome> DescribeLogShipperStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeLogShipperStatusRequest&, const DescribeLogShipperStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogShipperStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoginBaseConfigsResult> DescribeLoginBaseConfigsOutcome;
			typedef std::future<DescribeLoginBaseConfigsOutcome> DescribeLoginBaseConfigsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeLoginBaseConfigsRequest&, const DescribeLoginBaseConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginBaseConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoginSwitchConfigsResult> DescribeLoginSwitchConfigsOutcome;
			typedef std::future<DescribeLoginSwitchConfigsOutcome> DescribeLoginSwitchConfigsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeLoginSwitchConfigsRequest&, const DescribeLoginSwitchConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginSwitchConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogstoreStorageResult> DescribeLogstoreStorageOutcome;
			typedef std::future<DescribeLogstoreStorageOutcome> DescribeLogstoreStorageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeLogstoreStorageRequest&, const DescribeLogstoreStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstoreStorageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMachineCanRebootResult> DescribeMachineCanRebootOutcome;
			typedef std::future<DescribeMachineCanRebootOutcome> DescribeMachineCanRebootOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeMachineCanRebootRequest&, const DescribeMachineCanRebootOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineCanRebootAsyncHandler;
			typedef Outcome<Error, Model::DescribeModuleConfigResult> DescribeModuleConfigOutcome;
			typedef std::future<DescribeModuleConfigOutcome> DescribeModuleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeModuleConfigRequest&, const DescribeModuleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeMonitorAccountsResult> DescribeMonitorAccountsOutcome;
			typedef std::future<DescribeMonitorAccountsOutcome> DescribeMonitorAccountsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeMonitorAccountsRequest&, const DescribeMonitorAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNoticeConfigResult> DescribeNoticeConfigOutcome;
			typedef std::future<DescribeNoticeConfigOutcome> DescribeNoticeConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeNoticeConfigRequest&, const DescribeNoticeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoticeConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeNsasSuspEventTypeResult> DescribeNsasSuspEventTypeOutcome;
			typedef std::future<DescribeNsasSuspEventTypeOutcome> DescribeNsasSuspEventTypeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeNsasSuspEventTypeRequest&, const DescribeNsasSuspEventTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNsasSuspEventTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeOfflineMachinesResult> DescribeOfflineMachinesOutcome;
			typedef std::future<DescribeOfflineMachinesOutcome> DescribeOfflineMachinesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeOfflineMachinesRequest&, const DescribeOfflineMachinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfflineMachinesAsyncHandler;
			typedef Outcome<Error, Model::DescribeOnceTaskResult> DescribeOnceTaskOutcome;
			typedef std::future<DescribeOnceTaskOutcome> DescribeOnceTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeOnceTaskRequest&, const DescribeOnceTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnceTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeOnceTaskLeafRecordPageResult> DescribeOnceTaskLeafRecordPageOutcome;
			typedef std::future<DescribeOnceTaskLeafRecordPageOutcome> DescribeOnceTaskLeafRecordPageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeOnceTaskLeafRecordPageRequest&, const DescribeOnceTaskLeafRecordPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnceTaskLeafRecordPageAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyCountResult> DescribePropertyCountOutcome;
			typedef std::future<DescribePropertyCountOutcome> DescribePropertyCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyCountRequest&, const DescribePropertyCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyCountAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyCronDetailResult> DescribePropertyCronDetailOutcome;
			typedef std::future<DescribePropertyCronDetailOutcome> DescribePropertyCronDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyCronDetailRequest&, const DescribePropertyCronDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyCronDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyCronItemResult> DescribePropertyCronItemOutcome;
			typedef std::future<DescribePropertyCronItemOutcome> DescribePropertyCronItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyCronItemRequest&, const DescribePropertyCronItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyCronItemAsyncHandler;
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
			typedef Outcome<Error, Model::DescribePropertyScaItemResult> DescribePropertyScaItemOutcome;
			typedef std::future<DescribePropertyScaItemOutcome> DescribePropertyScaItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyScaItemRequest&, const DescribePropertyScaItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyScaItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyScheduleConfigResult> DescribePropertyScheduleConfigOutcome;
			typedef std::future<DescribePropertyScheduleConfigOutcome> DescribePropertyScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyScheduleConfigRequest&, const DescribePropertyScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertySoftwareDetailResult> DescribePropertySoftwareDetailOutcome;
			typedef std::future<DescribePropertySoftwareDetailOutcome> DescribePropertySoftwareDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertySoftwareDetailRequest&, const DescribePropertySoftwareDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertySoftwareDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertySoftwareItemResult> DescribePropertySoftwareItemOutcome;
			typedef std::future<DescribePropertySoftwareItemOutcome> DescribePropertySoftwareItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertySoftwareItemRequest&, const DescribePropertySoftwareItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertySoftwareItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyTypeScaItemResult> DescribePropertyTypeScaItemOutcome;
			typedef std::future<DescribePropertyTypeScaItemOutcome> DescribePropertyTypeScaItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyTypeScaItemRequest&, const DescribePropertyTypeScaItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyTypeScaItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUsageNewestResult> DescribePropertyUsageNewestOutcome;
			typedef std::future<DescribePropertyUsageNewestOutcome> DescribePropertyUsageNewestOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUsageNewestRequest&, const DescribePropertyUsageNewestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUsageNewestAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUserDetailResult> DescribePropertyUserDetailOutcome;
			typedef std::future<DescribePropertyUserDetailOutcome> DescribePropertyUserDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUserDetailRequest&, const DescribePropertyUserDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUserDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUserItemResult> DescribePropertyUserItemOutcome;
			typedef std::future<DescribePropertyUserItemOutcome> DescribePropertyUserItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUserItemRequest&, const DescribePropertyUserItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUserItemAsyncHandler;
			typedef Outcome<Error, Model::DescribeQuaraFileDownloadInfoResult> DescribeQuaraFileDownloadInfoOutcome;
			typedef std::future<DescribeQuaraFileDownloadInfoOutcome> DescribeQuaraFileDownloadInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeQuaraFileDownloadInfoRequest&, const DescribeQuaraFileDownloadInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuaraFileDownloadInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreJobsResult> DescribeRestoreJobsOutcome;
			typedef std::future<DescribeRestoreJobsOutcome> DescribeRestoreJobsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRestoreJobsRequest&, const DescribeRestoreJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestorePlansResult> DescribeRestorePlansOutcome;
			typedef std::future<DescribeRestorePlansOutcome> DescribeRestorePlansOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRestorePlansRequest&, const DescribeRestorePlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestorePlansAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeRisksResult> DescribeRisksOutcome;
			typedef std::future<DescribeRisksOutcome> DescribeRisksOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRisksRequest&, const DescribeRisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRisksAsyncHandler;
			typedef Outcome<Error, Model::DescribeSasPmAgentListResult> DescribeSasPmAgentListOutcome;
			typedef std::future<DescribeSasPmAgentListOutcome> DescribeSasPmAgentListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSasPmAgentListRequest&, const DescribeSasPmAgentListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSasPmAgentListAsyncHandler;
			typedef Outcome<Error, Model::DescribeScanTaskProgressResult> DescribeScanTaskProgressOutcome;
			typedef std::future<DescribeScanTaskProgressOutcome> DescribeScanTaskProgressOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeScanTaskProgressRequest&, const DescribeScanTaskProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeScanTaskStatisticsResult> DescribeScanTaskStatisticsOutcome;
			typedef std::future<DescribeScanTaskStatisticsOutcome> DescribeScanTaskStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeScanTaskStatisticsRequest&, const DescribeScanTaskStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSearchConditionResult> DescribeSearchConditionOutcome;
			typedef std::future<DescribeSearchConditionOutcome> DescribeSearchConditionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSearchConditionRequest&, const DescribeSearchConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchConditionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecureSuggestionResult> DescribeSecureSuggestionOutcome;
			typedef std::future<DescribeSecureSuggestionOutcome> DescribeSecureSuggestionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecureSuggestionRequest&, const DescribeSecureSuggestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecureSuggestionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityCheckScheduleConfigResult> DescribeSecurityCheckScheduleConfigOutcome;
			typedef std::future<DescribeSecurityCheckScheduleConfigOutcome> DescribeSecurityCheckScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityCheckScheduleConfigRequest&, const DescribeSecurityCheckScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityCheckScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityEventMarkMissListResult> DescribeSecurityEventMarkMissListOutcome;
			typedef std::future<DescribeSecurityEventMarkMissListOutcome> DescribeSecurityEventMarkMissListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityEventMarkMissListRequest&, const DescribeSecurityEventMarkMissListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventMarkMissListAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeSnapshotsResult> DescribeSnapshotsOutcome;
			typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSnapshotsRequest&, const DescribeSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeSuspEventExportInfoResult> DescribeSuspEventExportInfoOutcome;
			typedef std::future<DescribeSuspEventExportInfoOutcome> DescribeSuspEventExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventExportInfoRequest&, const DescribeSuspEventExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventQuaraFilesResult> DescribeSuspEventQuaraFilesOutcome;
			typedef std::future<DescribeSuspEventQuaraFilesOutcome> DescribeSuspEventQuaraFilesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventQuaraFilesRequest&, const DescribeSuspEventQuaraFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventQuaraFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventUserSettingResult> DescribeSuspEventUserSettingOutcome;
			typedef std::future<DescribeSuspEventUserSettingOutcome> DescribeSuspEventUserSettingOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventUserSettingRequest&, const DescribeSuspEventUserSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventUserSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventsResult> DescribeSuspEventsOutcome;
			typedef std::future<DescribeSuspEventsOutcome> DescribeSuspEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventsRequest&, const DescribeSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspiciousOverallConfigResult> DescribeSuspiciousOverallConfigOutcome;
			typedef std::future<DescribeSuspiciousOverallConfigOutcome> DescribeSuspiciousOverallConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspiciousOverallConfigRequest&, const DescribeSuspiciousOverallConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousOverallConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspiciousUUIDConfigResult> DescribeSuspiciousUUIDConfigOutcome;
			typedef std::future<DescribeSuspiciousUUIDConfigOutcome> DescribeSuspiciousUUIDConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspiciousUUIDConfigRequest&, const DescribeSuspiciousUUIDConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousUUIDConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeTargetResult> DescribeTargetOutcome;
			typedef std::future<DescribeTargetOutcome> DescribeTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeTargetRequest&, const DescribeTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetAsyncHandler;
			typedef Outcome<Error, Model::DescribeTaskErrorLogResult> DescribeTaskErrorLogOutcome;
			typedef std::future<DescribeTaskErrorLogOutcome> DescribeTaskErrorLogOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeTaskErrorLogRequest&, const DescribeTaskErrorLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskErrorLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeTotalStatisticsResult> DescribeTotalStatisticsOutcome;
			typedef std::future<DescribeTotalStatisticsOutcome> DescribeTotalStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeTotalStatisticsRequest&, const DescribeTotalStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTotalStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTraceInfoDetailResult> DescribeTraceInfoDetailOutcome;
			typedef std::future<DescribeTraceInfoDetailOutcome> DescribeTraceInfoDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeTraceInfoDetailRequest&, const DescribeTraceInfoDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceInfoDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeTraceInfoNodeResult> DescribeTraceInfoNodeOutcome;
			typedef std::future<DescribeTraceInfoNodeOutcome> DescribeTraceInfoNodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeTraceInfoNodeRequest&, const DescribeTraceInfoNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceInfoNodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeUniBackupDatabaseResult> DescribeUniBackupDatabaseOutcome;
			typedef std::future<DescribeUniBackupDatabaseOutcome> DescribeUniBackupDatabaseOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUniBackupDatabaseRequest&, const DescribeUniBackupDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUniBackupDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeUniBackupPoliciesResult> DescribeUniBackupPoliciesOutcome;
			typedef std::future<DescribeUniBackupPoliciesOutcome> DescribeUniBackupPoliciesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUniBackupPoliciesRequest&, const DescribeUniBackupPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUniBackupPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUniBackupPolicyDetailResult> DescribeUniBackupPolicyDetailOutcome;
			typedef std::future<DescribeUniBackupPolicyDetailOutcome> DescribeUniBackupPolicyDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUniBackupPolicyDetailRequest&, const DescribeUniBackupPolicyDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUniBackupPolicyDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeUniRecoverableListResult> DescribeUniRecoverableListOutcome;
			typedef std::future<DescribeUniRecoverableListOutcome> DescribeUniRecoverableListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUniRecoverableListRequest&, const DescribeUniRecoverableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUniRecoverableListAsyncHandler;
			typedef Outcome<Error, Model::DescribeUniSupportRegionResult> DescribeUniSupportRegionOutcome;
			typedef std::future<DescribeUniSupportRegionOutcome> DescribeUniSupportRegionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUniSupportRegionRequest&, const DescribeUniSupportRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUniSupportRegionAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeVendorListResult> DescribeVendorListOutcome;
			typedef std::future<DescribeVendorListOutcome> DescribeVendorListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVendorListRequest&, const DescribeVendorListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVendorListAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeVulCheckTaskStatusDetailResult> DescribeVulCheckTaskStatusDetailOutcome;
			typedef std::future<DescribeVulCheckTaskStatusDetailOutcome> DescribeVulCheckTaskStatusDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulCheckTaskStatusDetailRequest&, const DescribeVulCheckTaskStatusDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulCheckTaskStatusDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulConfigResult> DescribeVulConfigOutcome;
			typedef std::future<DescribeVulConfigOutcome> DescribeVulConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulConfigRequest&, const DescribeVulConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulDetailsResult> DescribeVulDetailsOutcome;
			typedef std::future<DescribeVulDetailsOutcome> DescribeVulDetailsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulDetailsRequest&, const DescribeVulDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulExportInfoResult> DescribeVulExportInfoOutcome;
			typedef std::future<DescribeVulExportInfoOutcome> DescribeVulExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulExportInfoRequest&, const DescribeVulExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulFixStatisticsResult> DescribeVulFixStatisticsOutcome;
			typedef std::future<DescribeVulFixStatisticsOutcome> DescribeVulFixStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulFixStatisticsRequest&, const DescribeVulFixStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulListResult> DescribeVulListOutcome;
			typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulListRequest&, const DescribeVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulListPageResult> DescribeVulListPageOutcome;
			typedef std::future<DescribeVulListPageOutcome> DescribeVulListPageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulListPageRequest&, const DescribeVulListPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListPageAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulNumStatisticsResult> DescribeVulNumStatisticsOutcome;
			typedef std::future<DescribeVulNumStatisticsOutcome> DescribeVulNumStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulNumStatisticsRequest&, const DescribeVulNumStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulNumStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulTargetConfigResult> DescribeVulTargetConfigOutcome;
			typedef std::future<DescribeVulTargetConfigOutcome> DescribeVulTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulTargetConfigRequest&, const DescribeVulTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulTargetStatisticsResult> DescribeVulTargetStatisticsOutcome;
			typedef std::future<DescribeVulTargetStatisticsOutcome> DescribeVulTargetStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulTargetStatisticsRequest&, const DescribeVulTargetStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTargetStatisticsAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeWebLockExclusiveFileTypeResult> DescribeWebLockExclusiveFileTypeOutcome;
			typedef std::future<DescribeWebLockExclusiveFileTypeOutcome> DescribeWebLockExclusiveFileTypeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockExclusiveFileTypeRequest&, const DescribeWebLockExclusiveFileTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockExclusiveFileTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockFileChangeStatisticsResult> DescribeWebLockFileChangeStatisticsOutcome;
			typedef std::future<DescribeWebLockFileChangeStatisticsOutcome> DescribeWebLockFileChangeStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockFileChangeStatisticsRequest&, const DescribeWebLockFileChangeStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockFileChangeStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockFileEventsResult> DescribeWebLockFileEventsOutcome;
			typedef std::future<DescribeWebLockFileEventsOutcome> DescribeWebLockFileEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockFileEventsRequest&, const DescribeWebLockFileEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockFileEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockFileTypeSummaryResult> DescribeWebLockFileTypeSummaryOutcome;
			typedef std::future<DescribeWebLockFileTypeSummaryOutcome> DescribeWebLockFileTypeSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockFileTypeSummaryRequest&, const DescribeWebLockFileTypeSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockFileTypeSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockInclusiveFileTypeResult> DescribeWebLockInclusiveFileTypeOutcome;
			typedef std::future<DescribeWebLockInclusiveFileTypeOutcome> DescribeWebLockInclusiveFileTypeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockInclusiveFileTypeRequest&, const DescribeWebLockInclusiveFileTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockInclusiveFileTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockProcessBlockStatisticsResult> DescribeWebLockProcessBlockStatisticsOutcome;
			typedef std::future<DescribeWebLockProcessBlockStatisticsOutcome> DescribeWebLockProcessBlockStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockProcessBlockStatisticsRequest&, const DescribeWebLockProcessBlockStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockProcessBlockStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockProcessListResult> DescribeWebLockProcessListOutcome;
			typedef std::future<DescribeWebLockProcessListOutcome> DescribeWebLockProcessListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockProcessListRequest&, const DescribeWebLockProcessListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockProcessListAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockStatusResult> DescribeWebLockStatusOutcome;
			typedef std::future<DescribeWebLockStatusOutcome> DescribeWebLockStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockStatusRequest&, const DescribeWebLockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockTotalFileChangeCountResult> DescribeWebLockTotalFileChangeCountOutcome;
			typedef std::future<DescribeWebLockTotalFileChangeCountOutcome> DescribeWebLockTotalFileChangeCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebLockTotalFileChangeCountRequest&, const DescribeWebLockTotalFileChangeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockTotalFileChangeCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebPathResult> DescribeWebPathOutcome;
			typedef std::future<DescribeWebPathOutcome> DescribeWebPathOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWebPathRequest&, const DescribeWebPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebPathAsyncHandler;
			typedef Outcome<Error, Model::DisableBruteForceRecordResult> DisableBruteForceRecordOutcome;
			typedef std::future<DisableBruteForceRecordOutcome> DisableBruteForceRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DisableBruteForceRecordRequest&, const DisableBruteForceRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableBruteForceRecordAsyncHandler;
			typedef Outcome<Error, Model::DisableCustomBlockRecordResult> DisableCustomBlockRecordOutcome;
			typedef std::future<DisableCustomBlockRecordOutcome> DisableCustomBlockRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DisableCustomBlockRecordRequest&, const DisableCustomBlockRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableCustomBlockRecordAsyncHandler;
			typedef Outcome<Error, Model::EnableBruteForceRecordResult> EnableBruteForceRecordOutcome;
			typedef std::future<EnableBruteForceRecordOutcome> EnableBruteForceRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::EnableBruteForceRecordRequest&, const EnableBruteForceRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableBruteForceRecordAsyncHandler;
			typedef Outcome<Error, Model::EnableCustomBlockRecordResult> EnableCustomBlockRecordOutcome;
			typedef std::future<EnableCustomBlockRecordOutcome> EnableCustomBlockRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::EnableCustomBlockRecordRequest&, const EnableCustomBlockRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableCustomBlockRecordAsyncHandler;
			typedef Outcome<Error, Model::ExecStrategyResult> ExecStrategyOutcome;
			typedef std::future<ExecStrategyOutcome> ExecStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExecStrategyRequest&, const ExecStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecStrategyAsyncHandler;
			typedef Outcome<Error, Model::ExportRecordResult> ExportRecordOutcome;
			typedef std::future<ExportRecordOutcome> ExportRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExportRecordRequest&, const ExportRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportRecordAsyncHandler;
			typedef Outcome<Error, Model::ExportSuspEventsResult> ExportSuspEventsOutcome;
			typedef std::future<ExportSuspEventsOutcome> ExportSuspEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExportSuspEventsRequest&, const ExportSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::ExportVulResult> ExportVulOutcome;
			typedef std::future<ExportVulOutcome> ExportVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExportVulRequest&, const ExportVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulAsyncHandler;
			typedef Outcome<Error, Model::ExportWarningResult> ExportWarningOutcome;
			typedef std::future<ExportWarningOutcome> ExportWarningOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExportWarningRequest&, const ExportWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportWarningAsyncHandler;
			typedef Outcome<Error, Model::FindContainerNetworkConnectResult> FindContainerNetworkConnectOutcome;
			typedef std::future<FindContainerNetworkConnectOutcome> FindContainerNetworkConnectOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::FindContainerNetworkConnectRequest&, const FindContainerNetworkConnectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindContainerNetworkConnectAsyncHandler;
			typedef Outcome<Error, Model::FixCheckWarningsResult> FixCheckWarningsOutcome;
			typedef std::future<FixCheckWarningsOutcome> FixCheckWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::FixCheckWarningsRequest&, const FixCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FixCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::GenerateOnceTaskResult> GenerateOnceTaskOutcome;
			typedef std::future<GenerateOnceTaskOutcome> GenerateOnceTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GenerateOnceTaskRequest&, const GenerateOnceTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateOnceTaskAsyncHandler;
			typedef Outcome<Error, Model::GetAgentlessTaskCountResult> GetAgentlessTaskCountOutcome;
			typedef std::future<GetAgentlessTaskCountOutcome> GetAgentlessTaskCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetAgentlessTaskCountRequest&, const GetAgentlessTaskCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAgentlessTaskCountAsyncHandler;
			typedef Outcome<Error, Model::GetAlarmMachineCountResult> GetAlarmMachineCountOutcome;
			typedef std::future<GetAlarmMachineCountOutcome> GetAlarmMachineCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetAlarmMachineCountRequest&, const GetAlarmMachineCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAlarmMachineCountAsyncHandler;
			typedef Outcome<Error, Model::GetAppNetworkResult> GetAppNetworkOutcome;
			typedef std::future<GetAppNetworkOutcome> GetAppNetworkOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetAppNetworkRequest&, const GetAppNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppNetworkAsyncHandler;
			typedef Outcome<Error, Model::GetAssetDetailByUuidResult> GetAssetDetailByUuidOutcome;
			typedef std::future<GetAssetDetailByUuidOutcome> GetAssetDetailByUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetAssetDetailByUuidRequest&, const GetAssetDetailByUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAssetDetailByUuidAsyncHandler;
			typedef Outcome<Error, Model::GetAssetSelectionConfigResult> GetAssetSelectionConfigOutcome;
			typedef std::future<GetAssetSelectionConfigOutcome> GetAssetSelectionConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetAssetSelectionConfigRequest&, const GetAssetSelectionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAssetSelectionConfigAsyncHandler;
			typedef Outcome<Error, Model::GetAssetsPropertyDetailResult> GetAssetsPropertyDetailOutcome;
			typedef std::future<GetAssetsPropertyDetailOutcome> GetAssetsPropertyDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetAssetsPropertyDetailRequest&, const GetAssetsPropertyDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAssetsPropertyDetailAsyncHandler;
			typedef Outcome<Error, Model::GetAssetsPropertyItemResult> GetAssetsPropertyItemOutcome;
			typedef std::future<GetAssetsPropertyItemOutcome> GetAssetsPropertyItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetAssetsPropertyItemRequest&, const GetAssetsPropertyItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAssetsPropertyItemAsyncHandler;
			typedef Outcome<Error, Model::GetBackupStorageCountResult> GetBackupStorageCountOutcome;
			typedef std::future<GetBackupStorageCountOutcome> GetBackupStorageCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetBackupStorageCountRequest&, const GetBackupStorageCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBackupStorageCountAsyncHandler;
			typedef Outcome<Error, Model::GetCheckConfigResult> GetCheckConfigOutcome;
			typedef std::future<GetCheckConfigOutcome> GetCheckConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetCheckConfigRequest&, const GetCheckConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckConfigAsyncHandler;
			typedef Outcome<Error, Model::GetCheckDetailResult> GetCheckDetailOutcome;
			typedef std::future<GetCheckDetailOutcome> GetCheckDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetCheckDetailRequest&, const GetCheckDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckDetailAsyncHandler;
			typedef Outcome<Error, Model::GetCheckProcessResult> GetCheckProcessOutcome;
			typedef std::future<GetCheckProcessOutcome> GetCheckProcessOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetCheckProcessRequest&, const GetCheckProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckProcessAsyncHandler;
			typedef Outcome<Error, Model::GetCheckRiskStatisticsResult> GetCheckRiskStatisticsOutcome;
			typedef std::future<GetCheckRiskStatisticsOutcome> GetCheckRiskStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetCheckRiskStatisticsRequest&, const GetCheckRiskStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckRiskStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetCheckSummaryResult> GetCheckSummaryOutcome;
			typedef std::future<GetCheckSummaryOutcome> GetCheckSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetCheckSummaryRequest&, const GetCheckSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetClientRatioStatisticResult> GetClientRatioStatisticOutcome;
			typedef std::future<GetClientRatioStatisticOutcome> GetClientRatioStatisticOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetClientRatioStatisticRequest&, const GetClientRatioStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClientRatioStatisticAsyncHandler;
			typedef Outcome<Error, Model::GetClientUserDefineRuleResult> GetClientUserDefineRuleOutcome;
			typedef std::future<GetClientUserDefineRuleOutcome> GetClientUserDefineRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetClientUserDefineRuleRequest&, const GetClientUserDefineRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClientUserDefineRuleAsyncHandler;
			typedef Outcome<Error, Model::GetCloudAssetCriteriaResult> GetCloudAssetCriteriaOutcome;
			typedef std::future<GetCloudAssetCriteriaOutcome> GetCloudAssetCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetCloudAssetCriteriaRequest&, const GetCloudAssetCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudAssetCriteriaAsyncHandler;
			typedef Outcome<Error, Model::GetCloudAssetDetailResult> GetCloudAssetDetailOutcome;
			typedef std::future<GetCloudAssetDetailOutcome> GetCloudAssetDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetCloudAssetDetailRequest&, const GetCloudAssetDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudAssetDetailAsyncHandler;
			typedef Outcome<Error, Model::GetCloudAssetSummaryResult> GetCloudAssetSummaryOutcome;
			typedef std::future<GetCloudAssetSummaryOutcome> GetCloudAssetSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetCloudAssetSummaryRequest&, const GetCloudAssetSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudAssetSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetClusterCheckItemWarningStatisticsResult> GetClusterCheckItemWarningStatisticsOutcome;
			typedef std::future<GetClusterCheckItemWarningStatisticsOutcome> GetClusterCheckItemWarningStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetClusterCheckItemWarningStatisticsRequest&, const GetClusterCheckItemWarningStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterCheckItemWarningStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetClusterRuleSummaryResult> GetClusterRuleSummaryOutcome;
			typedef std::future<GetClusterRuleSummaryOutcome> GetClusterRuleSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetClusterRuleSummaryRequest&, const GetClusterRuleSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterRuleSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetClusterSuspEventStatisticsResult> GetClusterSuspEventStatisticsOutcome;
			typedef std::future<GetClusterSuspEventStatisticsOutcome> GetClusterSuspEventStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetClusterSuspEventStatisticsRequest&, const GetClusterSuspEventStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterSuspEventStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetFileDetectApiInvokeInfoResult> GetFileDetectApiInvokeInfoOutcome;
			typedef std::future<GetFileDetectApiInvokeInfoOutcome> GetFileDetectApiInvokeInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetFileDetectApiInvokeInfoRequest&, const GetFileDetectApiInvokeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileDetectApiInvokeInfoAsyncHandler;
			typedef Outcome<Error, Model::GetFileDetectResultResult> GetFileDetectResultOutcome;
			typedef std::future<GetFileDetectResultOutcome> GetFileDetectResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetFileDetectResultRequest&, const GetFileDetectResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileDetectResultAsyncHandler;
			typedef Outcome<Error, Model::GetHoneypotNodeResult> GetHoneypotNodeOutcome;
			typedef std::future<GetHoneypotNodeOutcome> GetHoneypotNodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetHoneypotNodeRequest&, const GetHoneypotNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHoneypotNodeAsyncHandler;
			typedef Outcome<Error, Model::GetHoneypotPresetResult> GetHoneypotPresetOutcome;
			typedef std::future<GetHoneypotPresetOutcome> GetHoneypotPresetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetHoneypotPresetRequest&, const GetHoneypotPresetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHoneypotPresetAsyncHandler;
			typedef Outcome<Error, Model::GetHoneypotProbeResult> GetHoneypotProbeOutcome;
			typedef std::future<GetHoneypotProbeOutcome> GetHoneypotProbeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetHoneypotProbeRequest&, const GetHoneypotProbeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHoneypotProbeAsyncHandler;
			typedef Outcome<Error, Model::GetImageScanNumInPeriodResult> GetImageScanNumInPeriodOutcome;
			typedef std::future<GetImageScanNumInPeriodOutcome> GetImageScanNumInPeriodOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetImageScanNumInPeriodRequest&, const GetImageScanNumInPeriodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageScanNumInPeriodAsyncHandler;
			typedef Outcome<Error, Model::GetInterceptionRuleDetailResult> GetInterceptionRuleDetailOutcome;
			typedef std::future<GetInterceptionRuleDetailOutcome> GetInterceptionRuleDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetInterceptionRuleDetailRequest&, const GetInterceptionRuleDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInterceptionRuleDetailAsyncHandler;
			typedef Outcome<Error, Model::GetInterceptionSummaryResult> GetInterceptionSummaryOutcome;
			typedef std::future<GetInterceptionSummaryOutcome> GetInterceptionSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetInterceptionSummaryRequest&, const GetInterceptionSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInterceptionSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetInterceptionTargetDetailResult> GetInterceptionTargetDetailOutcome;
			typedef std::future<GetInterceptionTargetDetailOutcome> GetInterceptionTargetDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetInterceptionTargetDetailRequest&, const GetInterceptionTargetDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInterceptionTargetDetailAsyncHandler;
			typedef Outcome<Error, Model::GetLastOnceTaskInfoResult> GetLastOnceTaskInfoOutcome;
			typedef std::future<GetLastOnceTaskInfoOutcome> GetLastOnceTaskInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetLastOnceTaskInfoRequest&, const GetLastOnceTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLastOnceTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::GetModuleConfigResult> GetModuleConfigOutcome;
			typedef std::future<GetModuleConfigOutcome> GetModuleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetModuleConfigRequest&, const GetModuleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModuleConfigAsyncHandler;
			typedef Outcome<Error, Model::GetOnceTaskResultInfoResult> GetOnceTaskResultInfoOutcome;
			typedef std::future<GetOnceTaskResultInfoOutcome> GetOnceTaskResultInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetOnceTaskResultInfoRequest&, const GetOnceTaskResultInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOnceTaskResultInfoAsyncHandler;
			typedef Outcome<Error, Model::GetPropertyScheduleConfigResult> GetPropertyScheduleConfigOutcome;
			typedef std::future<GetPropertyScheduleConfigOutcome> GetPropertyScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetPropertyScheduleConfigRequest&, const GetPropertyScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPropertyScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::GetRulesCountResult> GetRulesCountOutcome;
			typedef std::future<GetRulesCountOutcome> GetRulesCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetRulesCountRequest&, const GetRulesCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRulesCountAsyncHandler;
			typedef Outcome<Error, Model::GetServiceTrailResult> GetServiceTrailOutcome;
			typedef std::future<GetServiceTrailOutcome> GetServiceTrailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetServiceTrailRequest&, const GetServiceTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceTrailAsyncHandler;
			typedef Outcome<Error, Model::GetSuspiciousStatisticsResult> GetSuspiciousStatisticsOutcome;
			typedef std::future<GetSuspiciousStatisticsOutcome> GetSuspiciousStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetSuspiciousStatisticsRequest&, const GetSuspiciousStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSuspiciousStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetVulStatisticsResult> GetVulStatisticsOutcome;
			typedef std::future<GetVulStatisticsOutcome> GetVulStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetVulStatisticsRequest&, const GetVulStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVulStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetVulWhitelistResult> GetVulWhitelistOutcome;
			typedef std::future<GetVulWhitelistOutcome> GetVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetVulWhitelistRequest&, const GetVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::HandleSecurityEventsResult> HandleSecurityEventsOutcome;
			typedef std::future<HandleSecurityEventsOutcome> HandleSecurityEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::HandleSecurityEventsRequest&, const HandleSecurityEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HandleSecurityEventsAsyncHandler;
			typedef Outcome<Error, Model::HandleSimilarSecurityEventsResult> HandleSimilarSecurityEventsOutcome;
			typedef std::future<HandleSimilarSecurityEventsOutcome> HandleSimilarSecurityEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::HandleSimilarSecurityEventsRequest&, const HandleSimilarSecurityEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HandleSimilarSecurityEventsAsyncHandler;
			typedef Outcome<Error, Model::IgnoreCheckItemsResult> IgnoreCheckItemsOutcome;
			typedef std::future<IgnoreCheckItemsOutcome> IgnoreCheckItemsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::IgnoreCheckItemsRequest&, const IgnoreCheckItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreCheckItemsAsyncHandler;
			typedef Outcome<Error, Model::IgnoreHcCheckWarningsResult> IgnoreHcCheckWarningsOutcome;
			typedef std::future<IgnoreHcCheckWarningsOutcome> IgnoreHcCheckWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::IgnoreHcCheckWarningsRequest&, const IgnoreHcCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreHcCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::InstallBackupClientResult> InstallBackupClientOutcome;
			typedef std::future<InstallBackupClientOutcome> InstallBackupClientOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::InstallBackupClientRequest&, const InstallBackupClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallBackupClientAsyncHandler;
			typedef Outcome<Error, Model::InstallCloudMonitorResult> InstallCloudMonitorOutcome;
			typedef std::future<InstallCloudMonitorOutcome> InstallCloudMonitorOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::InstallCloudMonitorRequest&, const InstallCloudMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallCloudMonitorAsyncHandler;
			typedef Outcome<Error, Model::InstallPmAgentResult> InstallPmAgentOutcome;
			typedef std::future<InstallPmAgentOutcome> InstallPmAgentOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::InstallPmAgentRequest&, const InstallPmAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallPmAgentAsyncHandler;
			typedef Outcome<Error, Model::InstallUniBackupAgentResult> InstallUniBackupAgentOutcome;
			typedef std::future<InstallUniBackupAgentOutcome> InstallUniBackupAgentOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::InstallUniBackupAgentRequest&, const InstallUniBackupAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallUniBackupAgentAsyncHandler;
			typedef Outcome<Error, Model::JoinWebLockProcessWhiteListResult> JoinWebLockProcessWhiteListOutcome;
			typedef std::future<JoinWebLockProcessWhiteListOutcome> JoinWebLockProcessWhiteListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::JoinWebLockProcessWhiteListRequest&, const JoinWebLockProcessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinWebLockProcessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ListAgentlessRegionResult> ListAgentlessRegionOutcome;
			typedef std::future<ListAgentlessRegionOutcome> ListAgentlessRegionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListAgentlessRegionRequest&, const ListAgentlessRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentlessRegionAsyncHandler;
			typedef Outcome<Error, Model::ListAgentlessRelateMaliciousResult> ListAgentlessRelateMaliciousOutcome;
			typedef std::future<ListAgentlessRelateMaliciousOutcome> ListAgentlessRelateMaliciousOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListAgentlessRelateMaliciousRequest&, const ListAgentlessRelateMaliciousOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentlessRelateMaliciousAsyncHandler;
			typedef Outcome<Error, Model::ListAgentlessRiskUuidResult> ListAgentlessRiskUuidOutcome;
			typedef std::future<ListAgentlessRiskUuidOutcome> ListAgentlessRiskUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListAgentlessRiskUuidRequest&, const ListAgentlessRiskUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentlessRiskUuidAsyncHandler;
			typedef Outcome<Error, Model::ListAgentlessTaskResult> ListAgentlessTaskOutcome;
			typedef std::future<ListAgentlessTaskOutcome> ListAgentlessTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListAgentlessTaskRequest&, const ListAgentlessTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentlessTaskAsyncHandler;
			typedef Outcome<Error, Model::ListAssetRefreshTaskConfigResult> ListAssetRefreshTaskConfigOutcome;
			typedef std::future<ListAssetRefreshTaskConfigOutcome> ListAssetRefreshTaskConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListAssetRefreshTaskConfigRequest&, const ListAssetRefreshTaskConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAssetRefreshTaskConfigAsyncHandler;
			typedef Outcome<Error, Model::ListAssetSelectionSelectedTargetResult> ListAssetSelectionSelectedTargetOutcome;
			typedef std::future<ListAssetSelectionSelectedTargetOutcome> ListAssetSelectionSelectedTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListAssetSelectionSelectedTargetRequest&, const ListAssetSelectionSelectedTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAssetSelectionSelectedTargetAsyncHandler;
			typedef Outcome<Error, Model::ListAssetSelectionTargetResult> ListAssetSelectionTargetOutcome;
			typedef std::future<ListAssetSelectionTargetOutcome> ListAssetSelectionTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListAssetSelectionTargetRequest&, const ListAssetSelectionTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAssetSelectionTargetAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableHoneypotResult> ListAvailableHoneypotOutcome;
			typedef std::future<ListAvailableHoneypotOutcome> ListAvailableHoneypotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListAvailableHoneypotRequest&, const ListAvailableHoneypotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableHoneypotAsyncHandler;
			typedef Outcome<Error, Model::ListCheckInstanceResultResult> ListCheckInstanceResultOutcome;
			typedef std::future<ListCheckInstanceResultOutcome> ListCheckInstanceResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListCheckInstanceResultRequest&, const ListCheckInstanceResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckInstanceResultAsyncHandler;
			typedef Outcome<Error, Model::ListCheckItemWarningMachineResult> ListCheckItemWarningMachineOutcome;
			typedef std::future<ListCheckItemWarningMachineOutcome> ListCheckItemWarningMachineOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListCheckItemWarningMachineRequest&, const ListCheckItemWarningMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckItemWarningMachineAsyncHandler;
			typedef Outcome<Error, Model::ListCheckItemWarningSummaryResult> ListCheckItemWarningSummaryOutcome;
			typedef std::future<ListCheckItemWarningSummaryOutcome> ListCheckItemWarningSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListCheckItemWarningSummaryRequest&, const ListCheckItemWarningSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckItemWarningSummaryAsyncHandler;
			typedef Outcome<Error, Model::ListCheckResultResult> ListCheckResultOutcome;
			typedef std::future<ListCheckResultOutcome> ListCheckResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListCheckResultRequest&, const ListCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckResultAsyncHandler;
			typedef Outcome<Error, Model::ListCheckStandardResult> ListCheckStandardOutcome;
			typedef std::future<ListCheckStandardOutcome> ListCheckStandardOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListCheckStandardRequest&, const ListCheckStandardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckStandardAsyncHandler;
			typedef Outcome<Error, Model::ListClientUserDefineRuleTypesResult> ListClientUserDefineRuleTypesOutcome;
			typedef std::future<ListClientUserDefineRuleTypesOutcome> ListClientUserDefineRuleTypesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListClientUserDefineRuleTypesRequest&, const ListClientUserDefineRuleTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClientUserDefineRuleTypesAsyncHandler;
			typedef Outcome<Error, Model::ListClientUserDefineRulesResult> ListClientUserDefineRulesOutcome;
			typedef std::future<ListClientUserDefineRulesOutcome> ListClientUserDefineRulesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListClientUserDefineRulesRequest&, const ListClientUserDefineRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClientUserDefineRulesAsyncHandler;
			typedef Outcome<Error, Model::ListCloudAssetInstancesResult> ListCloudAssetInstancesOutcome;
			typedef std::future<ListCloudAssetInstancesOutcome> ListCloudAssetInstancesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListCloudAssetInstancesRequest&, const ListCloudAssetInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCloudAssetInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterCnnfStatusDetailResult> ListClusterCnnfStatusDetailOutcome;
			typedef std::future<ListClusterCnnfStatusDetailOutcome> ListClusterCnnfStatusDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListClusterCnnfStatusDetailRequest&, const ListClusterCnnfStatusDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterCnnfStatusDetailAsyncHandler;
			typedef Outcome<Error, Model::ListClusterInterceptionConfigResult> ListClusterInterceptionConfigOutcome;
			typedef std::future<ListClusterInterceptionConfigOutcome> ListClusterInterceptionConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListClusterInterceptionConfigRequest&, const ListClusterInterceptionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterInterceptionConfigAsyncHandler;
			typedef Outcome<Error, Model::ListHoneypotResult> ListHoneypotOutcome;
			typedef std::future<ListHoneypotOutcome> ListHoneypotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListHoneypotRequest&, const ListHoneypotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHoneypotAsyncHandler;
			typedef Outcome<Error, Model::ListHoneypotAlarmEventsResult> ListHoneypotAlarmEventsOutcome;
			typedef std::future<ListHoneypotAlarmEventsOutcome> ListHoneypotAlarmEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListHoneypotAlarmEventsRequest&, const ListHoneypotAlarmEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHoneypotAlarmEventsAsyncHandler;
			typedef Outcome<Error, Model::ListHoneypotNodeResult> ListHoneypotNodeOutcome;
			typedef std::future<ListHoneypotNodeOutcome> ListHoneypotNodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListHoneypotNodeRequest&, const ListHoneypotNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHoneypotNodeAsyncHandler;
			typedef Outcome<Error, Model::ListHoneypotPresetResult> ListHoneypotPresetOutcome;
			typedef std::future<ListHoneypotPresetOutcome> ListHoneypotPresetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListHoneypotPresetRequest&, const ListHoneypotPresetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHoneypotPresetAsyncHandler;
			typedef Outcome<Error, Model::ListHoneypotProbeResult> ListHoneypotProbeOutcome;
			typedef std::future<ListHoneypotProbeOutcome> ListHoneypotProbeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListHoneypotProbeRequest&, const ListHoneypotProbeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHoneypotProbeAsyncHandler;
			typedef Outcome<Error, Model::ListImageRegistryRegionResult> ListImageRegistryRegionOutcome;
			typedef std::future<ListImageRegistryRegionOutcome> ListImageRegistryRegionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListImageRegistryRegionRequest&, const ListImageRegistryRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImageRegistryRegionAsyncHandler;
			typedef Outcome<Error, Model::ListImageRiskResult> ListImageRiskOutcome;
			typedef std::future<ListImageRiskOutcome> ListImageRiskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListImageRiskRequest&, const ListImageRiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImageRiskAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceCatalogResult> ListInstanceCatalogOutcome;
			typedef std::future<ListInstanceCatalogOutcome> ListInstanceCatalogOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListInstanceCatalogRequest&, const ListInstanceCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceCatalogAsyncHandler;
			typedef Outcome<Error, Model::ListInterceptionHistoryResult> ListInterceptionHistoryOutcome;
			typedef std::future<ListInterceptionHistoryOutcome> ListInterceptionHistoryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListInterceptionHistoryRequest&, const ListInterceptionHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInterceptionHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListInterceptionRulePageResult> ListInterceptionRulePageOutcome;
			typedef std::future<ListInterceptionRulePageOutcome> ListInterceptionRulePageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListInterceptionRulePageRequest&, const ListInterceptionRulePageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInterceptionRulePageAsyncHandler;
			typedef Outcome<Error, Model::ListInterceptionTargetPageResult> ListInterceptionTargetPageOutcome;
			typedef std::future<ListInterceptionTargetPageOutcome> ListInterceptionTargetPageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListInterceptionTargetPageRequest&, const ListInterceptionTargetPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInterceptionTargetPageAsyncHandler;
			typedef Outcome<Error, Model::ListPluginForUuidResult> ListPluginForUuidOutcome;
			typedef std::future<ListPluginForUuidOutcome> ListPluginForUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListPluginForUuidRequest&, const ListPluginForUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPluginForUuidAsyncHandler;
			typedef Outcome<Error, Model::ListPodRiskResult> ListPodRiskOutcome;
			typedef std::future<ListPodRiskOutcome> ListPodRiskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListPodRiskRequest&, const ListPodRiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPodRiskAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateRegistryListResult> ListPrivateRegistryListOutcome;
			typedef std::future<ListPrivateRegistryListOutcome> ListPrivateRegistryListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListPrivateRegistryListRequest&, const ListPrivateRegistryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateRegistryListAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateRegistryTypeResult> ListPrivateRegistryTypeOutcome;
			typedef std::future<ListPrivateRegistryTypeOutcome> ListPrivateRegistryTypeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListPrivateRegistryTypeRequest&, const ListPrivateRegistryTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateRegistryTypeAsyncHandler;
			typedef Outcome<Error, Model::ListQueryRaspAppInfoResult> ListQueryRaspAppInfoOutcome;
			typedef std::future<ListQueryRaspAppInfoOutcome> ListQueryRaspAppInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListQueryRaspAppInfoRequest&, const ListQueryRaspAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQueryRaspAppInfoAsyncHandler;
			typedef Outcome<Error, Model::ListRuleTargetAllResult> ListRuleTargetAllOutcome;
			typedef std::future<ListRuleTargetAllOutcome> ListRuleTargetAllOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListRuleTargetAllRequest&, const ListRuleTargetAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRuleTargetAllAsyncHandler;
			typedef Outcome<Error, Model::ListSystemAggregationRulesResult> ListSystemAggregationRulesOutcome;
			typedef std::future<ListSystemAggregationRulesOutcome> ListSystemAggregationRulesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListSystemAggregationRulesRequest&, const ListSystemAggregationRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemAggregationRulesAsyncHandler;
			typedef Outcome<Error, Model::ListSystemClientRuleTypesResult> ListSystemClientRuleTypesOutcome;
			typedef std::future<ListSystemClientRuleTypesOutcome> ListSystemClientRuleTypesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListSystemClientRuleTypesRequest&, const ListSystemClientRuleTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemClientRuleTypesAsyncHandler;
			typedef Outcome<Error, Model::ListSystemClientRulesResult> ListSystemClientRulesOutcome;
			typedef std::future<ListSystemClientRulesOutcome> ListSystemClientRulesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListSystemClientRulesRequest&, const ListSystemClientRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemClientRulesAsyncHandler;
			typedef Outcome<Error, Model::ListSystemRuleAggregationTypesResult> ListSystemRuleAggregationTypesOutcome;
			typedef std::future<ListSystemRuleAggregationTypesOutcome> ListSystemRuleAggregationTypesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListSystemRuleAggregationTypesRequest&, const ListSystemRuleAggregationTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemRuleAggregationTypesAsyncHandler;
			typedef Outcome<Error, Model::ListUninstallAegisMachinesResult> ListUninstallAegisMachinesOutcome;
			typedef std::future<ListUninstallAegisMachinesOutcome> ListUninstallAegisMachinesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListUninstallAegisMachinesRequest&, const ListUninstallAegisMachinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUninstallAegisMachinesAsyncHandler;
			typedef Outcome<Error, Model::ListUuidsByWebPathResult> ListUuidsByWebPathOutcome;
			typedef std::future<ListUuidsByWebPathOutcome> ListUuidsByWebPathOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListUuidsByWebPathRequest&, const ListUuidsByWebPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUuidsByWebPathAsyncHandler;
			typedef Outcome<Error, Model::ListVulAutoRepairConfigResult> ListVulAutoRepairConfigOutcome;
			typedef std::future<ListVulAutoRepairConfigOutcome> ListVulAutoRepairConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ListVulAutoRepairConfigRequest&, const ListVulAutoRepairConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVulAutoRepairConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccessKeyLeakDealResult> ModifyAccessKeyLeakDealOutcome;
			typedef std::future<ModifyAccessKeyLeakDealOutcome> ModifyAccessKeyLeakDealOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAccessKeyLeakDealRequest&, const ModifyAccessKeyLeakDealOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessKeyLeakDealAsyncHandler;
			typedef Outcome<Error, Model::ModifyAntiBruteForceRuleResult> ModifyAntiBruteForceRuleOutcome;
			typedef std::future<ModifyAntiBruteForceRuleOutcome> ModifyAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAntiBruteForceRuleRequest&, const ModifyAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppVulScanCycleResult> ModifyAppVulScanCycleOutcome;
			typedef std::future<ModifyAppVulScanCycleOutcome> ModifyAppVulScanCycleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAppVulScanCycleRequest&, const ModifyAppVulScanCycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppVulScanCycleAsyncHandler;
			typedef Outcome<Error, Model::ModifyAssetGroupResult> ModifyAssetGroupOutcome;
			typedef std::future<ModifyAssetGroupOutcome> ModifyAssetGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAssetGroupRequest&, const ModifyAssetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyAssetImportantResult> ModifyAssetImportantOutcome;
			typedef std::future<ModifyAssetImportantOutcome> ModifyAssetImportantOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAssetImportantRequest&, const ModifyAssetImportantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetImportantAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoDelConfigResult> ModifyAutoDelConfigOutcome;
			typedef std::future<ModifyAutoDelConfigOutcome> ModifyAutoDelConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAutoDelConfigRequest&, const ModifyAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyStatusResult> ModifyBackupPolicyStatusOutcome;
			typedef std::future<ModifyBackupPolicyStatusOutcome> ModifyBackupPolicyStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyBackupPolicyStatusRequest&, const ModifyBackupPolicyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyClearLogstoreStorageResult> ModifyClearLogstoreStorageOutcome;
			typedef std::future<ModifyClearLogstoreStorageOutcome> ModifyClearLogstoreStorageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyClearLogstoreStorageRequest&, const ModifyClearLogstoreStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClearLogstoreStorageAsyncHandler;
			typedef Outcome<Error, Model::ModifyClientConfSetupResult> ModifyClientConfSetupOutcome;
			typedef std::future<ModifyClientConfSetupOutcome> ModifyClientConfSetupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyClientConfSetupRequest&, const ModifyClientConfSetupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClientConfSetupAsyncHandler;
			typedef Outcome<Error, Model::ModifyClientConfStrategyResult> ModifyClientConfStrategyOutcome;
			typedef std::future<ModifyClientConfStrategyOutcome> ModifyClientConfStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyClientConfStrategyRequest&, const ModifyClientConfStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClientConfStrategyAsyncHandler;
			typedef Outcome<Error, Model::ModifyClientUserDefineRuleResult> ModifyClientUserDefineRuleOutcome;
			typedef std::future<ModifyClientUserDefineRuleOutcome> ModifyClientUserDefineRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyClientUserDefineRuleRequest&, const ModifyClientUserDefineRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClientUserDefineRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterCnnfStatusUserConfirmResult> ModifyClusterCnnfStatusUserConfirmOutcome;
			typedef std::future<ModifyClusterCnnfStatusUserConfirmOutcome> ModifyClusterCnnfStatusUserConfirmOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyClusterCnnfStatusUserConfirmRequest&, const ModifyClusterCnnfStatusUserConfirmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterCnnfStatusUserConfirmAsyncHandler;
			typedef Outcome<Error, Model::ModifyConcernNecessityResult> ModifyConcernNecessityOutcome;
			typedef std::future<ModifyConcernNecessityOutcome> ModifyConcernNecessityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyConcernNecessityRequest&, const ModifyConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConcernNecessityAsyncHandler;
			typedef Outcome<Error, Model::ModifyCreateVulWhitelistResult> ModifyCreateVulWhitelistOutcome;
			typedef std::future<ModifyCreateVulWhitelistOutcome> ModifyCreateVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyCreateVulWhitelistRequest&, const ModifyCreateVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCreateVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyCustomBlockRecordResult> ModifyCustomBlockRecordOutcome;
			typedef std::future<ModifyCustomBlockRecordOutcome> ModifyCustomBlockRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyCustomBlockRecordRequest&, const ModifyCustomBlockRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomBlockRecordAsyncHandler;
			typedef Outcome<Error, Model::ModifyCycleTaskResult> ModifyCycleTaskOutcome;
			typedef std::future<ModifyCycleTaskOutcome> ModifyCycleTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyCycleTaskRequest&, const ModifyCycleTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCycleTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyEmgVulSubmitResult> ModifyEmgVulSubmitOutcome;
			typedef std::future<ModifyEmgVulSubmitOutcome> ModifyEmgVulSubmitOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyEmgVulSubmitRequest&, const ModifyEmgVulSubmitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEmgVulSubmitAsyncHandler;
			typedef Outcome<Error, Model::ModifyGroupPropertyResult> ModifyGroupPropertyOutcome;
			typedef std::future<ModifyGroupPropertyOutcome> ModifyGroupPropertyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyGroupPropertyRequest&, const ModifyGroupPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupPropertyAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAntiBruteForceRuleResult> ModifyInstanceAntiBruteForceRuleOutcome;
			typedef std::future<ModifyInstanceAntiBruteForceRuleOutcome> ModifyInstanceAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyInstanceAntiBruteForceRuleRequest&, const ModifyInstanceAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyInterceptionRuleResult> ModifyInterceptionRuleOutcome;
			typedef std::future<ModifyInterceptionRuleOutcome> ModifyInterceptionRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyInterceptionRuleRequest&, const ModifyInterceptionRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInterceptionRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyInterceptionRuleSwitchResult> ModifyInterceptionRuleSwitchOutcome;
			typedef std::future<ModifyInterceptionRuleSwitchOutcome> ModifyInterceptionRuleSwitchOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyInterceptionRuleSwitchRequest&, const ModifyInterceptionRuleSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInterceptionRuleSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyInterceptionTargetResult> ModifyInterceptionTargetOutcome;
			typedef std::future<ModifyInterceptionTargetOutcome> ModifyInterceptionTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyInterceptionTargetRequest&, const ModifyInterceptionTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInterceptionTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyLogMetaStatusResult> ModifyLogMetaStatusOutcome;
			typedef std::future<ModifyLogMetaStatusOutcome> ModifyLogMetaStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyLogMetaStatusRequest&, const ModifyLogMetaStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogMetaStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoginBaseConfigResult> ModifyLoginBaseConfigOutcome;
			typedef std::future<ModifyLoginBaseConfigOutcome> ModifyLoginBaseConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyLoginBaseConfigRequest&, const ModifyLoginBaseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginBaseConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoginSwitchConfigResult> ModifyLoginSwitchConfigOutcome;
			typedef std::future<ModifyLoginSwitchConfigOutcome> ModifyLoginSwitchConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyLoginSwitchConfigRequest&, const ModifyLoginSwitchConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginSwitchConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyNoticeConfigResult> ModifyNoticeConfigOutcome;
			typedef std::future<ModifyNoticeConfigOutcome> ModifyNoticeConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyNoticeConfigRequest&, const ModifyNoticeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNoticeConfigAsyncHandler;
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
			typedef Outcome<Error, Model::ModifyRefreshProcessInfoResult> ModifyRefreshProcessInfoOutcome;
			typedef std::future<ModifyRefreshProcessInfoOutcome> ModifyRefreshProcessInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRefreshProcessInfoRequest&, const ModifyRefreshProcessInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRefreshProcessInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyRiskCheckStatusResult> ModifyRiskCheckStatusOutcome;
			typedef std::future<ModifyRiskCheckStatusOutcome> ModifyRiskCheckStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRiskCheckStatusRequest&, const ModifyRiskCheckStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCheckStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyRiskSingleResultStatusResult> ModifyRiskSingleResultStatusOutcome;
			typedef std::future<ModifyRiskSingleResultStatusOutcome> ModifyRiskSingleResultStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRiskSingleResultStatusRequest&, const ModifyRiskSingleResultStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskSingleResultStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityCheckScheduleConfigResult> ModifySecurityCheckScheduleConfigOutcome;
			typedef std::future<ModifySecurityCheckScheduleConfigOutcome> ModifySecurityCheckScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifySecurityCheckScheduleConfigRequest&, const ModifySecurityCheckScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityCheckScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityEventMarkMissIndividuallyResult> ModifySecurityEventMarkMissIndividuallyOutcome;
			typedef std::future<ModifySecurityEventMarkMissIndividuallyOutcome> ModifySecurityEventMarkMissIndividuallyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifySecurityEventMarkMissIndividuallyRequest&, const ModifySecurityEventMarkMissIndividuallyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityEventMarkMissIndividuallyAsyncHandler;
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
			typedef Outcome<Error, Model::ModifyUniBackupPolicyResult> ModifyUniBackupPolicyOutcome;
			typedef std::future<ModifyUniBackupPolicyOutcome> ModifyUniBackupPolicyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyUniBackupPolicyRequest&, const ModifyUniBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUniBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpcHoneyPotResult> ModifyVpcHoneyPotOutcome;
			typedef std::future<ModifyVpcHoneyPotOutcome> ModifyVpcHoneyPotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyVpcHoneyPotRequest&, const ModifyVpcHoneyPotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcHoneyPotAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulConfigResult> ModifyVulConfigOutcome;
			typedef std::future<ModifyVulConfigOutcome> ModifyVulConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyVulConfigRequest&, const ModifyVulConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulTargetResult> ModifyVulTargetOutcome;
			typedef std::future<ModifyVulTargetOutcome> ModifyVulTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyVulTargetRequest&, const ModifyVulTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulTargetConfigResult> ModifyVulTargetConfigOutcome;
			typedef std::future<ModifyVulTargetConfigOutcome> ModifyVulTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyVulTargetConfigRequest&, const ModifyVulTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulWhitelistTargetResult> ModifyVulWhitelistTargetOutcome;
			typedef std::future<ModifyVulWhitelistTargetOutcome> ModifyVulWhitelistTargetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyVulWhitelistTargetRequest&, const ModifyVulWhitelistTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulWhitelistTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockCreateConfigResult> ModifyWebLockCreateConfigOutcome;
			typedef std::future<ModifyWebLockCreateConfigOutcome> ModifyWebLockCreateConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockCreateConfigRequest&, const ModifyWebLockCreateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockCreateConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockDeleteConfigResult> ModifyWebLockDeleteConfigOutcome;
			typedef std::future<ModifyWebLockDeleteConfigOutcome> ModifyWebLockDeleteConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockDeleteConfigRequest&, const ModifyWebLockDeleteConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockDeleteConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockProcessStatusResult> ModifyWebLockProcessStatusOutcome;
			typedef std::future<ModifyWebLockProcessStatusOutcome> ModifyWebLockProcessStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockProcessStatusRequest&, const ModifyWebLockProcessStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockProcessStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockStartResult> ModifyWebLockStartOutcome;
			typedef std::future<ModifyWebLockStartOutcome> ModifyWebLockStartOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockStartRequest&, const ModifyWebLockStartOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockStartAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockStatusResult> ModifyWebLockStatusOutcome;
			typedef std::future<ModifyWebLockStatusOutcome> ModifyWebLockStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockStatusRequest&, const ModifyWebLockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockUnbindResult> ModifyWebLockUnbindOutcome;
			typedef std::future<ModifyWebLockUnbindOutcome> ModifyWebLockUnbindOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockUnbindRequest&, const ModifyWebLockUnbindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockUnbindAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockUpdateConfigResult> ModifyWebLockUpdateConfigOutcome;
			typedef std::future<ModifyWebLockUpdateConfigOutcome> ModifyWebLockUpdateConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebLockUpdateConfigRequest&, const ModifyWebLockUpdateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockUpdateConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebPathResult> ModifyWebPathOutcome;
			typedef std::future<ModifyWebPathOutcome> ModifyWebPathOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyWebPathRequest&, const ModifyWebPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPathAsyncHandler;
			typedef Outcome<Error, Model::OpenSensitiveFileScanResult> OpenSensitiveFileScanOutcome;
			typedef std::future<OpenSensitiveFileScanOutcome> OpenSensitiveFileScanOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OpenSensitiveFileScanRequest&, const OpenSensitiveFileScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenSensitiveFileScanAsyncHandler;
			typedef Outcome<Error, Model::OperateAgentClientInstallResult> OperateAgentClientInstallOutcome;
			typedef std::future<OperateAgentClientInstallOutcome> OperateAgentClientInstallOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateAgentClientInstallRequest&, const OperateAgentClientInstallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateAgentClientInstallAsyncHandler;
			typedef Outcome<Error, Model::OperateCommonOverallConfigResult> OperateCommonOverallConfigOutcome;
			typedef std::future<OperateCommonOverallConfigOutcome> OperateCommonOverallConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateCommonOverallConfigRequest&, const OperateCommonOverallConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateCommonOverallConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateCommonTargetConfigResult> OperateCommonTargetConfigOutcome;
			typedef std::future<OperateCommonTargetConfigOutcome> OperateCommonTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateCommonTargetConfigRequest&, const OperateCommonTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateCommonTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateImageBaselineWhitelistResult> OperateImageBaselineWhitelistOutcome;
			typedef std::future<OperateImageBaselineWhitelistOutcome> OperateImageBaselineWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateImageBaselineWhitelistRequest&, const OperateImageBaselineWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateImageBaselineWhitelistAsyncHandler;
			typedef Outcome<Error, Model::OperateImageVulResult> OperateImageVulOutcome;
			typedef std::future<OperateImageVulOutcome> OperateImageVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateImageVulRequest&, const OperateImageVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateImageVulAsyncHandler;
			typedef Outcome<Error, Model::OperateSuspiciousOverallConfigResult> OperateSuspiciousOverallConfigOutcome;
			typedef std::future<OperateSuspiciousOverallConfigOutcome> OperateSuspiciousOverallConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateSuspiciousOverallConfigRequest&, const OperateSuspiciousOverallConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateSuspiciousOverallConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateSuspiciousTargetConfigResult> OperateSuspiciousTargetConfigOutcome;
			typedef std::future<OperateSuspiciousTargetConfigOutcome> OperateSuspiciousTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateSuspiciousTargetConfigRequest&, const OperateSuspiciousTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateSuspiciousTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateVirusEventsResult> OperateVirusEventsOutcome;
			typedef std::future<OperateVirusEventsOutcome> OperateVirusEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateVirusEventsRequest&, const OperateVirusEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateVirusEventsAsyncHandler;
			typedef Outcome<Error, Model::OperateVulsResult> OperateVulsOutcome;
			typedef std::future<OperateVulsOutcome> OperateVulsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateVulsRequest&, const OperateVulsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateVulsAsyncHandler;
			typedef Outcome<Error, Model::OperateWebLockFileEventsResult> OperateWebLockFileEventsOutcome;
			typedef std::future<OperateWebLockFileEventsOutcome> OperateWebLockFileEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateWebLockFileEventsRequest&, const OperateWebLockFileEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateWebLockFileEventsAsyncHandler;
			typedef Outcome<Error, Model::OperationCancelIgnoreSuspEventResult> OperationCancelIgnoreSuspEventOutcome;
			typedef std::future<OperationCancelIgnoreSuspEventOutcome> OperationCancelIgnoreSuspEventOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperationCancelIgnoreSuspEventRequest&, const OperationCancelIgnoreSuspEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperationCancelIgnoreSuspEventAsyncHandler;
			typedef Outcome<Error, Model::OperationSuspEventsResult> OperationSuspEventsOutcome;
			typedef std::future<OperationSuspEventsOutcome> OperationSuspEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperationSuspEventsRequest&, const OperationSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperationSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::PageImageRegistryResult> PageImageRegistryOutcome;
			typedef std::future<PageImageRegistryOutcome> PageImageRegistryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::PageImageRegistryRequest&, const PageImageRegistryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageImageRegistryAsyncHandler;
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
			typedef Outcome<Error, Model::QueryDiscoverDatabaseResult> QueryDiscoverDatabaseOutcome;
			typedef std::future<QueryDiscoverDatabaseOutcome> QueryDiscoverDatabaseOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::QueryDiscoverDatabaseRequest&, const QueryDiscoverDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDiscoverDatabaseAsyncHandler;
			typedef Outcome<Error, Model::QueryGroupIdByGroupNameResult> QueryGroupIdByGroupNameOutcome;
			typedef std::future<QueryGroupIdByGroupNameOutcome> QueryGroupIdByGroupNameOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::QueryGroupIdByGroupNameRequest&, const QueryGroupIdByGroupNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGroupIdByGroupNameAsyncHandler;
			typedef Outcome<Error, Model::QueryGroupedSecurityEventMarkMissListResult> QueryGroupedSecurityEventMarkMissListOutcome;
			typedef std::future<QueryGroupedSecurityEventMarkMissListOutcome> QueryGroupedSecurityEventMarkMissListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::QueryGroupedSecurityEventMarkMissListRequest&, const QueryGroupedSecurityEventMarkMissListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGroupedSecurityEventMarkMissListAsyncHandler;
			typedef Outcome<Error, Model::QueryJenkinsImageRegistryPersistenceDayResult> QueryJenkinsImageRegistryPersistenceDayOutcome;
			typedef std::future<QueryJenkinsImageRegistryPersistenceDayOutcome> QueryJenkinsImageRegistryPersistenceDayOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::QueryJenkinsImageRegistryPersistenceDayRequest&, const QueryJenkinsImageRegistryPersistenceDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryJenkinsImageRegistryPersistenceDayAsyncHandler;
			typedef Outcome<Error, Model::QueryPreCheckDatabaseResult> QueryPreCheckDatabaseOutcome;
			typedef std::future<QueryPreCheckDatabaseOutcome> QueryPreCheckDatabaseOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::QueryPreCheckDatabaseRequest&, const QueryPreCheckDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPreCheckDatabaseAsyncHandler;
			typedef Outcome<Error, Model::RebootMachineResult> RebootMachineOutcome;
			typedef std::future<RebootMachineOutcome> RebootMachineOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RebootMachineRequest&, const RebootMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootMachineAsyncHandler;
			typedef Outcome<Error, Model::RefreshAssetsResult> RefreshAssetsOutcome;
			typedef std::future<RefreshAssetsOutcome> RefreshAssetsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RefreshAssetsRequest&, const RefreshAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshAssetsAsyncHandler;
			typedef Outcome<Error, Model::RefreshContainerAssetsResult> RefreshContainerAssetsOutcome;
			typedef std::future<RefreshContainerAssetsOutcome> RefreshContainerAssetsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RefreshContainerAssetsRequest&, const RefreshContainerAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshContainerAssetsAsyncHandler;
			typedef Outcome<Error, Model::RemoveCheckInstanceResultWhiteListResult> RemoveCheckInstanceResultWhiteListOutcome;
			typedef std::future<RemoveCheckInstanceResultWhiteListOutcome> RemoveCheckInstanceResultWhiteListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RemoveCheckInstanceResultWhiteListRequest&, const RemoveCheckInstanceResultWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCheckInstanceResultWhiteListAsyncHandler;
			typedef Outcome<Error, Model::RemoveCheckResultWhiteListResult> RemoveCheckResultWhiteListOutcome;
			typedef std::future<RemoveCheckResultWhiteListOutcome> RemoveCheckResultWhiteListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RemoveCheckResultWhiteListRequest&, const RemoveCheckResultWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCheckResultWhiteListAsyncHandler;
			typedef Outcome<Error, Model::RollbackSuspEventQuaraFileResult> RollbackSuspEventQuaraFileOutcome;
			typedef std::future<RollbackSuspEventQuaraFileOutcome> RollbackSuspEventQuaraFileOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::RollbackSuspEventQuaraFileRequest&, const RollbackSuspEventQuaraFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackSuspEventQuaraFileAsyncHandler;
			typedef Outcome<Error, Model::SasInstallCodeResult> SasInstallCodeOutcome;
			typedef std::future<SasInstallCodeOutcome> SasInstallCodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::SasInstallCodeRequest&, const SasInstallCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SasInstallCodeAsyncHandler;
			typedef Outcome<Error, Model::SaveImageBaselineStrategyResult> SaveImageBaselineStrategyOutcome;
			typedef std::future<SaveImageBaselineStrategyOutcome> SaveImageBaselineStrategyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::SaveImageBaselineStrategyRequest&, const SaveImageBaselineStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveImageBaselineStrategyAsyncHandler;
			typedef Outcome<Error, Model::SaveSuspEventUserSettingResult> SaveSuspEventUserSettingOutcome;
			typedef std::future<SaveSuspEventUserSettingOutcome> SaveSuspEventUserSettingOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::SaveSuspEventUserSettingRequest&, const SaveSuspEventUserSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSuspEventUserSettingAsyncHandler;
			typedef Outcome<Error, Model::SetClusterInterceptionConfigResult> SetClusterInterceptionConfigOutcome;
			typedef std::future<SetClusterInterceptionConfigOutcome> SetClusterInterceptionConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::SetClusterInterceptionConfigRequest&, const SetClusterInterceptionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetClusterInterceptionConfigAsyncHandler;
			typedef Outcome<Error, Model::SetRegistryScanDayNumResult> SetRegistryScanDayNumOutcome;
			typedef std::future<SetRegistryScanDayNumOutcome> SetRegistryScanDayNumOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::SetRegistryScanDayNumRequest&, const SetRegistryScanDayNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRegistryScanDayNumAsyncHandler;
			typedef Outcome<Error, Model::StartBaselineSecurityCheckResult> StartBaselineSecurityCheckOutcome;
			typedef std::future<StartBaselineSecurityCheckOutcome> StartBaselineSecurityCheckOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::StartBaselineSecurityCheckRequest&, const StartBaselineSecurityCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBaselineSecurityCheckAsyncHandler;
			typedef Outcome<Error, Model::StartDiscoverDatabaseTaskResult> StartDiscoverDatabaseTaskOutcome;
			typedef std::future<StartDiscoverDatabaseTaskOutcome> StartDiscoverDatabaseTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::StartDiscoverDatabaseTaskRequest&, const StartDiscoverDatabaseTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDiscoverDatabaseTaskAsyncHandler;
			typedef Outcome<Error, Model::StartPreCheckDatabaseResult> StartPreCheckDatabaseOutcome;
			typedef std::future<StartPreCheckDatabaseOutcome> StartPreCheckDatabaseOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::StartPreCheckDatabaseRequest&, const StartPreCheckDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartPreCheckDatabaseAsyncHandler;
			typedef Outcome<Error, Model::StartVirusScanTaskResult> StartVirusScanTaskOutcome;
			typedef std::future<StartVirusScanTaskOutcome> StartVirusScanTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::StartVirusScanTaskRequest&, const StartVirusScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartVirusScanTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitCheckResult> SubmitCheckOutcome;
			typedef std::future<SubmitCheckOutcome> SubmitCheckOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::SubmitCheckRequest&, const SubmitCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCheckAsyncHandler;
			typedef Outcome<Error, Model::UnbindAegisResult> UnbindAegisOutcome;
			typedef std::future<UnbindAegisOutcome> UnbindAegisOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UnbindAegisRequest&, const UnbindAegisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAegisAsyncHandler;
			typedef Outcome<Error, Model::UninstallBackupClientResult> UninstallBackupClientOutcome;
			typedef std::future<UninstallBackupClientOutcome> UninstallBackupClientOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UninstallBackupClientRequest&, const UninstallBackupClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallBackupClientAsyncHandler;
			typedef Outcome<Error, Model::UninstallUniBackupAgentResult> UninstallUniBackupAgentOutcome;
			typedef std::future<UninstallUniBackupAgentOutcome> UninstallUniBackupAgentOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UninstallUniBackupAgentRequest&, const UninstallUniBackupAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallUniBackupAgentAsyncHandler;
			typedef Outcome<Error, Model::UpdateHoneypotResult> UpdateHoneypotOutcome;
			typedef std::future<UpdateHoneypotOutcome> UpdateHoneypotOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UpdateHoneypotRequest&, const UpdateHoneypotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHoneypotAsyncHandler;
			typedef Outcome<Error, Model::UpdateHoneypotNodeResult> UpdateHoneypotNodeOutcome;
			typedef std::future<UpdateHoneypotNodeOutcome> UpdateHoneypotNodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UpdateHoneypotNodeRequest&, const UpdateHoneypotNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHoneypotNodeAsyncHandler;
			typedef Outcome<Error, Model::UpdateHoneypotPresetResult> UpdateHoneypotPresetOutcome;
			typedef std::future<UpdateHoneypotPresetOutcome> UpdateHoneypotPresetOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UpdateHoneypotPresetRequest&, const UpdateHoneypotPresetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHoneypotPresetAsyncHandler;
			typedef Outcome<Error, Model::UpdateHoneypotProbeResult> UpdateHoneypotProbeOutcome;
			typedef std::future<UpdateHoneypotProbeOutcome> UpdateHoneypotProbeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UpdateHoneypotProbeRequest&, const UpdateHoneypotProbeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHoneypotProbeAsyncHandler;
			typedef Outcome<Error, Model::UpdateJenkinsImageRegistryNameResult> UpdateJenkinsImageRegistryNameOutcome;
			typedef std::future<UpdateJenkinsImageRegistryNameOutcome> UpdateJenkinsImageRegistryNameOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UpdateJenkinsImageRegistryNameRequest&, const UpdateJenkinsImageRegistryNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJenkinsImageRegistryNameAsyncHandler;
			typedef Outcome<Error, Model::UpdateJenkinsImageRegistryPersistenceDayResult> UpdateJenkinsImageRegistryPersistenceDayOutcome;
			typedef std::future<UpdateJenkinsImageRegistryPersistenceDayOutcome> UpdateJenkinsImageRegistryPersistenceDayOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UpdateJenkinsImageRegistryPersistenceDayRequest&, const UpdateJenkinsImageRegistryPersistenceDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJenkinsImageRegistryPersistenceDayAsyncHandler;
			typedef Outcome<Error, Model::UpgradeBackupPolicyVersionResult> UpgradeBackupPolicyVersionOutcome;
			typedef std::future<UpgradeBackupPolicyVersionOutcome> UpgradeBackupPolicyVersionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::UpgradeBackupPolicyVersionRequest&, const UpgradeBackupPolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeBackupPolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::ValidateHcWarningsResult> ValidateHcWarningsOutcome;
			typedef std::future<ValidateHcWarningsOutcome> ValidateHcWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ValidateHcWarningsRequest&, const ValidateHcWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateHcWarningsAsyncHandler;
			typedef Outcome<Error, Model::VerifyCheckInstanceResultResult> VerifyCheckInstanceResultOutcome;
			typedef std::future<VerifyCheckInstanceResultOutcome> VerifyCheckInstanceResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::VerifyCheckInstanceResultRequest&, const VerifyCheckInstanceResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCheckInstanceResultAsyncHandler;
			typedef Outcome<Error, Model::VerifyCheckResultResult> VerifyCheckResultOutcome;
			typedef std::future<VerifyCheckResultOutcome> VerifyCheckResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::VerifyCheckResultRequest&, const VerifyCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCheckResultAsyncHandler;

			SasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SasClient();
			AddAssetSelectionCriteriaOutcome addAssetSelectionCriteria(const Model::AddAssetSelectionCriteriaRequest &request)const;
			void addAssetSelectionCriteriaAsync(const Model::AddAssetSelectionCriteriaRequest& request, const AddAssetSelectionCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAssetSelectionCriteriaOutcomeCallable addAssetSelectionCriteriaCallable(const Model::AddAssetSelectionCriteriaRequest& request) const;
			AddCheckInstanceResultWhiteListOutcome addCheckInstanceResultWhiteList(const Model::AddCheckInstanceResultWhiteListRequest &request)const;
			void addCheckInstanceResultWhiteListAsync(const Model::AddCheckInstanceResultWhiteListRequest& request, const AddCheckInstanceResultWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCheckInstanceResultWhiteListOutcomeCallable addCheckInstanceResultWhiteListCallable(const Model::AddCheckInstanceResultWhiteListRequest& request) const;
			AddCheckResultWhiteListOutcome addCheckResultWhiteList(const Model::AddCheckResultWhiteListRequest &request)const;
			void addCheckResultWhiteListAsync(const Model::AddCheckResultWhiteListRequest& request, const AddCheckResultWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCheckResultWhiteListOutcomeCallable addCheckResultWhiteListCallable(const Model::AddCheckResultWhiteListRequest& request) const;
			AddClientUserDefineRuleOutcome addClientUserDefineRule(const Model::AddClientUserDefineRuleRequest &request)const;
			void addClientUserDefineRuleAsync(const Model::AddClientUserDefineRuleRequest& request, const AddClientUserDefineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddClientUserDefineRuleOutcomeCallable addClientUserDefineRuleCallable(const Model::AddClientUserDefineRuleRequest& request) const;
			AddImageVulWhiteListOutcome addImageVulWhiteList(const Model::AddImageVulWhiteListRequest &request)const;
			void addImageVulWhiteListAsync(const Model::AddImageVulWhiteListRequest& request, const AddImageVulWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddImageVulWhiteListOutcomeCallable addImageVulWhiteListCallable(const Model::AddImageVulWhiteListRequest& request) const;
			AddInstallCodeOutcome addInstallCode(const Model::AddInstallCodeRequest &request)const;
			void addInstallCodeAsync(const Model::AddInstallCodeRequest& request, const AddInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddInstallCodeOutcomeCallable addInstallCodeCallable(const Model::AddInstallCodeRequest& request) const;
			AddPrivateRegistryOutcome addPrivateRegistry(const Model::AddPrivateRegistryRequest &request)const;
			void addPrivateRegistryAsync(const Model::AddPrivateRegistryRequest& request, const AddPrivateRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPrivateRegistryOutcomeCallable addPrivateRegistryCallable(const Model::AddPrivateRegistryRequest& request) const;
			AddTagWithUuidOutcome addTagWithUuid(const Model::AddTagWithUuidRequest &request)const;
			void addTagWithUuidAsync(const Model::AddTagWithUuidRequest& request, const AddTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagWithUuidOutcomeCallable addTagWithUuidCallable(const Model::AddTagWithUuidRequest& request) const;
			AddUninstallClientsByUuidsOutcome addUninstallClientsByUuids(const Model::AddUninstallClientsByUuidsRequest &request)const;
			void addUninstallClientsByUuidsAsync(const Model::AddUninstallClientsByUuidsRequest& request, const AddUninstallClientsByUuidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUninstallClientsByUuidsOutcomeCallable addUninstallClientsByUuidsCallable(const Model::AddUninstallClientsByUuidsRequest& request) const;
			AddVpcHoneyPotOutcome addVpcHoneyPot(const Model::AddVpcHoneyPotRequest &request)const;
			void addVpcHoneyPotAsync(const Model::AddVpcHoneyPotRequest& request, const AddVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVpcHoneyPotOutcomeCallable addVpcHoneyPotCallable(const Model::AddVpcHoneyPotRequest& request) const;
			AdvanceSecurityEventOperationsOutcome advanceSecurityEventOperations(const Model::AdvanceSecurityEventOperationsRequest &request)const;
			void advanceSecurityEventOperationsAsync(const Model::AdvanceSecurityEventOperationsRequest& request, const AdvanceSecurityEventOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AdvanceSecurityEventOperationsOutcomeCallable advanceSecurityEventOperationsCallable(const Model::AdvanceSecurityEventOperationsRequest& request) const;
			BatchOperateCommonOverallConfigOutcome batchOperateCommonOverallConfig(const Model::BatchOperateCommonOverallConfigRequest &request)const;
			void batchOperateCommonOverallConfigAsync(const Model::BatchOperateCommonOverallConfigRequest& request, const BatchOperateCommonOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchOperateCommonOverallConfigOutcomeCallable batchOperateCommonOverallConfigCallable(const Model::BatchOperateCommonOverallConfigRequest& request) const;
			BindAuthToMachineOutcome bindAuthToMachine(const Model::BindAuthToMachineRequest &request)const;
			void bindAuthToMachineAsync(const Model::BindAuthToMachineRequest& request, const BindAuthToMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAuthToMachineOutcomeCallable bindAuthToMachineCallable(const Model::BindAuthToMachineRequest& request) const;
			CancelOnceTaskOutcome cancelOnceTask(const Model::CancelOnceTaskRequest &request)const;
			void cancelOnceTaskAsync(const Model::CancelOnceTaskRequest& request, const CancelOnceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOnceTaskOutcomeCallable cancelOnceTaskCallable(const Model::CancelOnceTaskRequest& request) const;
			ChangeAssetRefreshTaskConfigOutcome changeAssetRefreshTaskConfig(const Model::ChangeAssetRefreshTaskConfigRequest &request)const;
			void changeAssetRefreshTaskConfigAsync(const Model::ChangeAssetRefreshTaskConfigRequest& request, const ChangeAssetRefreshTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeAssetRefreshTaskConfigOutcomeCallable changeAssetRefreshTaskConfigCallable(const Model::ChangeAssetRefreshTaskConfigRequest& request) const;
			ChangeCheckConfigOutcome changeCheckConfig(const Model::ChangeCheckConfigRequest &request)const;
			void changeCheckConfigAsync(const Model::ChangeCheckConfigRequest& request, const ChangeCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeCheckConfigOutcomeCallable changeCheckConfigCallable(const Model::ChangeCheckConfigRequest& request) const;
			ChangeCheckCustomConfigOutcome changeCheckCustomConfig(const Model::ChangeCheckCustomConfigRequest &request)const;
			void changeCheckCustomConfigAsync(const Model::ChangeCheckCustomConfigRequest& request, const ChangeCheckCustomConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeCheckCustomConfigOutcomeCallable changeCheckCustomConfigCallable(const Model::ChangeCheckCustomConfigRequest& request) const;
			CheckQuaraFileIdOutcome checkQuaraFileId(const Model::CheckQuaraFileIdRequest &request)const;
			void checkQuaraFileIdAsync(const Model::CheckQuaraFileIdRequest& request, const CheckQuaraFileIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckQuaraFileIdOutcomeCallable checkQuaraFileIdCallable(const Model::CheckQuaraFileIdRequest& request) const;
			CheckSecurityEventIdOutcome checkSecurityEventId(const Model::CheckSecurityEventIdRequest &request)const;
			void checkSecurityEventIdAsync(const Model::CheckSecurityEventIdRequest& request, const CheckSecurityEventIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSecurityEventIdOutcomeCallable checkSecurityEventIdCallable(const Model::CheckSecurityEventIdRequest& request) const;
			CheckUserHasEcsOutcome checkUserHasEcs(const Model::CheckUserHasEcsRequest &request)const;
			void checkUserHasEcsAsync(const Model::CheckUserHasEcsRequest& request, const CheckUserHasEcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckUserHasEcsOutcomeCallable checkUserHasEcsCallable(const Model::CheckUserHasEcsRequest& request) const;
			ConfirmVirusEventsOutcome confirmVirusEvents(const Model::ConfirmVirusEventsRequest &request)const;
			void confirmVirusEventsAsync(const Model::ConfirmVirusEventsRequest& request, const ConfirmVirusEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmVirusEventsOutcomeCallable confirmVirusEventsCallable(const Model::ConfirmVirusEventsRequest& request) const;
			CreateAgentlessScanTaskOutcome createAgentlessScanTask(const Model::CreateAgentlessScanTaskRequest &request)const;
			void createAgentlessScanTaskAsync(const Model::CreateAgentlessScanTaskRequest& request, const CreateAgentlessScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAgentlessScanTaskOutcomeCallable createAgentlessScanTaskCallable(const Model::CreateAgentlessScanTaskRequest& request) const;
			CreateAntiBruteForceRuleOutcome createAntiBruteForceRule(const Model::CreateAntiBruteForceRuleRequest &request)const;
			void createAntiBruteForceRuleAsync(const Model::CreateAntiBruteForceRuleRequest& request, const CreateAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAntiBruteForceRuleOutcomeCallable createAntiBruteForceRuleCallable(const Model::CreateAntiBruteForceRuleRequest& request) const;
			CreateAssetSelectionConfigOutcome createAssetSelectionConfig(const Model::CreateAssetSelectionConfigRequest &request)const;
			void createAssetSelectionConfigAsync(const Model::CreateAssetSelectionConfigRequest& request, const CreateAssetSelectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAssetSelectionConfigOutcomeCallable createAssetSelectionConfigCallable(const Model::CreateAssetSelectionConfigRequest& request) const;
			CreateBackupPolicyOutcome createBackupPolicy(const Model::CreateBackupPolicyRequest &request)const;
			void createBackupPolicyAsync(const Model::CreateBackupPolicyRequest& request, const CreateBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupPolicyOutcomeCallable createBackupPolicyCallable(const Model::CreateBackupPolicyRequest& request) const;
			CreateContainerScanTaskOutcome createContainerScanTask(const Model::CreateContainerScanTaskRequest &request)const;
			void createContainerScanTaskAsync(const Model::CreateContainerScanTaskRequest& request, const CreateContainerScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateContainerScanTaskOutcomeCallable createContainerScanTaskCallable(const Model::CreateContainerScanTaskRequest& request) const;
			CreateCustomBlockRecordOutcome createCustomBlockRecord(const Model::CreateCustomBlockRecordRequest &request)const;
			void createCustomBlockRecordAsync(const Model::CreateCustomBlockRecordRequest& request, const CreateCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomBlockRecordOutcomeCallable createCustomBlockRecordCallable(const Model::CreateCustomBlockRecordRequest& request) const;
			CreateCycleTaskOutcome createCycleTask(const Model::CreateCycleTaskRequest &request)const;
			void createCycleTaskAsync(const Model::CreateCycleTaskRequest& request, const CreateCycleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCycleTaskOutcomeCallable createCycleTaskCallable(const Model::CreateCycleTaskRequest& request) const;
			CreateFileDetectOutcome createFileDetect(const Model::CreateFileDetectRequest &request)const;
			void createFileDetectAsync(const Model::CreateFileDetectRequest& request, const CreateFileDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileDetectOutcomeCallable createFileDetectCallable(const Model::CreateFileDetectRequest& request) const;
			CreateFileDetectUploadUrlOutcome createFileDetectUploadUrl(const Model::CreateFileDetectUploadUrlRequest &request)const;
			void createFileDetectUploadUrlAsync(const Model::CreateFileDetectUploadUrlRequest& request, const CreateFileDetectUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileDetectUploadUrlOutcomeCallable createFileDetectUploadUrlCallable(const Model::CreateFileDetectUploadUrlRequest& request) const;
			CreateHoneypotOutcome createHoneypot(const Model::CreateHoneypotRequest &request)const;
			void createHoneypotAsync(const Model::CreateHoneypotRequest& request, const CreateHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHoneypotOutcomeCallable createHoneypotCallable(const Model::CreateHoneypotRequest& request) const;
			CreateHoneypotNodeOutcome createHoneypotNode(const Model::CreateHoneypotNodeRequest &request)const;
			void createHoneypotNodeAsync(const Model::CreateHoneypotNodeRequest& request, const CreateHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHoneypotNodeOutcomeCallable createHoneypotNodeCallable(const Model::CreateHoneypotNodeRequest& request) const;
			CreateHoneypotPresetOutcome createHoneypotPreset(const Model::CreateHoneypotPresetRequest &request)const;
			void createHoneypotPresetAsync(const Model::CreateHoneypotPresetRequest& request, const CreateHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHoneypotPresetOutcomeCallable createHoneypotPresetCallable(const Model::CreateHoneypotPresetRequest& request) const;
			CreateHoneypotProbeOutcome createHoneypotProbe(const Model::CreateHoneypotProbeRequest &request)const;
			void createHoneypotProbeAsync(const Model::CreateHoneypotProbeRequest& request, const CreateHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHoneypotProbeOutcomeCallable createHoneypotProbeCallable(const Model::CreateHoneypotProbeRequest& request) const;
			CreateInterceptionRuleOutcome createInterceptionRule(const Model::CreateInterceptionRuleRequest &request)const;
			void createInterceptionRuleAsync(const Model::CreateInterceptionRuleRequest& request, const CreateInterceptionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInterceptionRuleOutcomeCallable createInterceptionRuleCallable(const Model::CreateInterceptionRuleRequest& request) const;
			CreateInterceptionTargetOutcome createInterceptionTarget(const Model::CreateInterceptionTargetRequest &request)const;
			void createInterceptionTargetAsync(const Model::CreateInterceptionTargetRequest& request, const CreateInterceptionTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInterceptionTargetOutcomeCallable createInterceptionTargetCallable(const Model::CreateInterceptionTargetRequest& request) const;
			CreateJenkinsImageRegistryOutcome createJenkinsImageRegistry(const Model::CreateJenkinsImageRegistryRequest &request)const;
			void createJenkinsImageRegistryAsync(const Model::CreateJenkinsImageRegistryRequest& request, const CreateJenkinsImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJenkinsImageRegistryOutcomeCallable createJenkinsImageRegistryCallable(const Model::CreateJenkinsImageRegistryRequest& request) const;
			CreateOrUpdateAssetGroupOutcome createOrUpdateAssetGroup(const Model::CreateOrUpdateAssetGroupRequest &request)const;
			void createOrUpdateAssetGroupAsync(const Model::CreateOrUpdateAssetGroupRequest& request, const CreateOrUpdateAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateAssetGroupOutcomeCallable createOrUpdateAssetGroupCallable(const Model::CreateOrUpdateAssetGroupRequest& request) const;
			CreateOrUpdateDingTalkOutcome createOrUpdateDingTalk(const Model::CreateOrUpdateDingTalkRequest &request)const;
			void createOrUpdateDingTalkAsync(const Model::CreateOrUpdateDingTalkRequest& request, const CreateOrUpdateDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateDingTalkOutcomeCallable createOrUpdateDingTalkCallable(const Model::CreateOrUpdateDingTalkRequest& request) const;
			CreateRestoreJobOutcome createRestoreJob(const Model::CreateRestoreJobRequest &request)const;
			void createRestoreJobAsync(const Model::CreateRestoreJobRequest& request, const CreateRestoreJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRestoreJobOutcomeCallable createRestoreJobCallable(const Model::CreateRestoreJobRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			CreateServiceTrailOutcome createServiceTrail(const Model::CreateServiceTrailRequest &request)const;
			void createServiceTrailAsync(const Model::CreateServiceTrailRequest& request, const CreateServiceTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceTrailOutcomeCallable createServiceTrailCallable(const Model::CreateServiceTrailRequest& request) const;
			CreateSimilarSecurityEventsQueryTaskOutcome createSimilarSecurityEventsQueryTask(const Model::CreateSimilarSecurityEventsQueryTaskRequest &request)const;
			void createSimilarSecurityEventsQueryTaskAsync(const Model::CreateSimilarSecurityEventsQueryTaskRequest& request, const CreateSimilarSecurityEventsQueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSimilarSecurityEventsQueryTaskOutcomeCallable createSimilarSecurityEventsQueryTaskCallable(const Model::CreateSimilarSecurityEventsQueryTaskRequest& request) const;
			CreateSuspEventNoteOutcome createSuspEventNote(const Model::CreateSuspEventNoteRequest &request)const;
			void createSuspEventNoteAsync(const Model::CreateSuspEventNoteRequest& request, const CreateSuspEventNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSuspEventNoteOutcomeCallable createSuspEventNoteCallable(const Model::CreateSuspEventNoteRequest& request) const;
			CreateUniBackupPolicyOutcome createUniBackupPolicy(const Model::CreateUniBackupPolicyRequest &request)const;
			void createUniBackupPolicyAsync(const Model::CreateUniBackupPolicyRequest& request, const CreateUniBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUniBackupPolicyOutcomeCallable createUniBackupPolicyCallable(const Model::CreateUniBackupPolicyRequest& request) const;
			CreateUniRestorePlanOutcome createUniRestorePlan(const Model::CreateUniRestorePlanRequest &request)const;
			void createUniRestorePlanAsync(const Model::CreateUniRestorePlanRequest& request, const CreateUniRestorePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUniRestorePlanOutcomeCallable createUniRestorePlanCallable(const Model::CreateUniRestorePlanRequest& request) const;
			CreateVulAutoRepairConfigOutcome createVulAutoRepairConfig(const Model::CreateVulAutoRepairConfigRequest &request)const;
			void createVulAutoRepairConfigAsync(const Model::CreateVulAutoRepairConfigRequest& request, const CreateVulAutoRepairConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVulAutoRepairConfigOutcomeCallable createVulAutoRepairConfigCallable(const Model::CreateVulAutoRepairConfigRequest& request) const;
			DeleteAntiBruteForceRuleOutcome deleteAntiBruteForceRule(const Model::DeleteAntiBruteForceRuleRequest &request)const;
			void deleteAntiBruteForceRuleAsync(const Model::DeleteAntiBruteForceRuleRequest& request, const DeleteAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAntiBruteForceRuleOutcomeCallable deleteAntiBruteForceRuleCallable(const Model::DeleteAntiBruteForceRuleRequest& request) const;
			DeleteBackupPolicyOutcome deleteBackupPolicy(const Model::DeleteBackupPolicyRequest &request)const;
			void deleteBackupPolicyAsync(const Model::DeleteBackupPolicyRequest& request, const DeleteBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupPolicyOutcomeCallable deleteBackupPolicyCallable(const Model::DeleteBackupPolicyRequest& request) const;
			DeleteBackupPolicyMachineOutcome deleteBackupPolicyMachine(const Model::DeleteBackupPolicyMachineRequest &request)const;
			void deleteBackupPolicyMachineAsync(const Model::DeleteBackupPolicyMachineRequest& request, const DeleteBackupPolicyMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupPolicyMachineOutcomeCallable deleteBackupPolicyMachineCallable(const Model::DeleteBackupPolicyMachineRequest& request) const;
			DeleteBinarySecurityPolicyOutcome deleteBinarySecurityPolicy(const Model::DeleteBinarySecurityPolicyRequest &request)const;
			void deleteBinarySecurityPolicyAsync(const Model::DeleteBinarySecurityPolicyRequest& request, const DeleteBinarySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBinarySecurityPolicyOutcomeCallable deleteBinarySecurityPolicyCallable(const Model::DeleteBinarySecurityPolicyRequest& request) const;
			DeleteClientUserDefineRuleOutcome deleteClientUserDefineRule(const Model::DeleteClientUserDefineRuleRequest &request)const;
			void deleteClientUserDefineRuleAsync(const Model::DeleteClientUserDefineRuleRequest& request, const DeleteClientUserDefineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClientUserDefineRuleOutcomeCallable deleteClientUserDefineRuleCallable(const Model::DeleteClientUserDefineRuleRequest& request) const;
			DeleteCustomBlockRecordOutcome deleteCustomBlockRecord(const Model::DeleteCustomBlockRecordRequest &request)const;
			void deleteCustomBlockRecordAsync(const Model::DeleteCustomBlockRecordRequest& request, const DeleteCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomBlockRecordOutcomeCallable deleteCustomBlockRecordCallable(const Model::DeleteCustomBlockRecordRequest& request) const;
			DeleteCycleTaskOutcome deleteCycleTask(const Model::DeleteCycleTaskRequest &request)const;
			void deleteCycleTaskAsync(const Model::DeleteCycleTaskRequest& request, const DeleteCycleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCycleTaskOutcomeCallable deleteCycleTaskCallable(const Model::DeleteCycleTaskRequest& request) const;
			DeleteGroupOutcome deleteGroup(const Model::DeleteGroupRequest &request)const;
			void deleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupOutcomeCallable deleteGroupCallable(const Model::DeleteGroupRequest& request) const;
			DeleteHoneypotOutcome deleteHoneypot(const Model::DeleteHoneypotRequest &request)const;
			void deleteHoneypotAsync(const Model::DeleteHoneypotRequest& request, const DeleteHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHoneypotOutcomeCallable deleteHoneypotCallable(const Model::DeleteHoneypotRequest& request) const;
			DeleteHoneypotNodeOutcome deleteHoneypotNode(const Model::DeleteHoneypotNodeRequest &request)const;
			void deleteHoneypotNodeAsync(const Model::DeleteHoneypotNodeRequest& request, const DeleteHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHoneypotNodeOutcomeCallable deleteHoneypotNodeCallable(const Model::DeleteHoneypotNodeRequest& request) const;
			DeleteHoneypotPresetOutcome deleteHoneypotPreset(const Model::DeleteHoneypotPresetRequest &request)const;
			void deleteHoneypotPresetAsync(const Model::DeleteHoneypotPresetRequest& request, const DeleteHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHoneypotPresetOutcomeCallable deleteHoneypotPresetCallable(const Model::DeleteHoneypotPresetRequest& request) const;
			DeleteHoneypotProbeOutcome deleteHoneypotProbe(const Model::DeleteHoneypotProbeRequest &request)const;
			void deleteHoneypotProbeAsync(const Model::DeleteHoneypotProbeRequest& request, const DeleteHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHoneypotProbeOutcomeCallable deleteHoneypotProbeCallable(const Model::DeleteHoneypotProbeRequest& request) const;
			DeleteInstallCodeOutcome deleteInstallCode(const Model::DeleteInstallCodeRequest &request)const;
			void deleteInstallCodeAsync(const Model::DeleteInstallCodeRequest& request, const DeleteInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstallCodeOutcomeCallable deleteInstallCodeCallable(const Model::DeleteInstallCodeRequest& request) const;
			DeleteInterceptionRuleOutcome deleteInterceptionRule(const Model::DeleteInterceptionRuleRequest &request)const;
			void deleteInterceptionRuleAsync(const Model::DeleteInterceptionRuleRequest& request, const DeleteInterceptionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInterceptionRuleOutcomeCallable deleteInterceptionRuleCallable(const Model::DeleteInterceptionRuleRequest& request) const;
			DeleteInterceptionTargetOutcome deleteInterceptionTarget(const Model::DeleteInterceptionTargetRequest &request)const;
			void deleteInterceptionTargetAsync(const Model::DeleteInterceptionTargetRequest& request, const DeleteInterceptionTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInterceptionTargetOutcomeCallable deleteInterceptionTargetCallable(const Model::DeleteInterceptionTargetRequest& request) const;
			DeleteLoginBaseConfigOutcome deleteLoginBaseConfig(const Model::DeleteLoginBaseConfigRequest &request)const;
			void deleteLoginBaseConfigAsync(const Model::DeleteLoginBaseConfigRequest& request, const DeleteLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoginBaseConfigOutcomeCallable deleteLoginBaseConfigCallable(const Model::DeleteLoginBaseConfigRequest& request) const;
			DeletePrivateRegistryOutcome deletePrivateRegistry(const Model::DeletePrivateRegistryRequest &request)const;
			void deletePrivateRegistryAsync(const Model::DeletePrivateRegistryRequest& request, const DeletePrivateRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrivateRegistryOutcomeCallable deletePrivateRegistryCallable(const Model::DeletePrivateRegistryRequest& request) const;
			DeleteSecurityEventMarkMissListOutcome deleteSecurityEventMarkMissList(const Model::DeleteSecurityEventMarkMissListRequest &request)const;
			void deleteSecurityEventMarkMissListAsync(const Model::DeleteSecurityEventMarkMissListRequest& request, const DeleteSecurityEventMarkMissListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecurityEventMarkMissListOutcomeCallable deleteSecurityEventMarkMissListCallable(const Model::DeleteSecurityEventMarkMissListRequest& request) const;
			DeleteServiceTrailOutcome deleteServiceTrail(const Model::DeleteServiceTrailRequest &request)const;
			void deleteServiceTrailAsync(const Model::DeleteServiceTrailRequest& request, const DeleteServiceTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceTrailOutcomeCallable deleteServiceTrailCallable(const Model::DeleteServiceTrailRequest& request) const;
			DeleteStrategyOutcome deleteStrategy(const Model::DeleteStrategyRequest &request)const;
			void deleteStrategyAsync(const Model::DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStrategyOutcomeCallable deleteStrategyCallable(const Model::DeleteStrategyRequest& request) const;
			DeleteSuspEventNodeOutcome deleteSuspEventNode(const Model::DeleteSuspEventNodeRequest &request)const;
			void deleteSuspEventNodeAsync(const Model::DeleteSuspEventNodeRequest& request, const DeleteSuspEventNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSuspEventNodeOutcomeCallable deleteSuspEventNodeCallable(const Model::DeleteSuspEventNodeRequest& request) const;
			DeleteTagWithUuidOutcome deleteTagWithUuid(const Model::DeleteTagWithUuidRequest &request)const;
			void deleteTagWithUuidAsync(const Model::DeleteTagWithUuidRequest& request, const DeleteTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagWithUuidOutcomeCallable deleteTagWithUuidCallable(const Model::DeleteTagWithUuidRequest& request) const;
			DeleteUniBackupPolicyOutcome deleteUniBackupPolicy(const Model::DeleteUniBackupPolicyRequest &request)const;
			void deleteUniBackupPolicyAsync(const Model::DeleteUniBackupPolicyRequest& request, const DeleteUniBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUniBackupPolicyOutcomeCallable deleteUniBackupPolicyCallable(const Model::DeleteUniBackupPolicyRequest& request) const;
			DeleteVpcHoneyPotOutcome deleteVpcHoneyPot(const Model::DeleteVpcHoneyPotRequest &request)const;
			void deleteVpcHoneyPotAsync(const Model::DeleteVpcHoneyPotRequest& request, const DeleteVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcHoneyPotOutcomeCallable deleteVpcHoneyPotCallable(const Model::DeleteVpcHoneyPotRequest& request) const;
			DeleteVulWhitelistOutcome deleteVulWhitelist(const Model::DeleteVulWhitelistRequest &request)const;
			void deleteVulWhitelistAsync(const Model::DeleteVulWhitelistRequest& request, const DeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVulWhitelistOutcomeCallable deleteVulWhitelistCallable(const Model::DeleteVulWhitelistRequest& request) const;
			DescribeAccessKeyLeakDetailOutcome describeAccessKeyLeakDetail(const Model::DescribeAccessKeyLeakDetailRequest &request)const;
			void describeAccessKeyLeakDetailAsync(const Model::DescribeAccessKeyLeakDetailRequest& request, const DescribeAccessKeyLeakDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessKeyLeakDetailOutcomeCallable describeAccessKeyLeakDetailCallable(const Model::DescribeAccessKeyLeakDetailRequest& request) const;
			DescribeAccesskeyLeakListOutcome describeAccesskeyLeakList(const Model::DescribeAccesskeyLeakListRequest &request)const;
			void describeAccesskeyLeakListAsync(const Model::DescribeAccesskeyLeakListRequest& request, const DescribeAccesskeyLeakListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccesskeyLeakListOutcomeCallable describeAccesskeyLeakListCallable(const Model::DescribeAccesskeyLeakListRequest& request) const;
			DescribeAffectedAssetsOutcome describeAffectedAssets(const Model::DescribeAffectedAssetsRequest &request)const;
			void describeAffectedAssetsAsync(const Model::DescribeAffectedAssetsRequest& request, const DescribeAffectedAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAffectedAssetsOutcomeCallable describeAffectedAssetsCallable(const Model::DescribeAffectedAssetsRequest& request) const;
			DescribeAffectedMaliciousFileImagesOutcome describeAffectedMaliciousFileImages(const Model::DescribeAffectedMaliciousFileImagesRequest &request)const;
			void describeAffectedMaliciousFileImagesAsync(const Model::DescribeAffectedMaliciousFileImagesRequest& request, const DescribeAffectedMaliciousFileImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAffectedMaliciousFileImagesOutcomeCallable describeAffectedMaliciousFileImagesCallable(const Model::DescribeAffectedMaliciousFileImagesRequest& request) const;
			DescribeAgentInstallStatusOutcome describeAgentInstallStatus(const Model::DescribeAgentInstallStatusRequest &request)const;
			void describeAgentInstallStatusAsync(const Model::DescribeAgentInstallStatusRequest& request, const DescribeAgentInstallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAgentInstallStatusOutcomeCallable describeAgentInstallStatusCallable(const Model::DescribeAgentInstallStatusRequest& request) const;
			DescribeAlarmEventDetailOutcome describeAlarmEventDetail(const Model::DescribeAlarmEventDetailRequest &request)const;
			void describeAlarmEventDetailAsync(const Model::DescribeAlarmEventDetailRequest& request, const DescribeAlarmEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventDetailOutcomeCallable describeAlarmEventDetailCallable(const Model::DescribeAlarmEventDetailRequest& request) const;
			DescribeAlarmEventStackInfoOutcome describeAlarmEventStackInfo(const Model::DescribeAlarmEventStackInfoRequest &request)const;
			void describeAlarmEventStackInfoAsync(const Model::DescribeAlarmEventStackInfoRequest& request, const DescribeAlarmEventStackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventStackInfoOutcomeCallable describeAlarmEventStackInfoCallable(const Model::DescribeAlarmEventStackInfoRequest& request) const;
			DescribeAllEntityOutcome describeAllEntity(const Model::DescribeAllEntityRequest &request)const;
			void describeAllEntityAsync(const Model::DescribeAllEntityRequest& request, const DescribeAllEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllEntityOutcomeCallable describeAllEntityCallable(const Model::DescribeAllEntityRequest& request) const;
			DescribeAllGroupsOutcome describeAllGroups(const Model::DescribeAllGroupsRequest &request)const;
			void describeAllGroupsAsync(const Model::DescribeAllGroupsRequest& request, const DescribeAllGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllGroupsOutcomeCallable describeAllGroupsCallable(const Model::DescribeAllGroupsRequest& request) const;
			DescribeAllImageBaselineOutcome describeAllImageBaseline(const Model::DescribeAllImageBaselineRequest &request)const;
			void describeAllImageBaselineAsync(const Model::DescribeAllImageBaselineRequest& request, const DescribeAllImageBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllImageBaselineOutcomeCallable describeAllImageBaselineCallable(const Model::DescribeAllImageBaselineRequest& request) const;
			DescribeAntiBruteForceRulesOutcome describeAntiBruteForceRules(const Model::DescribeAntiBruteForceRulesRequest &request)const;
			void describeAntiBruteForceRulesAsync(const Model::DescribeAntiBruteForceRulesRequest& request, const DescribeAntiBruteForceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAntiBruteForceRulesOutcomeCallable describeAntiBruteForceRulesCallable(const Model::DescribeAntiBruteForceRulesRequest& request) const;
			DescribeAppVulScanCycleOutcome describeAppVulScanCycle(const Model::DescribeAppVulScanCycleRequest &request)const;
			void describeAppVulScanCycleAsync(const Model::DescribeAppVulScanCycleRequest& request, const DescribeAppVulScanCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppVulScanCycleOutcomeCallable describeAppVulScanCycleCallable(const Model::DescribeAppVulScanCycleRequest& request) const;
			DescribeAssetDetailByUuidOutcome describeAssetDetailByUuid(const Model::DescribeAssetDetailByUuidRequest &request)const;
			void describeAssetDetailByUuidAsync(const Model::DescribeAssetDetailByUuidRequest& request, const DescribeAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetDetailByUuidOutcomeCallable describeAssetDetailByUuidCallable(const Model::DescribeAssetDetailByUuidRequest& request) const;
			DescribeAssetDetailByUuidsOutcome describeAssetDetailByUuids(const Model::DescribeAssetDetailByUuidsRequest &request)const;
			void describeAssetDetailByUuidsAsync(const Model::DescribeAssetDetailByUuidsRequest& request, const DescribeAssetDetailByUuidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetDetailByUuidsOutcomeCallable describeAssetDetailByUuidsCallable(const Model::DescribeAssetDetailByUuidsRequest& request) const;
			DescribeAssetSummaryOutcome describeAssetSummary(const Model::DescribeAssetSummaryRequest &request)const;
			void describeAssetSummaryAsync(const Model::DescribeAssetSummaryRequest& request, const DescribeAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetSummaryOutcomeCallable describeAssetSummaryCallable(const Model::DescribeAssetSummaryRequest& request) const;
			DescribeAssetsSecurityEventSummaryOutcome describeAssetsSecurityEventSummary(const Model::DescribeAssetsSecurityEventSummaryRequest &request)const;
			void describeAssetsSecurityEventSummaryAsync(const Model::DescribeAssetsSecurityEventSummaryRequest& request, const DescribeAssetsSecurityEventSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetsSecurityEventSummaryOutcomeCallable describeAssetsSecurityEventSummaryCallable(const Model::DescribeAssetsSecurityEventSummaryRequest& request) const;
			DescribeAttackAnalysisDataOutcome describeAttackAnalysisData(const Model::DescribeAttackAnalysisDataRequest &request)const;
			void describeAttackAnalysisDataAsync(const Model::DescribeAttackAnalysisDataRequest& request, const DescribeAttackAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAttackAnalysisDataOutcomeCallable describeAttackAnalysisDataCallable(const Model::DescribeAttackAnalysisDataRequest& request) const;
			DescribeAutoDelConfigOutcome describeAutoDelConfig(const Model::DescribeAutoDelConfigRequest &request)const;
			void describeAutoDelConfigAsync(const Model::DescribeAutoDelConfigRequest& request, const DescribeAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoDelConfigOutcomeCallable describeAutoDelConfigCallable(const Model::DescribeAutoDelConfigRequest& request) const;
			DescribeBackUpExportInfoOutcome describeBackUpExportInfo(const Model::DescribeBackUpExportInfoRequest &request)const;
			void describeBackUpExportInfoAsync(const Model::DescribeBackUpExportInfoRequest& request, const DescribeBackUpExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackUpExportInfoOutcomeCallable describeBackUpExportInfoCallable(const Model::DescribeBackUpExportInfoRequest& request) const;
			DescribeBackupClientsOutcome describeBackupClients(const Model::DescribeBackupClientsRequest &request)const;
			void describeBackupClientsAsync(const Model::DescribeBackupClientsRequest& request, const DescribeBackupClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupClientsOutcomeCallable describeBackupClientsCallable(const Model::DescribeBackupClientsRequest& request) const;
			DescribeBackupFilesOutcome describeBackupFiles(const Model::DescribeBackupFilesRequest &request)const;
			void describeBackupFilesAsync(const Model::DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupFilesOutcomeCallable describeBackupFilesCallable(const Model::DescribeBackupFilesRequest& request) const;
			DescribeBackupMachineStatusOutcome describeBackupMachineStatus(const Model::DescribeBackupMachineStatusRequest &request)const;
			void describeBackupMachineStatusAsync(const Model::DescribeBackupMachineStatusRequest& request, const DescribeBackupMachineStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupMachineStatusOutcomeCallable describeBackupMachineStatusCallable(const Model::DescribeBackupMachineStatusRequest& request) const;
			DescribeBackupPoliciesOutcome describeBackupPolicies(const Model::DescribeBackupPoliciesRequest &request)const;
			void describeBackupPoliciesAsync(const Model::DescribeBackupPoliciesRequest& request, const DescribeBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPoliciesOutcomeCallable describeBackupPoliciesCallable(const Model::DescribeBackupPoliciesRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupRestoreCountOutcome describeBackupRestoreCount(const Model::DescribeBackupRestoreCountRequest &request)const;
			void describeBackupRestoreCountAsync(const Model::DescribeBackupRestoreCountRequest& request, const DescribeBackupRestoreCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupRestoreCountOutcomeCallable describeBackupRestoreCountCallable(const Model::DescribeBackupRestoreCountRequest& request) const;
			DescribeBruteForceRecordsOutcome describeBruteForceRecords(const Model::DescribeBruteForceRecordsRequest &request)const;
			void describeBruteForceRecordsAsync(const Model::DescribeBruteForceRecordsRequest& request, const DescribeBruteForceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBruteForceRecordsOutcomeCallable describeBruteForceRecordsCallable(const Model::DescribeBruteForceRecordsRequest& request) const;
			DescribeBruteForceSummaryOutcome describeBruteForceSummary(const Model::DescribeBruteForceSummaryRequest &request)const;
			void describeBruteForceSummaryAsync(const Model::DescribeBruteForceSummaryRequest& request, const DescribeBruteForceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBruteForceSummaryOutcomeCallable describeBruteForceSummaryCallable(const Model::DescribeBruteForceSummaryRequest& request) const;
			DescribeCheckEcsWarningsOutcome describeCheckEcsWarnings(const Model::DescribeCheckEcsWarningsRequest &request)const;
			void describeCheckEcsWarningsAsync(const Model::DescribeCheckEcsWarningsRequest& request, const DescribeCheckEcsWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckEcsWarningsOutcomeCallable describeCheckEcsWarningsCallable(const Model::DescribeCheckEcsWarningsRequest& request) const;
			DescribeCheckFixDetailsOutcome describeCheckFixDetails(const Model::DescribeCheckFixDetailsRequest &request)const;
			void describeCheckFixDetailsAsync(const Model::DescribeCheckFixDetailsRequest& request, const DescribeCheckFixDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckFixDetailsOutcomeCallable describeCheckFixDetailsCallable(const Model::DescribeCheckFixDetailsRequest& request) const;
			DescribeCheckWarningDetailOutcome describeCheckWarningDetail(const Model::DescribeCheckWarningDetailRequest &request)const;
			void describeCheckWarningDetailAsync(const Model::DescribeCheckWarningDetailRequest& request, const DescribeCheckWarningDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningDetailOutcomeCallable describeCheckWarningDetailCallable(const Model::DescribeCheckWarningDetailRequest& request) const;
			DescribeCheckWarningMachinesOutcome describeCheckWarningMachines(const Model::DescribeCheckWarningMachinesRequest &request)const;
			void describeCheckWarningMachinesAsync(const Model::DescribeCheckWarningMachinesRequest& request, const DescribeCheckWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningMachinesOutcomeCallable describeCheckWarningMachinesCallable(const Model::DescribeCheckWarningMachinesRequest& request) const;
			DescribeCheckWarningSummaryOutcome describeCheckWarningSummary(const Model::DescribeCheckWarningSummaryRequest &request)const;
			void describeCheckWarningSummaryAsync(const Model::DescribeCheckWarningSummaryRequest& request, const DescribeCheckWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningSummaryOutcomeCallable describeCheckWarningSummaryCallable(const Model::DescribeCheckWarningSummaryRequest& request) const;
			DescribeCheckWarningsOutcome describeCheckWarnings(const Model::DescribeCheckWarningsRequest &request)const;
			void describeCheckWarningsAsync(const Model::DescribeCheckWarningsRequest& request, const DescribeCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningsOutcomeCallable describeCheckWarningsCallable(const Model::DescribeCheckWarningsRequest& request) const;
			DescribeClientConfSetupOutcome describeClientConfSetup(const Model::DescribeClientConfSetupRequest &request)const;
			void describeClientConfSetupAsync(const Model::DescribeClientConfSetupRequest& request, const DescribeClientConfSetupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClientConfSetupOutcomeCallable describeClientConfSetupCallable(const Model::DescribeClientConfSetupRequest& request) const;
			DescribeClientConfStrategyOutcome describeClientConfStrategy(const Model::DescribeClientConfStrategyRequest &request)const;
			void describeClientConfStrategyAsync(const Model::DescribeClientConfStrategyRequest& request, const DescribeClientConfStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClientConfStrategyOutcomeCallable describeClientConfStrategyCallable(const Model::DescribeClientConfStrategyRequest& request) const;
			DescribeCloudCenterInstancesOutcome describeCloudCenterInstances(const Model::DescribeCloudCenterInstancesRequest &request)const;
			void describeCloudCenterInstancesAsync(const Model::DescribeCloudCenterInstancesRequest& request, const DescribeCloudCenterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudCenterInstancesOutcomeCallable describeCloudCenterInstancesCallable(const Model::DescribeCloudCenterInstancesRequest& request) const;
			DescribeCloudProductFieldStatisticsOutcome describeCloudProductFieldStatistics(const Model::DescribeCloudProductFieldStatisticsRequest &request)const;
			void describeCloudProductFieldStatisticsAsync(const Model::DescribeCloudProductFieldStatisticsRequest& request, const DescribeCloudProductFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudProductFieldStatisticsOutcomeCallable describeCloudProductFieldStatisticsCallable(const Model::DescribeCloudProductFieldStatisticsRequest& request) const;
			DescribeClusterBasicInfoOutcome describeClusterBasicInfo(const Model::DescribeClusterBasicInfoRequest &request)const;
			void describeClusterBasicInfoAsync(const Model::DescribeClusterBasicInfoRequest& request, const DescribeClusterBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterBasicInfoOutcomeCallable describeClusterBasicInfoCallable(const Model::DescribeClusterBasicInfoRequest& request) const;
			DescribeClusterInfoListOutcome describeClusterInfoList(const Model::DescribeClusterInfoListRequest &request)const;
			void describeClusterInfoListAsync(const Model::DescribeClusterInfoListRequest& request, const DescribeClusterInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterInfoListOutcomeCallable describeClusterInfoListCallable(const Model::DescribeClusterInfoListRequest& request) const;
			DescribeClusterNetworkOutcome describeClusterNetwork(const Model::DescribeClusterNetworkRequest &request)const;
			void describeClusterNetworkAsync(const Model::DescribeClusterNetworkRequest& request, const DescribeClusterNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterNetworkOutcomeCallable describeClusterNetworkCallable(const Model::DescribeClusterNetworkRequest& request) const;
			DescribeClusterVulStatisticsOutcome describeClusterVulStatistics(const Model::DescribeClusterVulStatisticsRequest &request)const;
			void describeClusterVulStatisticsAsync(const Model::DescribeClusterVulStatisticsRequest& request, const DescribeClusterVulStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterVulStatisticsOutcomeCallable describeClusterVulStatisticsCallable(const Model::DescribeClusterVulStatisticsRequest& request) const;
			DescribeCommonOverallConfigOutcome describeCommonOverallConfig(const Model::DescribeCommonOverallConfigRequest &request)const;
			void describeCommonOverallConfigAsync(const Model::DescribeCommonOverallConfigRequest& request, const DescribeCommonOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommonOverallConfigOutcomeCallable describeCommonOverallConfigCallable(const Model::DescribeCommonOverallConfigRequest& request) const;
			DescribeCommonOverallConfigListOutcome describeCommonOverallConfigList(const Model::DescribeCommonOverallConfigListRequest &request)const;
			void describeCommonOverallConfigListAsync(const Model::DescribeCommonOverallConfigListRequest& request, const DescribeCommonOverallConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommonOverallConfigListOutcomeCallable describeCommonOverallConfigListCallable(const Model::DescribeCommonOverallConfigListRequest& request) const;
			DescribeCommonTargetConfigOutcome describeCommonTargetConfig(const Model::DescribeCommonTargetConfigRequest &request)const;
			void describeCommonTargetConfigAsync(const Model::DescribeCommonTargetConfigRequest& request, const DescribeCommonTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommonTargetConfigOutcomeCallable describeCommonTargetConfigCallable(const Model::DescribeCommonTargetConfigRequest& request) const;
			DescribeCommonTargetResultListOutcome describeCommonTargetResultList(const Model::DescribeCommonTargetResultListRequest &request)const;
			void describeCommonTargetResultListAsync(const Model::DescribeCommonTargetResultListRequest& request, const DescribeCommonTargetResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommonTargetResultListOutcomeCallable describeCommonTargetResultListCallable(const Model::DescribeCommonTargetResultListRequest& request) const;
			DescribeConcernNecessityOutcome describeConcernNecessity(const Model::DescribeConcernNecessityRequest &request)const;
			void describeConcernNecessityAsync(const Model::DescribeConcernNecessityRequest& request, const DescribeConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConcernNecessityOutcomeCallable describeConcernNecessityCallable(const Model::DescribeConcernNecessityRequest& request) const;
			DescribeContainerCriteriaOutcome describeContainerCriteria(const Model::DescribeContainerCriteriaRequest &request)const;
			void describeContainerCriteriaAsync(const Model::DescribeContainerCriteriaRequest& request, const DescribeContainerCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContainerCriteriaOutcomeCallable describeContainerCriteriaCallable(const Model::DescribeContainerCriteriaRequest& request) const;
			DescribeContainerInstancesOutcome describeContainerInstances(const Model::DescribeContainerInstancesRequest &request)const;
			void describeContainerInstancesAsync(const Model::DescribeContainerInstancesRequest& request, const DescribeContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContainerInstancesOutcomeCallable describeContainerInstancesCallable(const Model::DescribeContainerInstancesRequest& request) const;
			DescribeContainerStatisticsOutcome describeContainerStatistics(const Model::DescribeContainerStatisticsRequest &request)const;
			void describeContainerStatisticsAsync(const Model::DescribeContainerStatisticsRequest& request, const DescribeContainerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContainerStatisticsOutcomeCallable describeContainerStatisticsCallable(const Model::DescribeContainerStatisticsRequest& request) const;
			DescribeContainerTagsOutcome describeContainerTags(const Model::DescribeContainerTagsRequest &request)const;
			void describeContainerTagsAsync(const Model::DescribeContainerTagsRequest& request, const DescribeContainerTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContainerTagsOutcomeCallable describeContainerTagsCallable(const Model::DescribeContainerTagsRequest& request) const;
			DescribeCountNotScannedImageOutcome describeCountNotScannedImage(const Model::DescribeCountNotScannedImageRequest &request)const;
			void describeCountNotScannedImageAsync(const Model::DescribeCountNotScannedImageRequest& request, const DescribeCountNotScannedImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCountNotScannedImageOutcomeCallable describeCountNotScannedImageCallable(const Model::DescribeCountNotScannedImageRequest& request) const;
			DescribeCountScannedImageOutcome describeCountScannedImage(const Model::DescribeCountScannedImageRequest &request)const;
			void describeCountScannedImageAsync(const Model::DescribeCountScannedImageRequest& request, const DescribeCountScannedImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCountScannedImageOutcomeCallable describeCountScannedImageCallable(const Model::DescribeCountScannedImageRequest& request) const;
			DescribeCriteriaOutcome describeCriteria(const Model::DescribeCriteriaRequest &request)const;
			void describeCriteriaAsync(const Model::DescribeCriteriaRequest& request, const DescribeCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCriteriaOutcomeCallable describeCriteriaCallable(const Model::DescribeCriteriaRequest& request) const;
			DescribeCustomBlockRecordsOutcome describeCustomBlockRecords(const Model::DescribeCustomBlockRecordsRequest &request)const;
			void describeCustomBlockRecordsAsync(const Model::DescribeCustomBlockRecordsRequest& request, const DescribeCustomBlockRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomBlockRecordsOutcomeCallable describeCustomBlockRecordsCallable(const Model::DescribeCustomBlockRecordsRequest& request) const;
			DescribeCycleTaskListOutcome describeCycleTaskList(const Model::DescribeCycleTaskListRequest &request)const;
			void describeCycleTaskListAsync(const Model::DescribeCycleTaskListRequest& request, const DescribeCycleTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCycleTaskListOutcomeCallable describeCycleTaskListCallable(const Model::DescribeCycleTaskListRequest& request) const;
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
			DescribeEmgUserAgreementOutcome describeEmgUserAgreement(const Model::DescribeEmgUserAgreementRequest &request)const;
			void describeEmgUserAgreementAsync(const Model::DescribeEmgUserAgreementRequest& request, const DescribeEmgUserAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmgUserAgreementOutcomeCallable describeEmgUserAgreementCallable(const Model::DescribeEmgUserAgreementRequest& request) const;
			DescribeEmgVulItemOutcome describeEmgVulItem(const Model::DescribeEmgVulItemRequest &request)const;
			void describeEmgVulItemAsync(const Model::DescribeEmgVulItemRequest& request, const DescribeEmgVulItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmgVulItemOutcomeCallable describeEmgVulItemCallable(const Model::DescribeEmgVulItemRequest& request) const;
			DescribeEventLevelCountOutcome describeEventLevelCount(const Model::DescribeEventLevelCountRequest &request)const;
			void describeEventLevelCountAsync(const Model::DescribeEventLevelCountRequest& request, const DescribeEventLevelCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventLevelCountOutcomeCallable describeEventLevelCountCallable(const Model::DescribeEventLevelCountRequest& request) const;
			DescribeEventOnStageOutcome describeEventOnStage(const Model::DescribeEventOnStageRequest &request)const;
			void describeEventOnStageAsync(const Model::DescribeEventOnStageRequest& request, const DescribeEventOnStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventOnStageOutcomeCallable describeEventOnStageCallable(const Model::DescribeEventOnStageRequest& request) const;
			DescribeExcludeSystemPathOutcome describeExcludeSystemPath(const Model::DescribeExcludeSystemPathRequest &request)const;
			void describeExcludeSystemPathAsync(const Model::DescribeExcludeSystemPathRequest& request, const DescribeExcludeSystemPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExcludeSystemPathOutcomeCallable describeExcludeSystemPathCallable(const Model::DescribeExcludeSystemPathRequest& request) const;
			DescribeExportInfoOutcome describeExportInfo(const Model::DescribeExportInfoRequest &request)const;
			void describeExportInfoAsync(const Model::DescribeExportInfoRequest& request, const DescribeExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExportInfoOutcomeCallable describeExportInfoCallable(const Model::DescribeExportInfoRequest& request) const;
			DescribeExposedCheckWarningOutcome describeExposedCheckWarning(const Model::DescribeExposedCheckWarningRequest &request)const;
			void describeExposedCheckWarningAsync(const Model::DescribeExposedCheckWarningRequest& request, const DescribeExposedCheckWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExposedCheckWarningOutcomeCallable describeExposedCheckWarningCallable(const Model::DescribeExposedCheckWarningRequest& request) const;
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
			DescribeGroupStructOutcome describeGroupStruct(const Model::DescribeGroupStructRequest &request)const;
			void describeGroupStructAsync(const Model::DescribeGroupStructRequest& request, const DescribeGroupStructAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupStructOutcomeCallable describeGroupStructCallable(const Model::DescribeGroupStructRequest& request) const;
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
			DescribeHcExportInfoOutcome describeHcExportInfo(const Model::DescribeHcExportInfoRequest &request)const;
			void describeHcExportInfoAsync(const Model::DescribeHcExportInfoRequest& request, const DescribeHcExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHcExportInfoOutcomeCallable describeHcExportInfoCallable(const Model::DescribeHcExportInfoRequest& request) const;
			DescribeHoneyPotAuthOutcome describeHoneyPotAuth(const Model::DescribeHoneyPotAuthRequest &request)const;
			void describeHoneyPotAuthAsync(const Model::DescribeHoneyPotAuthRequest& request, const DescribeHoneyPotAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHoneyPotAuthOutcomeCallable describeHoneyPotAuthCallable(const Model::DescribeHoneyPotAuthRequest& request) const;
			DescribeHoneyPotSuspStatisticsOutcome describeHoneyPotSuspStatistics(const Model::DescribeHoneyPotSuspStatisticsRequest &request)const;
			void describeHoneyPotSuspStatisticsAsync(const Model::DescribeHoneyPotSuspStatisticsRequest& request, const DescribeHoneyPotSuspStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHoneyPotSuspStatisticsOutcomeCallable describeHoneyPotSuspStatisticsCallable(const Model::DescribeHoneyPotSuspStatisticsRequest& request) const;
			DescribeImageOutcome describeImage(const Model::DescribeImageRequest &request)const;
			void describeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageOutcomeCallable describeImageCallable(const Model::DescribeImageRequest& request) const;
			DescribeImageBaselineCheckResultOutcome describeImageBaselineCheckResult(const Model::DescribeImageBaselineCheckResultRequest &request)const;
			void describeImageBaselineCheckResultAsync(const Model::DescribeImageBaselineCheckResultRequest& request, const DescribeImageBaselineCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageBaselineCheckResultOutcomeCallable describeImageBaselineCheckResultCallable(const Model::DescribeImageBaselineCheckResultRequest& request) const;
			DescribeImageBaselineCheckSummaryOutcome describeImageBaselineCheckSummary(const Model::DescribeImageBaselineCheckSummaryRequest &request)const;
			void describeImageBaselineCheckSummaryAsync(const Model::DescribeImageBaselineCheckSummaryRequest& request, const DescribeImageBaselineCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageBaselineCheckSummaryOutcomeCallable describeImageBaselineCheckSummaryCallable(const Model::DescribeImageBaselineCheckSummaryRequest& request) const;
			DescribeImageBaselineDetailOutcome describeImageBaselineDetail(const Model::DescribeImageBaselineDetailRequest &request)const;
			void describeImageBaselineDetailAsync(const Model::DescribeImageBaselineDetailRequest& request, const DescribeImageBaselineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageBaselineDetailOutcomeCallable describeImageBaselineDetailCallable(const Model::DescribeImageBaselineDetailRequest& request) const;
			DescribeImageBaselineItemListOutcome describeImageBaselineItemList(const Model::DescribeImageBaselineItemListRequest &request)const;
			void describeImageBaselineItemListAsync(const Model::DescribeImageBaselineItemListRequest& request, const DescribeImageBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageBaselineItemListOutcomeCallable describeImageBaselineItemListCallable(const Model::DescribeImageBaselineItemListRequest& request) const;
			DescribeImageBaselineStrategyOutcome describeImageBaselineStrategy(const Model::DescribeImageBaselineStrategyRequest &request)const;
			void describeImageBaselineStrategyAsync(const Model::DescribeImageBaselineStrategyRequest& request, const DescribeImageBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageBaselineStrategyOutcomeCallable describeImageBaselineStrategyCallable(const Model::DescribeImageBaselineStrategyRequest& request) const;
			DescribeImageCriteriaOutcome describeImageCriteria(const Model::DescribeImageCriteriaRequest &request)const;
			void describeImageCriteriaAsync(const Model::DescribeImageCriteriaRequest& request, const DescribeImageCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageCriteriaOutcomeCallable describeImageCriteriaCallable(const Model::DescribeImageCriteriaRequest& request) const;
			DescribeImageFixTaskOutcome describeImageFixTask(const Model::DescribeImageFixTaskRequest &request)const;
			void describeImageFixTaskAsync(const Model::DescribeImageFixTaskRequest& request, const DescribeImageFixTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageFixTaskOutcomeCallable describeImageFixTaskCallable(const Model::DescribeImageFixTaskRequest& request) const;
			DescribeImageGroupedVulListOutcome describeImageGroupedVulList(const Model::DescribeImageGroupedVulListRequest &request)const;
			void describeImageGroupedVulListAsync(const Model::DescribeImageGroupedVulListRequest& request, const DescribeImageGroupedVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageGroupedVulListOutcomeCallable describeImageGroupedVulListCallable(const Model::DescribeImageGroupedVulListRequest& request) const;
			DescribeImageInfoListOutcome describeImageInfoList(const Model::DescribeImageInfoListRequest &request)const;
			void describeImageInfoListAsync(const Model::DescribeImageInfoListRequest& request, const DescribeImageInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageInfoListOutcomeCallable describeImageInfoListCallable(const Model::DescribeImageInfoListRequest& request) const;
			DescribeImageInstancesOutcome describeImageInstances(const Model::DescribeImageInstancesRequest &request)const;
			void describeImageInstancesAsync(const Model::DescribeImageInstancesRequest& request, const DescribeImageInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageInstancesOutcomeCallable describeImageInstancesCallable(const Model::DescribeImageInstancesRequest& request) const;
			DescribeImageLatestScanTaskOutcome describeImageLatestScanTask(const Model::DescribeImageLatestScanTaskRequest &request)const;
			void describeImageLatestScanTaskAsync(const Model::DescribeImageLatestScanTaskRequest& request, const DescribeImageLatestScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageLatestScanTaskOutcomeCallable describeImageLatestScanTaskCallable(const Model::DescribeImageLatestScanTaskRequest& request) const;
			DescribeImageListBySensitiveFileOutcome describeImageListBySensitiveFile(const Model::DescribeImageListBySensitiveFileRequest &request)const;
			void describeImageListBySensitiveFileAsync(const Model::DescribeImageListBySensitiveFileRequest& request, const DescribeImageListBySensitiveFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageListBySensitiveFileOutcomeCallable describeImageListBySensitiveFileCallable(const Model::DescribeImageListBySensitiveFileRequest& request) const;
			DescribeImageListWithBaselineNameOutcome describeImageListWithBaselineName(const Model::DescribeImageListWithBaselineNameRequest &request)const;
			void describeImageListWithBaselineNameAsync(const Model::DescribeImageListWithBaselineNameRequest& request, const DescribeImageListWithBaselineNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageListWithBaselineNameOutcomeCallable describeImageListWithBaselineNameCallable(const Model::DescribeImageListWithBaselineNameRequest& request) const;
			DescribeImageRepoCriteriaOutcome describeImageRepoCriteria(const Model::DescribeImageRepoCriteriaRequest &request)const;
			void describeImageRepoCriteriaAsync(const Model::DescribeImageRepoCriteriaRequest& request, const DescribeImageRepoCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageRepoCriteriaOutcomeCallable describeImageRepoCriteriaCallable(const Model::DescribeImageRepoCriteriaRequest& request) const;
			DescribeImageRepoDetailListOutcome describeImageRepoDetailList(const Model::DescribeImageRepoDetailListRequest &request)const;
			void describeImageRepoDetailListAsync(const Model::DescribeImageRepoDetailListRequest& request, const DescribeImageRepoDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageRepoDetailListOutcomeCallable describeImageRepoDetailListCallable(const Model::DescribeImageRepoDetailListRequest& request) const;
			DescribeImageRepoListOutcome describeImageRepoList(const Model::DescribeImageRepoListRequest &request)const;
			void describeImageRepoListAsync(const Model::DescribeImageRepoListRequest& request, const DescribeImageRepoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageRepoListOutcomeCallable describeImageRepoListCallable(const Model::DescribeImageRepoListRequest& request) const;
			DescribeImageScanAuthCountOutcome describeImageScanAuthCount(const Model::DescribeImageScanAuthCountRequest &request)const;
			void describeImageScanAuthCountAsync(const Model::DescribeImageScanAuthCountRequest& request, const DescribeImageScanAuthCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageScanAuthCountOutcomeCallable describeImageScanAuthCountCallable(const Model::DescribeImageScanAuthCountRequest& request) const;
			DescribeImageScanAuthorizationOutcome describeImageScanAuthorization(const Model::DescribeImageScanAuthorizationRequest &request)const;
			void describeImageScanAuthorizationAsync(const Model::DescribeImageScanAuthorizationRequest& request, const DescribeImageScanAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageScanAuthorizationOutcomeCallable describeImageScanAuthorizationCallable(const Model::DescribeImageScanAuthorizationRequest& request) const;
			DescribeImageSensitiveFileByKeyOutcome describeImageSensitiveFileByKey(const Model::DescribeImageSensitiveFileByKeyRequest &request)const;
			void describeImageSensitiveFileByKeyAsync(const Model::DescribeImageSensitiveFileByKeyRequest& request, const DescribeImageSensitiveFileByKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageSensitiveFileByKeyOutcomeCallable describeImageSensitiveFileByKeyCallable(const Model::DescribeImageSensitiveFileByKeyRequest& request) const;
			DescribeImageSensitiveFileListOutcome describeImageSensitiveFileList(const Model::DescribeImageSensitiveFileListRequest &request)const;
			void describeImageSensitiveFileListAsync(const Model::DescribeImageSensitiveFileListRequest& request, const DescribeImageSensitiveFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageSensitiveFileListOutcomeCallable describeImageSensitiveFileListCallable(const Model::DescribeImageSensitiveFileListRequest& request) const;
			DescribeImageStatisticsOutcome describeImageStatistics(const Model::DescribeImageStatisticsRequest &request)const;
			void describeImageStatisticsAsync(const Model::DescribeImageStatisticsRequest& request, const DescribeImageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageStatisticsOutcomeCallable describeImageStatisticsCallable(const Model::DescribeImageStatisticsRequest& request) const;
			DescribeImageVulListOutcome describeImageVulList(const Model::DescribeImageVulListRequest &request)const;
			void describeImageVulListAsync(const Model::DescribeImageVulListRequest& request, const DescribeImageVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageVulListOutcomeCallable describeImageVulListCallable(const Model::DescribeImageVulListRequest& request) const;
			DescribeImageVulWhiteListOutcome describeImageVulWhiteList(const Model::DescribeImageVulWhiteListRequest &request)const;
			void describeImageVulWhiteListAsync(const Model::DescribeImageVulWhiteListRequest& request, const DescribeImageVulWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageVulWhiteListOutcomeCallable describeImageVulWhiteListCallable(const Model::DescribeImageVulWhiteListRequest& request) const;
			DescribeInstallCaptchaOutcome describeInstallCaptcha(const Model::DescribeInstallCaptchaRequest &request)const;
			void describeInstallCaptchaAsync(const Model::DescribeInstallCaptchaRequest& request, const DescribeInstallCaptchaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstallCaptchaOutcomeCallable describeInstallCaptchaCallable(const Model::DescribeInstallCaptchaRequest& request) const;
			DescribeInstallCodeOutcome describeInstallCode(const Model::DescribeInstallCodeRequest &request)const;
			void describeInstallCodeAsync(const Model::DescribeInstallCodeRequest& request, const DescribeInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstallCodeOutcomeCallable describeInstallCodeCallable(const Model::DescribeInstallCodeRequest& request) const;
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
			DescribeIpTagsOutcome describeIpTags(const Model::DescribeIpTagsRequest &request)const;
			void describeIpTagsAsync(const Model::DescribeIpTagsRequest& request, const DescribeIpTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpTagsOutcomeCallable describeIpTagsCallable(const Model::DescribeIpTagsRequest& request) const;
			DescribeLatestScanTaskOutcome describeLatestScanTask(const Model::DescribeLatestScanTaskRequest &request)const;
			void describeLatestScanTaskAsync(const Model::DescribeLatestScanTaskRequest& request, const DescribeLatestScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLatestScanTaskOutcomeCallable describeLatestScanTaskCallable(const Model::DescribeLatestScanTaskRequest& request) const;
			DescribeLogMetaOutcome describeLogMeta(const Model::DescribeLogMetaRequest &request)const;
			void describeLogMetaAsync(const Model::DescribeLogMetaRequest& request, const DescribeLogMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogMetaOutcomeCallable describeLogMetaCallable(const Model::DescribeLogMetaRequest& request) const;
			DescribeLogShipperStatusOutcome describeLogShipperStatus(const Model::DescribeLogShipperStatusRequest &request)const;
			void describeLogShipperStatusAsync(const Model::DescribeLogShipperStatusRequest& request, const DescribeLogShipperStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogShipperStatusOutcomeCallable describeLogShipperStatusCallable(const Model::DescribeLogShipperStatusRequest& request) const;
			DescribeLoginBaseConfigsOutcome describeLoginBaseConfigs(const Model::DescribeLoginBaseConfigsRequest &request)const;
			void describeLoginBaseConfigsAsync(const Model::DescribeLoginBaseConfigsRequest& request, const DescribeLoginBaseConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoginBaseConfigsOutcomeCallable describeLoginBaseConfigsCallable(const Model::DescribeLoginBaseConfigsRequest& request) const;
			DescribeLoginSwitchConfigsOutcome describeLoginSwitchConfigs(const Model::DescribeLoginSwitchConfigsRequest &request)const;
			void describeLoginSwitchConfigsAsync(const Model::DescribeLoginSwitchConfigsRequest& request, const DescribeLoginSwitchConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoginSwitchConfigsOutcomeCallable describeLoginSwitchConfigsCallable(const Model::DescribeLoginSwitchConfigsRequest& request) const;
			DescribeLogstoreStorageOutcome describeLogstoreStorage(const Model::DescribeLogstoreStorageRequest &request)const;
			void describeLogstoreStorageAsync(const Model::DescribeLogstoreStorageRequest& request, const DescribeLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogstoreStorageOutcomeCallable describeLogstoreStorageCallable(const Model::DescribeLogstoreStorageRequest& request) const;
			DescribeMachineCanRebootOutcome describeMachineCanReboot(const Model::DescribeMachineCanRebootRequest &request)const;
			void describeMachineCanRebootAsync(const Model::DescribeMachineCanRebootRequest& request, const DescribeMachineCanRebootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMachineCanRebootOutcomeCallable describeMachineCanRebootCallable(const Model::DescribeMachineCanRebootRequest& request) const;
			DescribeModuleConfigOutcome describeModuleConfig(const Model::DescribeModuleConfigRequest &request)const;
			void describeModuleConfigAsync(const Model::DescribeModuleConfigRequest& request, const DescribeModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModuleConfigOutcomeCallable describeModuleConfigCallable(const Model::DescribeModuleConfigRequest& request) const;
			DescribeMonitorAccountsOutcome describeMonitorAccounts(const Model::DescribeMonitorAccountsRequest &request)const;
			void describeMonitorAccountsAsync(const Model::DescribeMonitorAccountsRequest& request, const DescribeMonitorAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMonitorAccountsOutcomeCallable describeMonitorAccountsCallable(const Model::DescribeMonitorAccountsRequest& request) const;
			DescribeNoticeConfigOutcome describeNoticeConfig(const Model::DescribeNoticeConfigRequest &request)const;
			void describeNoticeConfigAsync(const Model::DescribeNoticeConfigRequest& request, const DescribeNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNoticeConfigOutcomeCallable describeNoticeConfigCallable(const Model::DescribeNoticeConfigRequest& request) const;
			DescribeNsasSuspEventTypeOutcome describeNsasSuspEventType(const Model::DescribeNsasSuspEventTypeRequest &request)const;
			void describeNsasSuspEventTypeAsync(const Model::DescribeNsasSuspEventTypeRequest& request, const DescribeNsasSuspEventTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNsasSuspEventTypeOutcomeCallable describeNsasSuspEventTypeCallable(const Model::DescribeNsasSuspEventTypeRequest& request) const;
			DescribeOfflineMachinesOutcome describeOfflineMachines(const Model::DescribeOfflineMachinesRequest &request)const;
			void describeOfflineMachinesAsync(const Model::DescribeOfflineMachinesRequest& request, const DescribeOfflineMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOfflineMachinesOutcomeCallable describeOfflineMachinesCallable(const Model::DescribeOfflineMachinesRequest& request) const;
			DescribeOnceTaskOutcome describeOnceTask(const Model::DescribeOnceTaskRequest &request)const;
			void describeOnceTaskAsync(const Model::DescribeOnceTaskRequest& request, const DescribeOnceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOnceTaskOutcomeCallable describeOnceTaskCallable(const Model::DescribeOnceTaskRequest& request) const;
			DescribeOnceTaskLeafRecordPageOutcome describeOnceTaskLeafRecordPage(const Model::DescribeOnceTaskLeafRecordPageRequest &request)const;
			void describeOnceTaskLeafRecordPageAsync(const Model::DescribeOnceTaskLeafRecordPageRequest& request, const DescribeOnceTaskLeafRecordPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOnceTaskLeafRecordPageOutcomeCallable describeOnceTaskLeafRecordPageCallable(const Model::DescribeOnceTaskLeafRecordPageRequest& request) const;
			DescribePropertyCountOutcome describePropertyCount(const Model::DescribePropertyCountRequest &request)const;
			void describePropertyCountAsync(const Model::DescribePropertyCountRequest& request, const DescribePropertyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyCountOutcomeCallable describePropertyCountCallable(const Model::DescribePropertyCountRequest& request) const;
			DescribePropertyCronDetailOutcome describePropertyCronDetail(const Model::DescribePropertyCronDetailRequest &request)const;
			void describePropertyCronDetailAsync(const Model::DescribePropertyCronDetailRequest& request, const DescribePropertyCronDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyCronDetailOutcomeCallable describePropertyCronDetailCallable(const Model::DescribePropertyCronDetailRequest& request) const;
			DescribePropertyCronItemOutcome describePropertyCronItem(const Model::DescribePropertyCronItemRequest &request)const;
			void describePropertyCronItemAsync(const Model::DescribePropertyCronItemRequest& request, const DescribePropertyCronItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyCronItemOutcomeCallable describePropertyCronItemCallable(const Model::DescribePropertyCronItemRequest& request) const;
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
			DescribePropertyScaItemOutcome describePropertyScaItem(const Model::DescribePropertyScaItemRequest &request)const;
			void describePropertyScaItemAsync(const Model::DescribePropertyScaItemRequest& request, const DescribePropertyScaItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyScaItemOutcomeCallable describePropertyScaItemCallable(const Model::DescribePropertyScaItemRequest& request) const;
			DescribePropertyScheduleConfigOutcome describePropertyScheduleConfig(const Model::DescribePropertyScheduleConfigRequest &request)const;
			void describePropertyScheduleConfigAsync(const Model::DescribePropertyScheduleConfigRequest& request, const DescribePropertyScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyScheduleConfigOutcomeCallable describePropertyScheduleConfigCallable(const Model::DescribePropertyScheduleConfigRequest& request) const;
			DescribePropertySoftwareDetailOutcome describePropertySoftwareDetail(const Model::DescribePropertySoftwareDetailRequest &request)const;
			void describePropertySoftwareDetailAsync(const Model::DescribePropertySoftwareDetailRequest& request, const DescribePropertySoftwareDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertySoftwareDetailOutcomeCallable describePropertySoftwareDetailCallable(const Model::DescribePropertySoftwareDetailRequest& request) const;
			DescribePropertySoftwareItemOutcome describePropertySoftwareItem(const Model::DescribePropertySoftwareItemRequest &request)const;
			void describePropertySoftwareItemAsync(const Model::DescribePropertySoftwareItemRequest& request, const DescribePropertySoftwareItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertySoftwareItemOutcomeCallable describePropertySoftwareItemCallable(const Model::DescribePropertySoftwareItemRequest& request) const;
			DescribePropertyTypeScaItemOutcome describePropertyTypeScaItem(const Model::DescribePropertyTypeScaItemRequest &request)const;
			void describePropertyTypeScaItemAsync(const Model::DescribePropertyTypeScaItemRequest& request, const DescribePropertyTypeScaItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyTypeScaItemOutcomeCallable describePropertyTypeScaItemCallable(const Model::DescribePropertyTypeScaItemRequest& request) const;
			DescribePropertyUsageNewestOutcome describePropertyUsageNewest(const Model::DescribePropertyUsageNewestRequest &request)const;
			void describePropertyUsageNewestAsync(const Model::DescribePropertyUsageNewestRequest& request, const DescribePropertyUsageNewestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUsageNewestOutcomeCallable describePropertyUsageNewestCallable(const Model::DescribePropertyUsageNewestRequest& request) const;
			DescribePropertyUserDetailOutcome describePropertyUserDetail(const Model::DescribePropertyUserDetailRequest &request)const;
			void describePropertyUserDetailAsync(const Model::DescribePropertyUserDetailRequest& request, const DescribePropertyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUserDetailOutcomeCallable describePropertyUserDetailCallable(const Model::DescribePropertyUserDetailRequest& request) const;
			DescribePropertyUserItemOutcome describePropertyUserItem(const Model::DescribePropertyUserItemRequest &request)const;
			void describePropertyUserItemAsync(const Model::DescribePropertyUserItemRequest& request, const DescribePropertyUserItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUserItemOutcomeCallable describePropertyUserItemCallable(const Model::DescribePropertyUserItemRequest& request) const;
			DescribeQuaraFileDownloadInfoOutcome describeQuaraFileDownloadInfo(const Model::DescribeQuaraFileDownloadInfoRequest &request)const;
			void describeQuaraFileDownloadInfoAsync(const Model::DescribeQuaraFileDownloadInfoRequest& request, const DescribeQuaraFileDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQuaraFileDownloadInfoOutcomeCallable describeQuaraFileDownloadInfoCallable(const Model::DescribeQuaraFileDownloadInfoRequest& request) const;
			DescribeRestoreJobsOutcome describeRestoreJobs(const Model::DescribeRestoreJobsRequest &request)const;
			void describeRestoreJobsAsync(const Model::DescribeRestoreJobsRequest& request, const DescribeRestoreJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreJobsOutcomeCallable describeRestoreJobsCallable(const Model::DescribeRestoreJobsRequest& request) const;
			DescribeRestorePlansOutcome describeRestorePlans(const Model::DescribeRestorePlansRequest &request)const;
			void describeRestorePlansAsync(const Model::DescribeRestorePlansRequest& request, const DescribeRestorePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestorePlansOutcomeCallable describeRestorePlansCallable(const Model::DescribeRestorePlansRequest& request) const;
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
			DescribeRisksOutcome describeRisks(const Model::DescribeRisksRequest &request)const;
			void describeRisksAsync(const Model::DescribeRisksRequest& request, const DescribeRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRisksOutcomeCallable describeRisksCallable(const Model::DescribeRisksRequest& request) const;
			DescribeSasPmAgentListOutcome describeSasPmAgentList(const Model::DescribeSasPmAgentListRequest &request)const;
			void describeSasPmAgentListAsync(const Model::DescribeSasPmAgentListRequest& request, const DescribeSasPmAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSasPmAgentListOutcomeCallable describeSasPmAgentListCallable(const Model::DescribeSasPmAgentListRequest& request) const;
			DescribeScanTaskProgressOutcome describeScanTaskProgress(const Model::DescribeScanTaskProgressRequest &request)const;
			void describeScanTaskProgressAsync(const Model::DescribeScanTaskProgressRequest& request, const DescribeScanTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScanTaskProgressOutcomeCallable describeScanTaskProgressCallable(const Model::DescribeScanTaskProgressRequest& request) const;
			DescribeScanTaskStatisticsOutcome describeScanTaskStatistics(const Model::DescribeScanTaskStatisticsRequest &request)const;
			void describeScanTaskStatisticsAsync(const Model::DescribeScanTaskStatisticsRequest& request, const DescribeScanTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScanTaskStatisticsOutcomeCallable describeScanTaskStatisticsCallable(const Model::DescribeScanTaskStatisticsRequest& request) const;
			DescribeSearchConditionOutcome describeSearchCondition(const Model::DescribeSearchConditionRequest &request)const;
			void describeSearchConditionAsync(const Model::DescribeSearchConditionRequest& request, const DescribeSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSearchConditionOutcomeCallable describeSearchConditionCallable(const Model::DescribeSearchConditionRequest& request) const;
			DescribeSecureSuggestionOutcome describeSecureSuggestion(const Model::DescribeSecureSuggestionRequest &request)const;
			void describeSecureSuggestionAsync(const Model::DescribeSecureSuggestionRequest& request, const DescribeSecureSuggestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecureSuggestionOutcomeCallable describeSecureSuggestionCallable(const Model::DescribeSecureSuggestionRequest& request) const;
			DescribeSecurityCheckScheduleConfigOutcome describeSecurityCheckScheduleConfig(const Model::DescribeSecurityCheckScheduleConfigRequest &request)const;
			void describeSecurityCheckScheduleConfigAsync(const Model::DescribeSecurityCheckScheduleConfigRequest& request, const DescribeSecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityCheckScheduleConfigOutcomeCallable describeSecurityCheckScheduleConfigCallable(const Model::DescribeSecurityCheckScheduleConfigRequest& request) const;
			DescribeSecurityEventMarkMissListOutcome describeSecurityEventMarkMissList(const Model::DescribeSecurityEventMarkMissListRequest &request)const;
			void describeSecurityEventMarkMissListAsync(const Model::DescribeSecurityEventMarkMissListRequest& request, const DescribeSecurityEventMarkMissListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityEventMarkMissListOutcomeCallable describeSecurityEventMarkMissListCallable(const Model::DescribeSecurityEventMarkMissListRequest& request) const;
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
			DescribeSnapshotsOutcome describeSnapshots(const Model::DescribeSnapshotsRequest &request)const;
			void describeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotsOutcomeCallable describeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;
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
			DescribeSuspEventExportInfoOutcome describeSuspEventExportInfo(const Model::DescribeSuspEventExportInfoRequest &request)const;
			void describeSuspEventExportInfoAsync(const Model::DescribeSuspEventExportInfoRequest& request, const DescribeSuspEventExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventExportInfoOutcomeCallable describeSuspEventExportInfoCallable(const Model::DescribeSuspEventExportInfoRequest& request) const;
			DescribeSuspEventQuaraFilesOutcome describeSuspEventQuaraFiles(const Model::DescribeSuspEventQuaraFilesRequest &request)const;
			void describeSuspEventQuaraFilesAsync(const Model::DescribeSuspEventQuaraFilesRequest& request, const DescribeSuspEventQuaraFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventQuaraFilesOutcomeCallable describeSuspEventQuaraFilesCallable(const Model::DescribeSuspEventQuaraFilesRequest& request) const;
			DescribeSuspEventUserSettingOutcome describeSuspEventUserSetting(const Model::DescribeSuspEventUserSettingRequest &request)const;
			void describeSuspEventUserSettingAsync(const Model::DescribeSuspEventUserSettingRequest& request, const DescribeSuspEventUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventUserSettingOutcomeCallable describeSuspEventUserSettingCallable(const Model::DescribeSuspEventUserSettingRequest& request) const;
			DescribeSuspEventsOutcome describeSuspEvents(const Model::DescribeSuspEventsRequest &request)const;
			void describeSuspEventsAsync(const Model::DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventsOutcomeCallable describeSuspEventsCallable(const Model::DescribeSuspEventsRequest& request) const;
			DescribeSuspiciousOverallConfigOutcome describeSuspiciousOverallConfig(const Model::DescribeSuspiciousOverallConfigRequest &request)const;
			void describeSuspiciousOverallConfigAsync(const Model::DescribeSuspiciousOverallConfigRequest& request, const DescribeSuspiciousOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspiciousOverallConfigOutcomeCallable describeSuspiciousOverallConfigCallable(const Model::DescribeSuspiciousOverallConfigRequest& request) const;
			DescribeSuspiciousUUIDConfigOutcome describeSuspiciousUUIDConfig(const Model::DescribeSuspiciousUUIDConfigRequest &request)const;
			void describeSuspiciousUUIDConfigAsync(const Model::DescribeSuspiciousUUIDConfigRequest& request, const DescribeSuspiciousUUIDConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspiciousUUIDConfigOutcomeCallable describeSuspiciousUUIDConfigCallable(const Model::DescribeSuspiciousUUIDConfigRequest& request) const;
			DescribeTargetOutcome describeTarget(const Model::DescribeTargetRequest &request)const;
			void describeTargetAsync(const Model::DescribeTargetRequest& request, const DescribeTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTargetOutcomeCallable describeTargetCallable(const Model::DescribeTargetRequest& request) const;
			DescribeTaskErrorLogOutcome describeTaskErrorLog(const Model::DescribeTaskErrorLogRequest &request)const;
			void describeTaskErrorLogAsync(const Model::DescribeTaskErrorLogRequest& request, const DescribeTaskErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTaskErrorLogOutcomeCallable describeTaskErrorLogCallable(const Model::DescribeTaskErrorLogRequest& request) const;
			DescribeTotalStatisticsOutcome describeTotalStatistics(const Model::DescribeTotalStatisticsRequest &request)const;
			void describeTotalStatisticsAsync(const Model::DescribeTotalStatisticsRequest& request, const DescribeTotalStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTotalStatisticsOutcomeCallable describeTotalStatisticsCallable(const Model::DescribeTotalStatisticsRequest& request) const;
			DescribeTraceInfoDetailOutcome describeTraceInfoDetail(const Model::DescribeTraceInfoDetailRequest &request)const;
			void describeTraceInfoDetailAsync(const Model::DescribeTraceInfoDetailRequest& request, const DescribeTraceInfoDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTraceInfoDetailOutcomeCallable describeTraceInfoDetailCallable(const Model::DescribeTraceInfoDetailRequest& request) const;
			DescribeTraceInfoNodeOutcome describeTraceInfoNode(const Model::DescribeTraceInfoNodeRequest &request)const;
			void describeTraceInfoNodeAsync(const Model::DescribeTraceInfoNodeRequest& request, const DescribeTraceInfoNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTraceInfoNodeOutcomeCallable describeTraceInfoNodeCallable(const Model::DescribeTraceInfoNodeRequest& request) const;
			DescribeUniBackupDatabaseOutcome describeUniBackupDatabase(const Model::DescribeUniBackupDatabaseRequest &request)const;
			void describeUniBackupDatabaseAsync(const Model::DescribeUniBackupDatabaseRequest& request, const DescribeUniBackupDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUniBackupDatabaseOutcomeCallable describeUniBackupDatabaseCallable(const Model::DescribeUniBackupDatabaseRequest& request) const;
			DescribeUniBackupPoliciesOutcome describeUniBackupPolicies(const Model::DescribeUniBackupPoliciesRequest &request)const;
			void describeUniBackupPoliciesAsync(const Model::DescribeUniBackupPoliciesRequest& request, const DescribeUniBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUniBackupPoliciesOutcomeCallable describeUniBackupPoliciesCallable(const Model::DescribeUniBackupPoliciesRequest& request) const;
			DescribeUniBackupPolicyDetailOutcome describeUniBackupPolicyDetail(const Model::DescribeUniBackupPolicyDetailRequest &request)const;
			void describeUniBackupPolicyDetailAsync(const Model::DescribeUniBackupPolicyDetailRequest& request, const DescribeUniBackupPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUniBackupPolicyDetailOutcomeCallable describeUniBackupPolicyDetailCallable(const Model::DescribeUniBackupPolicyDetailRequest& request) const;
			DescribeUniRecoverableListOutcome describeUniRecoverableList(const Model::DescribeUniRecoverableListRequest &request)const;
			void describeUniRecoverableListAsync(const Model::DescribeUniRecoverableListRequest& request, const DescribeUniRecoverableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUniRecoverableListOutcomeCallable describeUniRecoverableListCallable(const Model::DescribeUniRecoverableListRequest& request) const;
			DescribeUniSupportRegionOutcome describeUniSupportRegion(const Model::DescribeUniSupportRegionRequest &request)const;
			void describeUniSupportRegionAsync(const Model::DescribeUniSupportRegionRequest& request, const DescribeUniSupportRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUniSupportRegionOutcomeCallable describeUniSupportRegionCallable(const Model::DescribeUniSupportRegionRequest& request) const;
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
			DescribeVendorListOutcome describeVendorList(const Model::DescribeVendorListRequest &request)const;
			void describeVendorListAsync(const Model::DescribeVendorListRequest& request, const DescribeVendorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVendorListOutcomeCallable describeVendorListCallable(const Model::DescribeVendorListRequest& request) const;
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
			DescribeVulCheckTaskStatusDetailOutcome describeVulCheckTaskStatusDetail(const Model::DescribeVulCheckTaskStatusDetailRequest &request)const;
			void describeVulCheckTaskStatusDetailAsync(const Model::DescribeVulCheckTaskStatusDetailRequest& request, const DescribeVulCheckTaskStatusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulCheckTaskStatusDetailOutcomeCallable describeVulCheckTaskStatusDetailCallable(const Model::DescribeVulCheckTaskStatusDetailRequest& request) const;
			DescribeVulConfigOutcome describeVulConfig(const Model::DescribeVulConfigRequest &request)const;
			void describeVulConfigAsync(const Model::DescribeVulConfigRequest& request, const DescribeVulConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulConfigOutcomeCallable describeVulConfigCallable(const Model::DescribeVulConfigRequest& request) const;
			DescribeVulDetailsOutcome describeVulDetails(const Model::DescribeVulDetailsRequest &request)const;
			void describeVulDetailsAsync(const Model::DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulDetailsOutcomeCallable describeVulDetailsCallable(const Model::DescribeVulDetailsRequest& request) const;
			DescribeVulExportInfoOutcome describeVulExportInfo(const Model::DescribeVulExportInfoRequest &request)const;
			void describeVulExportInfoAsync(const Model::DescribeVulExportInfoRequest& request, const DescribeVulExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulExportInfoOutcomeCallable describeVulExportInfoCallable(const Model::DescribeVulExportInfoRequest& request) const;
			DescribeVulFixStatisticsOutcome describeVulFixStatistics(const Model::DescribeVulFixStatisticsRequest &request)const;
			void describeVulFixStatisticsAsync(const Model::DescribeVulFixStatisticsRequest& request, const DescribeVulFixStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulFixStatisticsOutcomeCallable describeVulFixStatisticsCallable(const Model::DescribeVulFixStatisticsRequest& request) const;
			DescribeVulListOutcome describeVulList(const Model::DescribeVulListRequest &request)const;
			void describeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulListOutcomeCallable describeVulListCallable(const Model::DescribeVulListRequest& request) const;
			DescribeVulListPageOutcome describeVulListPage(const Model::DescribeVulListPageRequest &request)const;
			void describeVulListPageAsync(const Model::DescribeVulListPageRequest& request, const DescribeVulListPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulListPageOutcomeCallable describeVulListPageCallable(const Model::DescribeVulListPageRequest& request) const;
			DescribeVulNumStatisticsOutcome describeVulNumStatistics(const Model::DescribeVulNumStatisticsRequest &request)const;
			void describeVulNumStatisticsAsync(const Model::DescribeVulNumStatisticsRequest& request, const DescribeVulNumStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulNumStatisticsOutcomeCallable describeVulNumStatisticsCallable(const Model::DescribeVulNumStatisticsRequest& request) const;
			DescribeVulTargetConfigOutcome describeVulTargetConfig(const Model::DescribeVulTargetConfigRequest &request)const;
			void describeVulTargetConfigAsync(const Model::DescribeVulTargetConfigRequest& request, const DescribeVulTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulTargetConfigOutcomeCallable describeVulTargetConfigCallable(const Model::DescribeVulTargetConfigRequest& request) const;
			DescribeVulTargetStatisticsOutcome describeVulTargetStatistics(const Model::DescribeVulTargetStatisticsRequest &request)const;
			void describeVulTargetStatisticsAsync(const Model::DescribeVulTargetStatisticsRequest& request, const DescribeVulTargetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulTargetStatisticsOutcomeCallable describeVulTargetStatisticsCallable(const Model::DescribeVulTargetStatisticsRequest& request) const;
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
			DescribeWebLockExclusiveFileTypeOutcome describeWebLockExclusiveFileType(const Model::DescribeWebLockExclusiveFileTypeRequest &request)const;
			void describeWebLockExclusiveFileTypeAsync(const Model::DescribeWebLockExclusiveFileTypeRequest& request, const DescribeWebLockExclusiveFileTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockExclusiveFileTypeOutcomeCallable describeWebLockExclusiveFileTypeCallable(const Model::DescribeWebLockExclusiveFileTypeRequest& request) const;
			DescribeWebLockFileChangeStatisticsOutcome describeWebLockFileChangeStatistics(const Model::DescribeWebLockFileChangeStatisticsRequest &request)const;
			void describeWebLockFileChangeStatisticsAsync(const Model::DescribeWebLockFileChangeStatisticsRequest& request, const DescribeWebLockFileChangeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockFileChangeStatisticsOutcomeCallable describeWebLockFileChangeStatisticsCallable(const Model::DescribeWebLockFileChangeStatisticsRequest& request) const;
			DescribeWebLockFileEventsOutcome describeWebLockFileEvents(const Model::DescribeWebLockFileEventsRequest &request)const;
			void describeWebLockFileEventsAsync(const Model::DescribeWebLockFileEventsRequest& request, const DescribeWebLockFileEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockFileEventsOutcomeCallable describeWebLockFileEventsCallable(const Model::DescribeWebLockFileEventsRequest& request) const;
			DescribeWebLockFileTypeSummaryOutcome describeWebLockFileTypeSummary(const Model::DescribeWebLockFileTypeSummaryRequest &request)const;
			void describeWebLockFileTypeSummaryAsync(const Model::DescribeWebLockFileTypeSummaryRequest& request, const DescribeWebLockFileTypeSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockFileTypeSummaryOutcomeCallable describeWebLockFileTypeSummaryCallable(const Model::DescribeWebLockFileTypeSummaryRequest& request) const;
			DescribeWebLockInclusiveFileTypeOutcome describeWebLockInclusiveFileType(const Model::DescribeWebLockInclusiveFileTypeRequest &request)const;
			void describeWebLockInclusiveFileTypeAsync(const Model::DescribeWebLockInclusiveFileTypeRequest& request, const DescribeWebLockInclusiveFileTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockInclusiveFileTypeOutcomeCallable describeWebLockInclusiveFileTypeCallable(const Model::DescribeWebLockInclusiveFileTypeRequest& request) const;
			DescribeWebLockProcessBlockStatisticsOutcome describeWebLockProcessBlockStatistics(const Model::DescribeWebLockProcessBlockStatisticsRequest &request)const;
			void describeWebLockProcessBlockStatisticsAsync(const Model::DescribeWebLockProcessBlockStatisticsRequest& request, const DescribeWebLockProcessBlockStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockProcessBlockStatisticsOutcomeCallable describeWebLockProcessBlockStatisticsCallable(const Model::DescribeWebLockProcessBlockStatisticsRequest& request) const;
			DescribeWebLockProcessListOutcome describeWebLockProcessList(const Model::DescribeWebLockProcessListRequest &request)const;
			void describeWebLockProcessListAsync(const Model::DescribeWebLockProcessListRequest& request, const DescribeWebLockProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockProcessListOutcomeCallable describeWebLockProcessListCallable(const Model::DescribeWebLockProcessListRequest& request) const;
			DescribeWebLockStatusOutcome describeWebLockStatus(const Model::DescribeWebLockStatusRequest &request)const;
			void describeWebLockStatusAsync(const Model::DescribeWebLockStatusRequest& request, const DescribeWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockStatusOutcomeCallable describeWebLockStatusCallable(const Model::DescribeWebLockStatusRequest& request) const;
			DescribeWebLockTotalFileChangeCountOutcome describeWebLockTotalFileChangeCount(const Model::DescribeWebLockTotalFileChangeCountRequest &request)const;
			void describeWebLockTotalFileChangeCountAsync(const Model::DescribeWebLockTotalFileChangeCountRequest& request, const DescribeWebLockTotalFileChangeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockTotalFileChangeCountOutcomeCallable describeWebLockTotalFileChangeCountCallable(const Model::DescribeWebLockTotalFileChangeCountRequest& request) const;
			DescribeWebPathOutcome describeWebPath(const Model::DescribeWebPathRequest &request)const;
			void describeWebPathAsync(const Model::DescribeWebPathRequest& request, const DescribeWebPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebPathOutcomeCallable describeWebPathCallable(const Model::DescribeWebPathRequest& request) const;
			DisableBruteForceRecordOutcome disableBruteForceRecord(const Model::DisableBruteForceRecordRequest &request)const;
			void disableBruteForceRecordAsync(const Model::DisableBruteForceRecordRequest& request, const DisableBruteForceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableBruteForceRecordOutcomeCallable disableBruteForceRecordCallable(const Model::DisableBruteForceRecordRequest& request) const;
			DisableCustomBlockRecordOutcome disableCustomBlockRecord(const Model::DisableCustomBlockRecordRequest &request)const;
			void disableCustomBlockRecordAsync(const Model::DisableCustomBlockRecordRequest& request, const DisableCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableCustomBlockRecordOutcomeCallable disableCustomBlockRecordCallable(const Model::DisableCustomBlockRecordRequest& request) const;
			EnableBruteForceRecordOutcome enableBruteForceRecord(const Model::EnableBruteForceRecordRequest &request)const;
			void enableBruteForceRecordAsync(const Model::EnableBruteForceRecordRequest& request, const EnableBruteForceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableBruteForceRecordOutcomeCallable enableBruteForceRecordCallable(const Model::EnableBruteForceRecordRequest& request) const;
			EnableCustomBlockRecordOutcome enableCustomBlockRecord(const Model::EnableCustomBlockRecordRequest &request)const;
			void enableCustomBlockRecordAsync(const Model::EnableCustomBlockRecordRequest& request, const EnableCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableCustomBlockRecordOutcomeCallable enableCustomBlockRecordCallable(const Model::EnableCustomBlockRecordRequest& request) const;
			ExecStrategyOutcome execStrategy(const Model::ExecStrategyRequest &request)const;
			void execStrategyAsync(const Model::ExecStrategyRequest& request, const ExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecStrategyOutcomeCallable execStrategyCallable(const Model::ExecStrategyRequest& request) const;
			ExportRecordOutcome exportRecord(const Model::ExportRecordRequest &request)const;
			void exportRecordAsync(const Model::ExportRecordRequest& request, const ExportRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportRecordOutcomeCallable exportRecordCallable(const Model::ExportRecordRequest& request) const;
			ExportSuspEventsOutcome exportSuspEvents(const Model::ExportSuspEventsRequest &request)const;
			void exportSuspEventsAsync(const Model::ExportSuspEventsRequest& request, const ExportSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportSuspEventsOutcomeCallable exportSuspEventsCallable(const Model::ExportSuspEventsRequest& request) const;
			ExportVulOutcome exportVul(const Model::ExportVulRequest &request)const;
			void exportVulAsync(const Model::ExportVulRequest& request, const ExportVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportVulOutcomeCallable exportVulCallable(const Model::ExportVulRequest& request) const;
			ExportWarningOutcome exportWarning(const Model::ExportWarningRequest &request)const;
			void exportWarningAsync(const Model::ExportWarningRequest& request, const ExportWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportWarningOutcomeCallable exportWarningCallable(const Model::ExportWarningRequest& request) const;
			FindContainerNetworkConnectOutcome findContainerNetworkConnect(const Model::FindContainerNetworkConnectRequest &request)const;
			void findContainerNetworkConnectAsync(const Model::FindContainerNetworkConnectRequest& request, const FindContainerNetworkConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindContainerNetworkConnectOutcomeCallable findContainerNetworkConnectCallable(const Model::FindContainerNetworkConnectRequest& request) const;
			FixCheckWarningsOutcome fixCheckWarnings(const Model::FixCheckWarningsRequest &request)const;
			void fixCheckWarningsAsync(const Model::FixCheckWarningsRequest& request, const FixCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FixCheckWarningsOutcomeCallable fixCheckWarningsCallable(const Model::FixCheckWarningsRequest& request) const;
			GenerateOnceTaskOutcome generateOnceTask(const Model::GenerateOnceTaskRequest &request)const;
			void generateOnceTaskAsync(const Model::GenerateOnceTaskRequest& request, const GenerateOnceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateOnceTaskOutcomeCallable generateOnceTaskCallable(const Model::GenerateOnceTaskRequest& request) const;
			GetAgentlessTaskCountOutcome getAgentlessTaskCount(const Model::GetAgentlessTaskCountRequest &request)const;
			void getAgentlessTaskCountAsync(const Model::GetAgentlessTaskCountRequest& request, const GetAgentlessTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAgentlessTaskCountOutcomeCallable getAgentlessTaskCountCallable(const Model::GetAgentlessTaskCountRequest& request) const;
			GetAlarmMachineCountOutcome getAlarmMachineCount(const Model::GetAlarmMachineCountRequest &request)const;
			void getAlarmMachineCountAsync(const Model::GetAlarmMachineCountRequest& request, const GetAlarmMachineCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAlarmMachineCountOutcomeCallable getAlarmMachineCountCallable(const Model::GetAlarmMachineCountRequest& request) const;
			GetAppNetworkOutcome getAppNetwork(const Model::GetAppNetworkRequest &request)const;
			void getAppNetworkAsync(const Model::GetAppNetworkRequest& request, const GetAppNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppNetworkOutcomeCallable getAppNetworkCallable(const Model::GetAppNetworkRequest& request) const;
			GetAssetDetailByUuidOutcome getAssetDetailByUuid(const Model::GetAssetDetailByUuidRequest &request)const;
			void getAssetDetailByUuidAsync(const Model::GetAssetDetailByUuidRequest& request, const GetAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAssetDetailByUuidOutcomeCallable getAssetDetailByUuidCallable(const Model::GetAssetDetailByUuidRequest& request) const;
			GetAssetSelectionConfigOutcome getAssetSelectionConfig(const Model::GetAssetSelectionConfigRequest &request)const;
			void getAssetSelectionConfigAsync(const Model::GetAssetSelectionConfigRequest& request, const GetAssetSelectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAssetSelectionConfigOutcomeCallable getAssetSelectionConfigCallable(const Model::GetAssetSelectionConfigRequest& request) const;
			GetAssetsPropertyDetailOutcome getAssetsPropertyDetail(const Model::GetAssetsPropertyDetailRequest &request)const;
			void getAssetsPropertyDetailAsync(const Model::GetAssetsPropertyDetailRequest& request, const GetAssetsPropertyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAssetsPropertyDetailOutcomeCallable getAssetsPropertyDetailCallable(const Model::GetAssetsPropertyDetailRequest& request) const;
			GetAssetsPropertyItemOutcome getAssetsPropertyItem(const Model::GetAssetsPropertyItemRequest &request)const;
			void getAssetsPropertyItemAsync(const Model::GetAssetsPropertyItemRequest& request, const GetAssetsPropertyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAssetsPropertyItemOutcomeCallable getAssetsPropertyItemCallable(const Model::GetAssetsPropertyItemRequest& request) const;
			GetBackupStorageCountOutcome getBackupStorageCount(const Model::GetBackupStorageCountRequest &request)const;
			void getBackupStorageCountAsync(const Model::GetBackupStorageCountRequest& request, const GetBackupStorageCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBackupStorageCountOutcomeCallable getBackupStorageCountCallable(const Model::GetBackupStorageCountRequest& request) const;
			GetCheckConfigOutcome getCheckConfig(const Model::GetCheckConfigRequest &request)const;
			void getCheckConfigAsync(const Model::GetCheckConfigRequest& request, const GetCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckConfigOutcomeCallable getCheckConfigCallable(const Model::GetCheckConfigRequest& request) const;
			GetCheckDetailOutcome getCheckDetail(const Model::GetCheckDetailRequest &request)const;
			void getCheckDetailAsync(const Model::GetCheckDetailRequest& request, const GetCheckDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckDetailOutcomeCallable getCheckDetailCallable(const Model::GetCheckDetailRequest& request) const;
			GetCheckProcessOutcome getCheckProcess(const Model::GetCheckProcessRequest &request)const;
			void getCheckProcessAsync(const Model::GetCheckProcessRequest& request, const GetCheckProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckProcessOutcomeCallable getCheckProcessCallable(const Model::GetCheckProcessRequest& request) const;
			GetCheckRiskStatisticsOutcome getCheckRiskStatistics(const Model::GetCheckRiskStatisticsRequest &request)const;
			void getCheckRiskStatisticsAsync(const Model::GetCheckRiskStatisticsRequest& request, const GetCheckRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckRiskStatisticsOutcomeCallable getCheckRiskStatisticsCallable(const Model::GetCheckRiskStatisticsRequest& request) const;
			GetCheckSummaryOutcome getCheckSummary(const Model::GetCheckSummaryRequest &request)const;
			void getCheckSummaryAsync(const Model::GetCheckSummaryRequest& request, const GetCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckSummaryOutcomeCallable getCheckSummaryCallable(const Model::GetCheckSummaryRequest& request) const;
			GetClientRatioStatisticOutcome getClientRatioStatistic(const Model::GetClientRatioStatisticRequest &request)const;
			void getClientRatioStatisticAsync(const Model::GetClientRatioStatisticRequest& request, const GetClientRatioStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClientRatioStatisticOutcomeCallable getClientRatioStatisticCallable(const Model::GetClientRatioStatisticRequest& request) const;
			GetClientUserDefineRuleOutcome getClientUserDefineRule(const Model::GetClientUserDefineRuleRequest &request)const;
			void getClientUserDefineRuleAsync(const Model::GetClientUserDefineRuleRequest& request, const GetClientUserDefineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClientUserDefineRuleOutcomeCallable getClientUserDefineRuleCallable(const Model::GetClientUserDefineRuleRequest& request) const;
			GetCloudAssetCriteriaOutcome getCloudAssetCriteria(const Model::GetCloudAssetCriteriaRequest &request)const;
			void getCloudAssetCriteriaAsync(const Model::GetCloudAssetCriteriaRequest& request, const GetCloudAssetCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudAssetCriteriaOutcomeCallable getCloudAssetCriteriaCallable(const Model::GetCloudAssetCriteriaRequest& request) const;
			GetCloudAssetDetailOutcome getCloudAssetDetail(const Model::GetCloudAssetDetailRequest &request)const;
			void getCloudAssetDetailAsync(const Model::GetCloudAssetDetailRequest& request, const GetCloudAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudAssetDetailOutcomeCallable getCloudAssetDetailCallable(const Model::GetCloudAssetDetailRequest& request) const;
			GetCloudAssetSummaryOutcome getCloudAssetSummary(const Model::GetCloudAssetSummaryRequest &request)const;
			void getCloudAssetSummaryAsync(const Model::GetCloudAssetSummaryRequest& request, const GetCloudAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudAssetSummaryOutcomeCallable getCloudAssetSummaryCallable(const Model::GetCloudAssetSummaryRequest& request) const;
			GetClusterCheckItemWarningStatisticsOutcome getClusterCheckItemWarningStatistics(const Model::GetClusterCheckItemWarningStatisticsRequest &request)const;
			void getClusterCheckItemWarningStatisticsAsync(const Model::GetClusterCheckItemWarningStatisticsRequest& request, const GetClusterCheckItemWarningStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterCheckItemWarningStatisticsOutcomeCallable getClusterCheckItemWarningStatisticsCallable(const Model::GetClusterCheckItemWarningStatisticsRequest& request) const;
			GetClusterRuleSummaryOutcome getClusterRuleSummary(const Model::GetClusterRuleSummaryRequest &request)const;
			void getClusterRuleSummaryAsync(const Model::GetClusterRuleSummaryRequest& request, const GetClusterRuleSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterRuleSummaryOutcomeCallable getClusterRuleSummaryCallable(const Model::GetClusterRuleSummaryRequest& request) const;
			GetClusterSuspEventStatisticsOutcome getClusterSuspEventStatistics(const Model::GetClusterSuspEventStatisticsRequest &request)const;
			void getClusterSuspEventStatisticsAsync(const Model::GetClusterSuspEventStatisticsRequest& request, const GetClusterSuspEventStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterSuspEventStatisticsOutcomeCallable getClusterSuspEventStatisticsCallable(const Model::GetClusterSuspEventStatisticsRequest& request) const;
			GetFileDetectApiInvokeInfoOutcome getFileDetectApiInvokeInfo(const Model::GetFileDetectApiInvokeInfoRequest &request)const;
			void getFileDetectApiInvokeInfoAsync(const Model::GetFileDetectApiInvokeInfoRequest& request, const GetFileDetectApiInvokeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileDetectApiInvokeInfoOutcomeCallable getFileDetectApiInvokeInfoCallable(const Model::GetFileDetectApiInvokeInfoRequest& request) const;
			GetFileDetectResultOutcome getFileDetectResult(const Model::GetFileDetectResultRequest &request)const;
			void getFileDetectResultAsync(const Model::GetFileDetectResultRequest& request, const GetFileDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileDetectResultOutcomeCallable getFileDetectResultCallable(const Model::GetFileDetectResultRequest& request) const;
			GetHoneypotNodeOutcome getHoneypotNode(const Model::GetHoneypotNodeRequest &request)const;
			void getHoneypotNodeAsync(const Model::GetHoneypotNodeRequest& request, const GetHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHoneypotNodeOutcomeCallable getHoneypotNodeCallable(const Model::GetHoneypotNodeRequest& request) const;
			GetHoneypotPresetOutcome getHoneypotPreset(const Model::GetHoneypotPresetRequest &request)const;
			void getHoneypotPresetAsync(const Model::GetHoneypotPresetRequest& request, const GetHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHoneypotPresetOutcomeCallable getHoneypotPresetCallable(const Model::GetHoneypotPresetRequest& request) const;
			GetHoneypotProbeOutcome getHoneypotProbe(const Model::GetHoneypotProbeRequest &request)const;
			void getHoneypotProbeAsync(const Model::GetHoneypotProbeRequest& request, const GetHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHoneypotProbeOutcomeCallable getHoneypotProbeCallable(const Model::GetHoneypotProbeRequest& request) const;
			GetImageScanNumInPeriodOutcome getImageScanNumInPeriod(const Model::GetImageScanNumInPeriodRequest &request)const;
			void getImageScanNumInPeriodAsync(const Model::GetImageScanNumInPeriodRequest& request, const GetImageScanNumInPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageScanNumInPeriodOutcomeCallable getImageScanNumInPeriodCallable(const Model::GetImageScanNumInPeriodRequest& request) const;
			GetInterceptionRuleDetailOutcome getInterceptionRuleDetail(const Model::GetInterceptionRuleDetailRequest &request)const;
			void getInterceptionRuleDetailAsync(const Model::GetInterceptionRuleDetailRequest& request, const GetInterceptionRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInterceptionRuleDetailOutcomeCallable getInterceptionRuleDetailCallable(const Model::GetInterceptionRuleDetailRequest& request) const;
			GetInterceptionSummaryOutcome getInterceptionSummary(const Model::GetInterceptionSummaryRequest &request)const;
			void getInterceptionSummaryAsync(const Model::GetInterceptionSummaryRequest& request, const GetInterceptionSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInterceptionSummaryOutcomeCallable getInterceptionSummaryCallable(const Model::GetInterceptionSummaryRequest& request) const;
			GetInterceptionTargetDetailOutcome getInterceptionTargetDetail(const Model::GetInterceptionTargetDetailRequest &request)const;
			void getInterceptionTargetDetailAsync(const Model::GetInterceptionTargetDetailRequest& request, const GetInterceptionTargetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInterceptionTargetDetailOutcomeCallable getInterceptionTargetDetailCallable(const Model::GetInterceptionTargetDetailRequest& request) const;
			GetLastOnceTaskInfoOutcome getLastOnceTaskInfo(const Model::GetLastOnceTaskInfoRequest &request)const;
			void getLastOnceTaskInfoAsync(const Model::GetLastOnceTaskInfoRequest& request, const GetLastOnceTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLastOnceTaskInfoOutcomeCallable getLastOnceTaskInfoCallable(const Model::GetLastOnceTaskInfoRequest& request) const;
			GetModuleConfigOutcome getModuleConfig(const Model::GetModuleConfigRequest &request)const;
			void getModuleConfigAsync(const Model::GetModuleConfigRequest& request, const GetModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModuleConfigOutcomeCallable getModuleConfigCallable(const Model::GetModuleConfigRequest& request) const;
			GetOnceTaskResultInfoOutcome getOnceTaskResultInfo(const Model::GetOnceTaskResultInfoRequest &request)const;
			void getOnceTaskResultInfoAsync(const Model::GetOnceTaskResultInfoRequest& request, const GetOnceTaskResultInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOnceTaskResultInfoOutcomeCallable getOnceTaskResultInfoCallable(const Model::GetOnceTaskResultInfoRequest& request) const;
			GetPropertyScheduleConfigOutcome getPropertyScheduleConfig(const Model::GetPropertyScheduleConfigRequest &request)const;
			void getPropertyScheduleConfigAsync(const Model::GetPropertyScheduleConfigRequest& request, const GetPropertyScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPropertyScheduleConfigOutcomeCallable getPropertyScheduleConfigCallable(const Model::GetPropertyScheduleConfigRequest& request) const;
			GetRulesCountOutcome getRulesCount(const Model::GetRulesCountRequest &request)const;
			void getRulesCountAsync(const Model::GetRulesCountRequest& request, const GetRulesCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRulesCountOutcomeCallable getRulesCountCallable(const Model::GetRulesCountRequest& request) const;
			GetServiceTrailOutcome getServiceTrail(const Model::GetServiceTrailRequest &request)const;
			void getServiceTrailAsync(const Model::GetServiceTrailRequest& request, const GetServiceTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceTrailOutcomeCallable getServiceTrailCallable(const Model::GetServiceTrailRequest& request) const;
			GetSuspiciousStatisticsOutcome getSuspiciousStatistics(const Model::GetSuspiciousStatisticsRequest &request)const;
			void getSuspiciousStatisticsAsync(const Model::GetSuspiciousStatisticsRequest& request, const GetSuspiciousStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSuspiciousStatisticsOutcomeCallable getSuspiciousStatisticsCallable(const Model::GetSuspiciousStatisticsRequest& request) const;
			GetVulStatisticsOutcome getVulStatistics(const Model::GetVulStatisticsRequest &request)const;
			void getVulStatisticsAsync(const Model::GetVulStatisticsRequest& request, const GetVulStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVulStatisticsOutcomeCallable getVulStatisticsCallable(const Model::GetVulStatisticsRequest& request) const;
			GetVulWhitelistOutcome getVulWhitelist(const Model::GetVulWhitelistRequest &request)const;
			void getVulWhitelistAsync(const Model::GetVulWhitelistRequest& request, const GetVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVulWhitelistOutcomeCallable getVulWhitelistCallable(const Model::GetVulWhitelistRequest& request) const;
			HandleSecurityEventsOutcome handleSecurityEvents(const Model::HandleSecurityEventsRequest &request)const;
			void handleSecurityEventsAsync(const Model::HandleSecurityEventsRequest& request, const HandleSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HandleSecurityEventsOutcomeCallable handleSecurityEventsCallable(const Model::HandleSecurityEventsRequest& request) const;
			HandleSimilarSecurityEventsOutcome handleSimilarSecurityEvents(const Model::HandleSimilarSecurityEventsRequest &request)const;
			void handleSimilarSecurityEventsAsync(const Model::HandleSimilarSecurityEventsRequest& request, const HandleSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HandleSimilarSecurityEventsOutcomeCallable handleSimilarSecurityEventsCallable(const Model::HandleSimilarSecurityEventsRequest& request) const;
			IgnoreCheckItemsOutcome ignoreCheckItems(const Model::IgnoreCheckItemsRequest &request)const;
			void ignoreCheckItemsAsync(const Model::IgnoreCheckItemsRequest& request, const IgnoreCheckItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IgnoreCheckItemsOutcomeCallable ignoreCheckItemsCallable(const Model::IgnoreCheckItemsRequest& request) const;
			IgnoreHcCheckWarningsOutcome ignoreHcCheckWarnings(const Model::IgnoreHcCheckWarningsRequest &request)const;
			void ignoreHcCheckWarningsAsync(const Model::IgnoreHcCheckWarningsRequest& request, const IgnoreHcCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IgnoreHcCheckWarningsOutcomeCallable ignoreHcCheckWarningsCallable(const Model::IgnoreHcCheckWarningsRequest& request) const;
			InstallBackupClientOutcome installBackupClient(const Model::InstallBackupClientRequest &request)const;
			void installBackupClientAsync(const Model::InstallBackupClientRequest& request, const InstallBackupClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallBackupClientOutcomeCallable installBackupClientCallable(const Model::InstallBackupClientRequest& request) const;
			InstallCloudMonitorOutcome installCloudMonitor(const Model::InstallCloudMonitorRequest &request)const;
			void installCloudMonitorAsync(const Model::InstallCloudMonitorRequest& request, const InstallCloudMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallCloudMonitorOutcomeCallable installCloudMonitorCallable(const Model::InstallCloudMonitorRequest& request) const;
			InstallPmAgentOutcome installPmAgent(const Model::InstallPmAgentRequest &request)const;
			void installPmAgentAsync(const Model::InstallPmAgentRequest& request, const InstallPmAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallPmAgentOutcomeCallable installPmAgentCallable(const Model::InstallPmAgentRequest& request) const;
			InstallUniBackupAgentOutcome installUniBackupAgent(const Model::InstallUniBackupAgentRequest &request)const;
			void installUniBackupAgentAsync(const Model::InstallUniBackupAgentRequest& request, const InstallUniBackupAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallUniBackupAgentOutcomeCallable installUniBackupAgentCallable(const Model::InstallUniBackupAgentRequest& request) const;
			JoinWebLockProcessWhiteListOutcome joinWebLockProcessWhiteList(const Model::JoinWebLockProcessWhiteListRequest &request)const;
			void joinWebLockProcessWhiteListAsync(const Model::JoinWebLockProcessWhiteListRequest& request, const JoinWebLockProcessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinWebLockProcessWhiteListOutcomeCallable joinWebLockProcessWhiteListCallable(const Model::JoinWebLockProcessWhiteListRequest& request) const;
			ListAgentlessRegionOutcome listAgentlessRegion(const Model::ListAgentlessRegionRequest &request)const;
			void listAgentlessRegionAsync(const Model::ListAgentlessRegionRequest& request, const ListAgentlessRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentlessRegionOutcomeCallable listAgentlessRegionCallable(const Model::ListAgentlessRegionRequest& request) const;
			ListAgentlessRelateMaliciousOutcome listAgentlessRelateMalicious(const Model::ListAgentlessRelateMaliciousRequest &request)const;
			void listAgentlessRelateMaliciousAsync(const Model::ListAgentlessRelateMaliciousRequest& request, const ListAgentlessRelateMaliciousAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentlessRelateMaliciousOutcomeCallable listAgentlessRelateMaliciousCallable(const Model::ListAgentlessRelateMaliciousRequest& request) const;
			ListAgentlessRiskUuidOutcome listAgentlessRiskUuid(const Model::ListAgentlessRiskUuidRequest &request)const;
			void listAgentlessRiskUuidAsync(const Model::ListAgentlessRiskUuidRequest& request, const ListAgentlessRiskUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentlessRiskUuidOutcomeCallable listAgentlessRiskUuidCallable(const Model::ListAgentlessRiskUuidRequest& request) const;
			ListAgentlessTaskOutcome listAgentlessTask(const Model::ListAgentlessTaskRequest &request)const;
			void listAgentlessTaskAsync(const Model::ListAgentlessTaskRequest& request, const ListAgentlessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentlessTaskOutcomeCallable listAgentlessTaskCallable(const Model::ListAgentlessTaskRequest& request) const;
			ListAssetRefreshTaskConfigOutcome listAssetRefreshTaskConfig(const Model::ListAssetRefreshTaskConfigRequest &request)const;
			void listAssetRefreshTaskConfigAsync(const Model::ListAssetRefreshTaskConfigRequest& request, const ListAssetRefreshTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAssetRefreshTaskConfigOutcomeCallable listAssetRefreshTaskConfigCallable(const Model::ListAssetRefreshTaskConfigRequest& request) const;
			ListAssetSelectionSelectedTargetOutcome listAssetSelectionSelectedTarget(const Model::ListAssetSelectionSelectedTargetRequest &request)const;
			void listAssetSelectionSelectedTargetAsync(const Model::ListAssetSelectionSelectedTargetRequest& request, const ListAssetSelectionSelectedTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAssetSelectionSelectedTargetOutcomeCallable listAssetSelectionSelectedTargetCallable(const Model::ListAssetSelectionSelectedTargetRequest& request) const;
			ListAssetSelectionTargetOutcome listAssetSelectionTarget(const Model::ListAssetSelectionTargetRequest &request)const;
			void listAssetSelectionTargetAsync(const Model::ListAssetSelectionTargetRequest& request, const ListAssetSelectionTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAssetSelectionTargetOutcomeCallable listAssetSelectionTargetCallable(const Model::ListAssetSelectionTargetRequest& request) const;
			ListAvailableHoneypotOutcome listAvailableHoneypot(const Model::ListAvailableHoneypotRequest &request)const;
			void listAvailableHoneypotAsync(const Model::ListAvailableHoneypotRequest& request, const ListAvailableHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableHoneypotOutcomeCallable listAvailableHoneypotCallable(const Model::ListAvailableHoneypotRequest& request) const;
			ListCheckInstanceResultOutcome listCheckInstanceResult(const Model::ListCheckInstanceResultRequest &request)const;
			void listCheckInstanceResultAsync(const Model::ListCheckInstanceResultRequest& request, const ListCheckInstanceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckInstanceResultOutcomeCallable listCheckInstanceResultCallable(const Model::ListCheckInstanceResultRequest& request) const;
			ListCheckItemWarningMachineOutcome listCheckItemWarningMachine(const Model::ListCheckItemWarningMachineRequest &request)const;
			void listCheckItemWarningMachineAsync(const Model::ListCheckItemWarningMachineRequest& request, const ListCheckItemWarningMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckItemWarningMachineOutcomeCallable listCheckItemWarningMachineCallable(const Model::ListCheckItemWarningMachineRequest& request) const;
			ListCheckItemWarningSummaryOutcome listCheckItemWarningSummary(const Model::ListCheckItemWarningSummaryRequest &request)const;
			void listCheckItemWarningSummaryAsync(const Model::ListCheckItemWarningSummaryRequest& request, const ListCheckItemWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckItemWarningSummaryOutcomeCallable listCheckItemWarningSummaryCallable(const Model::ListCheckItemWarningSummaryRequest& request) const;
			ListCheckResultOutcome listCheckResult(const Model::ListCheckResultRequest &request)const;
			void listCheckResultAsync(const Model::ListCheckResultRequest& request, const ListCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckResultOutcomeCallable listCheckResultCallable(const Model::ListCheckResultRequest& request) const;
			ListCheckStandardOutcome listCheckStandard(const Model::ListCheckStandardRequest &request)const;
			void listCheckStandardAsync(const Model::ListCheckStandardRequest& request, const ListCheckStandardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckStandardOutcomeCallable listCheckStandardCallable(const Model::ListCheckStandardRequest& request) const;
			ListClientUserDefineRuleTypesOutcome listClientUserDefineRuleTypes(const Model::ListClientUserDefineRuleTypesRequest &request)const;
			void listClientUserDefineRuleTypesAsync(const Model::ListClientUserDefineRuleTypesRequest& request, const ListClientUserDefineRuleTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClientUserDefineRuleTypesOutcomeCallable listClientUserDefineRuleTypesCallable(const Model::ListClientUserDefineRuleTypesRequest& request) const;
			ListClientUserDefineRulesOutcome listClientUserDefineRules(const Model::ListClientUserDefineRulesRequest &request)const;
			void listClientUserDefineRulesAsync(const Model::ListClientUserDefineRulesRequest& request, const ListClientUserDefineRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClientUserDefineRulesOutcomeCallable listClientUserDefineRulesCallable(const Model::ListClientUserDefineRulesRequest& request) const;
			ListCloudAssetInstancesOutcome listCloudAssetInstances(const Model::ListCloudAssetInstancesRequest &request)const;
			void listCloudAssetInstancesAsync(const Model::ListCloudAssetInstancesRequest& request, const ListCloudAssetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCloudAssetInstancesOutcomeCallable listCloudAssetInstancesCallable(const Model::ListCloudAssetInstancesRequest& request) const;
			ListClusterCnnfStatusDetailOutcome listClusterCnnfStatusDetail(const Model::ListClusterCnnfStatusDetailRequest &request)const;
			void listClusterCnnfStatusDetailAsync(const Model::ListClusterCnnfStatusDetailRequest& request, const ListClusterCnnfStatusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterCnnfStatusDetailOutcomeCallable listClusterCnnfStatusDetailCallable(const Model::ListClusterCnnfStatusDetailRequest& request) const;
			ListClusterInterceptionConfigOutcome listClusterInterceptionConfig(const Model::ListClusterInterceptionConfigRequest &request)const;
			void listClusterInterceptionConfigAsync(const Model::ListClusterInterceptionConfigRequest& request, const ListClusterInterceptionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterInterceptionConfigOutcomeCallable listClusterInterceptionConfigCallable(const Model::ListClusterInterceptionConfigRequest& request) const;
			ListHoneypotOutcome listHoneypot(const Model::ListHoneypotRequest &request)const;
			void listHoneypotAsync(const Model::ListHoneypotRequest& request, const ListHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHoneypotOutcomeCallable listHoneypotCallable(const Model::ListHoneypotRequest& request) const;
			ListHoneypotAlarmEventsOutcome listHoneypotAlarmEvents(const Model::ListHoneypotAlarmEventsRequest &request)const;
			void listHoneypotAlarmEventsAsync(const Model::ListHoneypotAlarmEventsRequest& request, const ListHoneypotAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHoneypotAlarmEventsOutcomeCallable listHoneypotAlarmEventsCallable(const Model::ListHoneypotAlarmEventsRequest& request) const;
			ListHoneypotNodeOutcome listHoneypotNode(const Model::ListHoneypotNodeRequest &request)const;
			void listHoneypotNodeAsync(const Model::ListHoneypotNodeRequest& request, const ListHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHoneypotNodeOutcomeCallable listHoneypotNodeCallable(const Model::ListHoneypotNodeRequest& request) const;
			ListHoneypotPresetOutcome listHoneypotPreset(const Model::ListHoneypotPresetRequest &request)const;
			void listHoneypotPresetAsync(const Model::ListHoneypotPresetRequest& request, const ListHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHoneypotPresetOutcomeCallable listHoneypotPresetCallable(const Model::ListHoneypotPresetRequest& request) const;
			ListHoneypotProbeOutcome listHoneypotProbe(const Model::ListHoneypotProbeRequest &request)const;
			void listHoneypotProbeAsync(const Model::ListHoneypotProbeRequest& request, const ListHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHoneypotProbeOutcomeCallable listHoneypotProbeCallable(const Model::ListHoneypotProbeRequest& request) const;
			ListImageRegistryRegionOutcome listImageRegistryRegion(const Model::ListImageRegistryRegionRequest &request)const;
			void listImageRegistryRegionAsync(const Model::ListImageRegistryRegionRequest& request, const ListImageRegistryRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImageRegistryRegionOutcomeCallable listImageRegistryRegionCallable(const Model::ListImageRegistryRegionRequest& request) const;
			ListImageRiskOutcome listImageRisk(const Model::ListImageRiskRequest &request)const;
			void listImageRiskAsync(const Model::ListImageRiskRequest& request, const ListImageRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImageRiskOutcomeCallable listImageRiskCallable(const Model::ListImageRiskRequest& request) const;
			ListInstanceCatalogOutcome listInstanceCatalog(const Model::ListInstanceCatalogRequest &request)const;
			void listInstanceCatalogAsync(const Model::ListInstanceCatalogRequest& request, const ListInstanceCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceCatalogOutcomeCallable listInstanceCatalogCallable(const Model::ListInstanceCatalogRequest& request) const;
			ListInterceptionHistoryOutcome listInterceptionHistory(const Model::ListInterceptionHistoryRequest &request)const;
			void listInterceptionHistoryAsync(const Model::ListInterceptionHistoryRequest& request, const ListInterceptionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInterceptionHistoryOutcomeCallable listInterceptionHistoryCallable(const Model::ListInterceptionHistoryRequest& request) const;
			ListInterceptionRulePageOutcome listInterceptionRulePage(const Model::ListInterceptionRulePageRequest &request)const;
			void listInterceptionRulePageAsync(const Model::ListInterceptionRulePageRequest& request, const ListInterceptionRulePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInterceptionRulePageOutcomeCallable listInterceptionRulePageCallable(const Model::ListInterceptionRulePageRequest& request) const;
			ListInterceptionTargetPageOutcome listInterceptionTargetPage(const Model::ListInterceptionTargetPageRequest &request)const;
			void listInterceptionTargetPageAsync(const Model::ListInterceptionTargetPageRequest& request, const ListInterceptionTargetPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInterceptionTargetPageOutcomeCallable listInterceptionTargetPageCallable(const Model::ListInterceptionTargetPageRequest& request) const;
			ListPluginForUuidOutcome listPluginForUuid(const Model::ListPluginForUuidRequest &request)const;
			void listPluginForUuidAsync(const Model::ListPluginForUuidRequest& request, const ListPluginForUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPluginForUuidOutcomeCallable listPluginForUuidCallable(const Model::ListPluginForUuidRequest& request) const;
			ListPodRiskOutcome listPodRisk(const Model::ListPodRiskRequest &request)const;
			void listPodRiskAsync(const Model::ListPodRiskRequest& request, const ListPodRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPodRiskOutcomeCallable listPodRiskCallable(const Model::ListPodRiskRequest& request) const;
			ListPrivateRegistryListOutcome listPrivateRegistryList(const Model::ListPrivateRegistryListRequest &request)const;
			void listPrivateRegistryListAsync(const Model::ListPrivateRegistryListRequest& request, const ListPrivateRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateRegistryListOutcomeCallable listPrivateRegistryListCallable(const Model::ListPrivateRegistryListRequest& request) const;
			ListPrivateRegistryTypeOutcome listPrivateRegistryType(const Model::ListPrivateRegistryTypeRequest &request)const;
			void listPrivateRegistryTypeAsync(const Model::ListPrivateRegistryTypeRequest& request, const ListPrivateRegistryTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateRegistryTypeOutcomeCallable listPrivateRegistryTypeCallable(const Model::ListPrivateRegistryTypeRequest& request) const;
			ListQueryRaspAppInfoOutcome listQueryRaspAppInfo(const Model::ListQueryRaspAppInfoRequest &request)const;
			void listQueryRaspAppInfoAsync(const Model::ListQueryRaspAppInfoRequest& request, const ListQueryRaspAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQueryRaspAppInfoOutcomeCallable listQueryRaspAppInfoCallable(const Model::ListQueryRaspAppInfoRequest& request) const;
			ListRuleTargetAllOutcome listRuleTargetAll(const Model::ListRuleTargetAllRequest &request)const;
			void listRuleTargetAllAsync(const Model::ListRuleTargetAllRequest& request, const ListRuleTargetAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRuleTargetAllOutcomeCallable listRuleTargetAllCallable(const Model::ListRuleTargetAllRequest& request) const;
			ListSystemAggregationRulesOutcome listSystemAggregationRules(const Model::ListSystemAggregationRulesRequest &request)const;
			void listSystemAggregationRulesAsync(const Model::ListSystemAggregationRulesRequest& request, const ListSystemAggregationRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSystemAggregationRulesOutcomeCallable listSystemAggregationRulesCallable(const Model::ListSystemAggregationRulesRequest& request) const;
			ListSystemClientRuleTypesOutcome listSystemClientRuleTypes(const Model::ListSystemClientRuleTypesRequest &request)const;
			void listSystemClientRuleTypesAsync(const Model::ListSystemClientRuleTypesRequest& request, const ListSystemClientRuleTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSystemClientRuleTypesOutcomeCallable listSystemClientRuleTypesCallable(const Model::ListSystemClientRuleTypesRequest& request) const;
			ListSystemClientRulesOutcome listSystemClientRules(const Model::ListSystemClientRulesRequest &request)const;
			void listSystemClientRulesAsync(const Model::ListSystemClientRulesRequest& request, const ListSystemClientRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSystemClientRulesOutcomeCallable listSystemClientRulesCallable(const Model::ListSystemClientRulesRequest& request) const;
			ListSystemRuleAggregationTypesOutcome listSystemRuleAggregationTypes(const Model::ListSystemRuleAggregationTypesRequest &request)const;
			void listSystemRuleAggregationTypesAsync(const Model::ListSystemRuleAggregationTypesRequest& request, const ListSystemRuleAggregationTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSystemRuleAggregationTypesOutcomeCallable listSystemRuleAggregationTypesCallable(const Model::ListSystemRuleAggregationTypesRequest& request) const;
			ListUninstallAegisMachinesOutcome listUninstallAegisMachines(const Model::ListUninstallAegisMachinesRequest &request)const;
			void listUninstallAegisMachinesAsync(const Model::ListUninstallAegisMachinesRequest& request, const ListUninstallAegisMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUninstallAegisMachinesOutcomeCallable listUninstallAegisMachinesCallable(const Model::ListUninstallAegisMachinesRequest& request) const;
			ListUuidsByWebPathOutcome listUuidsByWebPath(const Model::ListUuidsByWebPathRequest &request)const;
			void listUuidsByWebPathAsync(const Model::ListUuidsByWebPathRequest& request, const ListUuidsByWebPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUuidsByWebPathOutcomeCallable listUuidsByWebPathCallable(const Model::ListUuidsByWebPathRequest& request) const;
			ListVulAutoRepairConfigOutcome listVulAutoRepairConfig(const Model::ListVulAutoRepairConfigRequest &request)const;
			void listVulAutoRepairConfigAsync(const Model::ListVulAutoRepairConfigRequest& request, const ListVulAutoRepairConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVulAutoRepairConfigOutcomeCallable listVulAutoRepairConfigCallable(const Model::ListVulAutoRepairConfigRequest& request) const;
			ModifyAccessKeyLeakDealOutcome modifyAccessKeyLeakDeal(const Model::ModifyAccessKeyLeakDealRequest &request)const;
			void modifyAccessKeyLeakDealAsync(const Model::ModifyAccessKeyLeakDealRequest& request, const ModifyAccessKeyLeakDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccessKeyLeakDealOutcomeCallable modifyAccessKeyLeakDealCallable(const Model::ModifyAccessKeyLeakDealRequest& request) const;
			ModifyAntiBruteForceRuleOutcome modifyAntiBruteForceRule(const Model::ModifyAntiBruteForceRuleRequest &request)const;
			void modifyAntiBruteForceRuleAsync(const Model::ModifyAntiBruteForceRuleRequest& request, const ModifyAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAntiBruteForceRuleOutcomeCallable modifyAntiBruteForceRuleCallable(const Model::ModifyAntiBruteForceRuleRequest& request) const;
			ModifyAppVulScanCycleOutcome modifyAppVulScanCycle(const Model::ModifyAppVulScanCycleRequest &request)const;
			void modifyAppVulScanCycleAsync(const Model::ModifyAppVulScanCycleRequest& request, const ModifyAppVulScanCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppVulScanCycleOutcomeCallable modifyAppVulScanCycleCallable(const Model::ModifyAppVulScanCycleRequest& request) const;
			ModifyAssetGroupOutcome modifyAssetGroup(const Model::ModifyAssetGroupRequest &request)const;
			void modifyAssetGroupAsync(const Model::ModifyAssetGroupRequest& request, const ModifyAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAssetGroupOutcomeCallable modifyAssetGroupCallable(const Model::ModifyAssetGroupRequest& request) const;
			ModifyAssetImportantOutcome modifyAssetImportant(const Model::ModifyAssetImportantRequest &request)const;
			void modifyAssetImportantAsync(const Model::ModifyAssetImportantRequest& request, const ModifyAssetImportantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAssetImportantOutcomeCallable modifyAssetImportantCallable(const Model::ModifyAssetImportantRequest& request) const;
			ModifyAutoDelConfigOutcome modifyAutoDelConfig(const Model::ModifyAutoDelConfigRequest &request)const;
			void modifyAutoDelConfigAsync(const Model::ModifyAutoDelConfigRequest& request, const ModifyAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoDelConfigOutcomeCallable modifyAutoDelConfigCallable(const Model::ModifyAutoDelConfigRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyBackupPolicyStatusOutcome modifyBackupPolicyStatus(const Model::ModifyBackupPolicyStatusRequest &request)const;
			void modifyBackupPolicyStatusAsync(const Model::ModifyBackupPolicyStatusRequest& request, const ModifyBackupPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyStatusOutcomeCallable modifyBackupPolicyStatusCallable(const Model::ModifyBackupPolicyStatusRequest& request) const;
			ModifyClearLogstoreStorageOutcome modifyClearLogstoreStorage(const Model::ModifyClearLogstoreStorageRequest &request)const;
			void modifyClearLogstoreStorageAsync(const Model::ModifyClearLogstoreStorageRequest& request, const ModifyClearLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClearLogstoreStorageOutcomeCallable modifyClearLogstoreStorageCallable(const Model::ModifyClearLogstoreStorageRequest& request) const;
			ModifyClientConfSetupOutcome modifyClientConfSetup(const Model::ModifyClientConfSetupRequest &request)const;
			void modifyClientConfSetupAsync(const Model::ModifyClientConfSetupRequest& request, const ModifyClientConfSetupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClientConfSetupOutcomeCallable modifyClientConfSetupCallable(const Model::ModifyClientConfSetupRequest& request) const;
			ModifyClientConfStrategyOutcome modifyClientConfStrategy(const Model::ModifyClientConfStrategyRequest &request)const;
			void modifyClientConfStrategyAsync(const Model::ModifyClientConfStrategyRequest& request, const ModifyClientConfStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClientConfStrategyOutcomeCallable modifyClientConfStrategyCallable(const Model::ModifyClientConfStrategyRequest& request) const;
			ModifyClientUserDefineRuleOutcome modifyClientUserDefineRule(const Model::ModifyClientUserDefineRuleRequest &request)const;
			void modifyClientUserDefineRuleAsync(const Model::ModifyClientUserDefineRuleRequest& request, const ModifyClientUserDefineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClientUserDefineRuleOutcomeCallable modifyClientUserDefineRuleCallable(const Model::ModifyClientUserDefineRuleRequest& request) const;
			ModifyClusterCnnfStatusUserConfirmOutcome modifyClusterCnnfStatusUserConfirm(const Model::ModifyClusterCnnfStatusUserConfirmRequest &request)const;
			void modifyClusterCnnfStatusUserConfirmAsync(const Model::ModifyClusterCnnfStatusUserConfirmRequest& request, const ModifyClusterCnnfStatusUserConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterCnnfStatusUserConfirmOutcomeCallable modifyClusterCnnfStatusUserConfirmCallable(const Model::ModifyClusterCnnfStatusUserConfirmRequest& request) const;
			ModifyConcernNecessityOutcome modifyConcernNecessity(const Model::ModifyConcernNecessityRequest &request)const;
			void modifyConcernNecessityAsync(const Model::ModifyConcernNecessityRequest& request, const ModifyConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConcernNecessityOutcomeCallable modifyConcernNecessityCallable(const Model::ModifyConcernNecessityRequest& request) const;
			ModifyCreateVulWhitelistOutcome modifyCreateVulWhitelist(const Model::ModifyCreateVulWhitelistRequest &request)const;
			void modifyCreateVulWhitelistAsync(const Model::ModifyCreateVulWhitelistRequest& request, const ModifyCreateVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCreateVulWhitelistOutcomeCallable modifyCreateVulWhitelistCallable(const Model::ModifyCreateVulWhitelistRequest& request) const;
			ModifyCustomBlockRecordOutcome modifyCustomBlockRecord(const Model::ModifyCustomBlockRecordRequest &request)const;
			void modifyCustomBlockRecordAsync(const Model::ModifyCustomBlockRecordRequest& request, const ModifyCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCustomBlockRecordOutcomeCallable modifyCustomBlockRecordCallable(const Model::ModifyCustomBlockRecordRequest& request) const;
			ModifyCycleTaskOutcome modifyCycleTask(const Model::ModifyCycleTaskRequest &request)const;
			void modifyCycleTaskAsync(const Model::ModifyCycleTaskRequest& request, const ModifyCycleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCycleTaskOutcomeCallable modifyCycleTaskCallable(const Model::ModifyCycleTaskRequest& request) const;
			ModifyEmgVulSubmitOutcome modifyEmgVulSubmit(const Model::ModifyEmgVulSubmitRequest &request)const;
			void modifyEmgVulSubmitAsync(const Model::ModifyEmgVulSubmitRequest& request, const ModifyEmgVulSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEmgVulSubmitOutcomeCallable modifyEmgVulSubmitCallable(const Model::ModifyEmgVulSubmitRequest& request) const;
			ModifyGroupPropertyOutcome modifyGroupProperty(const Model::ModifyGroupPropertyRequest &request)const;
			void modifyGroupPropertyAsync(const Model::ModifyGroupPropertyRequest& request, const ModifyGroupPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGroupPropertyOutcomeCallable modifyGroupPropertyCallable(const Model::ModifyGroupPropertyRequest& request) const;
			ModifyInstanceAntiBruteForceRuleOutcome modifyInstanceAntiBruteForceRule(const Model::ModifyInstanceAntiBruteForceRuleRequest &request)const;
			void modifyInstanceAntiBruteForceRuleAsync(const Model::ModifyInstanceAntiBruteForceRuleRequest& request, const ModifyInstanceAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAntiBruteForceRuleOutcomeCallable modifyInstanceAntiBruteForceRuleCallable(const Model::ModifyInstanceAntiBruteForceRuleRequest& request) const;
			ModifyInterceptionRuleOutcome modifyInterceptionRule(const Model::ModifyInterceptionRuleRequest &request)const;
			void modifyInterceptionRuleAsync(const Model::ModifyInterceptionRuleRequest& request, const ModifyInterceptionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInterceptionRuleOutcomeCallable modifyInterceptionRuleCallable(const Model::ModifyInterceptionRuleRequest& request) const;
			ModifyInterceptionRuleSwitchOutcome modifyInterceptionRuleSwitch(const Model::ModifyInterceptionRuleSwitchRequest &request)const;
			void modifyInterceptionRuleSwitchAsync(const Model::ModifyInterceptionRuleSwitchRequest& request, const ModifyInterceptionRuleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInterceptionRuleSwitchOutcomeCallable modifyInterceptionRuleSwitchCallable(const Model::ModifyInterceptionRuleSwitchRequest& request) const;
			ModifyInterceptionTargetOutcome modifyInterceptionTarget(const Model::ModifyInterceptionTargetRequest &request)const;
			void modifyInterceptionTargetAsync(const Model::ModifyInterceptionTargetRequest& request, const ModifyInterceptionTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInterceptionTargetOutcomeCallable modifyInterceptionTargetCallable(const Model::ModifyInterceptionTargetRequest& request) const;
			ModifyLogMetaStatusOutcome modifyLogMetaStatus(const Model::ModifyLogMetaStatusRequest &request)const;
			void modifyLogMetaStatusAsync(const Model::ModifyLogMetaStatusRequest& request, const ModifyLogMetaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLogMetaStatusOutcomeCallable modifyLogMetaStatusCallable(const Model::ModifyLogMetaStatusRequest& request) const;
			ModifyLoginBaseConfigOutcome modifyLoginBaseConfig(const Model::ModifyLoginBaseConfigRequest &request)const;
			void modifyLoginBaseConfigAsync(const Model::ModifyLoginBaseConfigRequest& request, const ModifyLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoginBaseConfigOutcomeCallable modifyLoginBaseConfigCallable(const Model::ModifyLoginBaseConfigRequest& request) const;
			ModifyLoginSwitchConfigOutcome modifyLoginSwitchConfig(const Model::ModifyLoginSwitchConfigRequest &request)const;
			void modifyLoginSwitchConfigAsync(const Model::ModifyLoginSwitchConfigRequest& request, const ModifyLoginSwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoginSwitchConfigOutcomeCallable modifyLoginSwitchConfigCallable(const Model::ModifyLoginSwitchConfigRequest& request) const;
			ModifyNoticeConfigOutcome modifyNoticeConfig(const Model::ModifyNoticeConfigRequest &request)const;
			void modifyNoticeConfigAsync(const Model::ModifyNoticeConfigRequest& request, const ModifyNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNoticeConfigOutcomeCallable modifyNoticeConfigCallable(const Model::ModifyNoticeConfigRequest& request) const;
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
			ModifyRefreshProcessInfoOutcome modifyRefreshProcessInfo(const Model::ModifyRefreshProcessInfoRequest &request)const;
			void modifyRefreshProcessInfoAsync(const Model::ModifyRefreshProcessInfoRequest& request, const ModifyRefreshProcessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRefreshProcessInfoOutcomeCallable modifyRefreshProcessInfoCallable(const Model::ModifyRefreshProcessInfoRequest& request) const;
			ModifyRiskCheckStatusOutcome modifyRiskCheckStatus(const Model::ModifyRiskCheckStatusRequest &request)const;
			void modifyRiskCheckStatusAsync(const Model::ModifyRiskCheckStatusRequest& request, const ModifyRiskCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRiskCheckStatusOutcomeCallable modifyRiskCheckStatusCallable(const Model::ModifyRiskCheckStatusRequest& request) const;
			ModifyRiskSingleResultStatusOutcome modifyRiskSingleResultStatus(const Model::ModifyRiskSingleResultStatusRequest &request)const;
			void modifyRiskSingleResultStatusAsync(const Model::ModifyRiskSingleResultStatusRequest& request, const ModifyRiskSingleResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRiskSingleResultStatusOutcomeCallable modifyRiskSingleResultStatusCallable(const Model::ModifyRiskSingleResultStatusRequest& request) const;
			ModifySecurityCheckScheduleConfigOutcome modifySecurityCheckScheduleConfig(const Model::ModifySecurityCheckScheduleConfigRequest &request)const;
			void modifySecurityCheckScheduleConfigAsync(const Model::ModifySecurityCheckScheduleConfigRequest& request, const ModifySecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityCheckScheduleConfigOutcomeCallable modifySecurityCheckScheduleConfigCallable(const Model::ModifySecurityCheckScheduleConfigRequest& request) const;
			ModifySecurityEventMarkMissIndividuallyOutcome modifySecurityEventMarkMissIndividually(const Model::ModifySecurityEventMarkMissIndividuallyRequest &request)const;
			void modifySecurityEventMarkMissIndividuallyAsync(const Model::ModifySecurityEventMarkMissIndividuallyRequest& request, const ModifySecurityEventMarkMissIndividuallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityEventMarkMissIndividuallyOutcomeCallable modifySecurityEventMarkMissIndividuallyCallable(const Model::ModifySecurityEventMarkMissIndividuallyRequest& request) const;
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
			ModifyUniBackupPolicyOutcome modifyUniBackupPolicy(const Model::ModifyUniBackupPolicyRequest &request)const;
			void modifyUniBackupPolicyAsync(const Model::ModifyUniBackupPolicyRequest& request, const ModifyUniBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUniBackupPolicyOutcomeCallable modifyUniBackupPolicyCallable(const Model::ModifyUniBackupPolicyRequest& request) const;
			ModifyVpcHoneyPotOutcome modifyVpcHoneyPot(const Model::ModifyVpcHoneyPotRequest &request)const;
			void modifyVpcHoneyPotAsync(const Model::ModifyVpcHoneyPotRequest& request, const ModifyVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpcHoneyPotOutcomeCallable modifyVpcHoneyPotCallable(const Model::ModifyVpcHoneyPotRequest& request) const;
			ModifyVulConfigOutcome modifyVulConfig(const Model::ModifyVulConfigRequest &request)const;
			void modifyVulConfigAsync(const Model::ModifyVulConfigRequest& request, const ModifyVulConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulConfigOutcomeCallable modifyVulConfigCallable(const Model::ModifyVulConfigRequest& request) const;
			ModifyVulTargetOutcome modifyVulTarget(const Model::ModifyVulTargetRequest &request)const;
			void modifyVulTargetAsync(const Model::ModifyVulTargetRequest& request, const ModifyVulTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulTargetOutcomeCallable modifyVulTargetCallable(const Model::ModifyVulTargetRequest& request) const;
			ModifyVulTargetConfigOutcome modifyVulTargetConfig(const Model::ModifyVulTargetConfigRequest &request)const;
			void modifyVulTargetConfigAsync(const Model::ModifyVulTargetConfigRequest& request, const ModifyVulTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulTargetConfigOutcomeCallable modifyVulTargetConfigCallable(const Model::ModifyVulTargetConfigRequest& request) const;
			ModifyVulWhitelistTargetOutcome modifyVulWhitelistTarget(const Model::ModifyVulWhitelistTargetRequest &request)const;
			void modifyVulWhitelistTargetAsync(const Model::ModifyVulWhitelistTargetRequest& request, const ModifyVulWhitelistTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulWhitelistTargetOutcomeCallable modifyVulWhitelistTargetCallable(const Model::ModifyVulWhitelistTargetRequest& request) const;
			ModifyWebLockCreateConfigOutcome modifyWebLockCreateConfig(const Model::ModifyWebLockCreateConfigRequest &request)const;
			void modifyWebLockCreateConfigAsync(const Model::ModifyWebLockCreateConfigRequest& request, const ModifyWebLockCreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockCreateConfigOutcomeCallable modifyWebLockCreateConfigCallable(const Model::ModifyWebLockCreateConfigRequest& request) const;
			ModifyWebLockDeleteConfigOutcome modifyWebLockDeleteConfig(const Model::ModifyWebLockDeleteConfigRequest &request)const;
			void modifyWebLockDeleteConfigAsync(const Model::ModifyWebLockDeleteConfigRequest& request, const ModifyWebLockDeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockDeleteConfigOutcomeCallable modifyWebLockDeleteConfigCallable(const Model::ModifyWebLockDeleteConfigRequest& request) const;
			ModifyWebLockProcessStatusOutcome modifyWebLockProcessStatus(const Model::ModifyWebLockProcessStatusRequest &request)const;
			void modifyWebLockProcessStatusAsync(const Model::ModifyWebLockProcessStatusRequest& request, const ModifyWebLockProcessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockProcessStatusOutcomeCallable modifyWebLockProcessStatusCallable(const Model::ModifyWebLockProcessStatusRequest& request) const;
			ModifyWebLockStartOutcome modifyWebLockStart(const Model::ModifyWebLockStartRequest &request)const;
			void modifyWebLockStartAsync(const Model::ModifyWebLockStartRequest& request, const ModifyWebLockStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockStartOutcomeCallable modifyWebLockStartCallable(const Model::ModifyWebLockStartRequest& request) const;
			ModifyWebLockStatusOutcome modifyWebLockStatus(const Model::ModifyWebLockStatusRequest &request)const;
			void modifyWebLockStatusAsync(const Model::ModifyWebLockStatusRequest& request, const ModifyWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockStatusOutcomeCallable modifyWebLockStatusCallable(const Model::ModifyWebLockStatusRequest& request) const;
			ModifyWebLockUnbindOutcome modifyWebLockUnbind(const Model::ModifyWebLockUnbindRequest &request)const;
			void modifyWebLockUnbindAsync(const Model::ModifyWebLockUnbindRequest& request, const ModifyWebLockUnbindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockUnbindOutcomeCallable modifyWebLockUnbindCallable(const Model::ModifyWebLockUnbindRequest& request) const;
			ModifyWebLockUpdateConfigOutcome modifyWebLockUpdateConfig(const Model::ModifyWebLockUpdateConfigRequest &request)const;
			void modifyWebLockUpdateConfigAsync(const Model::ModifyWebLockUpdateConfigRequest& request, const ModifyWebLockUpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockUpdateConfigOutcomeCallable modifyWebLockUpdateConfigCallable(const Model::ModifyWebLockUpdateConfigRequest& request) const;
			ModifyWebPathOutcome modifyWebPath(const Model::ModifyWebPathRequest &request)const;
			void modifyWebPathAsync(const Model::ModifyWebPathRequest& request, const ModifyWebPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebPathOutcomeCallable modifyWebPathCallable(const Model::ModifyWebPathRequest& request) const;
			OpenSensitiveFileScanOutcome openSensitiveFileScan(const Model::OpenSensitiveFileScanRequest &request)const;
			void openSensitiveFileScanAsync(const Model::OpenSensitiveFileScanRequest& request, const OpenSensitiveFileScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenSensitiveFileScanOutcomeCallable openSensitiveFileScanCallable(const Model::OpenSensitiveFileScanRequest& request) const;
			OperateAgentClientInstallOutcome operateAgentClientInstall(const Model::OperateAgentClientInstallRequest &request)const;
			void operateAgentClientInstallAsync(const Model::OperateAgentClientInstallRequest& request, const OperateAgentClientInstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateAgentClientInstallOutcomeCallable operateAgentClientInstallCallable(const Model::OperateAgentClientInstallRequest& request) const;
			OperateCommonOverallConfigOutcome operateCommonOverallConfig(const Model::OperateCommonOverallConfigRequest &request)const;
			void operateCommonOverallConfigAsync(const Model::OperateCommonOverallConfigRequest& request, const OperateCommonOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateCommonOverallConfigOutcomeCallable operateCommonOverallConfigCallable(const Model::OperateCommonOverallConfigRequest& request) const;
			OperateCommonTargetConfigOutcome operateCommonTargetConfig(const Model::OperateCommonTargetConfigRequest &request)const;
			void operateCommonTargetConfigAsync(const Model::OperateCommonTargetConfigRequest& request, const OperateCommonTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateCommonTargetConfigOutcomeCallable operateCommonTargetConfigCallable(const Model::OperateCommonTargetConfigRequest& request) const;
			OperateImageBaselineWhitelistOutcome operateImageBaselineWhitelist(const Model::OperateImageBaselineWhitelistRequest &request)const;
			void operateImageBaselineWhitelistAsync(const Model::OperateImageBaselineWhitelistRequest& request, const OperateImageBaselineWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateImageBaselineWhitelistOutcomeCallable operateImageBaselineWhitelistCallable(const Model::OperateImageBaselineWhitelistRequest& request) const;
			OperateImageVulOutcome operateImageVul(const Model::OperateImageVulRequest &request)const;
			void operateImageVulAsync(const Model::OperateImageVulRequest& request, const OperateImageVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateImageVulOutcomeCallable operateImageVulCallable(const Model::OperateImageVulRequest& request) const;
			OperateSuspiciousOverallConfigOutcome operateSuspiciousOverallConfig(const Model::OperateSuspiciousOverallConfigRequest &request)const;
			void operateSuspiciousOverallConfigAsync(const Model::OperateSuspiciousOverallConfigRequest& request, const OperateSuspiciousOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateSuspiciousOverallConfigOutcomeCallable operateSuspiciousOverallConfigCallable(const Model::OperateSuspiciousOverallConfigRequest& request) const;
			OperateSuspiciousTargetConfigOutcome operateSuspiciousTargetConfig(const Model::OperateSuspiciousTargetConfigRequest &request)const;
			void operateSuspiciousTargetConfigAsync(const Model::OperateSuspiciousTargetConfigRequest& request, const OperateSuspiciousTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateSuspiciousTargetConfigOutcomeCallable operateSuspiciousTargetConfigCallable(const Model::OperateSuspiciousTargetConfigRequest& request) const;
			OperateVirusEventsOutcome operateVirusEvents(const Model::OperateVirusEventsRequest &request)const;
			void operateVirusEventsAsync(const Model::OperateVirusEventsRequest& request, const OperateVirusEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateVirusEventsOutcomeCallable operateVirusEventsCallable(const Model::OperateVirusEventsRequest& request) const;
			OperateVulsOutcome operateVuls(const Model::OperateVulsRequest &request)const;
			void operateVulsAsync(const Model::OperateVulsRequest& request, const OperateVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateVulsOutcomeCallable operateVulsCallable(const Model::OperateVulsRequest& request) const;
			OperateWebLockFileEventsOutcome operateWebLockFileEvents(const Model::OperateWebLockFileEventsRequest &request)const;
			void operateWebLockFileEventsAsync(const Model::OperateWebLockFileEventsRequest& request, const OperateWebLockFileEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateWebLockFileEventsOutcomeCallable operateWebLockFileEventsCallable(const Model::OperateWebLockFileEventsRequest& request) const;
			OperationCancelIgnoreSuspEventOutcome operationCancelIgnoreSuspEvent(const Model::OperationCancelIgnoreSuspEventRequest &request)const;
			void operationCancelIgnoreSuspEventAsync(const Model::OperationCancelIgnoreSuspEventRequest& request, const OperationCancelIgnoreSuspEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperationCancelIgnoreSuspEventOutcomeCallable operationCancelIgnoreSuspEventCallable(const Model::OperationCancelIgnoreSuspEventRequest& request) const;
			OperationSuspEventsOutcome operationSuspEvents(const Model::OperationSuspEventsRequest &request)const;
			void operationSuspEventsAsync(const Model::OperationSuspEventsRequest& request, const OperationSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperationSuspEventsOutcomeCallable operationSuspEventsCallable(const Model::OperationSuspEventsRequest& request) const;
			PageImageRegistryOutcome pageImageRegistry(const Model::PageImageRegistryRequest &request)const;
			void pageImageRegistryAsync(const Model::PageImageRegistryRequest& request, const PageImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageImageRegistryOutcomeCallable pageImageRegistryCallable(const Model::PageImageRegistryRequest& request) const;
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
			QueryDiscoverDatabaseOutcome queryDiscoverDatabase(const Model::QueryDiscoverDatabaseRequest &request)const;
			void queryDiscoverDatabaseAsync(const Model::QueryDiscoverDatabaseRequest& request, const QueryDiscoverDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDiscoverDatabaseOutcomeCallable queryDiscoverDatabaseCallable(const Model::QueryDiscoverDatabaseRequest& request) const;
			QueryGroupIdByGroupNameOutcome queryGroupIdByGroupName(const Model::QueryGroupIdByGroupNameRequest &request)const;
			void queryGroupIdByGroupNameAsync(const Model::QueryGroupIdByGroupNameRequest& request, const QueryGroupIdByGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGroupIdByGroupNameOutcomeCallable queryGroupIdByGroupNameCallable(const Model::QueryGroupIdByGroupNameRequest& request) const;
			QueryGroupedSecurityEventMarkMissListOutcome queryGroupedSecurityEventMarkMissList(const Model::QueryGroupedSecurityEventMarkMissListRequest &request)const;
			void queryGroupedSecurityEventMarkMissListAsync(const Model::QueryGroupedSecurityEventMarkMissListRequest& request, const QueryGroupedSecurityEventMarkMissListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGroupedSecurityEventMarkMissListOutcomeCallable queryGroupedSecurityEventMarkMissListCallable(const Model::QueryGroupedSecurityEventMarkMissListRequest& request) const;
			QueryJenkinsImageRegistryPersistenceDayOutcome queryJenkinsImageRegistryPersistenceDay(const Model::QueryJenkinsImageRegistryPersistenceDayRequest &request)const;
			void queryJenkinsImageRegistryPersistenceDayAsync(const Model::QueryJenkinsImageRegistryPersistenceDayRequest& request, const QueryJenkinsImageRegistryPersistenceDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryJenkinsImageRegistryPersistenceDayOutcomeCallable queryJenkinsImageRegistryPersistenceDayCallable(const Model::QueryJenkinsImageRegistryPersistenceDayRequest& request) const;
			QueryPreCheckDatabaseOutcome queryPreCheckDatabase(const Model::QueryPreCheckDatabaseRequest &request)const;
			void queryPreCheckDatabaseAsync(const Model::QueryPreCheckDatabaseRequest& request, const QueryPreCheckDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPreCheckDatabaseOutcomeCallable queryPreCheckDatabaseCallable(const Model::QueryPreCheckDatabaseRequest& request) const;
			RebootMachineOutcome rebootMachine(const Model::RebootMachineRequest &request)const;
			void rebootMachineAsync(const Model::RebootMachineRequest& request, const RebootMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootMachineOutcomeCallable rebootMachineCallable(const Model::RebootMachineRequest& request) const;
			RefreshAssetsOutcome refreshAssets(const Model::RefreshAssetsRequest &request)const;
			void refreshAssetsAsync(const Model::RefreshAssetsRequest& request, const RefreshAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshAssetsOutcomeCallable refreshAssetsCallable(const Model::RefreshAssetsRequest& request) const;
			RefreshContainerAssetsOutcome refreshContainerAssets(const Model::RefreshContainerAssetsRequest &request)const;
			void refreshContainerAssetsAsync(const Model::RefreshContainerAssetsRequest& request, const RefreshContainerAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshContainerAssetsOutcomeCallable refreshContainerAssetsCallable(const Model::RefreshContainerAssetsRequest& request) const;
			RemoveCheckInstanceResultWhiteListOutcome removeCheckInstanceResultWhiteList(const Model::RemoveCheckInstanceResultWhiteListRequest &request)const;
			void removeCheckInstanceResultWhiteListAsync(const Model::RemoveCheckInstanceResultWhiteListRequest& request, const RemoveCheckInstanceResultWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveCheckInstanceResultWhiteListOutcomeCallable removeCheckInstanceResultWhiteListCallable(const Model::RemoveCheckInstanceResultWhiteListRequest& request) const;
			RemoveCheckResultWhiteListOutcome removeCheckResultWhiteList(const Model::RemoveCheckResultWhiteListRequest &request)const;
			void removeCheckResultWhiteListAsync(const Model::RemoveCheckResultWhiteListRequest& request, const RemoveCheckResultWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveCheckResultWhiteListOutcomeCallable removeCheckResultWhiteListCallable(const Model::RemoveCheckResultWhiteListRequest& request) const;
			RollbackSuspEventQuaraFileOutcome rollbackSuspEventQuaraFile(const Model::RollbackSuspEventQuaraFileRequest &request)const;
			void rollbackSuspEventQuaraFileAsync(const Model::RollbackSuspEventQuaraFileRequest& request, const RollbackSuspEventQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackSuspEventQuaraFileOutcomeCallable rollbackSuspEventQuaraFileCallable(const Model::RollbackSuspEventQuaraFileRequest& request) const;
			SasInstallCodeOutcome sasInstallCode(const Model::SasInstallCodeRequest &request)const;
			void sasInstallCodeAsync(const Model::SasInstallCodeRequest& request, const SasInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SasInstallCodeOutcomeCallable sasInstallCodeCallable(const Model::SasInstallCodeRequest& request) const;
			SaveImageBaselineStrategyOutcome saveImageBaselineStrategy(const Model::SaveImageBaselineStrategyRequest &request)const;
			void saveImageBaselineStrategyAsync(const Model::SaveImageBaselineStrategyRequest& request, const SaveImageBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveImageBaselineStrategyOutcomeCallable saveImageBaselineStrategyCallable(const Model::SaveImageBaselineStrategyRequest& request) const;
			SaveSuspEventUserSettingOutcome saveSuspEventUserSetting(const Model::SaveSuspEventUserSettingRequest &request)const;
			void saveSuspEventUserSettingAsync(const Model::SaveSuspEventUserSettingRequest& request, const SaveSuspEventUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSuspEventUserSettingOutcomeCallable saveSuspEventUserSettingCallable(const Model::SaveSuspEventUserSettingRequest& request) const;
			SetClusterInterceptionConfigOutcome setClusterInterceptionConfig(const Model::SetClusterInterceptionConfigRequest &request)const;
			void setClusterInterceptionConfigAsync(const Model::SetClusterInterceptionConfigRequest& request, const SetClusterInterceptionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetClusterInterceptionConfigOutcomeCallable setClusterInterceptionConfigCallable(const Model::SetClusterInterceptionConfigRequest& request) const;
			SetRegistryScanDayNumOutcome setRegistryScanDayNum(const Model::SetRegistryScanDayNumRequest &request)const;
			void setRegistryScanDayNumAsync(const Model::SetRegistryScanDayNumRequest& request, const SetRegistryScanDayNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetRegistryScanDayNumOutcomeCallable setRegistryScanDayNumCallable(const Model::SetRegistryScanDayNumRequest& request) const;
			StartBaselineSecurityCheckOutcome startBaselineSecurityCheck(const Model::StartBaselineSecurityCheckRequest &request)const;
			void startBaselineSecurityCheckAsync(const Model::StartBaselineSecurityCheckRequest& request, const StartBaselineSecurityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBaselineSecurityCheckOutcomeCallable startBaselineSecurityCheckCallable(const Model::StartBaselineSecurityCheckRequest& request) const;
			StartDiscoverDatabaseTaskOutcome startDiscoverDatabaseTask(const Model::StartDiscoverDatabaseTaskRequest &request)const;
			void startDiscoverDatabaseTaskAsync(const Model::StartDiscoverDatabaseTaskRequest& request, const StartDiscoverDatabaseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDiscoverDatabaseTaskOutcomeCallable startDiscoverDatabaseTaskCallable(const Model::StartDiscoverDatabaseTaskRequest& request) const;
			StartPreCheckDatabaseOutcome startPreCheckDatabase(const Model::StartPreCheckDatabaseRequest &request)const;
			void startPreCheckDatabaseAsync(const Model::StartPreCheckDatabaseRequest& request, const StartPreCheckDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartPreCheckDatabaseOutcomeCallable startPreCheckDatabaseCallable(const Model::StartPreCheckDatabaseRequest& request) const;
			StartVirusScanTaskOutcome startVirusScanTask(const Model::StartVirusScanTaskRequest &request)const;
			void startVirusScanTaskAsync(const Model::StartVirusScanTaskRequest& request, const StartVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartVirusScanTaskOutcomeCallable startVirusScanTaskCallable(const Model::StartVirusScanTaskRequest& request) const;
			SubmitCheckOutcome submitCheck(const Model::SubmitCheckRequest &request)const;
			void submitCheckAsync(const Model::SubmitCheckRequest& request, const SubmitCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCheckOutcomeCallable submitCheckCallable(const Model::SubmitCheckRequest& request) const;
			UnbindAegisOutcome unbindAegis(const Model::UnbindAegisRequest &request)const;
			void unbindAegisAsync(const Model::UnbindAegisRequest& request, const UnbindAegisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindAegisOutcomeCallable unbindAegisCallable(const Model::UnbindAegisRequest& request) const;
			UninstallBackupClientOutcome uninstallBackupClient(const Model::UninstallBackupClientRequest &request)const;
			void uninstallBackupClientAsync(const Model::UninstallBackupClientRequest& request, const UninstallBackupClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallBackupClientOutcomeCallable uninstallBackupClientCallable(const Model::UninstallBackupClientRequest& request) const;
			UninstallUniBackupAgentOutcome uninstallUniBackupAgent(const Model::UninstallUniBackupAgentRequest &request)const;
			void uninstallUniBackupAgentAsync(const Model::UninstallUniBackupAgentRequest& request, const UninstallUniBackupAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallUniBackupAgentOutcomeCallable uninstallUniBackupAgentCallable(const Model::UninstallUniBackupAgentRequest& request) const;
			UpdateHoneypotOutcome updateHoneypot(const Model::UpdateHoneypotRequest &request)const;
			void updateHoneypotAsync(const Model::UpdateHoneypotRequest& request, const UpdateHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHoneypotOutcomeCallable updateHoneypotCallable(const Model::UpdateHoneypotRequest& request) const;
			UpdateHoneypotNodeOutcome updateHoneypotNode(const Model::UpdateHoneypotNodeRequest &request)const;
			void updateHoneypotNodeAsync(const Model::UpdateHoneypotNodeRequest& request, const UpdateHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHoneypotNodeOutcomeCallable updateHoneypotNodeCallable(const Model::UpdateHoneypotNodeRequest& request) const;
			UpdateHoneypotPresetOutcome updateHoneypotPreset(const Model::UpdateHoneypotPresetRequest &request)const;
			void updateHoneypotPresetAsync(const Model::UpdateHoneypotPresetRequest& request, const UpdateHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHoneypotPresetOutcomeCallable updateHoneypotPresetCallable(const Model::UpdateHoneypotPresetRequest& request) const;
			UpdateHoneypotProbeOutcome updateHoneypotProbe(const Model::UpdateHoneypotProbeRequest &request)const;
			void updateHoneypotProbeAsync(const Model::UpdateHoneypotProbeRequest& request, const UpdateHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHoneypotProbeOutcomeCallable updateHoneypotProbeCallable(const Model::UpdateHoneypotProbeRequest& request) const;
			UpdateJenkinsImageRegistryNameOutcome updateJenkinsImageRegistryName(const Model::UpdateJenkinsImageRegistryNameRequest &request)const;
			void updateJenkinsImageRegistryNameAsync(const Model::UpdateJenkinsImageRegistryNameRequest& request, const UpdateJenkinsImageRegistryNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJenkinsImageRegistryNameOutcomeCallable updateJenkinsImageRegistryNameCallable(const Model::UpdateJenkinsImageRegistryNameRequest& request) const;
			UpdateJenkinsImageRegistryPersistenceDayOutcome updateJenkinsImageRegistryPersistenceDay(const Model::UpdateJenkinsImageRegistryPersistenceDayRequest &request)const;
			void updateJenkinsImageRegistryPersistenceDayAsync(const Model::UpdateJenkinsImageRegistryPersistenceDayRequest& request, const UpdateJenkinsImageRegistryPersistenceDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJenkinsImageRegistryPersistenceDayOutcomeCallable updateJenkinsImageRegistryPersistenceDayCallable(const Model::UpdateJenkinsImageRegistryPersistenceDayRequest& request) const;
			UpgradeBackupPolicyVersionOutcome upgradeBackupPolicyVersion(const Model::UpgradeBackupPolicyVersionRequest &request)const;
			void upgradeBackupPolicyVersionAsync(const Model::UpgradeBackupPolicyVersionRequest& request, const UpgradeBackupPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeBackupPolicyVersionOutcomeCallable upgradeBackupPolicyVersionCallable(const Model::UpgradeBackupPolicyVersionRequest& request) const;
			ValidateHcWarningsOutcome validateHcWarnings(const Model::ValidateHcWarningsRequest &request)const;
			void validateHcWarningsAsync(const Model::ValidateHcWarningsRequest& request, const ValidateHcWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateHcWarningsOutcomeCallable validateHcWarningsCallable(const Model::ValidateHcWarningsRequest& request) const;
			VerifyCheckInstanceResultOutcome verifyCheckInstanceResult(const Model::VerifyCheckInstanceResultRequest &request)const;
			void verifyCheckInstanceResultAsync(const Model::VerifyCheckInstanceResultRequest& request, const VerifyCheckInstanceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyCheckInstanceResultOutcomeCallable verifyCheckInstanceResultCallable(const Model::VerifyCheckInstanceResultRequest& request) const;
			VerifyCheckResultOutcome verifyCheckResult(const Model::VerifyCheckResultRequest &request)const;
			void verifyCheckResultAsync(const Model::VerifyCheckResultRequest& request, const VerifyCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyCheckResultOutcomeCallable verifyCheckResultCallable(const Model::VerifyCheckResultRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAS_SASCLIENT_H_
