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

#ifndef ALIBABACLOUD_DCDN_DCDNCLIENT_H_
#define ALIBABACLOUD_DCDN_DCDNCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DcdnExport.h"
#include "model/AddDcdnDomainRequest.h"
#include "model/AddDcdnDomainResult.h"
#include "model/AddDcdnIpaDomainRequest.h"
#include "model/AddDcdnIpaDomainResult.h"
#include "model/BatchAddDcdnDomainRequest.h"
#include "model/BatchAddDcdnDomainResult.h"
#include "model/BatchCreateDcdnWafRulesRequest.h"
#include "model/BatchCreateDcdnWafRulesResult.h"
#include "model/BatchDeleteDcdnDomainConfigsRequest.h"
#include "model/BatchDeleteDcdnDomainConfigsResult.h"
#include "model/BatchDeleteDcdnKvRequest.h"
#include "model/BatchDeleteDcdnKvResult.h"
#include "model/BatchDeleteDcdnKvWithHighCapacityRequest.h"
#include "model/BatchDeleteDcdnKvWithHighCapacityResult.h"
#include "model/BatchDeleteDcdnWafRulesRequest.h"
#include "model/BatchDeleteDcdnWafRulesResult.h"
#include "model/BatchModifyDcdnWafRulesRequest.h"
#include "model/BatchModifyDcdnWafRulesResult.h"
#include "model/BatchPutDcdnKvRequest.h"
#include "model/BatchPutDcdnKvResult.h"
#include "model/BatchPutDcdnKvWithHighCapacityRequest.h"
#include "model/BatchPutDcdnKvWithHighCapacityResult.h"
#include "model/BatchSetDcdnDomainCertificateRequest.h"
#include "model/BatchSetDcdnDomainCertificateResult.h"
#include "model/BatchSetDcdnDomainConfigsRequest.h"
#include "model/BatchSetDcdnDomainConfigsResult.h"
#include "model/BatchSetDcdnIpaDomainConfigsRequest.h"
#include "model/BatchSetDcdnIpaDomainConfigsResult.h"
#include "model/BatchSetDcdnWafDomainConfigsRequest.h"
#include "model/BatchSetDcdnWafDomainConfigsResult.h"
#include "model/BatchStartDcdnDomainRequest.h"
#include "model/BatchStartDcdnDomainResult.h"
#include "model/BatchStopDcdnDomainRequest.h"
#include "model/BatchStopDcdnDomainResult.h"
#include "model/CheckDcdnProjectExistRequest.h"
#include "model/CheckDcdnProjectExistResult.h"
#include "model/CommitStagingRoutineCodeRequest.h"
#include "model/CommitStagingRoutineCodeResult.h"
#include "model/CreateDcdnCertificateSigningRequestRequest.h"
#include "model/CreateDcdnCertificateSigningRequestResult.h"
#include "model/CreateDcdnDeliverTaskRequest.h"
#include "model/CreateDcdnDeliverTaskResult.h"
#include "model/CreateDcdnSLSRealTimeLogDeliveryRequest.h"
#include "model/CreateDcdnSLSRealTimeLogDeliveryResult.h"
#include "model/CreateDcdnSubTaskRequest.h"
#include "model/CreateDcdnSubTaskResult.h"
#include "model/CreateDcdnWafGroupRequest.h"
#include "model/CreateDcdnWafGroupResult.h"
#include "model/CreateDcdnWafPolicyRequest.h"
#include "model/CreateDcdnWafPolicyResult.h"
#include "model/CreateRoutineRequest.h"
#include "model/CreateRoutineResult.h"
#include "model/CreateSlrAndSlsProjectRequest.h"
#include "model/CreateSlrAndSlsProjectResult.h"
#include "model/DeleteDcdnDeliverTaskRequest.h"
#include "model/DeleteDcdnDeliverTaskResult.h"
#include "model/DeleteDcdnDomainRequest.h"
#include "model/DeleteDcdnDomainResult.h"
#include "model/DeleteDcdnIpaDomainRequest.h"
#include "model/DeleteDcdnIpaDomainResult.h"
#include "model/DeleteDcdnIpaSpecificConfigRequest.h"
#include "model/DeleteDcdnIpaSpecificConfigResult.h"
#include "model/DeleteDcdnKvRequest.h"
#include "model/DeleteDcdnKvResult.h"
#include "model/DeleteDcdnKvNamespaceRequest.h"
#include "model/DeleteDcdnKvNamespaceResult.h"
#include "model/DeleteDcdnRealTimeLogProjectRequest.h"
#include "model/DeleteDcdnRealTimeLogProjectResult.h"
#include "model/DeleteDcdnSpecificConfigRequest.h"
#include "model/DeleteDcdnSpecificConfigResult.h"
#include "model/DeleteDcdnSpecificStagingConfigRequest.h"
#include "model/DeleteDcdnSpecificStagingConfigResult.h"
#include "model/DeleteDcdnSubTaskRequest.h"
#include "model/DeleteDcdnSubTaskResult.h"
#include "model/DeleteDcdnUserConfigRequest.h"
#include "model/DeleteDcdnUserConfigResult.h"
#include "model/DeleteDcdnWafGroupRequest.h"
#include "model/DeleteDcdnWafGroupResult.h"
#include "model/DeleteDcdnWafPolicyRequest.h"
#include "model/DeleteDcdnWafPolicyResult.h"
#include "model/DeleteRoutineRequest.h"
#include "model/DeleteRoutineResult.h"
#include "model/DeleteRoutineCodeRevisionRequest.h"
#include "model/DeleteRoutineCodeRevisionResult.h"
#include "model/DeleteRoutineConfEnvsRequest.h"
#include "model/DeleteRoutineConfEnvsResult.h"
#include "model/DescribeDcdnAclFieldsRequest.h"
#include "model/DescribeDcdnAclFieldsResult.h"
#include "model/DescribeDcdnBgpBpsDataRequest.h"
#include "model/DescribeDcdnBgpBpsDataResult.h"
#include "model/DescribeDcdnBgpTrafficDataRequest.h"
#include "model/DescribeDcdnBgpTrafficDataResult.h"
#include "model/DescribeDcdnBlockedRegionsRequest.h"
#include "model/DescribeDcdnBlockedRegionsResult.h"
#include "model/DescribeDcdnCertificateDetailRequest.h"
#include "model/DescribeDcdnCertificateDetailResult.h"
#include "model/DescribeDcdnCertificateListRequest.h"
#include "model/DescribeDcdnCertificateListResult.h"
#include "model/DescribeDcdnDdosServiceRequest.h"
#include "model/DescribeDcdnDdosServiceResult.h"
#include "model/DescribeDcdnDdosSpecInfoRequest.h"
#include "model/DescribeDcdnDdosSpecInfoResult.h"
#include "model/DescribeDcdnDeletedDomainsRequest.h"
#include "model/DescribeDcdnDeletedDomainsResult.h"
#include "model/DescribeDcdnDeliverListRequest.h"
#include "model/DescribeDcdnDeliverListResult.h"
#include "model/DescribeDcdnDomainBpsDataRequest.h"
#include "model/DescribeDcdnDomainBpsDataResult.h"
#include "model/DescribeDcdnDomainBpsDataByLayerRequest.h"
#include "model/DescribeDcdnDomainBpsDataByLayerResult.h"
#include "model/DescribeDcdnDomainByCertificateRequest.h"
#include "model/DescribeDcdnDomainByCertificateResult.h"
#include "model/DescribeDcdnDomainCcActivityLogRequest.h"
#include "model/DescribeDcdnDomainCcActivityLogResult.h"
#include "model/DescribeDcdnDomainCertificateInfoRequest.h"
#include "model/DescribeDcdnDomainCertificateInfoResult.h"
#include "model/DescribeDcdnDomainCnameRequest.h"
#include "model/DescribeDcdnDomainCnameResult.h"
#include "model/DescribeDcdnDomainConfigsRequest.h"
#include "model/DescribeDcdnDomainConfigsResult.h"
#include "model/DescribeDcdnDomainDetailRequest.h"
#include "model/DescribeDcdnDomainDetailResult.h"
#include "model/DescribeDcdnDomainHitRateDataRequest.h"
#include "model/DescribeDcdnDomainHitRateDataResult.h"
#include "model/DescribeDcdnDomainHttpCodeDataRequest.h"
#include "model/DescribeDcdnDomainHttpCodeDataResult.h"
#include "model/DescribeDcdnDomainHttpCodeDataByLayerRequest.h"
#include "model/DescribeDcdnDomainHttpCodeDataByLayerResult.h"
#include "model/DescribeDcdnDomainIpaBpsDataRequest.h"
#include "model/DescribeDcdnDomainIpaBpsDataResult.h"
#include "model/DescribeDcdnDomainIpaConnDataRequest.h"
#include "model/DescribeDcdnDomainIpaConnDataResult.h"
#include "model/DescribeDcdnDomainIpaTrafficDataRequest.h"
#include "model/DescribeDcdnDomainIpaTrafficDataResult.h"
#include "model/DescribeDcdnDomainIspDataRequest.h"
#include "model/DescribeDcdnDomainIspDataResult.h"
#include "model/DescribeDcdnDomainLogRequest.h"
#include "model/DescribeDcdnDomainLogResult.h"
#include "model/DescribeDcdnDomainLogExTtlRequest.h"
#include "model/DescribeDcdnDomainLogExTtlResult.h"
#include "model/DescribeDcdnDomainMultiUsageDataRequest.h"
#include "model/DescribeDcdnDomainMultiUsageDataResult.h"
#include "model/DescribeDcdnDomainOriginBpsDataRequest.h"
#include "model/DescribeDcdnDomainOriginBpsDataResult.h"
#include "model/DescribeDcdnDomainOriginTrafficDataRequest.h"
#include "model/DescribeDcdnDomainOriginTrafficDataResult.h"
#include "model/DescribeDcdnDomainPropertyRequest.h"
#include "model/DescribeDcdnDomainPropertyResult.h"
#include "model/DescribeDcdnDomainPvDataRequest.h"
#include "model/DescribeDcdnDomainPvDataResult.h"
#include "model/DescribeDcdnDomainQpsDataRequest.h"
#include "model/DescribeDcdnDomainQpsDataResult.h"
#include "model/DescribeDcdnDomainQpsDataByLayerRequest.h"
#include "model/DescribeDcdnDomainQpsDataByLayerResult.h"
#include "model/DescribeDcdnDomainRealTimeBpsDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeBpsDataResult.h"
#include "model/DescribeDcdnDomainRealTimeByteHitRateDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeByteHitRateDataResult.h"
#include "model/DescribeDcdnDomainRealTimeDetailDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeDetailDataResult.h"
#include "model/DescribeDcdnDomainRealTimeHttpCodeDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeHttpCodeDataResult.h"
#include "model/DescribeDcdnDomainRealTimeQpsDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeQpsDataResult.h"
#include "model/DescribeDcdnDomainRealTimeReqHitRateDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeReqHitRateDataResult.h"
#include "model/DescribeDcdnDomainRealTimeSrcBpsDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeSrcBpsDataResult.h"
#include "model/DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeSrcHttpCodeDataResult.h"
#include "model/DescribeDcdnDomainRealTimeSrcTrafficDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeSrcTrafficDataResult.h"
#include "model/DescribeDcdnDomainRealTimeTrafficDataRequest.h"
#include "model/DescribeDcdnDomainRealTimeTrafficDataResult.h"
#include "model/DescribeDcdnDomainRegionDataRequest.h"
#include "model/DescribeDcdnDomainRegionDataResult.h"
#include "model/DescribeDcdnDomainStagingConfigRequest.h"
#include "model/DescribeDcdnDomainStagingConfigResult.h"
#include "model/DescribeDcdnDomainTopReferVisitRequest.h"
#include "model/DescribeDcdnDomainTopReferVisitResult.h"
#include "model/DescribeDcdnDomainTopUrlVisitRequest.h"
#include "model/DescribeDcdnDomainTopUrlVisitResult.h"
#include "model/DescribeDcdnDomainTrafficDataRequest.h"
#include "model/DescribeDcdnDomainTrafficDataResult.h"
#include "model/DescribeDcdnDomainUsageDataRequest.h"
#include "model/DescribeDcdnDomainUsageDataResult.h"
#include "model/DescribeDcdnDomainUvDataRequest.h"
#include "model/DescribeDcdnDomainUvDataResult.h"
#include "model/DescribeDcdnDomainWebsocketBpsDataRequest.h"
#include "model/DescribeDcdnDomainWebsocketBpsDataResult.h"
#include "model/DescribeDcdnDomainWebsocketHttpCodeDataRequest.h"
#include "model/DescribeDcdnDomainWebsocketHttpCodeDataResult.h"
#include "model/DescribeDcdnDomainWebsocketTrafficDataRequest.h"
#include "model/DescribeDcdnDomainWebsocketTrafficDataResult.h"
#include "model/DescribeDcdnDomainsBySourceRequest.h"
#include "model/DescribeDcdnDomainsBySourceResult.h"
#include "model/DescribeDcdnErUsageDataRequest.h"
#include "model/DescribeDcdnErUsageDataResult.h"
#include "model/DescribeDcdnFullDomainsBlockIPConfigRequest.h"
#include "model/DescribeDcdnFullDomainsBlockIPConfigResult.h"
#include "model/DescribeDcdnFullDomainsBlockIPHistoryRequest.h"
#include "model/DescribeDcdnFullDomainsBlockIPHistoryResult.h"
#include "model/DescribeDcdnHttpsDomainListRequest.h"
#include "model/DescribeDcdnHttpsDomainListResult.h"
#include "model/DescribeDcdnIpInfoRequest.h"
#include "model/DescribeDcdnIpInfoResult.h"
#include "model/DescribeDcdnIpaDomainCidrRequest.h"
#include "model/DescribeDcdnIpaDomainCidrResult.h"
#include "model/DescribeDcdnIpaDomainConfigsRequest.h"
#include "model/DescribeDcdnIpaDomainConfigsResult.h"
#include "model/DescribeDcdnIpaDomainDetailRequest.h"
#include "model/DescribeDcdnIpaDomainDetailResult.h"
#include "model/DescribeDcdnIpaServiceRequest.h"
#include "model/DescribeDcdnIpaServiceResult.h"
#include "model/DescribeDcdnIpaUserDomainsRequest.h"
#include "model/DescribeDcdnIpaUserDomainsResult.h"
#include "model/DescribeDcdnKvAccountRequest.h"
#include "model/DescribeDcdnKvAccountResult.h"
#include "model/DescribeDcdnKvAccountStatusRequest.h"
#include "model/DescribeDcdnKvAccountStatusResult.h"
#include "model/DescribeDcdnKvNamespaceRequest.h"
#include "model/DescribeDcdnKvNamespaceResult.h"
#include "model/DescribeDcdnL2IpsRequest.h"
#include "model/DescribeDcdnL2IpsResult.h"
#include "model/DescribeDcdnL2VipsRequest.h"
#include "model/DescribeDcdnL2VipsResult.h"
#include "model/DescribeDcdnOriginSiteHealthStatusRequest.h"
#include "model/DescribeDcdnOriginSiteHealthStatusResult.h"
#include "model/DescribeDcdnRealTimeDeliveryFieldRequest.h"
#include "model/DescribeDcdnRealTimeDeliveryFieldResult.h"
#include "model/DescribeDcdnRefreshQuotaRequest.h"
#include "model/DescribeDcdnRefreshQuotaResult.h"
#include "model/DescribeDcdnRefreshTaskByIdRequest.h"
#include "model/DescribeDcdnRefreshTaskByIdResult.h"
#include "model/DescribeDcdnRefreshTasksRequest.h"
#include "model/DescribeDcdnRefreshTasksResult.h"
#include "model/DescribeDcdnRegionAndIspRequest.h"
#include "model/DescribeDcdnRegionAndIspResult.h"
#include "model/DescribeDcdnReportRequest.h"
#include "model/DescribeDcdnReportResult.h"
#include "model/DescribeDcdnReportListRequest.h"
#include "model/DescribeDcdnReportListResult.h"
#include "model/DescribeDcdnSLSRealTimeLogTypeRequest.h"
#include "model/DescribeDcdnSLSRealTimeLogTypeResult.h"
#include "model/DescribeDcdnSLSRealtimeLogDeliveryRequest.h"
#include "model/DescribeDcdnSLSRealtimeLogDeliveryResult.h"
#include "model/DescribeDcdnSMCertificateDetailRequest.h"
#include "model/DescribeDcdnSMCertificateDetailResult.h"
#include "model/DescribeDcdnSMCertificateListRequest.h"
#include "model/DescribeDcdnSMCertificateListResult.h"
#include "model/DescribeDcdnSSLCertificateListRequest.h"
#include "model/DescribeDcdnSSLCertificateListResult.h"
#include "model/DescribeDcdnSecFuncInfoRequest.h"
#include "model/DescribeDcdnSecFuncInfoResult.h"
#include "model/DescribeDcdnSecSpecInfoRequest.h"
#include "model/DescribeDcdnSecSpecInfoResult.h"
#include "model/DescribeDcdnServiceRequest.h"
#include "model/DescribeDcdnServiceResult.h"
#include "model/DescribeDcdnStagingIpRequest.h"
#include "model/DescribeDcdnStagingIpResult.h"
#include "model/DescribeDcdnSubListRequest.h"
#include "model/DescribeDcdnSubListResult.h"
#include "model/DescribeDcdnTagResourcesRequest.h"
#include "model/DescribeDcdnTagResourcesResult.h"
#include "model/DescribeDcdnTopDomainsByFlowRequest.h"
#include "model/DescribeDcdnTopDomainsByFlowResult.h"
#include "model/DescribeDcdnUserBillHistoryRequest.h"
#include "model/DescribeDcdnUserBillHistoryResult.h"
#include "model/DescribeDcdnUserBillTypeRequest.h"
#include "model/DescribeDcdnUserBillTypeResult.h"
#include "model/DescribeDcdnUserCertificateExpireCountRequest.h"
#include "model/DescribeDcdnUserCertificateExpireCountResult.h"
#include "model/DescribeDcdnUserConfigsRequest.h"
#include "model/DescribeDcdnUserConfigsResult.h"
#include "model/DescribeDcdnUserDomainsRequest.h"
#include "model/DescribeDcdnUserDomainsResult.h"
#include "model/DescribeDcdnUserDomainsByFuncRequest.h"
#include "model/DescribeDcdnUserDomainsByFuncResult.h"
#include "model/DescribeDcdnUserQuotaRequest.h"
#include "model/DescribeDcdnUserQuotaResult.h"
#include "model/DescribeDcdnUserRealTimeDeliveryFieldRequest.h"
#include "model/DescribeDcdnUserRealTimeDeliveryFieldResult.h"
#include "model/DescribeDcdnUserResourcePackageRequest.h"
#include "model/DescribeDcdnUserResourcePackageResult.h"
#include "model/DescribeDcdnUserSecDropRequest.h"
#include "model/DescribeDcdnUserSecDropResult.h"
#include "model/DescribeDcdnUserSecDropByMinuteRequest.h"
#include "model/DescribeDcdnUserSecDropByMinuteResult.h"
#include "model/DescribeDcdnUserTagsRequest.h"
#include "model/DescribeDcdnUserTagsResult.h"
#include "model/DescribeDcdnUserVipsByDomainRequest.h"
#include "model/DescribeDcdnUserVipsByDomainResult.h"
#include "model/DescribeDcdnVerifyContentRequest.h"
#include "model/DescribeDcdnVerifyContentResult.h"
#include "model/DescribeDcdnWafBotAppKeyRequest.h"
#include "model/DescribeDcdnWafBotAppKeyResult.h"
#include "model/DescribeDcdnWafDefaultRulesRequest.h"
#include "model/DescribeDcdnWafDefaultRulesResult.h"
#include "model/DescribeDcdnWafDomainRequest.h"
#include "model/DescribeDcdnWafDomainResult.h"
#include "model/DescribeDcdnWafDomainDetailRequest.h"
#include "model/DescribeDcdnWafDomainDetailResult.h"
#include "model/DescribeDcdnWafDomainsRequest.h"
#include "model/DescribeDcdnWafDomainsResult.h"
#include "model/DescribeDcdnWafFilterInfoRequest.h"
#include "model/DescribeDcdnWafFilterInfoResult.h"
#include "model/DescribeDcdnWafGeoInfoRequest.h"
#include "model/DescribeDcdnWafGeoInfoResult.h"
#include "model/DescribeDcdnWafGroupRequest.h"
#include "model/DescribeDcdnWafGroupResult.h"
#include "model/DescribeDcdnWafGroupsRequest.h"
#include "model/DescribeDcdnWafGroupsResult.h"
#include "model/DescribeDcdnWafLogsRequest.h"
#include "model/DescribeDcdnWafLogsResult.h"
#include "model/DescribeDcdnWafPoliciesRequest.h"
#include "model/DescribeDcdnWafPoliciesResult.h"
#include "model/DescribeDcdnWafPolicyRequest.h"
#include "model/DescribeDcdnWafPolicyResult.h"
#include "model/DescribeDcdnWafPolicyDomainsRequest.h"
#include "model/DescribeDcdnWafPolicyDomainsResult.h"
#include "model/DescribeDcdnWafPolicyValidDomainsRequest.h"
#include "model/DescribeDcdnWafPolicyValidDomainsResult.h"
#include "model/DescribeDcdnWafRuleRequest.h"
#include "model/DescribeDcdnWafRuleResult.h"
#include "model/DescribeDcdnWafRulesRequest.h"
#include "model/DescribeDcdnWafRulesResult.h"
#include "model/DescribeDcdnWafScenesRequest.h"
#include "model/DescribeDcdnWafScenesResult.h"
#include "model/DescribeDcdnWafServiceRequest.h"
#include "model/DescribeDcdnWafServiceResult.h"
#include "model/DescribeDcdnWafSpecInfoRequest.h"
#include "model/DescribeDcdnWafSpecInfoResult.h"
#include "model/DescribeDcdnWafUsageDataRequest.h"
#include "model/DescribeDcdnWafUsageDataResult.h"
#include "model/DescribeDcdnsecServiceRequest.h"
#include "model/DescribeDcdnsecServiceResult.h"
#include "model/DescribeDdosAllEventListRequest.h"
#include "model/DescribeDdosAllEventListResult.h"
#include "model/DescribeEncryptRoutineUidRequest.h"
#include "model/DescribeEncryptRoutineUidResult.h"
#include "model/DescribeHighlightInfoRequest.h"
#include "model/DescribeHighlightInfoResult.h"
#include "model/DescribeKvUsageDataRequest.h"
#include "model/DescribeKvUsageDataResult.h"
#include "model/DescribeRDDomainConfigRequest.h"
#include "model/DescribeRDDomainConfigResult.h"
#include "model/DescribeRDDomainsRequest.h"
#include "model/DescribeRDDomainsResult.h"
#include "model/DescribeRoutineRequest.h"
#include "model/DescribeRoutineResult.h"
#include "model/DescribeRoutineCanaryEnvsRequest.h"
#include "model/DescribeRoutineCanaryEnvsResult.h"
#include "model/DescribeRoutineCodeRevisionRequest.h"
#include "model/DescribeRoutineCodeRevisionResult.h"
#include "model/DescribeRoutineRelatedDomainsRequest.h"
#include "model/DescribeRoutineRelatedDomainsResult.h"
#include "model/DescribeRoutineSpecRequest.h"
#include "model/DescribeRoutineSpecResult.h"
#include "model/DescribeRoutineUserInfoRequest.h"
#include "model/DescribeRoutineUserInfoResult.h"
#include "model/DescribeUserDcdnIpaStatusRequest.h"
#include "model/DescribeUserDcdnIpaStatusResult.h"
#include "model/DescribeUserDcdnStatusRequest.h"
#include "model/DescribeUserDcdnStatusResult.h"
#include "model/DescribeUserErStatusRequest.h"
#include "model/DescribeUserErStatusResult.h"
#include "model/DescribeUserLogserviceStatusRequest.h"
#include "model/DescribeUserLogserviceStatusResult.h"
#include "model/EditRoutineConfRequest.h"
#include "model/EditRoutineConfResult.h"
#include "model/GetDcdnKvRequest.h"
#include "model/GetDcdnKvResult.h"
#include "model/GetDcdnKvStatusRequest.h"
#include "model/GetDcdnKvStatusResult.h"
#include "model/ListDcdnKvRequest.h"
#include "model/ListDcdnKvResult.h"
#include "model/ListDcdnRealTimeDeliveryProjectRequest.h"
#include "model/ListDcdnRealTimeDeliveryProjectResult.h"
#include "model/ModifyDCdnDomainSchdmByPropertyRequest.h"
#include "model/ModifyDCdnDomainSchdmByPropertyResult.h"
#include "model/ModifyDcdnWafGroupRequest.h"
#include "model/ModifyDcdnWafGroupResult.h"
#include "model/ModifyDcdnWafPolicyRequest.h"
#include "model/ModifyDcdnWafPolicyResult.h"
#include "model/ModifyDcdnWafPolicyDomainsRequest.h"
#include "model/ModifyDcdnWafPolicyDomainsResult.h"
#include "model/ModifyDcdnWafRuleRequest.h"
#include "model/ModifyDcdnWafRuleResult.h"
#include "model/OpenDcdnServiceRequest.h"
#include "model/OpenDcdnServiceResult.h"
#include "model/PreloadDcdnObjectCachesRequest.h"
#include "model/PreloadDcdnObjectCachesResult.h"
#include "model/PublishDcdnStagingConfigToProductionRequest.h"
#include "model/PublishDcdnStagingConfigToProductionResult.h"
#include "model/PublishRoutineCodeRevisionRequest.h"
#include "model/PublishRoutineCodeRevisionResult.h"
#include "model/PutDcdnKvRequest.h"
#include "model/PutDcdnKvResult.h"
#include "model/PutDcdnKvNamespaceRequest.h"
#include "model/PutDcdnKvNamespaceResult.h"
#include "model/PutDcdnKvWithHighCapacityRequest.h"
#include "model/PutDcdnKvWithHighCapacityResult.h"
#include "model/RefreshDcdnObjectCacheByCacheTagRequest.h"
#include "model/RefreshDcdnObjectCacheByCacheTagResult.h"
#include "model/RefreshDcdnObjectCachesRequest.h"
#include "model/RefreshDcdnObjectCachesResult.h"
#include "model/RefreshErObjectCachesRequest.h"
#include "model/RefreshErObjectCachesResult.h"
#include "model/RollbackDcdnStagingConfigRequest.h"
#include "model/RollbackDcdnStagingConfigResult.h"
#include "model/SetDcdnDomainCSRCertificateRequest.h"
#include "model/SetDcdnDomainCSRCertificateResult.h"
#include "model/SetDcdnDomainCertificateRequest.h"
#include "model/SetDcdnDomainCertificateResult.h"
#include "model/SetDcdnDomainSMCertificateRequest.h"
#include "model/SetDcdnDomainSMCertificateResult.h"
#include "model/SetDcdnDomainSSLCertificateRequest.h"
#include "model/SetDcdnDomainSSLCertificateResult.h"
#include "model/SetDcdnDomainStagingConfigRequest.h"
#include "model/SetDcdnDomainStagingConfigResult.h"
#include "model/SetDcdnFullDomainsBlockIPRequest.h"
#include "model/SetDcdnFullDomainsBlockIPResult.h"
#include "model/SetDcdnUserConfigRequest.h"
#include "model/SetDcdnUserConfigResult.h"
#include "model/SetRoutineSubdomainRequest.h"
#include "model/SetRoutineSubdomainResult.h"
#include "model/StartDcdnDomainRequest.h"
#include "model/StartDcdnDomainResult.h"
#include "model/StartDcdnIpaDomainRequest.h"
#include "model/StartDcdnIpaDomainResult.h"
#include "model/StopDcdnDomainRequest.h"
#include "model/StopDcdnDomainResult.h"
#include "model/StopDcdnIpaDomainRequest.h"
#include "model/StopDcdnIpaDomainResult.h"
#include "model/TagDcdnResourcesRequest.h"
#include "model/TagDcdnResourcesResult.h"
#include "model/UntagDcdnResourcesRequest.h"
#include "model/UntagDcdnResourcesResult.h"
#include "model/UpdateDcdnDeliverTaskRequest.h"
#include "model/UpdateDcdnDeliverTaskResult.h"
#include "model/UpdateDcdnDomainRequest.h"
#include "model/UpdateDcdnDomainResult.h"
#include "model/UpdateDcdnIpaDomainRequest.h"
#include "model/UpdateDcdnIpaDomainResult.h"
#include "model/UpdateDcdnSLSRealtimeLogDeliveryRequest.h"
#include "model/UpdateDcdnSLSRealtimeLogDeliveryResult.h"
#include "model/UpdateDcdnSubTaskRequest.h"
#include "model/UpdateDcdnSubTaskResult.h"
#include "model/UpdateDcdnUserRealTimeDeliveryFieldRequest.h"
#include "model/UpdateDcdnUserRealTimeDeliveryFieldResult.h"
#include "model/UploadRoutineCodeRequest.h"
#include "model/UploadRoutineCodeResult.h"
#include "model/UploadStagingRoutineCodeRequest.h"
#include "model/UploadStagingRoutineCodeResult.h"
#include "model/VerifyDcdnDomainOwnerRequest.h"
#include "model/VerifyDcdnDomainOwnerResult.h"


namespace AlibabaCloud
{
	namespace Dcdn
	{
		class ALIBABACLOUD_DCDN_EXPORT DcdnClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDcdnDomainResult> AddDcdnDomainOutcome;
			typedef std::future<AddDcdnDomainOutcome> AddDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::AddDcdnDomainRequest&, const AddDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::AddDcdnIpaDomainResult> AddDcdnIpaDomainOutcome;
			typedef std::future<AddDcdnIpaDomainOutcome> AddDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::AddDcdnIpaDomainRequest&, const AddDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::BatchAddDcdnDomainResult> BatchAddDcdnDomainOutcome;
			typedef std::future<BatchAddDcdnDomainOutcome> BatchAddDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchAddDcdnDomainRequest&, const BatchAddDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::BatchCreateDcdnWafRulesResult> BatchCreateDcdnWafRulesOutcome;
			typedef std::future<BatchCreateDcdnWafRulesOutcome> BatchCreateDcdnWafRulesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchCreateDcdnWafRulesRequest&, const BatchCreateDcdnWafRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateDcdnWafRulesAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDcdnDomainConfigsResult> BatchDeleteDcdnDomainConfigsOutcome;
			typedef std::future<BatchDeleteDcdnDomainConfigsOutcome> BatchDeleteDcdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchDeleteDcdnDomainConfigsRequest&, const BatchDeleteDcdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDcdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDcdnKvResult> BatchDeleteDcdnKvOutcome;
			typedef std::future<BatchDeleteDcdnKvOutcome> BatchDeleteDcdnKvOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchDeleteDcdnKvRequest&, const BatchDeleteDcdnKvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDcdnKvAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDcdnKvWithHighCapacityResult> BatchDeleteDcdnKvWithHighCapacityOutcome;
			typedef std::future<BatchDeleteDcdnKvWithHighCapacityOutcome> BatchDeleteDcdnKvWithHighCapacityOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchDeleteDcdnKvWithHighCapacityRequest&, const BatchDeleteDcdnKvWithHighCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDcdnKvWithHighCapacityAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDcdnWafRulesResult> BatchDeleteDcdnWafRulesOutcome;
			typedef std::future<BatchDeleteDcdnWafRulesOutcome> BatchDeleteDcdnWafRulesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchDeleteDcdnWafRulesRequest&, const BatchDeleteDcdnWafRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDcdnWafRulesAsyncHandler;
			typedef Outcome<Error, Model::BatchModifyDcdnWafRulesResult> BatchModifyDcdnWafRulesOutcome;
			typedef std::future<BatchModifyDcdnWafRulesOutcome> BatchModifyDcdnWafRulesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchModifyDcdnWafRulesRequest&, const BatchModifyDcdnWafRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyDcdnWafRulesAsyncHandler;
			typedef Outcome<Error, Model::BatchPutDcdnKvResult> BatchPutDcdnKvOutcome;
			typedef std::future<BatchPutDcdnKvOutcome> BatchPutDcdnKvOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchPutDcdnKvRequest&, const BatchPutDcdnKvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchPutDcdnKvAsyncHandler;
			typedef Outcome<Error, Model::BatchPutDcdnKvWithHighCapacityResult> BatchPutDcdnKvWithHighCapacityOutcome;
			typedef std::future<BatchPutDcdnKvWithHighCapacityOutcome> BatchPutDcdnKvWithHighCapacityOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchPutDcdnKvWithHighCapacityRequest&, const BatchPutDcdnKvWithHighCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchPutDcdnKvWithHighCapacityAsyncHandler;
			typedef Outcome<Error, Model::BatchSetDcdnDomainCertificateResult> BatchSetDcdnDomainCertificateOutcome;
			typedef std::future<BatchSetDcdnDomainCertificateOutcome> BatchSetDcdnDomainCertificateOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchSetDcdnDomainCertificateRequest&, const BatchSetDcdnDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetDcdnDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::BatchSetDcdnDomainConfigsResult> BatchSetDcdnDomainConfigsOutcome;
			typedef std::future<BatchSetDcdnDomainConfigsOutcome> BatchSetDcdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchSetDcdnDomainConfigsRequest&, const BatchSetDcdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetDcdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchSetDcdnIpaDomainConfigsResult> BatchSetDcdnIpaDomainConfigsOutcome;
			typedef std::future<BatchSetDcdnIpaDomainConfigsOutcome> BatchSetDcdnIpaDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchSetDcdnIpaDomainConfigsRequest&, const BatchSetDcdnIpaDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetDcdnIpaDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchSetDcdnWafDomainConfigsResult> BatchSetDcdnWafDomainConfigsOutcome;
			typedef std::future<BatchSetDcdnWafDomainConfigsOutcome> BatchSetDcdnWafDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchSetDcdnWafDomainConfigsRequest&, const BatchSetDcdnWafDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetDcdnWafDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchStartDcdnDomainResult> BatchStartDcdnDomainOutcome;
			typedef std::future<BatchStartDcdnDomainOutcome> BatchStartDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchStartDcdnDomainRequest&, const BatchStartDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::BatchStopDcdnDomainResult> BatchStopDcdnDomainOutcome;
			typedef std::future<BatchStopDcdnDomainOutcome> BatchStopDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::BatchStopDcdnDomainRequest&, const BatchStopDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::CheckDcdnProjectExistResult> CheckDcdnProjectExistOutcome;
			typedef std::future<CheckDcdnProjectExistOutcome> CheckDcdnProjectExistOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CheckDcdnProjectExistRequest&, const CheckDcdnProjectExistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDcdnProjectExistAsyncHandler;
			typedef Outcome<Error, Model::CommitStagingRoutineCodeResult> CommitStagingRoutineCodeOutcome;
			typedef std::future<CommitStagingRoutineCodeOutcome> CommitStagingRoutineCodeOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CommitStagingRoutineCodeRequest&, const CommitStagingRoutineCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitStagingRoutineCodeAsyncHandler;
			typedef Outcome<Error, Model::CreateDcdnCertificateSigningRequestResult> CreateDcdnCertificateSigningRequestOutcome;
			typedef std::future<CreateDcdnCertificateSigningRequestOutcome> CreateDcdnCertificateSigningRequestOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CreateDcdnCertificateSigningRequestRequest&, const CreateDcdnCertificateSigningRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDcdnCertificateSigningRequestAsyncHandler;
			typedef Outcome<Error, Model::CreateDcdnDeliverTaskResult> CreateDcdnDeliverTaskOutcome;
			typedef std::future<CreateDcdnDeliverTaskOutcome> CreateDcdnDeliverTaskOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CreateDcdnDeliverTaskRequest&, const CreateDcdnDeliverTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDcdnDeliverTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDcdnSLSRealTimeLogDeliveryResult> CreateDcdnSLSRealTimeLogDeliveryOutcome;
			typedef std::future<CreateDcdnSLSRealTimeLogDeliveryOutcome> CreateDcdnSLSRealTimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CreateDcdnSLSRealTimeLogDeliveryRequest&, const CreateDcdnSLSRealTimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDcdnSLSRealTimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::CreateDcdnSubTaskResult> CreateDcdnSubTaskOutcome;
			typedef std::future<CreateDcdnSubTaskOutcome> CreateDcdnSubTaskOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CreateDcdnSubTaskRequest&, const CreateDcdnSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDcdnSubTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDcdnWafGroupResult> CreateDcdnWafGroupOutcome;
			typedef std::future<CreateDcdnWafGroupOutcome> CreateDcdnWafGroupOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CreateDcdnWafGroupRequest&, const CreateDcdnWafGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDcdnWafGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDcdnWafPolicyResult> CreateDcdnWafPolicyOutcome;
			typedef std::future<CreateDcdnWafPolicyOutcome> CreateDcdnWafPolicyOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CreateDcdnWafPolicyRequest&, const CreateDcdnWafPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDcdnWafPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateRoutineResult> CreateRoutineOutcome;
			typedef std::future<CreateRoutineOutcome> CreateRoutineOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CreateRoutineRequest&, const CreateRoutineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutineAsyncHandler;
			typedef Outcome<Error, Model::CreateSlrAndSlsProjectResult> CreateSlrAndSlsProjectOutcome;
			typedef std::future<CreateSlrAndSlsProjectOutcome> CreateSlrAndSlsProjectOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::CreateSlrAndSlsProjectRequest&, const CreateSlrAndSlsProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSlrAndSlsProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnDeliverTaskResult> DeleteDcdnDeliverTaskOutcome;
			typedef std::future<DeleteDcdnDeliverTaskOutcome> DeleteDcdnDeliverTaskOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnDeliverTaskRequest&, const DeleteDcdnDeliverTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnDeliverTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnDomainResult> DeleteDcdnDomainOutcome;
			typedef std::future<DeleteDcdnDomainOutcome> DeleteDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnDomainRequest&, const DeleteDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnIpaDomainResult> DeleteDcdnIpaDomainOutcome;
			typedef std::future<DeleteDcdnIpaDomainOutcome> DeleteDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnIpaDomainRequest&, const DeleteDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnIpaSpecificConfigResult> DeleteDcdnIpaSpecificConfigOutcome;
			typedef std::future<DeleteDcdnIpaSpecificConfigOutcome> DeleteDcdnIpaSpecificConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnIpaSpecificConfigRequest&, const DeleteDcdnIpaSpecificConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnIpaSpecificConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnKvResult> DeleteDcdnKvOutcome;
			typedef std::future<DeleteDcdnKvOutcome> DeleteDcdnKvOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnKvRequest&, const DeleteDcdnKvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnKvAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnKvNamespaceResult> DeleteDcdnKvNamespaceOutcome;
			typedef std::future<DeleteDcdnKvNamespaceOutcome> DeleteDcdnKvNamespaceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnKvNamespaceRequest&, const DeleteDcdnKvNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnKvNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnRealTimeLogProjectResult> DeleteDcdnRealTimeLogProjectOutcome;
			typedef std::future<DeleteDcdnRealTimeLogProjectOutcome> DeleteDcdnRealTimeLogProjectOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnRealTimeLogProjectRequest&, const DeleteDcdnRealTimeLogProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnRealTimeLogProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnSpecificConfigResult> DeleteDcdnSpecificConfigOutcome;
			typedef std::future<DeleteDcdnSpecificConfigOutcome> DeleteDcdnSpecificConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnSpecificConfigRequest&, const DeleteDcdnSpecificConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnSpecificConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnSpecificStagingConfigResult> DeleteDcdnSpecificStagingConfigOutcome;
			typedef std::future<DeleteDcdnSpecificStagingConfigOutcome> DeleteDcdnSpecificStagingConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnSpecificStagingConfigRequest&, const DeleteDcdnSpecificStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnSpecificStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnSubTaskResult> DeleteDcdnSubTaskOutcome;
			typedef std::future<DeleteDcdnSubTaskOutcome> DeleteDcdnSubTaskOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnSubTaskRequest&, const DeleteDcdnSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnSubTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnUserConfigResult> DeleteDcdnUserConfigOutcome;
			typedef std::future<DeleteDcdnUserConfigOutcome> DeleteDcdnUserConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnUserConfigRequest&, const DeleteDcdnUserConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnUserConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnWafGroupResult> DeleteDcdnWafGroupOutcome;
			typedef std::future<DeleteDcdnWafGroupOutcome> DeleteDcdnWafGroupOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnWafGroupRequest&, const DeleteDcdnWafGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnWafGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDcdnWafPolicyResult> DeleteDcdnWafPolicyOutcome;
			typedef std::future<DeleteDcdnWafPolicyOutcome> DeleteDcdnWafPolicyOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteDcdnWafPolicyRequest&, const DeleteDcdnWafPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDcdnWafPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteRoutineResult> DeleteRoutineOutcome;
			typedef std::future<DeleteRoutineOutcome> DeleteRoutineOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteRoutineRequest&, const DeleteRoutineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutineAsyncHandler;
			typedef Outcome<Error, Model::DeleteRoutineCodeRevisionResult> DeleteRoutineCodeRevisionOutcome;
			typedef std::future<DeleteRoutineCodeRevisionOutcome> DeleteRoutineCodeRevisionOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteRoutineCodeRevisionRequest&, const DeleteRoutineCodeRevisionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutineCodeRevisionAsyncHandler;
			typedef Outcome<Error, Model::DeleteRoutineConfEnvsResult> DeleteRoutineConfEnvsOutcome;
			typedef std::future<DeleteRoutineConfEnvsOutcome> DeleteRoutineConfEnvsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DeleteRoutineConfEnvsRequest&, const DeleteRoutineConfEnvsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutineConfEnvsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnAclFieldsResult> DescribeDcdnAclFieldsOutcome;
			typedef std::future<DescribeDcdnAclFieldsOutcome> DescribeDcdnAclFieldsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnAclFieldsRequest&, const DescribeDcdnAclFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnAclFieldsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnBgpBpsDataResult> DescribeDcdnBgpBpsDataOutcome;
			typedef std::future<DescribeDcdnBgpBpsDataOutcome> DescribeDcdnBgpBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnBgpBpsDataRequest&, const DescribeDcdnBgpBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnBgpBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnBgpTrafficDataResult> DescribeDcdnBgpTrafficDataOutcome;
			typedef std::future<DescribeDcdnBgpTrafficDataOutcome> DescribeDcdnBgpTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnBgpTrafficDataRequest&, const DescribeDcdnBgpTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnBgpTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnBlockedRegionsResult> DescribeDcdnBlockedRegionsOutcome;
			typedef std::future<DescribeDcdnBlockedRegionsOutcome> DescribeDcdnBlockedRegionsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnBlockedRegionsRequest&, const DescribeDcdnBlockedRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnBlockedRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnCertificateDetailResult> DescribeDcdnCertificateDetailOutcome;
			typedef std::future<DescribeDcdnCertificateDetailOutcome> DescribeDcdnCertificateDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnCertificateDetailRequest&, const DescribeDcdnCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnCertificateListResult> DescribeDcdnCertificateListOutcome;
			typedef std::future<DescribeDcdnCertificateListOutcome> DescribeDcdnCertificateListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnCertificateListRequest&, const DescribeDcdnCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDdosServiceResult> DescribeDcdnDdosServiceOutcome;
			typedef std::future<DescribeDcdnDdosServiceOutcome> DescribeDcdnDdosServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDdosServiceRequest&, const DescribeDcdnDdosServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDdosServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDdosSpecInfoResult> DescribeDcdnDdosSpecInfoOutcome;
			typedef std::future<DescribeDcdnDdosSpecInfoOutcome> DescribeDcdnDdosSpecInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDdosSpecInfoRequest&, const DescribeDcdnDdosSpecInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDdosSpecInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDeletedDomainsResult> DescribeDcdnDeletedDomainsOutcome;
			typedef std::future<DescribeDcdnDeletedDomainsOutcome> DescribeDcdnDeletedDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDeletedDomainsRequest&, const DescribeDcdnDeletedDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDeletedDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDeliverListResult> DescribeDcdnDeliverListOutcome;
			typedef std::future<DescribeDcdnDeliverListOutcome> DescribeDcdnDeliverListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDeliverListRequest&, const DescribeDcdnDeliverListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDeliverListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainBpsDataResult> DescribeDcdnDomainBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainBpsDataOutcome> DescribeDcdnDomainBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainBpsDataRequest&, const DescribeDcdnDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainBpsDataByLayerResult> DescribeDcdnDomainBpsDataByLayerOutcome;
			typedef std::future<DescribeDcdnDomainBpsDataByLayerOutcome> DescribeDcdnDomainBpsDataByLayerOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainBpsDataByLayerRequest&, const DescribeDcdnDomainBpsDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainBpsDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainByCertificateResult> DescribeDcdnDomainByCertificateOutcome;
			typedef std::future<DescribeDcdnDomainByCertificateOutcome> DescribeDcdnDomainByCertificateOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainByCertificateRequest&, const DescribeDcdnDomainByCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainByCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainCcActivityLogResult> DescribeDcdnDomainCcActivityLogOutcome;
			typedef std::future<DescribeDcdnDomainCcActivityLogOutcome> DescribeDcdnDomainCcActivityLogOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainCcActivityLogRequest&, const DescribeDcdnDomainCcActivityLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainCcActivityLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainCertificateInfoResult> DescribeDcdnDomainCertificateInfoOutcome;
			typedef std::future<DescribeDcdnDomainCertificateInfoOutcome> DescribeDcdnDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainCertificateInfoRequest&, const DescribeDcdnDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainCnameResult> DescribeDcdnDomainCnameOutcome;
			typedef std::future<DescribeDcdnDomainCnameOutcome> DescribeDcdnDomainCnameOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainCnameRequest&, const DescribeDcdnDomainCnameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainCnameAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainConfigsResult> DescribeDcdnDomainConfigsOutcome;
			typedef std::future<DescribeDcdnDomainConfigsOutcome> DescribeDcdnDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainConfigsRequest&, const DescribeDcdnDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainDetailResult> DescribeDcdnDomainDetailOutcome;
			typedef std::future<DescribeDcdnDomainDetailOutcome> DescribeDcdnDomainDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainDetailRequest&, const DescribeDcdnDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainHitRateDataResult> DescribeDcdnDomainHitRateDataOutcome;
			typedef std::future<DescribeDcdnDomainHitRateDataOutcome> DescribeDcdnDomainHitRateDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainHitRateDataRequest&, const DescribeDcdnDomainHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainHttpCodeDataResult> DescribeDcdnDomainHttpCodeDataOutcome;
			typedef std::future<DescribeDcdnDomainHttpCodeDataOutcome> DescribeDcdnDomainHttpCodeDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainHttpCodeDataRequest&, const DescribeDcdnDomainHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainHttpCodeDataByLayerResult> DescribeDcdnDomainHttpCodeDataByLayerOutcome;
			typedef std::future<DescribeDcdnDomainHttpCodeDataByLayerOutcome> DescribeDcdnDomainHttpCodeDataByLayerOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainHttpCodeDataByLayerRequest&, const DescribeDcdnDomainHttpCodeDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainHttpCodeDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainIpaBpsDataResult> DescribeDcdnDomainIpaBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainIpaBpsDataOutcome> DescribeDcdnDomainIpaBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainIpaBpsDataRequest&, const DescribeDcdnDomainIpaBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainIpaBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainIpaConnDataResult> DescribeDcdnDomainIpaConnDataOutcome;
			typedef std::future<DescribeDcdnDomainIpaConnDataOutcome> DescribeDcdnDomainIpaConnDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainIpaConnDataRequest&, const DescribeDcdnDomainIpaConnDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainIpaConnDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainIpaTrafficDataResult> DescribeDcdnDomainIpaTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainIpaTrafficDataOutcome> DescribeDcdnDomainIpaTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainIpaTrafficDataRequest&, const DescribeDcdnDomainIpaTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainIpaTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainIspDataResult> DescribeDcdnDomainIspDataOutcome;
			typedef std::future<DescribeDcdnDomainIspDataOutcome> DescribeDcdnDomainIspDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainIspDataRequest&, const DescribeDcdnDomainIspDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainIspDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainLogResult> DescribeDcdnDomainLogOutcome;
			typedef std::future<DescribeDcdnDomainLogOutcome> DescribeDcdnDomainLogOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainLogRequest&, const DescribeDcdnDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainLogExTtlResult> DescribeDcdnDomainLogExTtlOutcome;
			typedef std::future<DescribeDcdnDomainLogExTtlOutcome> DescribeDcdnDomainLogExTtlOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainLogExTtlRequest&, const DescribeDcdnDomainLogExTtlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainLogExTtlAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainMultiUsageDataResult> DescribeDcdnDomainMultiUsageDataOutcome;
			typedef std::future<DescribeDcdnDomainMultiUsageDataOutcome> DescribeDcdnDomainMultiUsageDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainMultiUsageDataRequest&, const DescribeDcdnDomainMultiUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainMultiUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainOriginBpsDataResult> DescribeDcdnDomainOriginBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainOriginBpsDataOutcome> DescribeDcdnDomainOriginBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainOriginBpsDataRequest&, const DescribeDcdnDomainOriginBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainOriginBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainOriginTrafficDataResult> DescribeDcdnDomainOriginTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainOriginTrafficDataOutcome> DescribeDcdnDomainOriginTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainOriginTrafficDataRequest&, const DescribeDcdnDomainOriginTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainOriginTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainPropertyResult> DescribeDcdnDomainPropertyOutcome;
			typedef std::future<DescribeDcdnDomainPropertyOutcome> DescribeDcdnDomainPropertyOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainPropertyRequest&, const DescribeDcdnDomainPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainPropertyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainPvDataResult> DescribeDcdnDomainPvDataOutcome;
			typedef std::future<DescribeDcdnDomainPvDataOutcome> DescribeDcdnDomainPvDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainPvDataRequest&, const DescribeDcdnDomainPvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainPvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainQpsDataResult> DescribeDcdnDomainQpsDataOutcome;
			typedef std::future<DescribeDcdnDomainQpsDataOutcome> DescribeDcdnDomainQpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainQpsDataRequest&, const DescribeDcdnDomainQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainQpsDataByLayerResult> DescribeDcdnDomainQpsDataByLayerOutcome;
			typedef std::future<DescribeDcdnDomainQpsDataByLayerOutcome> DescribeDcdnDomainQpsDataByLayerOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainQpsDataByLayerRequest&, const DescribeDcdnDomainQpsDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainQpsDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeBpsDataResult> DescribeDcdnDomainRealTimeBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeBpsDataOutcome> DescribeDcdnDomainRealTimeBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeBpsDataRequest&, const DescribeDcdnDomainRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeByteHitRateDataResult> DescribeDcdnDomainRealTimeByteHitRateDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeByteHitRateDataOutcome> DescribeDcdnDomainRealTimeByteHitRateDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest&, const DescribeDcdnDomainRealTimeByteHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeByteHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeDetailDataResult> DescribeDcdnDomainRealTimeDetailDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeDetailDataOutcome> DescribeDcdnDomainRealTimeDetailDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeDetailDataRequest&, const DescribeDcdnDomainRealTimeDetailDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeDetailDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeHttpCodeDataResult> DescribeDcdnDomainRealTimeHttpCodeDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeHttpCodeDataOutcome> DescribeDcdnDomainRealTimeHttpCodeDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest&, const DescribeDcdnDomainRealTimeHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeQpsDataResult> DescribeDcdnDomainRealTimeQpsDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeQpsDataOutcome> DescribeDcdnDomainRealTimeQpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeQpsDataRequest&, const DescribeDcdnDomainRealTimeQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeReqHitRateDataResult> DescribeDcdnDomainRealTimeReqHitRateDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeReqHitRateDataOutcome> DescribeDcdnDomainRealTimeReqHitRateDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeReqHitRateDataRequest&, const DescribeDcdnDomainRealTimeReqHitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeReqHitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeSrcBpsDataResult> DescribeDcdnDomainRealTimeSrcBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeSrcBpsDataOutcome> DescribeDcdnDomainRealTimeSrcBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest&, const DescribeDcdnDomainRealTimeSrcBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeSrcBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeSrcHttpCodeDataResult> DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome> DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest&, const DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeSrcHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeSrcTrafficDataResult> DescribeDcdnDomainRealTimeSrcTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeSrcTrafficDataOutcome> DescribeDcdnDomainRealTimeSrcTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeSrcTrafficDataRequest&, const DescribeDcdnDomainRealTimeSrcTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeSrcTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRealTimeTrafficDataResult> DescribeDcdnDomainRealTimeTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainRealTimeTrafficDataOutcome> DescribeDcdnDomainRealTimeTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRealTimeTrafficDataRequest&, const DescribeDcdnDomainRealTimeTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRealTimeTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainRegionDataResult> DescribeDcdnDomainRegionDataOutcome;
			typedef std::future<DescribeDcdnDomainRegionDataOutcome> DescribeDcdnDomainRegionDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainRegionDataRequest&, const DescribeDcdnDomainRegionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainRegionDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainStagingConfigResult> DescribeDcdnDomainStagingConfigOutcome;
			typedef std::future<DescribeDcdnDomainStagingConfigOutcome> DescribeDcdnDomainStagingConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainStagingConfigRequest&, const DescribeDcdnDomainStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainTopReferVisitResult> DescribeDcdnDomainTopReferVisitOutcome;
			typedef std::future<DescribeDcdnDomainTopReferVisitOutcome> DescribeDcdnDomainTopReferVisitOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainTopReferVisitRequest&, const DescribeDcdnDomainTopReferVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainTopReferVisitAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainTopUrlVisitResult> DescribeDcdnDomainTopUrlVisitOutcome;
			typedef std::future<DescribeDcdnDomainTopUrlVisitOutcome> DescribeDcdnDomainTopUrlVisitOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainTopUrlVisitRequest&, const DescribeDcdnDomainTopUrlVisitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainTopUrlVisitAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainTrafficDataResult> DescribeDcdnDomainTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainTrafficDataOutcome> DescribeDcdnDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainTrafficDataRequest&, const DescribeDcdnDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainUsageDataResult> DescribeDcdnDomainUsageDataOutcome;
			typedef std::future<DescribeDcdnDomainUsageDataOutcome> DescribeDcdnDomainUsageDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainUsageDataRequest&, const DescribeDcdnDomainUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainUvDataResult> DescribeDcdnDomainUvDataOutcome;
			typedef std::future<DescribeDcdnDomainUvDataOutcome> DescribeDcdnDomainUvDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainUvDataRequest&, const DescribeDcdnDomainUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainUvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainWebsocketBpsDataResult> DescribeDcdnDomainWebsocketBpsDataOutcome;
			typedef std::future<DescribeDcdnDomainWebsocketBpsDataOutcome> DescribeDcdnDomainWebsocketBpsDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainWebsocketBpsDataRequest&, const DescribeDcdnDomainWebsocketBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainWebsocketBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainWebsocketHttpCodeDataResult> DescribeDcdnDomainWebsocketHttpCodeDataOutcome;
			typedef std::future<DescribeDcdnDomainWebsocketHttpCodeDataOutcome> DescribeDcdnDomainWebsocketHttpCodeDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest&, const DescribeDcdnDomainWebsocketHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainWebsocketHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainWebsocketTrafficDataResult> DescribeDcdnDomainWebsocketTrafficDataOutcome;
			typedef std::future<DescribeDcdnDomainWebsocketTrafficDataOutcome> DescribeDcdnDomainWebsocketTrafficDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainWebsocketTrafficDataRequest&, const DescribeDcdnDomainWebsocketTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainWebsocketTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnDomainsBySourceResult> DescribeDcdnDomainsBySourceOutcome;
			typedef std::future<DescribeDcdnDomainsBySourceOutcome> DescribeDcdnDomainsBySourceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnDomainsBySourceRequest&, const DescribeDcdnDomainsBySourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnDomainsBySourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnErUsageDataResult> DescribeDcdnErUsageDataOutcome;
			typedef std::future<DescribeDcdnErUsageDataOutcome> DescribeDcdnErUsageDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnErUsageDataRequest&, const DescribeDcdnErUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnErUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnFullDomainsBlockIPConfigResult> DescribeDcdnFullDomainsBlockIPConfigOutcome;
			typedef std::future<DescribeDcdnFullDomainsBlockIPConfigOutcome> DescribeDcdnFullDomainsBlockIPConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnFullDomainsBlockIPConfigRequest&, const DescribeDcdnFullDomainsBlockIPConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnFullDomainsBlockIPConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnFullDomainsBlockIPHistoryResult> DescribeDcdnFullDomainsBlockIPHistoryOutcome;
			typedef std::future<DescribeDcdnFullDomainsBlockIPHistoryOutcome> DescribeDcdnFullDomainsBlockIPHistoryOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnFullDomainsBlockIPHistoryRequest&, const DescribeDcdnFullDomainsBlockIPHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnFullDomainsBlockIPHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnHttpsDomainListResult> DescribeDcdnHttpsDomainListOutcome;
			typedef std::future<DescribeDcdnHttpsDomainListOutcome> DescribeDcdnHttpsDomainListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnHttpsDomainListRequest&, const DescribeDcdnHttpsDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnHttpsDomainListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpInfoResult> DescribeDcdnIpInfoOutcome;
			typedef std::future<DescribeDcdnIpInfoOutcome> DescribeDcdnIpInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpInfoRequest&, const DescribeDcdnIpInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaDomainCidrResult> DescribeDcdnIpaDomainCidrOutcome;
			typedef std::future<DescribeDcdnIpaDomainCidrOutcome> DescribeDcdnIpaDomainCidrOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaDomainCidrRequest&, const DescribeDcdnIpaDomainCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaDomainCidrAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaDomainConfigsResult> DescribeDcdnIpaDomainConfigsOutcome;
			typedef std::future<DescribeDcdnIpaDomainConfigsOutcome> DescribeDcdnIpaDomainConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaDomainConfigsRequest&, const DescribeDcdnIpaDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaDomainDetailResult> DescribeDcdnIpaDomainDetailOutcome;
			typedef std::future<DescribeDcdnIpaDomainDetailOutcome> DescribeDcdnIpaDomainDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaDomainDetailRequest&, const DescribeDcdnIpaDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaServiceResult> DescribeDcdnIpaServiceOutcome;
			typedef std::future<DescribeDcdnIpaServiceOutcome> DescribeDcdnIpaServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaServiceRequest&, const DescribeDcdnIpaServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnIpaUserDomainsResult> DescribeDcdnIpaUserDomainsOutcome;
			typedef std::future<DescribeDcdnIpaUserDomainsOutcome> DescribeDcdnIpaUserDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnIpaUserDomainsRequest&, const DescribeDcdnIpaUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnIpaUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnKvAccountResult> DescribeDcdnKvAccountOutcome;
			typedef std::future<DescribeDcdnKvAccountOutcome> DescribeDcdnKvAccountOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnKvAccountRequest&, const DescribeDcdnKvAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnKvAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnKvAccountStatusResult> DescribeDcdnKvAccountStatusOutcome;
			typedef std::future<DescribeDcdnKvAccountStatusOutcome> DescribeDcdnKvAccountStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnKvAccountStatusRequest&, const DescribeDcdnKvAccountStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnKvAccountStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnKvNamespaceResult> DescribeDcdnKvNamespaceOutcome;
			typedef std::future<DescribeDcdnKvNamespaceOutcome> DescribeDcdnKvNamespaceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnKvNamespaceRequest&, const DescribeDcdnKvNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnKvNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnL2IpsResult> DescribeDcdnL2IpsOutcome;
			typedef std::future<DescribeDcdnL2IpsOutcome> DescribeDcdnL2IpsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnL2IpsRequest&, const DescribeDcdnL2IpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnL2IpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnL2VipsResult> DescribeDcdnL2VipsOutcome;
			typedef std::future<DescribeDcdnL2VipsOutcome> DescribeDcdnL2VipsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnL2VipsRequest&, const DescribeDcdnL2VipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnL2VipsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnOriginSiteHealthStatusResult> DescribeDcdnOriginSiteHealthStatusOutcome;
			typedef std::future<DescribeDcdnOriginSiteHealthStatusOutcome> DescribeDcdnOriginSiteHealthStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnOriginSiteHealthStatusRequest&, const DescribeDcdnOriginSiteHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnOriginSiteHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnRealTimeDeliveryFieldResult> DescribeDcdnRealTimeDeliveryFieldOutcome;
			typedef std::future<DescribeDcdnRealTimeDeliveryFieldOutcome> DescribeDcdnRealTimeDeliveryFieldOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRealTimeDeliveryFieldRequest&, const DescribeDcdnRealTimeDeliveryFieldOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRealTimeDeliveryFieldAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnRefreshQuotaResult> DescribeDcdnRefreshQuotaOutcome;
			typedef std::future<DescribeDcdnRefreshQuotaOutcome> DescribeDcdnRefreshQuotaOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRefreshQuotaRequest&, const DescribeDcdnRefreshQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRefreshQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnRefreshTaskByIdResult> DescribeDcdnRefreshTaskByIdOutcome;
			typedef std::future<DescribeDcdnRefreshTaskByIdOutcome> DescribeDcdnRefreshTaskByIdOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRefreshTaskByIdRequest&, const DescribeDcdnRefreshTaskByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRefreshTaskByIdAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnRefreshTasksResult> DescribeDcdnRefreshTasksOutcome;
			typedef std::future<DescribeDcdnRefreshTasksOutcome> DescribeDcdnRefreshTasksOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRefreshTasksRequest&, const DescribeDcdnRefreshTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRefreshTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnRegionAndIspResult> DescribeDcdnRegionAndIspOutcome;
			typedef std::future<DescribeDcdnRegionAndIspOutcome> DescribeDcdnRegionAndIspOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnRegionAndIspRequest&, const DescribeDcdnRegionAndIspOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnRegionAndIspAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnReportResult> DescribeDcdnReportOutcome;
			typedef std::future<DescribeDcdnReportOutcome> DescribeDcdnReportOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnReportRequest&, const DescribeDcdnReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnReportListResult> DescribeDcdnReportListOutcome;
			typedef std::future<DescribeDcdnReportListOutcome> DescribeDcdnReportListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnReportListRequest&, const DescribeDcdnReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnReportListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnSLSRealTimeLogTypeResult> DescribeDcdnSLSRealTimeLogTypeOutcome;
			typedef std::future<DescribeDcdnSLSRealTimeLogTypeOutcome> DescribeDcdnSLSRealTimeLogTypeOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnSLSRealTimeLogTypeRequest&, const DescribeDcdnSLSRealTimeLogTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnSLSRealTimeLogTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnSLSRealtimeLogDeliveryResult> DescribeDcdnSLSRealtimeLogDeliveryOutcome;
			typedef std::future<DescribeDcdnSLSRealtimeLogDeliveryOutcome> DescribeDcdnSLSRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnSLSRealtimeLogDeliveryRequest&, const DescribeDcdnSLSRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnSLSRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnSMCertificateDetailResult> DescribeDcdnSMCertificateDetailOutcome;
			typedef std::future<DescribeDcdnSMCertificateDetailOutcome> DescribeDcdnSMCertificateDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnSMCertificateDetailRequest&, const DescribeDcdnSMCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnSMCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnSMCertificateListResult> DescribeDcdnSMCertificateListOutcome;
			typedef std::future<DescribeDcdnSMCertificateListOutcome> DescribeDcdnSMCertificateListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnSMCertificateListRequest&, const DescribeDcdnSMCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnSMCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnSSLCertificateListResult> DescribeDcdnSSLCertificateListOutcome;
			typedef std::future<DescribeDcdnSSLCertificateListOutcome> DescribeDcdnSSLCertificateListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnSSLCertificateListRequest&, const DescribeDcdnSSLCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnSSLCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnSecFuncInfoResult> DescribeDcdnSecFuncInfoOutcome;
			typedef std::future<DescribeDcdnSecFuncInfoOutcome> DescribeDcdnSecFuncInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnSecFuncInfoRequest&, const DescribeDcdnSecFuncInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnSecFuncInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnSecSpecInfoResult> DescribeDcdnSecSpecInfoOutcome;
			typedef std::future<DescribeDcdnSecSpecInfoOutcome> DescribeDcdnSecSpecInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnSecSpecInfoRequest&, const DescribeDcdnSecSpecInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnSecSpecInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnServiceResult> DescribeDcdnServiceOutcome;
			typedef std::future<DescribeDcdnServiceOutcome> DescribeDcdnServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnServiceRequest&, const DescribeDcdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnStagingIpResult> DescribeDcdnStagingIpOutcome;
			typedef std::future<DescribeDcdnStagingIpOutcome> DescribeDcdnStagingIpOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnStagingIpRequest&, const DescribeDcdnStagingIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnStagingIpAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnSubListResult> DescribeDcdnSubListOutcome;
			typedef std::future<DescribeDcdnSubListOutcome> DescribeDcdnSubListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnSubListRequest&, const DescribeDcdnSubListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnSubListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnTagResourcesResult> DescribeDcdnTagResourcesOutcome;
			typedef std::future<DescribeDcdnTagResourcesOutcome> DescribeDcdnTagResourcesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnTagResourcesRequest&, const DescribeDcdnTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnTopDomainsByFlowResult> DescribeDcdnTopDomainsByFlowOutcome;
			typedef std::future<DescribeDcdnTopDomainsByFlowOutcome> DescribeDcdnTopDomainsByFlowOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnTopDomainsByFlowRequest&, const DescribeDcdnTopDomainsByFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnTopDomainsByFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserBillHistoryResult> DescribeDcdnUserBillHistoryOutcome;
			typedef std::future<DescribeDcdnUserBillHistoryOutcome> DescribeDcdnUserBillHistoryOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserBillHistoryRequest&, const DescribeDcdnUserBillHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserBillHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserBillTypeResult> DescribeDcdnUserBillTypeOutcome;
			typedef std::future<DescribeDcdnUserBillTypeOutcome> DescribeDcdnUserBillTypeOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserBillTypeRequest&, const DescribeDcdnUserBillTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserBillTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserCertificateExpireCountResult> DescribeDcdnUserCertificateExpireCountOutcome;
			typedef std::future<DescribeDcdnUserCertificateExpireCountOutcome> DescribeDcdnUserCertificateExpireCountOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserCertificateExpireCountRequest&, const DescribeDcdnUserCertificateExpireCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserCertificateExpireCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserConfigsResult> DescribeDcdnUserConfigsOutcome;
			typedef std::future<DescribeDcdnUserConfigsOutcome> DescribeDcdnUserConfigsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserConfigsRequest&, const DescribeDcdnUserConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserDomainsResult> DescribeDcdnUserDomainsOutcome;
			typedef std::future<DescribeDcdnUserDomainsOutcome> DescribeDcdnUserDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserDomainsRequest&, const DescribeDcdnUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserDomainsByFuncResult> DescribeDcdnUserDomainsByFuncOutcome;
			typedef std::future<DescribeDcdnUserDomainsByFuncOutcome> DescribeDcdnUserDomainsByFuncOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserDomainsByFuncRequest&, const DescribeDcdnUserDomainsByFuncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserDomainsByFuncAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserQuotaResult> DescribeDcdnUserQuotaOutcome;
			typedef std::future<DescribeDcdnUserQuotaOutcome> DescribeDcdnUserQuotaOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserQuotaRequest&, const DescribeDcdnUserQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserRealTimeDeliveryFieldResult> DescribeDcdnUserRealTimeDeliveryFieldOutcome;
			typedef std::future<DescribeDcdnUserRealTimeDeliveryFieldOutcome> DescribeDcdnUserRealTimeDeliveryFieldOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserRealTimeDeliveryFieldRequest&, const DescribeDcdnUserRealTimeDeliveryFieldOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserRealTimeDeliveryFieldAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserResourcePackageResult> DescribeDcdnUserResourcePackageOutcome;
			typedef std::future<DescribeDcdnUserResourcePackageOutcome> DescribeDcdnUserResourcePackageOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserResourcePackageRequest&, const DescribeDcdnUserResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserResourcePackageAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserSecDropResult> DescribeDcdnUserSecDropOutcome;
			typedef std::future<DescribeDcdnUserSecDropOutcome> DescribeDcdnUserSecDropOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserSecDropRequest&, const DescribeDcdnUserSecDropOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserSecDropAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserSecDropByMinuteResult> DescribeDcdnUserSecDropByMinuteOutcome;
			typedef std::future<DescribeDcdnUserSecDropByMinuteOutcome> DescribeDcdnUserSecDropByMinuteOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserSecDropByMinuteRequest&, const DescribeDcdnUserSecDropByMinuteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserSecDropByMinuteAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserTagsResult> DescribeDcdnUserTagsOutcome;
			typedef std::future<DescribeDcdnUserTagsOutcome> DescribeDcdnUserTagsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserTagsRequest&, const DescribeDcdnUserTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnUserVipsByDomainResult> DescribeDcdnUserVipsByDomainOutcome;
			typedef std::future<DescribeDcdnUserVipsByDomainOutcome> DescribeDcdnUserVipsByDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnUserVipsByDomainRequest&, const DescribeDcdnUserVipsByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnUserVipsByDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnVerifyContentResult> DescribeDcdnVerifyContentOutcome;
			typedef std::future<DescribeDcdnVerifyContentOutcome> DescribeDcdnVerifyContentOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnVerifyContentRequest&, const DescribeDcdnVerifyContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnVerifyContentAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafBotAppKeyResult> DescribeDcdnWafBotAppKeyOutcome;
			typedef std::future<DescribeDcdnWafBotAppKeyOutcome> DescribeDcdnWafBotAppKeyOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafBotAppKeyRequest&, const DescribeDcdnWafBotAppKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafBotAppKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafDefaultRulesResult> DescribeDcdnWafDefaultRulesOutcome;
			typedef std::future<DescribeDcdnWafDefaultRulesOutcome> DescribeDcdnWafDefaultRulesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafDefaultRulesRequest&, const DescribeDcdnWafDefaultRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafDefaultRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafDomainResult> DescribeDcdnWafDomainOutcome;
			typedef std::future<DescribeDcdnWafDomainOutcome> DescribeDcdnWafDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafDomainRequest&, const DescribeDcdnWafDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafDomainDetailResult> DescribeDcdnWafDomainDetailOutcome;
			typedef std::future<DescribeDcdnWafDomainDetailOutcome> DescribeDcdnWafDomainDetailOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafDomainDetailRequest&, const DescribeDcdnWafDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafDomainsResult> DescribeDcdnWafDomainsOutcome;
			typedef std::future<DescribeDcdnWafDomainsOutcome> DescribeDcdnWafDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafDomainsRequest&, const DescribeDcdnWafDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafFilterInfoResult> DescribeDcdnWafFilterInfoOutcome;
			typedef std::future<DescribeDcdnWafFilterInfoOutcome> DescribeDcdnWafFilterInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafFilterInfoRequest&, const DescribeDcdnWafFilterInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafFilterInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafGeoInfoResult> DescribeDcdnWafGeoInfoOutcome;
			typedef std::future<DescribeDcdnWafGeoInfoOutcome> DescribeDcdnWafGeoInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafGeoInfoRequest&, const DescribeDcdnWafGeoInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafGeoInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafGroupResult> DescribeDcdnWafGroupOutcome;
			typedef std::future<DescribeDcdnWafGroupOutcome> DescribeDcdnWafGroupOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafGroupRequest&, const DescribeDcdnWafGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafGroupsResult> DescribeDcdnWafGroupsOutcome;
			typedef std::future<DescribeDcdnWafGroupsOutcome> DescribeDcdnWafGroupsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafGroupsRequest&, const DescribeDcdnWafGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafLogsResult> DescribeDcdnWafLogsOutcome;
			typedef std::future<DescribeDcdnWafLogsOutcome> DescribeDcdnWafLogsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafLogsRequest&, const DescribeDcdnWafLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafPoliciesResult> DescribeDcdnWafPoliciesOutcome;
			typedef std::future<DescribeDcdnWafPoliciesOutcome> DescribeDcdnWafPoliciesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafPoliciesRequest&, const DescribeDcdnWafPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafPolicyResult> DescribeDcdnWafPolicyOutcome;
			typedef std::future<DescribeDcdnWafPolicyOutcome> DescribeDcdnWafPolicyOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafPolicyRequest&, const DescribeDcdnWafPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafPolicyDomainsResult> DescribeDcdnWafPolicyDomainsOutcome;
			typedef std::future<DescribeDcdnWafPolicyDomainsOutcome> DescribeDcdnWafPolicyDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafPolicyDomainsRequest&, const DescribeDcdnWafPolicyDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafPolicyDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafPolicyValidDomainsResult> DescribeDcdnWafPolicyValidDomainsOutcome;
			typedef std::future<DescribeDcdnWafPolicyValidDomainsOutcome> DescribeDcdnWafPolicyValidDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafPolicyValidDomainsRequest&, const DescribeDcdnWafPolicyValidDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafPolicyValidDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafRuleResult> DescribeDcdnWafRuleOutcome;
			typedef std::future<DescribeDcdnWafRuleOutcome> DescribeDcdnWafRuleOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafRuleRequest&, const DescribeDcdnWafRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafRulesResult> DescribeDcdnWafRulesOutcome;
			typedef std::future<DescribeDcdnWafRulesOutcome> DescribeDcdnWafRulesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafRulesRequest&, const DescribeDcdnWafRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafScenesResult> DescribeDcdnWafScenesOutcome;
			typedef std::future<DescribeDcdnWafScenesOutcome> DescribeDcdnWafScenesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafScenesRequest&, const DescribeDcdnWafScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafScenesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafServiceResult> DescribeDcdnWafServiceOutcome;
			typedef std::future<DescribeDcdnWafServiceOutcome> DescribeDcdnWafServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafServiceRequest&, const DescribeDcdnWafServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafSpecInfoResult> DescribeDcdnWafSpecInfoOutcome;
			typedef std::future<DescribeDcdnWafSpecInfoOutcome> DescribeDcdnWafSpecInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafSpecInfoRequest&, const DescribeDcdnWafSpecInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafSpecInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnWafUsageDataResult> DescribeDcdnWafUsageDataOutcome;
			typedef std::future<DescribeDcdnWafUsageDataOutcome> DescribeDcdnWafUsageDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnWafUsageDataRequest&, const DescribeDcdnWafUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnWafUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDcdnsecServiceResult> DescribeDcdnsecServiceOutcome;
			typedef std::future<DescribeDcdnsecServiceOutcome> DescribeDcdnsecServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDcdnsecServiceRequest&, const DescribeDcdnsecServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcdnsecServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDdosAllEventListResult> DescribeDdosAllEventListOutcome;
			typedef std::future<DescribeDdosAllEventListOutcome> DescribeDdosAllEventListOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeDdosAllEventListRequest&, const DescribeDdosAllEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDdosAllEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEncryptRoutineUidResult> DescribeEncryptRoutineUidOutcome;
			typedef std::future<DescribeEncryptRoutineUidOutcome> DescribeEncryptRoutineUidOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeEncryptRoutineUidRequest&, const DescribeEncryptRoutineUidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptRoutineUidAsyncHandler;
			typedef Outcome<Error, Model::DescribeHighlightInfoResult> DescribeHighlightInfoOutcome;
			typedef std::future<DescribeHighlightInfoOutcome> DescribeHighlightInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeHighlightInfoRequest&, const DescribeHighlightInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighlightInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeKvUsageDataResult> DescribeKvUsageDataOutcome;
			typedef std::future<DescribeKvUsageDataOutcome> DescribeKvUsageDataOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeKvUsageDataRequest&, const DescribeKvUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKvUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeRDDomainConfigResult> DescribeRDDomainConfigOutcome;
			typedef std::future<DescribeRDDomainConfigOutcome> DescribeRDDomainConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeRDDomainConfigRequest&, const DescribeRDDomainConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRDDomainConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeRDDomainsResult> DescribeRDDomainsOutcome;
			typedef std::future<DescribeRDDomainsOutcome> DescribeRDDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeRDDomainsRequest&, const DescribeRDDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRDDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoutineResult> DescribeRoutineOutcome;
			typedef std::future<DescribeRoutineOutcome> DescribeRoutineOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeRoutineRequest&, const DescribeRoutineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutineAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoutineCanaryEnvsResult> DescribeRoutineCanaryEnvsOutcome;
			typedef std::future<DescribeRoutineCanaryEnvsOutcome> DescribeRoutineCanaryEnvsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeRoutineCanaryEnvsRequest&, const DescribeRoutineCanaryEnvsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutineCanaryEnvsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoutineCodeRevisionResult> DescribeRoutineCodeRevisionOutcome;
			typedef std::future<DescribeRoutineCodeRevisionOutcome> DescribeRoutineCodeRevisionOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeRoutineCodeRevisionRequest&, const DescribeRoutineCodeRevisionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutineCodeRevisionAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoutineRelatedDomainsResult> DescribeRoutineRelatedDomainsOutcome;
			typedef std::future<DescribeRoutineRelatedDomainsOutcome> DescribeRoutineRelatedDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeRoutineRelatedDomainsRequest&, const DescribeRoutineRelatedDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutineRelatedDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoutineSpecResult> DescribeRoutineSpecOutcome;
			typedef std::future<DescribeRoutineSpecOutcome> DescribeRoutineSpecOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeRoutineSpecRequest&, const DescribeRoutineSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutineSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoutineUserInfoResult> DescribeRoutineUserInfoOutcome;
			typedef std::future<DescribeRoutineUserInfoOutcome> DescribeRoutineUserInfoOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeRoutineUserInfoRequest&, const DescribeRoutineUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutineUserInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDcdnIpaStatusResult> DescribeUserDcdnIpaStatusOutcome;
			typedef std::future<DescribeUserDcdnIpaStatusOutcome> DescribeUserDcdnIpaStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeUserDcdnIpaStatusRequest&, const DescribeUserDcdnIpaStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDcdnIpaStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDcdnStatusResult> DescribeUserDcdnStatusOutcome;
			typedef std::future<DescribeUserDcdnStatusOutcome> DescribeUserDcdnStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeUserDcdnStatusRequest&, const DescribeUserDcdnStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDcdnStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserErStatusResult> DescribeUserErStatusOutcome;
			typedef std::future<DescribeUserErStatusOutcome> DescribeUserErStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeUserErStatusRequest&, const DescribeUserErStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserErStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserLogserviceStatusResult> DescribeUserLogserviceStatusOutcome;
			typedef std::future<DescribeUserLogserviceStatusOutcome> DescribeUserLogserviceStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::DescribeUserLogserviceStatusRequest&, const DescribeUserLogserviceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserLogserviceStatusAsyncHandler;
			typedef Outcome<Error, Model::EditRoutineConfResult> EditRoutineConfOutcome;
			typedef std::future<EditRoutineConfOutcome> EditRoutineConfOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::EditRoutineConfRequest&, const EditRoutineConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditRoutineConfAsyncHandler;
			typedef Outcome<Error, Model::GetDcdnKvResult> GetDcdnKvOutcome;
			typedef std::future<GetDcdnKvOutcome> GetDcdnKvOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::GetDcdnKvRequest&, const GetDcdnKvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDcdnKvAsyncHandler;
			typedef Outcome<Error, Model::GetDcdnKvStatusResult> GetDcdnKvStatusOutcome;
			typedef std::future<GetDcdnKvStatusOutcome> GetDcdnKvStatusOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::GetDcdnKvStatusRequest&, const GetDcdnKvStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDcdnKvStatusAsyncHandler;
			typedef Outcome<Error, Model::ListDcdnKvResult> ListDcdnKvOutcome;
			typedef std::future<ListDcdnKvOutcome> ListDcdnKvOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::ListDcdnKvRequest&, const ListDcdnKvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDcdnKvAsyncHandler;
			typedef Outcome<Error, Model::ListDcdnRealTimeDeliveryProjectResult> ListDcdnRealTimeDeliveryProjectOutcome;
			typedef std::future<ListDcdnRealTimeDeliveryProjectOutcome> ListDcdnRealTimeDeliveryProjectOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::ListDcdnRealTimeDeliveryProjectRequest&, const ListDcdnRealTimeDeliveryProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDcdnRealTimeDeliveryProjectAsyncHandler;
			typedef Outcome<Error, Model::ModifyDCdnDomainSchdmByPropertyResult> ModifyDCdnDomainSchdmByPropertyOutcome;
			typedef std::future<ModifyDCdnDomainSchdmByPropertyOutcome> ModifyDCdnDomainSchdmByPropertyOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::ModifyDCdnDomainSchdmByPropertyRequest&, const ModifyDCdnDomainSchdmByPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDCdnDomainSchdmByPropertyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDcdnWafGroupResult> ModifyDcdnWafGroupOutcome;
			typedef std::future<ModifyDcdnWafGroupOutcome> ModifyDcdnWafGroupOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::ModifyDcdnWafGroupRequest&, const ModifyDcdnWafGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDcdnWafGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyDcdnWafPolicyResult> ModifyDcdnWafPolicyOutcome;
			typedef std::future<ModifyDcdnWafPolicyOutcome> ModifyDcdnWafPolicyOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::ModifyDcdnWafPolicyRequest&, const ModifyDcdnWafPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDcdnWafPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDcdnWafPolicyDomainsResult> ModifyDcdnWafPolicyDomainsOutcome;
			typedef std::future<ModifyDcdnWafPolicyDomainsOutcome> ModifyDcdnWafPolicyDomainsOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::ModifyDcdnWafPolicyDomainsRequest&, const ModifyDcdnWafPolicyDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDcdnWafPolicyDomainsAsyncHandler;
			typedef Outcome<Error, Model::ModifyDcdnWafRuleResult> ModifyDcdnWafRuleOutcome;
			typedef std::future<ModifyDcdnWafRuleOutcome> ModifyDcdnWafRuleOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::ModifyDcdnWafRuleRequest&, const ModifyDcdnWafRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDcdnWafRuleAsyncHandler;
			typedef Outcome<Error, Model::OpenDcdnServiceResult> OpenDcdnServiceOutcome;
			typedef std::future<OpenDcdnServiceOutcome> OpenDcdnServiceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::OpenDcdnServiceRequest&, const OpenDcdnServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenDcdnServiceAsyncHandler;
			typedef Outcome<Error, Model::PreloadDcdnObjectCachesResult> PreloadDcdnObjectCachesOutcome;
			typedef std::future<PreloadDcdnObjectCachesOutcome> PreloadDcdnObjectCachesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::PreloadDcdnObjectCachesRequest&, const PreloadDcdnObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreloadDcdnObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::PublishDcdnStagingConfigToProductionResult> PublishDcdnStagingConfigToProductionOutcome;
			typedef std::future<PublishDcdnStagingConfigToProductionOutcome> PublishDcdnStagingConfigToProductionOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::PublishDcdnStagingConfigToProductionRequest&, const PublishDcdnStagingConfigToProductionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishDcdnStagingConfigToProductionAsyncHandler;
			typedef Outcome<Error, Model::PublishRoutineCodeRevisionResult> PublishRoutineCodeRevisionOutcome;
			typedef std::future<PublishRoutineCodeRevisionOutcome> PublishRoutineCodeRevisionOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::PublishRoutineCodeRevisionRequest&, const PublishRoutineCodeRevisionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishRoutineCodeRevisionAsyncHandler;
			typedef Outcome<Error, Model::PutDcdnKvResult> PutDcdnKvOutcome;
			typedef std::future<PutDcdnKvOutcome> PutDcdnKvOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::PutDcdnKvRequest&, const PutDcdnKvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutDcdnKvAsyncHandler;
			typedef Outcome<Error, Model::PutDcdnKvNamespaceResult> PutDcdnKvNamespaceOutcome;
			typedef std::future<PutDcdnKvNamespaceOutcome> PutDcdnKvNamespaceOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::PutDcdnKvNamespaceRequest&, const PutDcdnKvNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutDcdnKvNamespaceAsyncHandler;
			typedef Outcome<Error, Model::PutDcdnKvWithHighCapacityResult> PutDcdnKvWithHighCapacityOutcome;
			typedef std::future<PutDcdnKvWithHighCapacityOutcome> PutDcdnKvWithHighCapacityOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::PutDcdnKvWithHighCapacityRequest&, const PutDcdnKvWithHighCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutDcdnKvWithHighCapacityAsyncHandler;
			typedef Outcome<Error, Model::RefreshDcdnObjectCacheByCacheTagResult> RefreshDcdnObjectCacheByCacheTagOutcome;
			typedef std::future<RefreshDcdnObjectCacheByCacheTagOutcome> RefreshDcdnObjectCacheByCacheTagOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::RefreshDcdnObjectCacheByCacheTagRequest&, const RefreshDcdnObjectCacheByCacheTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDcdnObjectCacheByCacheTagAsyncHandler;
			typedef Outcome<Error, Model::RefreshDcdnObjectCachesResult> RefreshDcdnObjectCachesOutcome;
			typedef std::future<RefreshDcdnObjectCachesOutcome> RefreshDcdnObjectCachesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::RefreshDcdnObjectCachesRequest&, const RefreshDcdnObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDcdnObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::RefreshErObjectCachesResult> RefreshErObjectCachesOutcome;
			typedef std::future<RefreshErObjectCachesOutcome> RefreshErObjectCachesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::RefreshErObjectCachesRequest&, const RefreshErObjectCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshErObjectCachesAsyncHandler;
			typedef Outcome<Error, Model::RollbackDcdnStagingConfigResult> RollbackDcdnStagingConfigOutcome;
			typedef std::future<RollbackDcdnStagingConfigOutcome> RollbackDcdnStagingConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::RollbackDcdnStagingConfigRequest&, const RollbackDcdnStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackDcdnStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnDomainCSRCertificateResult> SetDcdnDomainCSRCertificateOutcome;
			typedef std::future<SetDcdnDomainCSRCertificateOutcome> SetDcdnDomainCSRCertificateOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnDomainCSRCertificateRequest&, const SetDcdnDomainCSRCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnDomainCSRCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnDomainCertificateResult> SetDcdnDomainCertificateOutcome;
			typedef std::future<SetDcdnDomainCertificateOutcome> SetDcdnDomainCertificateOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnDomainCertificateRequest&, const SetDcdnDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnDomainSMCertificateResult> SetDcdnDomainSMCertificateOutcome;
			typedef std::future<SetDcdnDomainSMCertificateOutcome> SetDcdnDomainSMCertificateOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnDomainSMCertificateRequest&, const SetDcdnDomainSMCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnDomainSMCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnDomainSSLCertificateResult> SetDcdnDomainSSLCertificateOutcome;
			typedef std::future<SetDcdnDomainSSLCertificateOutcome> SetDcdnDomainSSLCertificateOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnDomainSSLCertificateRequest&, const SetDcdnDomainSSLCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnDomainSSLCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnDomainStagingConfigResult> SetDcdnDomainStagingConfigOutcome;
			typedef std::future<SetDcdnDomainStagingConfigOutcome> SetDcdnDomainStagingConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnDomainStagingConfigRequest&, const SetDcdnDomainStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnDomainStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnFullDomainsBlockIPResult> SetDcdnFullDomainsBlockIPOutcome;
			typedef std::future<SetDcdnFullDomainsBlockIPOutcome> SetDcdnFullDomainsBlockIPOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnFullDomainsBlockIPRequest&, const SetDcdnFullDomainsBlockIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnFullDomainsBlockIPAsyncHandler;
			typedef Outcome<Error, Model::SetDcdnUserConfigResult> SetDcdnUserConfigOutcome;
			typedef std::future<SetDcdnUserConfigOutcome> SetDcdnUserConfigOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetDcdnUserConfigRequest&, const SetDcdnUserConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDcdnUserConfigAsyncHandler;
			typedef Outcome<Error, Model::SetRoutineSubdomainResult> SetRoutineSubdomainOutcome;
			typedef std::future<SetRoutineSubdomainOutcome> SetRoutineSubdomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::SetRoutineSubdomainRequest&, const SetRoutineSubdomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRoutineSubdomainAsyncHandler;
			typedef Outcome<Error, Model::StartDcdnDomainResult> StartDcdnDomainOutcome;
			typedef std::future<StartDcdnDomainOutcome> StartDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StartDcdnDomainRequest&, const StartDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::StartDcdnIpaDomainResult> StartDcdnIpaDomainOutcome;
			typedef std::future<StartDcdnIpaDomainOutcome> StartDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StartDcdnIpaDomainRequest&, const StartDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::StopDcdnDomainResult> StopDcdnDomainOutcome;
			typedef std::future<StopDcdnDomainOutcome> StopDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StopDcdnDomainRequest&, const StopDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::StopDcdnIpaDomainResult> StopDcdnIpaDomainOutcome;
			typedef std::future<StopDcdnIpaDomainOutcome> StopDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::StopDcdnIpaDomainRequest&, const StopDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::TagDcdnResourcesResult> TagDcdnResourcesOutcome;
			typedef std::future<TagDcdnResourcesOutcome> TagDcdnResourcesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::TagDcdnResourcesRequest&, const TagDcdnResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagDcdnResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagDcdnResourcesResult> UntagDcdnResourcesOutcome;
			typedef std::future<UntagDcdnResourcesOutcome> UntagDcdnResourcesOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UntagDcdnResourcesRequest&, const UntagDcdnResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagDcdnResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateDcdnDeliverTaskResult> UpdateDcdnDeliverTaskOutcome;
			typedef std::future<UpdateDcdnDeliverTaskOutcome> UpdateDcdnDeliverTaskOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UpdateDcdnDeliverTaskRequest&, const UpdateDcdnDeliverTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDcdnDeliverTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateDcdnDomainResult> UpdateDcdnDomainOutcome;
			typedef std::future<UpdateDcdnDomainOutcome> UpdateDcdnDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UpdateDcdnDomainRequest&, const UpdateDcdnDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDcdnDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateDcdnIpaDomainResult> UpdateDcdnIpaDomainOutcome;
			typedef std::future<UpdateDcdnIpaDomainOutcome> UpdateDcdnIpaDomainOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UpdateDcdnIpaDomainRequest&, const UpdateDcdnIpaDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDcdnIpaDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateDcdnSLSRealtimeLogDeliveryResult> UpdateDcdnSLSRealtimeLogDeliveryOutcome;
			typedef std::future<UpdateDcdnSLSRealtimeLogDeliveryOutcome> UpdateDcdnSLSRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UpdateDcdnSLSRealtimeLogDeliveryRequest&, const UpdateDcdnSLSRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDcdnSLSRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::UpdateDcdnSubTaskResult> UpdateDcdnSubTaskOutcome;
			typedef std::future<UpdateDcdnSubTaskOutcome> UpdateDcdnSubTaskOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UpdateDcdnSubTaskRequest&, const UpdateDcdnSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDcdnSubTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateDcdnUserRealTimeDeliveryFieldResult> UpdateDcdnUserRealTimeDeliveryFieldOutcome;
			typedef std::future<UpdateDcdnUserRealTimeDeliveryFieldOutcome> UpdateDcdnUserRealTimeDeliveryFieldOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UpdateDcdnUserRealTimeDeliveryFieldRequest&, const UpdateDcdnUserRealTimeDeliveryFieldOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDcdnUserRealTimeDeliveryFieldAsyncHandler;
			typedef Outcome<Error, Model::UploadRoutineCodeResult> UploadRoutineCodeOutcome;
			typedef std::future<UploadRoutineCodeOutcome> UploadRoutineCodeOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UploadRoutineCodeRequest&, const UploadRoutineCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadRoutineCodeAsyncHandler;
			typedef Outcome<Error, Model::UploadStagingRoutineCodeResult> UploadStagingRoutineCodeOutcome;
			typedef std::future<UploadStagingRoutineCodeOutcome> UploadStagingRoutineCodeOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::UploadStagingRoutineCodeRequest&, const UploadStagingRoutineCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadStagingRoutineCodeAsyncHandler;
			typedef Outcome<Error, Model::VerifyDcdnDomainOwnerResult> VerifyDcdnDomainOwnerOutcome;
			typedef std::future<VerifyDcdnDomainOwnerOutcome> VerifyDcdnDomainOwnerOutcomeCallable;
			typedef std::function<void(const DcdnClient*, const Model::VerifyDcdnDomainOwnerRequest&, const VerifyDcdnDomainOwnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDcdnDomainOwnerAsyncHandler;

			DcdnClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DcdnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DcdnClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DcdnClient();
			AddDcdnDomainOutcome addDcdnDomain(const Model::AddDcdnDomainRequest &request)const;
			void addDcdnDomainAsync(const Model::AddDcdnDomainRequest& request, const AddDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDcdnDomainOutcomeCallable addDcdnDomainCallable(const Model::AddDcdnDomainRequest& request) const;
			AddDcdnIpaDomainOutcome addDcdnIpaDomain(const Model::AddDcdnIpaDomainRequest &request)const;
			void addDcdnIpaDomainAsync(const Model::AddDcdnIpaDomainRequest& request, const AddDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDcdnIpaDomainOutcomeCallable addDcdnIpaDomainCallable(const Model::AddDcdnIpaDomainRequest& request) const;
			BatchAddDcdnDomainOutcome batchAddDcdnDomain(const Model::BatchAddDcdnDomainRequest &request)const;
			void batchAddDcdnDomainAsync(const Model::BatchAddDcdnDomainRequest& request, const BatchAddDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddDcdnDomainOutcomeCallable batchAddDcdnDomainCallable(const Model::BatchAddDcdnDomainRequest& request) const;
			BatchCreateDcdnWafRulesOutcome batchCreateDcdnWafRules(const Model::BatchCreateDcdnWafRulesRequest &request)const;
			void batchCreateDcdnWafRulesAsync(const Model::BatchCreateDcdnWafRulesRequest& request, const BatchCreateDcdnWafRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchCreateDcdnWafRulesOutcomeCallable batchCreateDcdnWafRulesCallable(const Model::BatchCreateDcdnWafRulesRequest& request) const;
			BatchDeleteDcdnDomainConfigsOutcome batchDeleteDcdnDomainConfigs(const Model::BatchDeleteDcdnDomainConfigsRequest &request)const;
			void batchDeleteDcdnDomainConfigsAsync(const Model::BatchDeleteDcdnDomainConfigsRequest& request, const BatchDeleteDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDcdnDomainConfigsOutcomeCallable batchDeleteDcdnDomainConfigsCallable(const Model::BatchDeleteDcdnDomainConfigsRequest& request) const;
			BatchDeleteDcdnKvOutcome batchDeleteDcdnKv(const Model::BatchDeleteDcdnKvRequest &request)const;
			void batchDeleteDcdnKvAsync(const Model::BatchDeleteDcdnKvRequest& request, const BatchDeleteDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDcdnKvOutcomeCallable batchDeleteDcdnKvCallable(const Model::BatchDeleteDcdnKvRequest& request) const;
			BatchDeleteDcdnKvWithHighCapacityOutcome batchDeleteDcdnKvWithHighCapacity(const Model::BatchDeleteDcdnKvWithHighCapacityRequest &request)const;
			void batchDeleteDcdnKvWithHighCapacityAsync(const Model::BatchDeleteDcdnKvWithHighCapacityRequest& request, const BatchDeleteDcdnKvWithHighCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDcdnKvWithHighCapacityOutcomeCallable batchDeleteDcdnKvWithHighCapacityCallable(const Model::BatchDeleteDcdnKvWithHighCapacityRequest& request) const;
			BatchDeleteDcdnWafRulesOutcome batchDeleteDcdnWafRules(const Model::BatchDeleteDcdnWafRulesRequest &request)const;
			void batchDeleteDcdnWafRulesAsync(const Model::BatchDeleteDcdnWafRulesRequest& request, const BatchDeleteDcdnWafRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDcdnWafRulesOutcomeCallable batchDeleteDcdnWafRulesCallable(const Model::BatchDeleteDcdnWafRulesRequest& request) const;
			BatchModifyDcdnWafRulesOutcome batchModifyDcdnWafRules(const Model::BatchModifyDcdnWafRulesRequest &request)const;
			void batchModifyDcdnWafRulesAsync(const Model::BatchModifyDcdnWafRulesRequest& request, const BatchModifyDcdnWafRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchModifyDcdnWafRulesOutcomeCallable batchModifyDcdnWafRulesCallable(const Model::BatchModifyDcdnWafRulesRequest& request) const;
			BatchPutDcdnKvOutcome batchPutDcdnKv(const Model::BatchPutDcdnKvRequest &request)const;
			void batchPutDcdnKvAsync(const Model::BatchPutDcdnKvRequest& request, const BatchPutDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchPutDcdnKvOutcomeCallable batchPutDcdnKvCallable(const Model::BatchPutDcdnKvRequest& request) const;
			BatchPutDcdnKvWithHighCapacityOutcome batchPutDcdnKvWithHighCapacity(const Model::BatchPutDcdnKvWithHighCapacityRequest &request)const;
			void batchPutDcdnKvWithHighCapacityAsync(const Model::BatchPutDcdnKvWithHighCapacityRequest& request, const BatchPutDcdnKvWithHighCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchPutDcdnKvWithHighCapacityOutcomeCallable batchPutDcdnKvWithHighCapacityCallable(const Model::BatchPutDcdnKvWithHighCapacityRequest& request) const;
			BatchSetDcdnDomainCertificateOutcome batchSetDcdnDomainCertificate(const Model::BatchSetDcdnDomainCertificateRequest &request)const;
			void batchSetDcdnDomainCertificateAsync(const Model::BatchSetDcdnDomainCertificateRequest& request, const BatchSetDcdnDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetDcdnDomainCertificateOutcomeCallable batchSetDcdnDomainCertificateCallable(const Model::BatchSetDcdnDomainCertificateRequest& request) const;
			BatchSetDcdnDomainConfigsOutcome batchSetDcdnDomainConfigs(const Model::BatchSetDcdnDomainConfigsRequest &request)const;
			void batchSetDcdnDomainConfigsAsync(const Model::BatchSetDcdnDomainConfigsRequest& request, const BatchSetDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetDcdnDomainConfigsOutcomeCallable batchSetDcdnDomainConfigsCallable(const Model::BatchSetDcdnDomainConfigsRequest& request) const;
			BatchSetDcdnIpaDomainConfigsOutcome batchSetDcdnIpaDomainConfigs(const Model::BatchSetDcdnIpaDomainConfigsRequest &request)const;
			void batchSetDcdnIpaDomainConfigsAsync(const Model::BatchSetDcdnIpaDomainConfigsRequest& request, const BatchSetDcdnIpaDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetDcdnIpaDomainConfigsOutcomeCallable batchSetDcdnIpaDomainConfigsCallable(const Model::BatchSetDcdnIpaDomainConfigsRequest& request) const;
			BatchSetDcdnWafDomainConfigsOutcome batchSetDcdnWafDomainConfigs(const Model::BatchSetDcdnWafDomainConfigsRequest &request)const;
			void batchSetDcdnWafDomainConfigsAsync(const Model::BatchSetDcdnWafDomainConfigsRequest& request, const BatchSetDcdnWafDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetDcdnWafDomainConfigsOutcomeCallable batchSetDcdnWafDomainConfigsCallable(const Model::BatchSetDcdnWafDomainConfigsRequest& request) const;
			BatchStartDcdnDomainOutcome batchStartDcdnDomain(const Model::BatchStartDcdnDomainRequest &request)const;
			void batchStartDcdnDomainAsync(const Model::BatchStartDcdnDomainRequest& request, const BatchStartDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStartDcdnDomainOutcomeCallable batchStartDcdnDomainCallable(const Model::BatchStartDcdnDomainRequest& request) const;
			BatchStopDcdnDomainOutcome batchStopDcdnDomain(const Model::BatchStopDcdnDomainRequest &request)const;
			void batchStopDcdnDomainAsync(const Model::BatchStopDcdnDomainRequest& request, const BatchStopDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStopDcdnDomainOutcomeCallable batchStopDcdnDomainCallable(const Model::BatchStopDcdnDomainRequest& request) const;
			CheckDcdnProjectExistOutcome checkDcdnProjectExist(const Model::CheckDcdnProjectExistRequest &request)const;
			void checkDcdnProjectExistAsync(const Model::CheckDcdnProjectExistRequest& request, const CheckDcdnProjectExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDcdnProjectExistOutcomeCallable checkDcdnProjectExistCallable(const Model::CheckDcdnProjectExistRequest& request) const;
			CommitStagingRoutineCodeOutcome commitStagingRoutineCode(const Model::CommitStagingRoutineCodeRequest &request)const;
			void commitStagingRoutineCodeAsync(const Model::CommitStagingRoutineCodeRequest& request, const CommitStagingRoutineCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitStagingRoutineCodeOutcomeCallable commitStagingRoutineCodeCallable(const Model::CommitStagingRoutineCodeRequest& request) const;
			CreateDcdnCertificateSigningRequestOutcome createDcdnCertificateSigningRequest(const Model::CreateDcdnCertificateSigningRequestRequest &request)const;
			void createDcdnCertificateSigningRequestAsync(const Model::CreateDcdnCertificateSigningRequestRequest& request, const CreateDcdnCertificateSigningRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDcdnCertificateSigningRequestOutcomeCallable createDcdnCertificateSigningRequestCallable(const Model::CreateDcdnCertificateSigningRequestRequest& request) const;
			CreateDcdnDeliverTaskOutcome createDcdnDeliverTask(const Model::CreateDcdnDeliverTaskRequest &request)const;
			void createDcdnDeliverTaskAsync(const Model::CreateDcdnDeliverTaskRequest& request, const CreateDcdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDcdnDeliverTaskOutcomeCallable createDcdnDeliverTaskCallable(const Model::CreateDcdnDeliverTaskRequest& request) const;
			CreateDcdnSLSRealTimeLogDeliveryOutcome createDcdnSLSRealTimeLogDelivery(const Model::CreateDcdnSLSRealTimeLogDeliveryRequest &request)const;
			void createDcdnSLSRealTimeLogDeliveryAsync(const Model::CreateDcdnSLSRealTimeLogDeliveryRequest& request, const CreateDcdnSLSRealTimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDcdnSLSRealTimeLogDeliveryOutcomeCallable createDcdnSLSRealTimeLogDeliveryCallable(const Model::CreateDcdnSLSRealTimeLogDeliveryRequest& request) const;
			CreateDcdnSubTaskOutcome createDcdnSubTask(const Model::CreateDcdnSubTaskRequest &request)const;
			void createDcdnSubTaskAsync(const Model::CreateDcdnSubTaskRequest& request, const CreateDcdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDcdnSubTaskOutcomeCallable createDcdnSubTaskCallable(const Model::CreateDcdnSubTaskRequest& request) const;
			CreateDcdnWafGroupOutcome createDcdnWafGroup(const Model::CreateDcdnWafGroupRequest &request)const;
			void createDcdnWafGroupAsync(const Model::CreateDcdnWafGroupRequest& request, const CreateDcdnWafGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDcdnWafGroupOutcomeCallable createDcdnWafGroupCallable(const Model::CreateDcdnWafGroupRequest& request) const;
			CreateDcdnWafPolicyOutcome createDcdnWafPolicy(const Model::CreateDcdnWafPolicyRequest &request)const;
			void createDcdnWafPolicyAsync(const Model::CreateDcdnWafPolicyRequest& request, const CreateDcdnWafPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDcdnWafPolicyOutcomeCallable createDcdnWafPolicyCallable(const Model::CreateDcdnWafPolicyRequest& request) const;
			CreateRoutineOutcome createRoutine(const Model::CreateRoutineRequest &request)const;
			void createRoutineAsync(const Model::CreateRoutineRequest& request, const CreateRoutineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRoutineOutcomeCallable createRoutineCallable(const Model::CreateRoutineRequest& request) const;
			CreateSlrAndSlsProjectOutcome createSlrAndSlsProject(const Model::CreateSlrAndSlsProjectRequest &request)const;
			void createSlrAndSlsProjectAsync(const Model::CreateSlrAndSlsProjectRequest& request, const CreateSlrAndSlsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSlrAndSlsProjectOutcomeCallable createSlrAndSlsProjectCallable(const Model::CreateSlrAndSlsProjectRequest& request) const;
			DeleteDcdnDeliverTaskOutcome deleteDcdnDeliverTask(const Model::DeleteDcdnDeliverTaskRequest &request)const;
			void deleteDcdnDeliverTaskAsync(const Model::DeleteDcdnDeliverTaskRequest& request, const DeleteDcdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnDeliverTaskOutcomeCallable deleteDcdnDeliverTaskCallable(const Model::DeleteDcdnDeliverTaskRequest& request) const;
			DeleteDcdnDomainOutcome deleteDcdnDomain(const Model::DeleteDcdnDomainRequest &request)const;
			void deleteDcdnDomainAsync(const Model::DeleteDcdnDomainRequest& request, const DeleteDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnDomainOutcomeCallable deleteDcdnDomainCallable(const Model::DeleteDcdnDomainRequest& request) const;
			DeleteDcdnIpaDomainOutcome deleteDcdnIpaDomain(const Model::DeleteDcdnIpaDomainRequest &request)const;
			void deleteDcdnIpaDomainAsync(const Model::DeleteDcdnIpaDomainRequest& request, const DeleteDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnIpaDomainOutcomeCallable deleteDcdnIpaDomainCallable(const Model::DeleteDcdnIpaDomainRequest& request) const;
			DeleteDcdnIpaSpecificConfigOutcome deleteDcdnIpaSpecificConfig(const Model::DeleteDcdnIpaSpecificConfigRequest &request)const;
			void deleteDcdnIpaSpecificConfigAsync(const Model::DeleteDcdnIpaSpecificConfigRequest& request, const DeleteDcdnIpaSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnIpaSpecificConfigOutcomeCallable deleteDcdnIpaSpecificConfigCallable(const Model::DeleteDcdnIpaSpecificConfigRequest& request) const;
			DeleteDcdnKvOutcome deleteDcdnKv(const Model::DeleteDcdnKvRequest &request)const;
			void deleteDcdnKvAsync(const Model::DeleteDcdnKvRequest& request, const DeleteDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnKvOutcomeCallable deleteDcdnKvCallable(const Model::DeleteDcdnKvRequest& request) const;
			DeleteDcdnKvNamespaceOutcome deleteDcdnKvNamespace(const Model::DeleteDcdnKvNamespaceRequest &request)const;
			void deleteDcdnKvNamespaceAsync(const Model::DeleteDcdnKvNamespaceRequest& request, const DeleteDcdnKvNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnKvNamespaceOutcomeCallable deleteDcdnKvNamespaceCallable(const Model::DeleteDcdnKvNamespaceRequest& request) const;
			DeleteDcdnRealTimeLogProjectOutcome deleteDcdnRealTimeLogProject(const Model::DeleteDcdnRealTimeLogProjectRequest &request)const;
			void deleteDcdnRealTimeLogProjectAsync(const Model::DeleteDcdnRealTimeLogProjectRequest& request, const DeleteDcdnRealTimeLogProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnRealTimeLogProjectOutcomeCallable deleteDcdnRealTimeLogProjectCallable(const Model::DeleteDcdnRealTimeLogProjectRequest& request) const;
			DeleteDcdnSpecificConfigOutcome deleteDcdnSpecificConfig(const Model::DeleteDcdnSpecificConfigRequest &request)const;
			void deleteDcdnSpecificConfigAsync(const Model::DeleteDcdnSpecificConfigRequest& request, const DeleteDcdnSpecificConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnSpecificConfigOutcomeCallable deleteDcdnSpecificConfigCallable(const Model::DeleteDcdnSpecificConfigRequest& request) const;
			DeleteDcdnSpecificStagingConfigOutcome deleteDcdnSpecificStagingConfig(const Model::DeleteDcdnSpecificStagingConfigRequest &request)const;
			void deleteDcdnSpecificStagingConfigAsync(const Model::DeleteDcdnSpecificStagingConfigRequest& request, const DeleteDcdnSpecificStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnSpecificStagingConfigOutcomeCallable deleteDcdnSpecificStagingConfigCallable(const Model::DeleteDcdnSpecificStagingConfigRequest& request) const;
			DeleteDcdnSubTaskOutcome deleteDcdnSubTask(const Model::DeleteDcdnSubTaskRequest &request)const;
			void deleteDcdnSubTaskAsync(const Model::DeleteDcdnSubTaskRequest& request, const DeleteDcdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnSubTaskOutcomeCallable deleteDcdnSubTaskCallable(const Model::DeleteDcdnSubTaskRequest& request) const;
			DeleteDcdnUserConfigOutcome deleteDcdnUserConfig(const Model::DeleteDcdnUserConfigRequest &request)const;
			void deleteDcdnUserConfigAsync(const Model::DeleteDcdnUserConfigRequest& request, const DeleteDcdnUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnUserConfigOutcomeCallable deleteDcdnUserConfigCallable(const Model::DeleteDcdnUserConfigRequest& request) const;
			DeleteDcdnWafGroupOutcome deleteDcdnWafGroup(const Model::DeleteDcdnWafGroupRequest &request)const;
			void deleteDcdnWafGroupAsync(const Model::DeleteDcdnWafGroupRequest& request, const DeleteDcdnWafGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnWafGroupOutcomeCallable deleteDcdnWafGroupCallable(const Model::DeleteDcdnWafGroupRequest& request) const;
			DeleteDcdnWafPolicyOutcome deleteDcdnWafPolicy(const Model::DeleteDcdnWafPolicyRequest &request)const;
			void deleteDcdnWafPolicyAsync(const Model::DeleteDcdnWafPolicyRequest& request, const DeleteDcdnWafPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDcdnWafPolicyOutcomeCallable deleteDcdnWafPolicyCallable(const Model::DeleteDcdnWafPolicyRequest& request) const;
			DeleteRoutineOutcome deleteRoutine(const Model::DeleteRoutineRequest &request)const;
			void deleteRoutineAsync(const Model::DeleteRoutineRequest& request, const DeleteRoutineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRoutineOutcomeCallable deleteRoutineCallable(const Model::DeleteRoutineRequest& request) const;
			DeleteRoutineCodeRevisionOutcome deleteRoutineCodeRevision(const Model::DeleteRoutineCodeRevisionRequest &request)const;
			void deleteRoutineCodeRevisionAsync(const Model::DeleteRoutineCodeRevisionRequest& request, const DeleteRoutineCodeRevisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRoutineCodeRevisionOutcomeCallable deleteRoutineCodeRevisionCallable(const Model::DeleteRoutineCodeRevisionRequest& request) const;
			DeleteRoutineConfEnvsOutcome deleteRoutineConfEnvs(const Model::DeleteRoutineConfEnvsRequest &request)const;
			void deleteRoutineConfEnvsAsync(const Model::DeleteRoutineConfEnvsRequest& request, const DeleteRoutineConfEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRoutineConfEnvsOutcomeCallable deleteRoutineConfEnvsCallable(const Model::DeleteRoutineConfEnvsRequest& request) const;
			DescribeDcdnAclFieldsOutcome describeDcdnAclFields(const Model::DescribeDcdnAclFieldsRequest &request)const;
			void describeDcdnAclFieldsAsync(const Model::DescribeDcdnAclFieldsRequest& request, const DescribeDcdnAclFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnAclFieldsOutcomeCallable describeDcdnAclFieldsCallable(const Model::DescribeDcdnAclFieldsRequest& request) const;
			DescribeDcdnBgpBpsDataOutcome describeDcdnBgpBpsData(const Model::DescribeDcdnBgpBpsDataRequest &request)const;
			void describeDcdnBgpBpsDataAsync(const Model::DescribeDcdnBgpBpsDataRequest& request, const DescribeDcdnBgpBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnBgpBpsDataOutcomeCallable describeDcdnBgpBpsDataCallable(const Model::DescribeDcdnBgpBpsDataRequest& request) const;
			DescribeDcdnBgpTrafficDataOutcome describeDcdnBgpTrafficData(const Model::DescribeDcdnBgpTrafficDataRequest &request)const;
			void describeDcdnBgpTrafficDataAsync(const Model::DescribeDcdnBgpTrafficDataRequest& request, const DescribeDcdnBgpTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnBgpTrafficDataOutcomeCallable describeDcdnBgpTrafficDataCallable(const Model::DescribeDcdnBgpTrafficDataRequest& request) const;
			DescribeDcdnBlockedRegionsOutcome describeDcdnBlockedRegions(const Model::DescribeDcdnBlockedRegionsRequest &request)const;
			void describeDcdnBlockedRegionsAsync(const Model::DescribeDcdnBlockedRegionsRequest& request, const DescribeDcdnBlockedRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnBlockedRegionsOutcomeCallable describeDcdnBlockedRegionsCallable(const Model::DescribeDcdnBlockedRegionsRequest& request) const;
			DescribeDcdnCertificateDetailOutcome describeDcdnCertificateDetail(const Model::DescribeDcdnCertificateDetailRequest &request)const;
			void describeDcdnCertificateDetailAsync(const Model::DescribeDcdnCertificateDetailRequest& request, const DescribeDcdnCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnCertificateDetailOutcomeCallable describeDcdnCertificateDetailCallable(const Model::DescribeDcdnCertificateDetailRequest& request) const;
			DescribeDcdnCertificateListOutcome describeDcdnCertificateList(const Model::DescribeDcdnCertificateListRequest &request)const;
			void describeDcdnCertificateListAsync(const Model::DescribeDcdnCertificateListRequest& request, const DescribeDcdnCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnCertificateListOutcomeCallable describeDcdnCertificateListCallable(const Model::DescribeDcdnCertificateListRequest& request) const;
			DescribeDcdnDdosServiceOutcome describeDcdnDdosService(const Model::DescribeDcdnDdosServiceRequest &request)const;
			void describeDcdnDdosServiceAsync(const Model::DescribeDcdnDdosServiceRequest& request, const DescribeDcdnDdosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDdosServiceOutcomeCallable describeDcdnDdosServiceCallable(const Model::DescribeDcdnDdosServiceRequest& request) const;
			DescribeDcdnDdosSpecInfoOutcome describeDcdnDdosSpecInfo(const Model::DescribeDcdnDdosSpecInfoRequest &request)const;
			void describeDcdnDdosSpecInfoAsync(const Model::DescribeDcdnDdosSpecInfoRequest& request, const DescribeDcdnDdosSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDdosSpecInfoOutcomeCallable describeDcdnDdosSpecInfoCallable(const Model::DescribeDcdnDdosSpecInfoRequest& request) const;
			DescribeDcdnDeletedDomainsOutcome describeDcdnDeletedDomains(const Model::DescribeDcdnDeletedDomainsRequest &request)const;
			void describeDcdnDeletedDomainsAsync(const Model::DescribeDcdnDeletedDomainsRequest& request, const DescribeDcdnDeletedDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDeletedDomainsOutcomeCallable describeDcdnDeletedDomainsCallable(const Model::DescribeDcdnDeletedDomainsRequest& request) const;
			DescribeDcdnDeliverListOutcome describeDcdnDeliverList(const Model::DescribeDcdnDeliverListRequest &request)const;
			void describeDcdnDeliverListAsync(const Model::DescribeDcdnDeliverListRequest& request, const DescribeDcdnDeliverListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDeliverListOutcomeCallable describeDcdnDeliverListCallable(const Model::DescribeDcdnDeliverListRequest& request) const;
			DescribeDcdnDomainBpsDataOutcome describeDcdnDomainBpsData(const Model::DescribeDcdnDomainBpsDataRequest &request)const;
			void describeDcdnDomainBpsDataAsync(const Model::DescribeDcdnDomainBpsDataRequest& request, const DescribeDcdnDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainBpsDataOutcomeCallable describeDcdnDomainBpsDataCallable(const Model::DescribeDcdnDomainBpsDataRequest& request) const;
			DescribeDcdnDomainBpsDataByLayerOutcome describeDcdnDomainBpsDataByLayer(const Model::DescribeDcdnDomainBpsDataByLayerRequest &request)const;
			void describeDcdnDomainBpsDataByLayerAsync(const Model::DescribeDcdnDomainBpsDataByLayerRequest& request, const DescribeDcdnDomainBpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainBpsDataByLayerOutcomeCallable describeDcdnDomainBpsDataByLayerCallable(const Model::DescribeDcdnDomainBpsDataByLayerRequest& request) const;
			DescribeDcdnDomainByCertificateOutcome describeDcdnDomainByCertificate(const Model::DescribeDcdnDomainByCertificateRequest &request)const;
			void describeDcdnDomainByCertificateAsync(const Model::DescribeDcdnDomainByCertificateRequest& request, const DescribeDcdnDomainByCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainByCertificateOutcomeCallable describeDcdnDomainByCertificateCallable(const Model::DescribeDcdnDomainByCertificateRequest& request) const;
			DescribeDcdnDomainCcActivityLogOutcome describeDcdnDomainCcActivityLog(const Model::DescribeDcdnDomainCcActivityLogRequest &request)const;
			void describeDcdnDomainCcActivityLogAsync(const Model::DescribeDcdnDomainCcActivityLogRequest& request, const DescribeDcdnDomainCcActivityLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainCcActivityLogOutcomeCallable describeDcdnDomainCcActivityLogCallable(const Model::DescribeDcdnDomainCcActivityLogRequest& request) const;
			DescribeDcdnDomainCertificateInfoOutcome describeDcdnDomainCertificateInfo(const Model::DescribeDcdnDomainCertificateInfoRequest &request)const;
			void describeDcdnDomainCertificateInfoAsync(const Model::DescribeDcdnDomainCertificateInfoRequest& request, const DescribeDcdnDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainCertificateInfoOutcomeCallable describeDcdnDomainCertificateInfoCallable(const Model::DescribeDcdnDomainCertificateInfoRequest& request) const;
			DescribeDcdnDomainCnameOutcome describeDcdnDomainCname(const Model::DescribeDcdnDomainCnameRequest &request)const;
			void describeDcdnDomainCnameAsync(const Model::DescribeDcdnDomainCnameRequest& request, const DescribeDcdnDomainCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainCnameOutcomeCallable describeDcdnDomainCnameCallable(const Model::DescribeDcdnDomainCnameRequest& request) const;
			DescribeDcdnDomainConfigsOutcome describeDcdnDomainConfigs(const Model::DescribeDcdnDomainConfigsRequest &request)const;
			void describeDcdnDomainConfigsAsync(const Model::DescribeDcdnDomainConfigsRequest& request, const DescribeDcdnDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainConfigsOutcomeCallable describeDcdnDomainConfigsCallable(const Model::DescribeDcdnDomainConfigsRequest& request) const;
			DescribeDcdnDomainDetailOutcome describeDcdnDomainDetail(const Model::DescribeDcdnDomainDetailRequest &request)const;
			void describeDcdnDomainDetailAsync(const Model::DescribeDcdnDomainDetailRequest& request, const DescribeDcdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainDetailOutcomeCallable describeDcdnDomainDetailCallable(const Model::DescribeDcdnDomainDetailRequest& request) const;
			DescribeDcdnDomainHitRateDataOutcome describeDcdnDomainHitRateData(const Model::DescribeDcdnDomainHitRateDataRequest &request)const;
			void describeDcdnDomainHitRateDataAsync(const Model::DescribeDcdnDomainHitRateDataRequest& request, const DescribeDcdnDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainHitRateDataOutcomeCallable describeDcdnDomainHitRateDataCallable(const Model::DescribeDcdnDomainHitRateDataRequest& request) const;
			DescribeDcdnDomainHttpCodeDataOutcome describeDcdnDomainHttpCodeData(const Model::DescribeDcdnDomainHttpCodeDataRequest &request)const;
			void describeDcdnDomainHttpCodeDataAsync(const Model::DescribeDcdnDomainHttpCodeDataRequest& request, const DescribeDcdnDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainHttpCodeDataOutcomeCallable describeDcdnDomainHttpCodeDataCallable(const Model::DescribeDcdnDomainHttpCodeDataRequest& request) const;
			DescribeDcdnDomainHttpCodeDataByLayerOutcome describeDcdnDomainHttpCodeDataByLayer(const Model::DescribeDcdnDomainHttpCodeDataByLayerRequest &request)const;
			void describeDcdnDomainHttpCodeDataByLayerAsync(const Model::DescribeDcdnDomainHttpCodeDataByLayerRequest& request, const DescribeDcdnDomainHttpCodeDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainHttpCodeDataByLayerOutcomeCallable describeDcdnDomainHttpCodeDataByLayerCallable(const Model::DescribeDcdnDomainHttpCodeDataByLayerRequest& request) const;
			DescribeDcdnDomainIpaBpsDataOutcome describeDcdnDomainIpaBpsData(const Model::DescribeDcdnDomainIpaBpsDataRequest &request)const;
			void describeDcdnDomainIpaBpsDataAsync(const Model::DescribeDcdnDomainIpaBpsDataRequest& request, const DescribeDcdnDomainIpaBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainIpaBpsDataOutcomeCallable describeDcdnDomainIpaBpsDataCallable(const Model::DescribeDcdnDomainIpaBpsDataRequest& request) const;
			DescribeDcdnDomainIpaConnDataOutcome describeDcdnDomainIpaConnData(const Model::DescribeDcdnDomainIpaConnDataRequest &request)const;
			void describeDcdnDomainIpaConnDataAsync(const Model::DescribeDcdnDomainIpaConnDataRequest& request, const DescribeDcdnDomainIpaConnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainIpaConnDataOutcomeCallable describeDcdnDomainIpaConnDataCallable(const Model::DescribeDcdnDomainIpaConnDataRequest& request) const;
			DescribeDcdnDomainIpaTrafficDataOutcome describeDcdnDomainIpaTrafficData(const Model::DescribeDcdnDomainIpaTrafficDataRequest &request)const;
			void describeDcdnDomainIpaTrafficDataAsync(const Model::DescribeDcdnDomainIpaTrafficDataRequest& request, const DescribeDcdnDomainIpaTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainIpaTrafficDataOutcomeCallable describeDcdnDomainIpaTrafficDataCallable(const Model::DescribeDcdnDomainIpaTrafficDataRequest& request) const;
			DescribeDcdnDomainIspDataOutcome describeDcdnDomainIspData(const Model::DescribeDcdnDomainIspDataRequest &request)const;
			void describeDcdnDomainIspDataAsync(const Model::DescribeDcdnDomainIspDataRequest& request, const DescribeDcdnDomainIspDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainIspDataOutcomeCallable describeDcdnDomainIspDataCallable(const Model::DescribeDcdnDomainIspDataRequest& request) const;
			DescribeDcdnDomainLogOutcome describeDcdnDomainLog(const Model::DescribeDcdnDomainLogRequest &request)const;
			void describeDcdnDomainLogAsync(const Model::DescribeDcdnDomainLogRequest& request, const DescribeDcdnDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainLogOutcomeCallable describeDcdnDomainLogCallable(const Model::DescribeDcdnDomainLogRequest& request) const;
			DescribeDcdnDomainLogExTtlOutcome describeDcdnDomainLogExTtl(const Model::DescribeDcdnDomainLogExTtlRequest &request)const;
			void describeDcdnDomainLogExTtlAsync(const Model::DescribeDcdnDomainLogExTtlRequest& request, const DescribeDcdnDomainLogExTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainLogExTtlOutcomeCallable describeDcdnDomainLogExTtlCallable(const Model::DescribeDcdnDomainLogExTtlRequest& request) const;
			DescribeDcdnDomainMultiUsageDataOutcome describeDcdnDomainMultiUsageData(const Model::DescribeDcdnDomainMultiUsageDataRequest &request)const;
			void describeDcdnDomainMultiUsageDataAsync(const Model::DescribeDcdnDomainMultiUsageDataRequest& request, const DescribeDcdnDomainMultiUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainMultiUsageDataOutcomeCallable describeDcdnDomainMultiUsageDataCallable(const Model::DescribeDcdnDomainMultiUsageDataRequest& request) const;
			DescribeDcdnDomainOriginBpsDataOutcome describeDcdnDomainOriginBpsData(const Model::DescribeDcdnDomainOriginBpsDataRequest &request)const;
			void describeDcdnDomainOriginBpsDataAsync(const Model::DescribeDcdnDomainOriginBpsDataRequest& request, const DescribeDcdnDomainOriginBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainOriginBpsDataOutcomeCallable describeDcdnDomainOriginBpsDataCallable(const Model::DescribeDcdnDomainOriginBpsDataRequest& request) const;
			DescribeDcdnDomainOriginTrafficDataOutcome describeDcdnDomainOriginTrafficData(const Model::DescribeDcdnDomainOriginTrafficDataRequest &request)const;
			void describeDcdnDomainOriginTrafficDataAsync(const Model::DescribeDcdnDomainOriginTrafficDataRequest& request, const DescribeDcdnDomainOriginTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainOriginTrafficDataOutcomeCallable describeDcdnDomainOriginTrafficDataCallable(const Model::DescribeDcdnDomainOriginTrafficDataRequest& request) const;
			DescribeDcdnDomainPropertyOutcome describeDcdnDomainProperty(const Model::DescribeDcdnDomainPropertyRequest &request)const;
			void describeDcdnDomainPropertyAsync(const Model::DescribeDcdnDomainPropertyRequest& request, const DescribeDcdnDomainPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainPropertyOutcomeCallable describeDcdnDomainPropertyCallable(const Model::DescribeDcdnDomainPropertyRequest& request) const;
			DescribeDcdnDomainPvDataOutcome describeDcdnDomainPvData(const Model::DescribeDcdnDomainPvDataRequest &request)const;
			void describeDcdnDomainPvDataAsync(const Model::DescribeDcdnDomainPvDataRequest& request, const DescribeDcdnDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainPvDataOutcomeCallable describeDcdnDomainPvDataCallable(const Model::DescribeDcdnDomainPvDataRequest& request) const;
			DescribeDcdnDomainQpsDataOutcome describeDcdnDomainQpsData(const Model::DescribeDcdnDomainQpsDataRequest &request)const;
			void describeDcdnDomainQpsDataAsync(const Model::DescribeDcdnDomainQpsDataRequest& request, const DescribeDcdnDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainQpsDataOutcomeCallable describeDcdnDomainQpsDataCallable(const Model::DescribeDcdnDomainQpsDataRequest& request) const;
			DescribeDcdnDomainQpsDataByLayerOutcome describeDcdnDomainQpsDataByLayer(const Model::DescribeDcdnDomainQpsDataByLayerRequest &request)const;
			void describeDcdnDomainQpsDataByLayerAsync(const Model::DescribeDcdnDomainQpsDataByLayerRequest& request, const DescribeDcdnDomainQpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainQpsDataByLayerOutcomeCallable describeDcdnDomainQpsDataByLayerCallable(const Model::DescribeDcdnDomainQpsDataByLayerRequest& request) const;
			DescribeDcdnDomainRealTimeBpsDataOutcome describeDcdnDomainRealTimeBpsData(const Model::DescribeDcdnDomainRealTimeBpsDataRequest &request)const;
			void describeDcdnDomainRealTimeBpsDataAsync(const Model::DescribeDcdnDomainRealTimeBpsDataRequest& request, const DescribeDcdnDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeBpsDataOutcomeCallable describeDcdnDomainRealTimeBpsDataCallable(const Model::DescribeDcdnDomainRealTimeBpsDataRequest& request) const;
			DescribeDcdnDomainRealTimeByteHitRateDataOutcome describeDcdnDomainRealTimeByteHitRateData(const Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest &request)const;
			void describeDcdnDomainRealTimeByteHitRateDataAsync(const Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest& request, const DescribeDcdnDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeByteHitRateDataOutcomeCallable describeDcdnDomainRealTimeByteHitRateDataCallable(const Model::DescribeDcdnDomainRealTimeByteHitRateDataRequest& request) const;
			DescribeDcdnDomainRealTimeDetailDataOutcome describeDcdnDomainRealTimeDetailData(const Model::DescribeDcdnDomainRealTimeDetailDataRequest &request)const;
			void describeDcdnDomainRealTimeDetailDataAsync(const Model::DescribeDcdnDomainRealTimeDetailDataRequest& request, const DescribeDcdnDomainRealTimeDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeDetailDataOutcomeCallable describeDcdnDomainRealTimeDetailDataCallable(const Model::DescribeDcdnDomainRealTimeDetailDataRequest& request) const;
			DescribeDcdnDomainRealTimeHttpCodeDataOutcome describeDcdnDomainRealTimeHttpCodeData(const Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest &request)const;
			void describeDcdnDomainRealTimeHttpCodeDataAsync(const Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest& request, const DescribeDcdnDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeHttpCodeDataOutcomeCallable describeDcdnDomainRealTimeHttpCodeDataCallable(const Model::DescribeDcdnDomainRealTimeHttpCodeDataRequest& request) const;
			DescribeDcdnDomainRealTimeQpsDataOutcome describeDcdnDomainRealTimeQpsData(const Model::DescribeDcdnDomainRealTimeQpsDataRequest &request)const;
			void describeDcdnDomainRealTimeQpsDataAsync(const Model::DescribeDcdnDomainRealTimeQpsDataRequest& request, const DescribeDcdnDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeQpsDataOutcomeCallable describeDcdnDomainRealTimeQpsDataCallable(const Model::DescribeDcdnDomainRealTimeQpsDataRequest& request) const;
			DescribeDcdnDomainRealTimeReqHitRateDataOutcome describeDcdnDomainRealTimeReqHitRateData(const Model::DescribeDcdnDomainRealTimeReqHitRateDataRequest &request)const;
			void describeDcdnDomainRealTimeReqHitRateDataAsync(const Model::DescribeDcdnDomainRealTimeReqHitRateDataRequest& request, const DescribeDcdnDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeReqHitRateDataOutcomeCallable describeDcdnDomainRealTimeReqHitRateDataCallable(const Model::DescribeDcdnDomainRealTimeReqHitRateDataRequest& request) const;
			DescribeDcdnDomainRealTimeSrcBpsDataOutcome describeDcdnDomainRealTimeSrcBpsData(const Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest &request)const;
			void describeDcdnDomainRealTimeSrcBpsDataAsync(const Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest& request, const DescribeDcdnDomainRealTimeSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeSrcBpsDataOutcomeCallable describeDcdnDomainRealTimeSrcBpsDataCallable(const Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest& request) const;
			DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcome describeDcdnDomainRealTimeSrcHttpCodeData(const Model::DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest &request)const;
			void describeDcdnDomainRealTimeSrcHttpCodeDataAsync(const Model::DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest& request, const DescribeDcdnDomainRealTimeSrcHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeSrcHttpCodeDataOutcomeCallable describeDcdnDomainRealTimeSrcHttpCodeDataCallable(const Model::DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest& request) const;
			DescribeDcdnDomainRealTimeSrcTrafficDataOutcome describeDcdnDomainRealTimeSrcTrafficData(const Model::DescribeDcdnDomainRealTimeSrcTrafficDataRequest &request)const;
			void describeDcdnDomainRealTimeSrcTrafficDataAsync(const Model::DescribeDcdnDomainRealTimeSrcTrafficDataRequest& request, const DescribeDcdnDomainRealTimeSrcTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeSrcTrafficDataOutcomeCallable describeDcdnDomainRealTimeSrcTrafficDataCallable(const Model::DescribeDcdnDomainRealTimeSrcTrafficDataRequest& request) const;
			DescribeDcdnDomainRealTimeTrafficDataOutcome describeDcdnDomainRealTimeTrafficData(const Model::DescribeDcdnDomainRealTimeTrafficDataRequest &request)const;
			void describeDcdnDomainRealTimeTrafficDataAsync(const Model::DescribeDcdnDomainRealTimeTrafficDataRequest& request, const DescribeDcdnDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRealTimeTrafficDataOutcomeCallable describeDcdnDomainRealTimeTrafficDataCallable(const Model::DescribeDcdnDomainRealTimeTrafficDataRequest& request) const;
			DescribeDcdnDomainRegionDataOutcome describeDcdnDomainRegionData(const Model::DescribeDcdnDomainRegionDataRequest &request)const;
			void describeDcdnDomainRegionDataAsync(const Model::DescribeDcdnDomainRegionDataRequest& request, const DescribeDcdnDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainRegionDataOutcomeCallable describeDcdnDomainRegionDataCallable(const Model::DescribeDcdnDomainRegionDataRequest& request) const;
			DescribeDcdnDomainStagingConfigOutcome describeDcdnDomainStagingConfig(const Model::DescribeDcdnDomainStagingConfigRequest &request)const;
			void describeDcdnDomainStagingConfigAsync(const Model::DescribeDcdnDomainStagingConfigRequest& request, const DescribeDcdnDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainStagingConfigOutcomeCallable describeDcdnDomainStagingConfigCallable(const Model::DescribeDcdnDomainStagingConfigRequest& request) const;
			DescribeDcdnDomainTopReferVisitOutcome describeDcdnDomainTopReferVisit(const Model::DescribeDcdnDomainTopReferVisitRequest &request)const;
			void describeDcdnDomainTopReferVisitAsync(const Model::DescribeDcdnDomainTopReferVisitRequest& request, const DescribeDcdnDomainTopReferVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainTopReferVisitOutcomeCallable describeDcdnDomainTopReferVisitCallable(const Model::DescribeDcdnDomainTopReferVisitRequest& request) const;
			DescribeDcdnDomainTopUrlVisitOutcome describeDcdnDomainTopUrlVisit(const Model::DescribeDcdnDomainTopUrlVisitRequest &request)const;
			void describeDcdnDomainTopUrlVisitAsync(const Model::DescribeDcdnDomainTopUrlVisitRequest& request, const DescribeDcdnDomainTopUrlVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainTopUrlVisitOutcomeCallable describeDcdnDomainTopUrlVisitCallable(const Model::DescribeDcdnDomainTopUrlVisitRequest& request) const;
			DescribeDcdnDomainTrafficDataOutcome describeDcdnDomainTrafficData(const Model::DescribeDcdnDomainTrafficDataRequest &request)const;
			void describeDcdnDomainTrafficDataAsync(const Model::DescribeDcdnDomainTrafficDataRequest& request, const DescribeDcdnDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainTrafficDataOutcomeCallable describeDcdnDomainTrafficDataCallable(const Model::DescribeDcdnDomainTrafficDataRequest& request) const;
			DescribeDcdnDomainUsageDataOutcome describeDcdnDomainUsageData(const Model::DescribeDcdnDomainUsageDataRequest &request)const;
			void describeDcdnDomainUsageDataAsync(const Model::DescribeDcdnDomainUsageDataRequest& request, const DescribeDcdnDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainUsageDataOutcomeCallable describeDcdnDomainUsageDataCallable(const Model::DescribeDcdnDomainUsageDataRequest& request) const;
			DescribeDcdnDomainUvDataOutcome describeDcdnDomainUvData(const Model::DescribeDcdnDomainUvDataRequest &request)const;
			void describeDcdnDomainUvDataAsync(const Model::DescribeDcdnDomainUvDataRequest& request, const DescribeDcdnDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainUvDataOutcomeCallable describeDcdnDomainUvDataCallable(const Model::DescribeDcdnDomainUvDataRequest& request) const;
			DescribeDcdnDomainWebsocketBpsDataOutcome describeDcdnDomainWebsocketBpsData(const Model::DescribeDcdnDomainWebsocketBpsDataRequest &request)const;
			void describeDcdnDomainWebsocketBpsDataAsync(const Model::DescribeDcdnDomainWebsocketBpsDataRequest& request, const DescribeDcdnDomainWebsocketBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainWebsocketBpsDataOutcomeCallable describeDcdnDomainWebsocketBpsDataCallable(const Model::DescribeDcdnDomainWebsocketBpsDataRequest& request) const;
			DescribeDcdnDomainWebsocketHttpCodeDataOutcome describeDcdnDomainWebsocketHttpCodeData(const Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest &request)const;
			void describeDcdnDomainWebsocketHttpCodeDataAsync(const Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest& request, const DescribeDcdnDomainWebsocketHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainWebsocketHttpCodeDataOutcomeCallable describeDcdnDomainWebsocketHttpCodeDataCallable(const Model::DescribeDcdnDomainWebsocketHttpCodeDataRequest& request) const;
			DescribeDcdnDomainWebsocketTrafficDataOutcome describeDcdnDomainWebsocketTrafficData(const Model::DescribeDcdnDomainWebsocketTrafficDataRequest &request)const;
			void describeDcdnDomainWebsocketTrafficDataAsync(const Model::DescribeDcdnDomainWebsocketTrafficDataRequest& request, const DescribeDcdnDomainWebsocketTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainWebsocketTrafficDataOutcomeCallable describeDcdnDomainWebsocketTrafficDataCallable(const Model::DescribeDcdnDomainWebsocketTrafficDataRequest& request) const;
			DescribeDcdnDomainsBySourceOutcome describeDcdnDomainsBySource(const Model::DescribeDcdnDomainsBySourceRequest &request)const;
			void describeDcdnDomainsBySourceAsync(const Model::DescribeDcdnDomainsBySourceRequest& request, const DescribeDcdnDomainsBySourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnDomainsBySourceOutcomeCallable describeDcdnDomainsBySourceCallable(const Model::DescribeDcdnDomainsBySourceRequest& request) const;
			DescribeDcdnErUsageDataOutcome describeDcdnErUsageData(const Model::DescribeDcdnErUsageDataRequest &request)const;
			void describeDcdnErUsageDataAsync(const Model::DescribeDcdnErUsageDataRequest& request, const DescribeDcdnErUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnErUsageDataOutcomeCallable describeDcdnErUsageDataCallable(const Model::DescribeDcdnErUsageDataRequest& request) const;
			DescribeDcdnFullDomainsBlockIPConfigOutcome describeDcdnFullDomainsBlockIPConfig(const Model::DescribeDcdnFullDomainsBlockIPConfigRequest &request)const;
			void describeDcdnFullDomainsBlockIPConfigAsync(const Model::DescribeDcdnFullDomainsBlockIPConfigRequest& request, const DescribeDcdnFullDomainsBlockIPConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnFullDomainsBlockIPConfigOutcomeCallable describeDcdnFullDomainsBlockIPConfigCallable(const Model::DescribeDcdnFullDomainsBlockIPConfigRequest& request) const;
			DescribeDcdnFullDomainsBlockIPHistoryOutcome describeDcdnFullDomainsBlockIPHistory(const Model::DescribeDcdnFullDomainsBlockIPHistoryRequest &request)const;
			void describeDcdnFullDomainsBlockIPHistoryAsync(const Model::DescribeDcdnFullDomainsBlockIPHistoryRequest& request, const DescribeDcdnFullDomainsBlockIPHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnFullDomainsBlockIPHistoryOutcomeCallable describeDcdnFullDomainsBlockIPHistoryCallable(const Model::DescribeDcdnFullDomainsBlockIPHistoryRequest& request) const;
			DescribeDcdnHttpsDomainListOutcome describeDcdnHttpsDomainList(const Model::DescribeDcdnHttpsDomainListRequest &request)const;
			void describeDcdnHttpsDomainListAsync(const Model::DescribeDcdnHttpsDomainListRequest& request, const DescribeDcdnHttpsDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnHttpsDomainListOutcomeCallable describeDcdnHttpsDomainListCallable(const Model::DescribeDcdnHttpsDomainListRequest& request) const;
			DescribeDcdnIpInfoOutcome describeDcdnIpInfo(const Model::DescribeDcdnIpInfoRequest &request)const;
			void describeDcdnIpInfoAsync(const Model::DescribeDcdnIpInfoRequest& request, const DescribeDcdnIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpInfoOutcomeCallable describeDcdnIpInfoCallable(const Model::DescribeDcdnIpInfoRequest& request) const;
			DescribeDcdnIpaDomainCidrOutcome describeDcdnIpaDomainCidr(const Model::DescribeDcdnIpaDomainCidrRequest &request)const;
			void describeDcdnIpaDomainCidrAsync(const Model::DescribeDcdnIpaDomainCidrRequest& request, const DescribeDcdnIpaDomainCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaDomainCidrOutcomeCallable describeDcdnIpaDomainCidrCallable(const Model::DescribeDcdnIpaDomainCidrRequest& request) const;
			DescribeDcdnIpaDomainConfigsOutcome describeDcdnIpaDomainConfigs(const Model::DescribeDcdnIpaDomainConfigsRequest &request)const;
			void describeDcdnIpaDomainConfigsAsync(const Model::DescribeDcdnIpaDomainConfigsRequest& request, const DescribeDcdnIpaDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaDomainConfigsOutcomeCallable describeDcdnIpaDomainConfigsCallable(const Model::DescribeDcdnIpaDomainConfigsRequest& request) const;
			DescribeDcdnIpaDomainDetailOutcome describeDcdnIpaDomainDetail(const Model::DescribeDcdnIpaDomainDetailRequest &request)const;
			void describeDcdnIpaDomainDetailAsync(const Model::DescribeDcdnIpaDomainDetailRequest& request, const DescribeDcdnIpaDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaDomainDetailOutcomeCallable describeDcdnIpaDomainDetailCallable(const Model::DescribeDcdnIpaDomainDetailRequest& request) const;
			DescribeDcdnIpaServiceOutcome describeDcdnIpaService(const Model::DescribeDcdnIpaServiceRequest &request)const;
			void describeDcdnIpaServiceAsync(const Model::DescribeDcdnIpaServiceRequest& request, const DescribeDcdnIpaServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaServiceOutcomeCallable describeDcdnIpaServiceCallable(const Model::DescribeDcdnIpaServiceRequest& request) const;
			DescribeDcdnIpaUserDomainsOutcome describeDcdnIpaUserDomains(const Model::DescribeDcdnIpaUserDomainsRequest &request)const;
			void describeDcdnIpaUserDomainsAsync(const Model::DescribeDcdnIpaUserDomainsRequest& request, const DescribeDcdnIpaUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnIpaUserDomainsOutcomeCallable describeDcdnIpaUserDomainsCallable(const Model::DescribeDcdnIpaUserDomainsRequest& request) const;
			DescribeDcdnKvAccountOutcome describeDcdnKvAccount(const Model::DescribeDcdnKvAccountRequest &request)const;
			void describeDcdnKvAccountAsync(const Model::DescribeDcdnKvAccountRequest& request, const DescribeDcdnKvAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnKvAccountOutcomeCallable describeDcdnKvAccountCallable(const Model::DescribeDcdnKvAccountRequest& request) const;
			DescribeDcdnKvAccountStatusOutcome describeDcdnKvAccountStatus(const Model::DescribeDcdnKvAccountStatusRequest &request)const;
			void describeDcdnKvAccountStatusAsync(const Model::DescribeDcdnKvAccountStatusRequest& request, const DescribeDcdnKvAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnKvAccountStatusOutcomeCallable describeDcdnKvAccountStatusCallable(const Model::DescribeDcdnKvAccountStatusRequest& request) const;
			DescribeDcdnKvNamespaceOutcome describeDcdnKvNamespace(const Model::DescribeDcdnKvNamespaceRequest &request)const;
			void describeDcdnKvNamespaceAsync(const Model::DescribeDcdnKvNamespaceRequest& request, const DescribeDcdnKvNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnKvNamespaceOutcomeCallable describeDcdnKvNamespaceCallable(const Model::DescribeDcdnKvNamespaceRequest& request) const;
			DescribeDcdnL2IpsOutcome describeDcdnL2Ips(const Model::DescribeDcdnL2IpsRequest &request)const;
			void describeDcdnL2IpsAsync(const Model::DescribeDcdnL2IpsRequest& request, const DescribeDcdnL2IpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnL2IpsOutcomeCallable describeDcdnL2IpsCallable(const Model::DescribeDcdnL2IpsRequest& request) const;
			DescribeDcdnL2VipsOutcome describeDcdnL2Vips(const Model::DescribeDcdnL2VipsRequest &request)const;
			void describeDcdnL2VipsAsync(const Model::DescribeDcdnL2VipsRequest& request, const DescribeDcdnL2VipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnL2VipsOutcomeCallable describeDcdnL2VipsCallable(const Model::DescribeDcdnL2VipsRequest& request) const;
			DescribeDcdnOriginSiteHealthStatusOutcome describeDcdnOriginSiteHealthStatus(const Model::DescribeDcdnOriginSiteHealthStatusRequest &request)const;
			void describeDcdnOriginSiteHealthStatusAsync(const Model::DescribeDcdnOriginSiteHealthStatusRequest& request, const DescribeDcdnOriginSiteHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnOriginSiteHealthStatusOutcomeCallable describeDcdnOriginSiteHealthStatusCallable(const Model::DescribeDcdnOriginSiteHealthStatusRequest& request) const;
			DescribeDcdnRealTimeDeliveryFieldOutcome describeDcdnRealTimeDeliveryField(const Model::DescribeDcdnRealTimeDeliveryFieldRequest &request)const;
			void describeDcdnRealTimeDeliveryFieldAsync(const Model::DescribeDcdnRealTimeDeliveryFieldRequest& request, const DescribeDcdnRealTimeDeliveryFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRealTimeDeliveryFieldOutcomeCallable describeDcdnRealTimeDeliveryFieldCallable(const Model::DescribeDcdnRealTimeDeliveryFieldRequest& request) const;
			DescribeDcdnRefreshQuotaOutcome describeDcdnRefreshQuota(const Model::DescribeDcdnRefreshQuotaRequest &request)const;
			void describeDcdnRefreshQuotaAsync(const Model::DescribeDcdnRefreshQuotaRequest& request, const DescribeDcdnRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRefreshQuotaOutcomeCallable describeDcdnRefreshQuotaCallable(const Model::DescribeDcdnRefreshQuotaRequest& request) const;
			DescribeDcdnRefreshTaskByIdOutcome describeDcdnRefreshTaskById(const Model::DescribeDcdnRefreshTaskByIdRequest &request)const;
			void describeDcdnRefreshTaskByIdAsync(const Model::DescribeDcdnRefreshTaskByIdRequest& request, const DescribeDcdnRefreshTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRefreshTaskByIdOutcomeCallable describeDcdnRefreshTaskByIdCallable(const Model::DescribeDcdnRefreshTaskByIdRequest& request) const;
			DescribeDcdnRefreshTasksOutcome describeDcdnRefreshTasks(const Model::DescribeDcdnRefreshTasksRequest &request)const;
			void describeDcdnRefreshTasksAsync(const Model::DescribeDcdnRefreshTasksRequest& request, const DescribeDcdnRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRefreshTasksOutcomeCallable describeDcdnRefreshTasksCallable(const Model::DescribeDcdnRefreshTasksRequest& request) const;
			DescribeDcdnRegionAndIspOutcome describeDcdnRegionAndIsp(const Model::DescribeDcdnRegionAndIspRequest &request)const;
			void describeDcdnRegionAndIspAsync(const Model::DescribeDcdnRegionAndIspRequest& request, const DescribeDcdnRegionAndIspAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnRegionAndIspOutcomeCallable describeDcdnRegionAndIspCallable(const Model::DescribeDcdnRegionAndIspRequest& request) const;
			DescribeDcdnReportOutcome describeDcdnReport(const Model::DescribeDcdnReportRequest &request)const;
			void describeDcdnReportAsync(const Model::DescribeDcdnReportRequest& request, const DescribeDcdnReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnReportOutcomeCallable describeDcdnReportCallable(const Model::DescribeDcdnReportRequest& request) const;
			DescribeDcdnReportListOutcome describeDcdnReportList(const Model::DescribeDcdnReportListRequest &request)const;
			void describeDcdnReportListAsync(const Model::DescribeDcdnReportListRequest& request, const DescribeDcdnReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnReportListOutcomeCallable describeDcdnReportListCallable(const Model::DescribeDcdnReportListRequest& request) const;
			DescribeDcdnSLSRealTimeLogTypeOutcome describeDcdnSLSRealTimeLogType(const Model::DescribeDcdnSLSRealTimeLogTypeRequest &request)const;
			void describeDcdnSLSRealTimeLogTypeAsync(const Model::DescribeDcdnSLSRealTimeLogTypeRequest& request, const DescribeDcdnSLSRealTimeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnSLSRealTimeLogTypeOutcomeCallable describeDcdnSLSRealTimeLogTypeCallable(const Model::DescribeDcdnSLSRealTimeLogTypeRequest& request) const;
			DescribeDcdnSLSRealtimeLogDeliveryOutcome describeDcdnSLSRealtimeLogDelivery(const Model::DescribeDcdnSLSRealtimeLogDeliveryRequest &request)const;
			void describeDcdnSLSRealtimeLogDeliveryAsync(const Model::DescribeDcdnSLSRealtimeLogDeliveryRequest& request, const DescribeDcdnSLSRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnSLSRealtimeLogDeliveryOutcomeCallable describeDcdnSLSRealtimeLogDeliveryCallable(const Model::DescribeDcdnSLSRealtimeLogDeliveryRequest& request) const;
			DescribeDcdnSMCertificateDetailOutcome describeDcdnSMCertificateDetail(const Model::DescribeDcdnSMCertificateDetailRequest &request)const;
			void describeDcdnSMCertificateDetailAsync(const Model::DescribeDcdnSMCertificateDetailRequest& request, const DescribeDcdnSMCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnSMCertificateDetailOutcomeCallable describeDcdnSMCertificateDetailCallable(const Model::DescribeDcdnSMCertificateDetailRequest& request) const;
			DescribeDcdnSMCertificateListOutcome describeDcdnSMCertificateList(const Model::DescribeDcdnSMCertificateListRequest &request)const;
			void describeDcdnSMCertificateListAsync(const Model::DescribeDcdnSMCertificateListRequest& request, const DescribeDcdnSMCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnSMCertificateListOutcomeCallable describeDcdnSMCertificateListCallable(const Model::DescribeDcdnSMCertificateListRequest& request) const;
			DescribeDcdnSSLCertificateListOutcome describeDcdnSSLCertificateList(const Model::DescribeDcdnSSLCertificateListRequest &request)const;
			void describeDcdnSSLCertificateListAsync(const Model::DescribeDcdnSSLCertificateListRequest& request, const DescribeDcdnSSLCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnSSLCertificateListOutcomeCallable describeDcdnSSLCertificateListCallable(const Model::DescribeDcdnSSLCertificateListRequest& request) const;
			DescribeDcdnSecFuncInfoOutcome describeDcdnSecFuncInfo(const Model::DescribeDcdnSecFuncInfoRequest &request)const;
			void describeDcdnSecFuncInfoAsync(const Model::DescribeDcdnSecFuncInfoRequest& request, const DescribeDcdnSecFuncInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnSecFuncInfoOutcomeCallable describeDcdnSecFuncInfoCallable(const Model::DescribeDcdnSecFuncInfoRequest& request) const;
			DescribeDcdnSecSpecInfoOutcome describeDcdnSecSpecInfo(const Model::DescribeDcdnSecSpecInfoRequest &request)const;
			void describeDcdnSecSpecInfoAsync(const Model::DescribeDcdnSecSpecInfoRequest& request, const DescribeDcdnSecSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnSecSpecInfoOutcomeCallable describeDcdnSecSpecInfoCallable(const Model::DescribeDcdnSecSpecInfoRequest& request) const;
			DescribeDcdnServiceOutcome describeDcdnService(const Model::DescribeDcdnServiceRequest &request)const;
			void describeDcdnServiceAsync(const Model::DescribeDcdnServiceRequest& request, const DescribeDcdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnServiceOutcomeCallable describeDcdnServiceCallable(const Model::DescribeDcdnServiceRequest& request) const;
			DescribeDcdnStagingIpOutcome describeDcdnStagingIp(const Model::DescribeDcdnStagingIpRequest &request)const;
			void describeDcdnStagingIpAsync(const Model::DescribeDcdnStagingIpRequest& request, const DescribeDcdnStagingIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnStagingIpOutcomeCallable describeDcdnStagingIpCallable(const Model::DescribeDcdnStagingIpRequest& request) const;
			DescribeDcdnSubListOutcome describeDcdnSubList(const Model::DescribeDcdnSubListRequest &request)const;
			void describeDcdnSubListAsync(const Model::DescribeDcdnSubListRequest& request, const DescribeDcdnSubListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnSubListOutcomeCallable describeDcdnSubListCallable(const Model::DescribeDcdnSubListRequest& request) const;
			DescribeDcdnTagResourcesOutcome describeDcdnTagResources(const Model::DescribeDcdnTagResourcesRequest &request)const;
			void describeDcdnTagResourcesAsync(const Model::DescribeDcdnTagResourcesRequest& request, const DescribeDcdnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnTagResourcesOutcomeCallable describeDcdnTagResourcesCallable(const Model::DescribeDcdnTagResourcesRequest& request) const;
			DescribeDcdnTopDomainsByFlowOutcome describeDcdnTopDomainsByFlow(const Model::DescribeDcdnTopDomainsByFlowRequest &request)const;
			void describeDcdnTopDomainsByFlowAsync(const Model::DescribeDcdnTopDomainsByFlowRequest& request, const DescribeDcdnTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnTopDomainsByFlowOutcomeCallable describeDcdnTopDomainsByFlowCallable(const Model::DescribeDcdnTopDomainsByFlowRequest& request) const;
			DescribeDcdnUserBillHistoryOutcome describeDcdnUserBillHistory(const Model::DescribeDcdnUserBillHistoryRequest &request)const;
			void describeDcdnUserBillHistoryAsync(const Model::DescribeDcdnUserBillHistoryRequest& request, const DescribeDcdnUserBillHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserBillHistoryOutcomeCallable describeDcdnUserBillHistoryCallable(const Model::DescribeDcdnUserBillHistoryRequest& request) const;
			DescribeDcdnUserBillTypeOutcome describeDcdnUserBillType(const Model::DescribeDcdnUserBillTypeRequest &request)const;
			void describeDcdnUserBillTypeAsync(const Model::DescribeDcdnUserBillTypeRequest& request, const DescribeDcdnUserBillTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserBillTypeOutcomeCallable describeDcdnUserBillTypeCallable(const Model::DescribeDcdnUserBillTypeRequest& request) const;
			DescribeDcdnUserCertificateExpireCountOutcome describeDcdnUserCertificateExpireCount(const Model::DescribeDcdnUserCertificateExpireCountRequest &request)const;
			void describeDcdnUserCertificateExpireCountAsync(const Model::DescribeDcdnUserCertificateExpireCountRequest& request, const DescribeDcdnUserCertificateExpireCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserCertificateExpireCountOutcomeCallable describeDcdnUserCertificateExpireCountCallable(const Model::DescribeDcdnUserCertificateExpireCountRequest& request) const;
			DescribeDcdnUserConfigsOutcome describeDcdnUserConfigs(const Model::DescribeDcdnUserConfigsRequest &request)const;
			void describeDcdnUserConfigsAsync(const Model::DescribeDcdnUserConfigsRequest& request, const DescribeDcdnUserConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserConfigsOutcomeCallable describeDcdnUserConfigsCallable(const Model::DescribeDcdnUserConfigsRequest& request) const;
			DescribeDcdnUserDomainsOutcome describeDcdnUserDomains(const Model::DescribeDcdnUserDomainsRequest &request)const;
			void describeDcdnUserDomainsAsync(const Model::DescribeDcdnUserDomainsRequest& request, const DescribeDcdnUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserDomainsOutcomeCallable describeDcdnUserDomainsCallable(const Model::DescribeDcdnUserDomainsRequest& request) const;
			DescribeDcdnUserDomainsByFuncOutcome describeDcdnUserDomainsByFunc(const Model::DescribeDcdnUserDomainsByFuncRequest &request)const;
			void describeDcdnUserDomainsByFuncAsync(const Model::DescribeDcdnUserDomainsByFuncRequest& request, const DescribeDcdnUserDomainsByFuncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserDomainsByFuncOutcomeCallable describeDcdnUserDomainsByFuncCallable(const Model::DescribeDcdnUserDomainsByFuncRequest& request) const;
			DescribeDcdnUserQuotaOutcome describeDcdnUserQuota(const Model::DescribeDcdnUserQuotaRequest &request)const;
			void describeDcdnUserQuotaAsync(const Model::DescribeDcdnUserQuotaRequest& request, const DescribeDcdnUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserQuotaOutcomeCallable describeDcdnUserQuotaCallable(const Model::DescribeDcdnUserQuotaRequest& request) const;
			DescribeDcdnUserRealTimeDeliveryFieldOutcome describeDcdnUserRealTimeDeliveryField(const Model::DescribeDcdnUserRealTimeDeliveryFieldRequest &request)const;
			void describeDcdnUserRealTimeDeliveryFieldAsync(const Model::DescribeDcdnUserRealTimeDeliveryFieldRequest& request, const DescribeDcdnUserRealTimeDeliveryFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserRealTimeDeliveryFieldOutcomeCallable describeDcdnUserRealTimeDeliveryFieldCallable(const Model::DescribeDcdnUserRealTimeDeliveryFieldRequest& request) const;
			DescribeDcdnUserResourcePackageOutcome describeDcdnUserResourcePackage(const Model::DescribeDcdnUserResourcePackageRequest &request)const;
			void describeDcdnUserResourcePackageAsync(const Model::DescribeDcdnUserResourcePackageRequest& request, const DescribeDcdnUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserResourcePackageOutcomeCallable describeDcdnUserResourcePackageCallable(const Model::DescribeDcdnUserResourcePackageRequest& request) const;
			DescribeDcdnUserSecDropOutcome describeDcdnUserSecDrop(const Model::DescribeDcdnUserSecDropRequest &request)const;
			void describeDcdnUserSecDropAsync(const Model::DescribeDcdnUserSecDropRequest& request, const DescribeDcdnUserSecDropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserSecDropOutcomeCallable describeDcdnUserSecDropCallable(const Model::DescribeDcdnUserSecDropRequest& request) const;
			DescribeDcdnUserSecDropByMinuteOutcome describeDcdnUserSecDropByMinute(const Model::DescribeDcdnUserSecDropByMinuteRequest &request)const;
			void describeDcdnUserSecDropByMinuteAsync(const Model::DescribeDcdnUserSecDropByMinuteRequest& request, const DescribeDcdnUserSecDropByMinuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserSecDropByMinuteOutcomeCallable describeDcdnUserSecDropByMinuteCallable(const Model::DescribeDcdnUserSecDropByMinuteRequest& request) const;
			DescribeDcdnUserTagsOutcome describeDcdnUserTags(const Model::DescribeDcdnUserTagsRequest &request)const;
			void describeDcdnUserTagsAsync(const Model::DescribeDcdnUserTagsRequest& request, const DescribeDcdnUserTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserTagsOutcomeCallable describeDcdnUserTagsCallable(const Model::DescribeDcdnUserTagsRequest& request) const;
			DescribeDcdnUserVipsByDomainOutcome describeDcdnUserVipsByDomain(const Model::DescribeDcdnUserVipsByDomainRequest &request)const;
			void describeDcdnUserVipsByDomainAsync(const Model::DescribeDcdnUserVipsByDomainRequest& request, const DescribeDcdnUserVipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnUserVipsByDomainOutcomeCallable describeDcdnUserVipsByDomainCallable(const Model::DescribeDcdnUserVipsByDomainRequest& request) const;
			DescribeDcdnVerifyContentOutcome describeDcdnVerifyContent(const Model::DescribeDcdnVerifyContentRequest &request)const;
			void describeDcdnVerifyContentAsync(const Model::DescribeDcdnVerifyContentRequest& request, const DescribeDcdnVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnVerifyContentOutcomeCallable describeDcdnVerifyContentCallable(const Model::DescribeDcdnVerifyContentRequest& request) const;
			DescribeDcdnWafBotAppKeyOutcome describeDcdnWafBotAppKey(const Model::DescribeDcdnWafBotAppKeyRequest &request)const;
			void describeDcdnWafBotAppKeyAsync(const Model::DescribeDcdnWafBotAppKeyRequest& request, const DescribeDcdnWafBotAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafBotAppKeyOutcomeCallable describeDcdnWafBotAppKeyCallable(const Model::DescribeDcdnWafBotAppKeyRequest& request) const;
			DescribeDcdnWafDefaultRulesOutcome describeDcdnWafDefaultRules(const Model::DescribeDcdnWafDefaultRulesRequest &request)const;
			void describeDcdnWafDefaultRulesAsync(const Model::DescribeDcdnWafDefaultRulesRequest& request, const DescribeDcdnWafDefaultRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafDefaultRulesOutcomeCallable describeDcdnWafDefaultRulesCallable(const Model::DescribeDcdnWafDefaultRulesRequest& request) const;
			DescribeDcdnWafDomainOutcome describeDcdnWafDomain(const Model::DescribeDcdnWafDomainRequest &request)const;
			void describeDcdnWafDomainAsync(const Model::DescribeDcdnWafDomainRequest& request, const DescribeDcdnWafDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafDomainOutcomeCallable describeDcdnWafDomainCallable(const Model::DescribeDcdnWafDomainRequest& request) const;
			DescribeDcdnWafDomainDetailOutcome describeDcdnWafDomainDetail(const Model::DescribeDcdnWafDomainDetailRequest &request)const;
			void describeDcdnWafDomainDetailAsync(const Model::DescribeDcdnWafDomainDetailRequest& request, const DescribeDcdnWafDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafDomainDetailOutcomeCallable describeDcdnWafDomainDetailCallable(const Model::DescribeDcdnWafDomainDetailRequest& request) const;
			DescribeDcdnWafDomainsOutcome describeDcdnWafDomains(const Model::DescribeDcdnWafDomainsRequest &request)const;
			void describeDcdnWafDomainsAsync(const Model::DescribeDcdnWafDomainsRequest& request, const DescribeDcdnWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafDomainsOutcomeCallable describeDcdnWafDomainsCallable(const Model::DescribeDcdnWafDomainsRequest& request) const;
			DescribeDcdnWafFilterInfoOutcome describeDcdnWafFilterInfo(const Model::DescribeDcdnWafFilterInfoRequest &request)const;
			void describeDcdnWafFilterInfoAsync(const Model::DescribeDcdnWafFilterInfoRequest& request, const DescribeDcdnWafFilterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafFilterInfoOutcomeCallable describeDcdnWafFilterInfoCallable(const Model::DescribeDcdnWafFilterInfoRequest& request) const;
			DescribeDcdnWafGeoInfoOutcome describeDcdnWafGeoInfo(const Model::DescribeDcdnWafGeoInfoRequest &request)const;
			void describeDcdnWafGeoInfoAsync(const Model::DescribeDcdnWafGeoInfoRequest& request, const DescribeDcdnWafGeoInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafGeoInfoOutcomeCallable describeDcdnWafGeoInfoCallable(const Model::DescribeDcdnWafGeoInfoRequest& request) const;
			DescribeDcdnWafGroupOutcome describeDcdnWafGroup(const Model::DescribeDcdnWafGroupRequest &request)const;
			void describeDcdnWafGroupAsync(const Model::DescribeDcdnWafGroupRequest& request, const DescribeDcdnWafGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafGroupOutcomeCallable describeDcdnWafGroupCallable(const Model::DescribeDcdnWafGroupRequest& request) const;
			DescribeDcdnWafGroupsOutcome describeDcdnWafGroups(const Model::DescribeDcdnWafGroupsRequest &request)const;
			void describeDcdnWafGroupsAsync(const Model::DescribeDcdnWafGroupsRequest& request, const DescribeDcdnWafGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafGroupsOutcomeCallable describeDcdnWafGroupsCallable(const Model::DescribeDcdnWafGroupsRequest& request) const;
			DescribeDcdnWafLogsOutcome describeDcdnWafLogs(const Model::DescribeDcdnWafLogsRequest &request)const;
			void describeDcdnWafLogsAsync(const Model::DescribeDcdnWafLogsRequest& request, const DescribeDcdnWafLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafLogsOutcomeCallable describeDcdnWafLogsCallable(const Model::DescribeDcdnWafLogsRequest& request) const;
			DescribeDcdnWafPoliciesOutcome describeDcdnWafPolicies(const Model::DescribeDcdnWafPoliciesRequest &request)const;
			void describeDcdnWafPoliciesAsync(const Model::DescribeDcdnWafPoliciesRequest& request, const DescribeDcdnWafPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafPoliciesOutcomeCallable describeDcdnWafPoliciesCallable(const Model::DescribeDcdnWafPoliciesRequest& request) const;
			DescribeDcdnWafPolicyOutcome describeDcdnWafPolicy(const Model::DescribeDcdnWafPolicyRequest &request)const;
			void describeDcdnWafPolicyAsync(const Model::DescribeDcdnWafPolicyRequest& request, const DescribeDcdnWafPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafPolicyOutcomeCallable describeDcdnWafPolicyCallable(const Model::DescribeDcdnWafPolicyRequest& request) const;
			DescribeDcdnWafPolicyDomainsOutcome describeDcdnWafPolicyDomains(const Model::DescribeDcdnWafPolicyDomainsRequest &request)const;
			void describeDcdnWafPolicyDomainsAsync(const Model::DescribeDcdnWafPolicyDomainsRequest& request, const DescribeDcdnWafPolicyDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafPolicyDomainsOutcomeCallable describeDcdnWafPolicyDomainsCallable(const Model::DescribeDcdnWafPolicyDomainsRequest& request) const;
			DescribeDcdnWafPolicyValidDomainsOutcome describeDcdnWafPolicyValidDomains(const Model::DescribeDcdnWafPolicyValidDomainsRequest &request)const;
			void describeDcdnWafPolicyValidDomainsAsync(const Model::DescribeDcdnWafPolicyValidDomainsRequest& request, const DescribeDcdnWafPolicyValidDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafPolicyValidDomainsOutcomeCallable describeDcdnWafPolicyValidDomainsCallable(const Model::DescribeDcdnWafPolicyValidDomainsRequest& request) const;
			DescribeDcdnWafRuleOutcome describeDcdnWafRule(const Model::DescribeDcdnWafRuleRequest &request)const;
			void describeDcdnWafRuleAsync(const Model::DescribeDcdnWafRuleRequest& request, const DescribeDcdnWafRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafRuleOutcomeCallable describeDcdnWafRuleCallable(const Model::DescribeDcdnWafRuleRequest& request) const;
			DescribeDcdnWafRulesOutcome describeDcdnWafRules(const Model::DescribeDcdnWafRulesRequest &request)const;
			void describeDcdnWafRulesAsync(const Model::DescribeDcdnWafRulesRequest& request, const DescribeDcdnWafRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafRulesOutcomeCallable describeDcdnWafRulesCallable(const Model::DescribeDcdnWafRulesRequest& request) const;
			DescribeDcdnWafScenesOutcome describeDcdnWafScenes(const Model::DescribeDcdnWafScenesRequest &request)const;
			void describeDcdnWafScenesAsync(const Model::DescribeDcdnWafScenesRequest& request, const DescribeDcdnWafScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafScenesOutcomeCallable describeDcdnWafScenesCallable(const Model::DescribeDcdnWafScenesRequest& request) const;
			DescribeDcdnWafServiceOutcome describeDcdnWafService(const Model::DescribeDcdnWafServiceRequest &request)const;
			void describeDcdnWafServiceAsync(const Model::DescribeDcdnWafServiceRequest& request, const DescribeDcdnWafServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafServiceOutcomeCallable describeDcdnWafServiceCallable(const Model::DescribeDcdnWafServiceRequest& request) const;
			DescribeDcdnWafSpecInfoOutcome describeDcdnWafSpecInfo(const Model::DescribeDcdnWafSpecInfoRequest &request)const;
			void describeDcdnWafSpecInfoAsync(const Model::DescribeDcdnWafSpecInfoRequest& request, const DescribeDcdnWafSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafSpecInfoOutcomeCallable describeDcdnWafSpecInfoCallable(const Model::DescribeDcdnWafSpecInfoRequest& request) const;
			DescribeDcdnWafUsageDataOutcome describeDcdnWafUsageData(const Model::DescribeDcdnWafUsageDataRequest &request)const;
			void describeDcdnWafUsageDataAsync(const Model::DescribeDcdnWafUsageDataRequest& request, const DescribeDcdnWafUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnWafUsageDataOutcomeCallable describeDcdnWafUsageDataCallable(const Model::DescribeDcdnWafUsageDataRequest& request) const;
			DescribeDcdnsecServiceOutcome describeDcdnsecService(const Model::DescribeDcdnsecServiceRequest &request)const;
			void describeDcdnsecServiceAsync(const Model::DescribeDcdnsecServiceRequest& request, const DescribeDcdnsecServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDcdnsecServiceOutcomeCallable describeDcdnsecServiceCallable(const Model::DescribeDcdnsecServiceRequest& request) const;
			DescribeDdosAllEventListOutcome describeDdosAllEventList(const Model::DescribeDdosAllEventListRequest &request)const;
			void describeDdosAllEventListAsync(const Model::DescribeDdosAllEventListRequest& request, const DescribeDdosAllEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDdosAllEventListOutcomeCallable describeDdosAllEventListCallable(const Model::DescribeDdosAllEventListRequest& request) const;
			DescribeEncryptRoutineUidOutcome describeEncryptRoutineUid(const Model::DescribeEncryptRoutineUidRequest &request)const;
			void describeEncryptRoutineUidAsync(const Model::DescribeEncryptRoutineUidRequest& request, const DescribeEncryptRoutineUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEncryptRoutineUidOutcomeCallable describeEncryptRoutineUidCallable(const Model::DescribeEncryptRoutineUidRequest& request) const;
			DescribeHighlightInfoOutcome describeHighlightInfo(const Model::DescribeHighlightInfoRequest &request)const;
			void describeHighlightInfoAsync(const Model::DescribeHighlightInfoRequest& request, const DescribeHighlightInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHighlightInfoOutcomeCallable describeHighlightInfoCallable(const Model::DescribeHighlightInfoRequest& request) const;
			DescribeKvUsageDataOutcome describeKvUsageData(const Model::DescribeKvUsageDataRequest &request)const;
			void describeKvUsageDataAsync(const Model::DescribeKvUsageDataRequest& request, const DescribeKvUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKvUsageDataOutcomeCallable describeKvUsageDataCallable(const Model::DescribeKvUsageDataRequest& request) const;
			DescribeRDDomainConfigOutcome describeRDDomainConfig(const Model::DescribeRDDomainConfigRequest &request)const;
			void describeRDDomainConfigAsync(const Model::DescribeRDDomainConfigRequest& request, const DescribeRDDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRDDomainConfigOutcomeCallable describeRDDomainConfigCallable(const Model::DescribeRDDomainConfigRequest& request) const;
			DescribeRDDomainsOutcome describeRDDomains(const Model::DescribeRDDomainsRequest &request)const;
			void describeRDDomainsAsync(const Model::DescribeRDDomainsRequest& request, const DescribeRDDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRDDomainsOutcomeCallable describeRDDomainsCallable(const Model::DescribeRDDomainsRequest& request) const;
			DescribeRoutineOutcome describeRoutine(const Model::DescribeRoutineRequest &request)const;
			void describeRoutineAsync(const Model::DescribeRoutineRequest& request, const DescribeRoutineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoutineOutcomeCallable describeRoutineCallable(const Model::DescribeRoutineRequest& request) const;
			DescribeRoutineCanaryEnvsOutcome describeRoutineCanaryEnvs(const Model::DescribeRoutineCanaryEnvsRequest &request)const;
			void describeRoutineCanaryEnvsAsync(const Model::DescribeRoutineCanaryEnvsRequest& request, const DescribeRoutineCanaryEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoutineCanaryEnvsOutcomeCallable describeRoutineCanaryEnvsCallable(const Model::DescribeRoutineCanaryEnvsRequest& request) const;
			DescribeRoutineCodeRevisionOutcome describeRoutineCodeRevision(const Model::DescribeRoutineCodeRevisionRequest &request)const;
			void describeRoutineCodeRevisionAsync(const Model::DescribeRoutineCodeRevisionRequest& request, const DescribeRoutineCodeRevisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoutineCodeRevisionOutcomeCallable describeRoutineCodeRevisionCallable(const Model::DescribeRoutineCodeRevisionRequest& request) const;
			DescribeRoutineRelatedDomainsOutcome describeRoutineRelatedDomains(const Model::DescribeRoutineRelatedDomainsRequest &request)const;
			void describeRoutineRelatedDomainsAsync(const Model::DescribeRoutineRelatedDomainsRequest& request, const DescribeRoutineRelatedDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoutineRelatedDomainsOutcomeCallable describeRoutineRelatedDomainsCallable(const Model::DescribeRoutineRelatedDomainsRequest& request) const;
			DescribeRoutineSpecOutcome describeRoutineSpec(const Model::DescribeRoutineSpecRequest &request)const;
			void describeRoutineSpecAsync(const Model::DescribeRoutineSpecRequest& request, const DescribeRoutineSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoutineSpecOutcomeCallable describeRoutineSpecCallable(const Model::DescribeRoutineSpecRequest& request) const;
			DescribeRoutineUserInfoOutcome describeRoutineUserInfo(const Model::DescribeRoutineUserInfoRequest &request)const;
			void describeRoutineUserInfoAsync(const Model::DescribeRoutineUserInfoRequest& request, const DescribeRoutineUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoutineUserInfoOutcomeCallable describeRoutineUserInfoCallable(const Model::DescribeRoutineUserInfoRequest& request) const;
			DescribeUserDcdnIpaStatusOutcome describeUserDcdnIpaStatus(const Model::DescribeUserDcdnIpaStatusRequest &request)const;
			void describeUserDcdnIpaStatusAsync(const Model::DescribeUserDcdnIpaStatusRequest& request, const DescribeUserDcdnIpaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserDcdnIpaStatusOutcomeCallable describeUserDcdnIpaStatusCallable(const Model::DescribeUserDcdnIpaStatusRequest& request) const;
			DescribeUserDcdnStatusOutcome describeUserDcdnStatus(const Model::DescribeUserDcdnStatusRequest &request)const;
			void describeUserDcdnStatusAsync(const Model::DescribeUserDcdnStatusRequest& request, const DescribeUserDcdnStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserDcdnStatusOutcomeCallable describeUserDcdnStatusCallable(const Model::DescribeUserDcdnStatusRequest& request) const;
			DescribeUserErStatusOutcome describeUserErStatus(const Model::DescribeUserErStatusRequest &request)const;
			void describeUserErStatusAsync(const Model::DescribeUserErStatusRequest& request, const DescribeUserErStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserErStatusOutcomeCallable describeUserErStatusCallable(const Model::DescribeUserErStatusRequest& request) const;
			DescribeUserLogserviceStatusOutcome describeUserLogserviceStatus(const Model::DescribeUserLogserviceStatusRequest &request)const;
			void describeUserLogserviceStatusAsync(const Model::DescribeUserLogserviceStatusRequest& request, const DescribeUserLogserviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserLogserviceStatusOutcomeCallable describeUserLogserviceStatusCallable(const Model::DescribeUserLogserviceStatusRequest& request) const;
			EditRoutineConfOutcome editRoutineConf(const Model::EditRoutineConfRequest &request)const;
			void editRoutineConfAsync(const Model::EditRoutineConfRequest& request, const EditRoutineConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditRoutineConfOutcomeCallable editRoutineConfCallable(const Model::EditRoutineConfRequest& request) const;
			GetDcdnKvOutcome getDcdnKv(const Model::GetDcdnKvRequest &request)const;
			void getDcdnKvAsync(const Model::GetDcdnKvRequest& request, const GetDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDcdnKvOutcomeCallable getDcdnKvCallable(const Model::GetDcdnKvRequest& request) const;
			GetDcdnKvStatusOutcome getDcdnKvStatus(const Model::GetDcdnKvStatusRequest &request)const;
			void getDcdnKvStatusAsync(const Model::GetDcdnKvStatusRequest& request, const GetDcdnKvStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDcdnKvStatusOutcomeCallable getDcdnKvStatusCallable(const Model::GetDcdnKvStatusRequest& request) const;
			ListDcdnKvOutcome listDcdnKv(const Model::ListDcdnKvRequest &request)const;
			void listDcdnKvAsync(const Model::ListDcdnKvRequest& request, const ListDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDcdnKvOutcomeCallable listDcdnKvCallable(const Model::ListDcdnKvRequest& request) const;
			ListDcdnRealTimeDeliveryProjectOutcome listDcdnRealTimeDeliveryProject(const Model::ListDcdnRealTimeDeliveryProjectRequest &request)const;
			void listDcdnRealTimeDeliveryProjectAsync(const Model::ListDcdnRealTimeDeliveryProjectRequest& request, const ListDcdnRealTimeDeliveryProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDcdnRealTimeDeliveryProjectOutcomeCallable listDcdnRealTimeDeliveryProjectCallable(const Model::ListDcdnRealTimeDeliveryProjectRequest& request) const;
			ModifyDCdnDomainSchdmByPropertyOutcome modifyDCdnDomainSchdmByProperty(const Model::ModifyDCdnDomainSchdmByPropertyRequest &request)const;
			void modifyDCdnDomainSchdmByPropertyAsync(const Model::ModifyDCdnDomainSchdmByPropertyRequest& request, const ModifyDCdnDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDCdnDomainSchdmByPropertyOutcomeCallable modifyDCdnDomainSchdmByPropertyCallable(const Model::ModifyDCdnDomainSchdmByPropertyRequest& request) const;
			ModifyDcdnWafGroupOutcome modifyDcdnWafGroup(const Model::ModifyDcdnWafGroupRequest &request)const;
			void modifyDcdnWafGroupAsync(const Model::ModifyDcdnWafGroupRequest& request, const ModifyDcdnWafGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDcdnWafGroupOutcomeCallable modifyDcdnWafGroupCallable(const Model::ModifyDcdnWafGroupRequest& request) const;
			ModifyDcdnWafPolicyOutcome modifyDcdnWafPolicy(const Model::ModifyDcdnWafPolicyRequest &request)const;
			void modifyDcdnWafPolicyAsync(const Model::ModifyDcdnWafPolicyRequest& request, const ModifyDcdnWafPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDcdnWafPolicyOutcomeCallable modifyDcdnWafPolicyCallable(const Model::ModifyDcdnWafPolicyRequest& request) const;
			ModifyDcdnWafPolicyDomainsOutcome modifyDcdnWafPolicyDomains(const Model::ModifyDcdnWafPolicyDomainsRequest &request)const;
			void modifyDcdnWafPolicyDomainsAsync(const Model::ModifyDcdnWafPolicyDomainsRequest& request, const ModifyDcdnWafPolicyDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDcdnWafPolicyDomainsOutcomeCallable modifyDcdnWafPolicyDomainsCallable(const Model::ModifyDcdnWafPolicyDomainsRequest& request) const;
			ModifyDcdnWafRuleOutcome modifyDcdnWafRule(const Model::ModifyDcdnWafRuleRequest &request)const;
			void modifyDcdnWafRuleAsync(const Model::ModifyDcdnWafRuleRequest& request, const ModifyDcdnWafRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDcdnWafRuleOutcomeCallable modifyDcdnWafRuleCallable(const Model::ModifyDcdnWafRuleRequest& request) const;
			OpenDcdnServiceOutcome openDcdnService(const Model::OpenDcdnServiceRequest &request)const;
			void openDcdnServiceAsync(const Model::OpenDcdnServiceRequest& request, const OpenDcdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenDcdnServiceOutcomeCallable openDcdnServiceCallable(const Model::OpenDcdnServiceRequest& request) const;
			PreloadDcdnObjectCachesOutcome preloadDcdnObjectCaches(const Model::PreloadDcdnObjectCachesRequest &request)const;
			void preloadDcdnObjectCachesAsync(const Model::PreloadDcdnObjectCachesRequest& request, const PreloadDcdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreloadDcdnObjectCachesOutcomeCallable preloadDcdnObjectCachesCallable(const Model::PreloadDcdnObjectCachesRequest& request) const;
			PublishDcdnStagingConfigToProductionOutcome publishDcdnStagingConfigToProduction(const Model::PublishDcdnStagingConfigToProductionRequest &request)const;
			void publishDcdnStagingConfigToProductionAsync(const Model::PublishDcdnStagingConfigToProductionRequest& request, const PublishDcdnStagingConfigToProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishDcdnStagingConfigToProductionOutcomeCallable publishDcdnStagingConfigToProductionCallable(const Model::PublishDcdnStagingConfigToProductionRequest& request) const;
			PublishRoutineCodeRevisionOutcome publishRoutineCodeRevision(const Model::PublishRoutineCodeRevisionRequest &request)const;
			void publishRoutineCodeRevisionAsync(const Model::PublishRoutineCodeRevisionRequest& request, const PublishRoutineCodeRevisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishRoutineCodeRevisionOutcomeCallable publishRoutineCodeRevisionCallable(const Model::PublishRoutineCodeRevisionRequest& request) const;
			PutDcdnKvOutcome putDcdnKv(const Model::PutDcdnKvRequest &request)const;
			void putDcdnKvAsync(const Model::PutDcdnKvRequest& request, const PutDcdnKvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutDcdnKvOutcomeCallable putDcdnKvCallable(const Model::PutDcdnKvRequest& request) const;
			PutDcdnKvNamespaceOutcome putDcdnKvNamespace(const Model::PutDcdnKvNamespaceRequest &request)const;
			void putDcdnKvNamespaceAsync(const Model::PutDcdnKvNamespaceRequest& request, const PutDcdnKvNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutDcdnKvNamespaceOutcomeCallable putDcdnKvNamespaceCallable(const Model::PutDcdnKvNamespaceRequest& request) const;
			PutDcdnKvWithHighCapacityOutcome putDcdnKvWithHighCapacity(const Model::PutDcdnKvWithHighCapacityRequest &request)const;
			void putDcdnKvWithHighCapacityAsync(const Model::PutDcdnKvWithHighCapacityRequest& request, const PutDcdnKvWithHighCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutDcdnKvWithHighCapacityOutcomeCallable putDcdnKvWithHighCapacityCallable(const Model::PutDcdnKvWithHighCapacityRequest& request) const;
			RefreshDcdnObjectCacheByCacheTagOutcome refreshDcdnObjectCacheByCacheTag(const Model::RefreshDcdnObjectCacheByCacheTagRequest &request)const;
			void refreshDcdnObjectCacheByCacheTagAsync(const Model::RefreshDcdnObjectCacheByCacheTagRequest& request, const RefreshDcdnObjectCacheByCacheTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshDcdnObjectCacheByCacheTagOutcomeCallable refreshDcdnObjectCacheByCacheTagCallable(const Model::RefreshDcdnObjectCacheByCacheTagRequest& request) const;
			RefreshDcdnObjectCachesOutcome refreshDcdnObjectCaches(const Model::RefreshDcdnObjectCachesRequest &request)const;
			void refreshDcdnObjectCachesAsync(const Model::RefreshDcdnObjectCachesRequest& request, const RefreshDcdnObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshDcdnObjectCachesOutcomeCallable refreshDcdnObjectCachesCallable(const Model::RefreshDcdnObjectCachesRequest& request) const;
			RefreshErObjectCachesOutcome refreshErObjectCaches(const Model::RefreshErObjectCachesRequest &request)const;
			void refreshErObjectCachesAsync(const Model::RefreshErObjectCachesRequest& request, const RefreshErObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshErObjectCachesOutcomeCallable refreshErObjectCachesCallable(const Model::RefreshErObjectCachesRequest& request) const;
			RollbackDcdnStagingConfigOutcome rollbackDcdnStagingConfig(const Model::RollbackDcdnStagingConfigRequest &request)const;
			void rollbackDcdnStagingConfigAsync(const Model::RollbackDcdnStagingConfigRequest& request, const RollbackDcdnStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackDcdnStagingConfigOutcomeCallable rollbackDcdnStagingConfigCallable(const Model::RollbackDcdnStagingConfigRequest& request) const;
			SetDcdnDomainCSRCertificateOutcome setDcdnDomainCSRCertificate(const Model::SetDcdnDomainCSRCertificateRequest &request)const;
			void setDcdnDomainCSRCertificateAsync(const Model::SetDcdnDomainCSRCertificateRequest& request, const SetDcdnDomainCSRCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnDomainCSRCertificateOutcomeCallable setDcdnDomainCSRCertificateCallable(const Model::SetDcdnDomainCSRCertificateRequest& request) const;
			SetDcdnDomainCertificateOutcome setDcdnDomainCertificate(const Model::SetDcdnDomainCertificateRequest &request)const;
			void setDcdnDomainCertificateAsync(const Model::SetDcdnDomainCertificateRequest& request, const SetDcdnDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnDomainCertificateOutcomeCallable setDcdnDomainCertificateCallable(const Model::SetDcdnDomainCertificateRequest& request) const;
			SetDcdnDomainSMCertificateOutcome setDcdnDomainSMCertificate(const Model::SetDcdnDomainSMCertificateRequest &request)const;
			void setDcdnDomainSMCertificateAsync(const Model::SetDcdnDomainSMCertificateRequest& request, const SetDcdnDomainSMCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnDomainSMCertificateOutcomeCallable setDcdnDomainSMCertificateCallable(const Model::SetDcdnDomainSMCertificateRequest& request) const;
			SetDcdnDomainSSLCertificateOutcome setDcdnDomainSSLCertificate(const Model::SetDcdnDomainSSLCertificateRequest &request)const;
			void setDcdnDomainSSLCertificateAsync(const Model::SetDcdnDomainSSLCertificateRequest& request, const SetDcdnDomainSSLCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnDomainSSLCertificateOutcomeCallable setDcdnDomainSSLCertificateCallable(const Model::SetDcdnDomainSSLCertificateRequest& request) const;
			SetDcdnDomainStagingConfigOutcome setDcdnDomainStagingConfig(const Model::SetDcdnDomainStagingConfigRequest &request)const;
			void setDcdnDomainStagingConfigAsync(const Model::SetDcdnDomainStagingConfigRequest& request, const SetDcdnDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnDomainStagingConfigOutcomeCallable setDcdnDomainStagingConfigCallable(const Model::SetDcdnDomainStagingConfigRequest& request) const;
			SetDcdnFullDomainsBlockIPOutcome setDcdnFullDomainsBlockIP(const Model::SetDcdnFullDomainsBlockIPRequest &request)const;
			void setDcdnFullDomainsBlockIPAsync(const Model::SetDcdnFullDomainsBlockIPRequest& request, const SetDcdnFullDomainsBlockIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnFullDomainsBlockIPOutcomeCallable setDcdnFullDomainsBlockIPCallable(const Model::SetDcdnFullDomainsBlockIPRequest& request) const;
			SetDcdnUserConfigOutcome setDcdnUserConfig(const Model::SetDcdnUserConfigRequest &request)const;
			void setDcdnUserConfigAsync(const Model::SetDcdnUserConfigRequest& request, const SetDcdnUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDcdnUserConfigOutcomeCallable setDcdnUserConfigCallable(const Model::SetDcdnUserConfigRequest& request) const;
			SetRoutineSubdomainOutcome setRoutineSubdomain(const Model::SetRoutineSubdomainRequest &request)const;
			void setRoutineSubdomainAsync(const Model::SetRoutineSubdomainRequest& request, const SetRoutineSubdomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetRoutineSubdomainOutcomeCallable setRoutineSubdomainCallable(const Model::SetRoutineSubdomainRequest& request) const;
			StartDcdnDomainOutcome startDcdnDomain(const Model::StartDcdnDomainRequest &request)const;
			void startDcdnDomainAsync(const Model::StartDcdnDomainRequest& request, const StartDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDcdnDomainOutcomeCallable startDcdnDomainCallable(const Model::StartDcdnDomainRequest& request) const;
			StartDcdnIpaDomainOutcome startDcdnIpaDomain(const Model::StartDcdnIpaDomainRequest &request)const;
			void startDcdnIpaDomainAsync(const Model::StartDcdnIpaDomainRequest& request, const StartDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDcdnIpaDomainOutcomeCallable startDcdnIpaDomainCallable(const Model::StartDcdnIpaDomainRequest& request) const;
			StopDcdnDomainOutcome stopDcdnDomain(const Model::StopDcdnDomainRequest &request)const;
			void stopDcdnDomainAsync(const Model::StopDcdnDomainRequest& request, const StopDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDcdnDomainOutcomeCallable stopDcdnDomainCallable(const Model::StopDcdnDomainRequest& request) const;
			StopDcdnIpaDomainOutcome stopDcdnIpaDomain(const Model::StopDcdnIpaDomainRequest &request)const;
			void stopDcdnIpaDomainAsync(const Model::StopDcdnIpaDomainRequest& request, const StopDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDcdnIpaDomainOutcomeCallable stopDcdnIpaDomainCallable(const Model::StopDcdnIpaDomainRequest& request) const;
			TagDcdnResourcesOutcome tagDcdnResources(const Model::TagDcdnResourcesRequest &request)const;
			void tagDcdnResourcesAsync(const Model::TagDcdnResourcesRequest& request, const TagDcdnResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagDcdnResourcesOutcomeCallable tagDcdnResourcesCallable(const Model::TagDcdnResourcesRequest& request) const;
			UntagDcdnResourcesOutcome untagDcdnResources(const Model::UntagDcdnResourcesRequest &request)const;
			void untagDcdnResourcesAsync(const Model::UntagDcdnResourcesRequest& request, const UntagDcdnResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagDcdnResourcesOutcomeCallable untagDcdnResourcesCallable(const Model::UntagDcdnResourcesRequest& request) const;
			UpdateDcdnDeliverTaskOutcome updateDcdnDeliverTask(const Model::UpdateDcdnDeliverTaskRequest &request)const;
			void updateDcdnDeliverTaskAsync(const Model::UpdateDcdnDeliverTaskRequest& request, const UpdateDcdnDeliverTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDcdnDeliverTaskOutcomeCallable updateDcdnDeliverTaskCallable(const Model::UpdateDcdnDeliverTaskRequest& request) const;
			UpdateDcdnDomainOutcome updateDcdnDomain(const Model::UpdateDcdnDomainRequest &request)const;
			void updateDcdnDomainAsync(const Model::UpdateDcdnDomainRequest& request, const UpdateDcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDcdnDomainOutcomeCallable updateDcdnDomainCallable(const Model::UpdateDcdnDomainRequest& request) const;
			UpdateDcdnIpaDomainOutcome updateDcdnIpaDomain(const Model::UpdateDcdnIpaDomainRequest &request)const;
			void updateDcdnIpaDomainAsync(const Model::UpdateDcdnIpaDomainRequest& request, const UpdateDcdnIpaDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDcdnIpaDomainOutcomeCallable updateDcdnIpaDomainCallable(const Model::UpdateDcdnIpaDomainRequest& request) const;
			UpdateDcdnSLSRealtimeLogDeliveryOutcome updateDcdnSLSRealtimeLogDelivery(const Model::UpdateDcdnSLSRealtimeLogDeliveryRequest &request)const;
			void updateDcdnSLSRealtimeLogDeliveryAsync(const Model::UpdateDcdnSLSRealtimeLogDeliveryRequest& request, const UpdateDcdnSLSRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDcdnSLSRealtimeLogDeliveryOutcomeCallable updateDcdnSLSRealtimeLogDeliveryCallable(const Model::UpdateDcdnSLSRealtimeLogDeliveryRequest& request) const;
			UpdateDcdnSubTaskOutcome updateDcdnSubTask(const Model::UpdateDcdnSubTaskRequest &request)const;
			void updateDcdnSubTaskAsync(const Model::UpdateDcdnSubTaskRequest& request, const UpdateDcdnSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDcdnSubTaskOutcomeCallable updateDcdnSubTaskCallable(const Model::UpdateDcdnSubTaskRequest& request) const;
			UpdateDcdnUserRealTimeDeliveryFieldOutcome updateDcdnUserRealTimeDeliveryField(const Model::UpdateDcdnUserRealTimeDeliveryFieldRequest &request)const;
			void updateDcdnUserRealTimeDeliveryFieldAsync(const Model::UpdateDcdnUserRealTimeDeliveryFieldRequest& request, const UpdateDcdnUserRealTimeDeliveryFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDcdnUserRealTimeDeliveryFieldOutcomeCallable updateDcdnUserRealTimeDeliveryFieldCallable(const Model::UpdateDcdnUserRealTimeDeliveryFieldRequest& request) const;
			UploadRoutineCodeOutcome uploadRoutineCode(const Model::UploadRoutineCodeRequest &request)const;
			void uploadRoutineCodeAsync(const Model::UploadRoutineCodeRequest& request, const UploadRoutineCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadRoutineCodeOutcomeCallable uploadRoutineCodeCallable(const Model::UploadRoutineCodeRequest& request) const;
			UploadStagingRoutineCodeOutcome uploadStagingRoutineCode(const Model::UploadStagingRoutineCodeRequest &request)const;
			void uploadStagingRoutineCodeAsync(const Model::UploadStagingRoutineCodeRequest& request, const UploadStagingRoutineCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadStagingRoutineCodeOutcomeCallable uploadStagingRoutineCodeCallable(const Model::UploadStagingRoutineCodeRequest& request) const;
			VerifyDcdnDomainOwnerOutcome verifyDcdnDomainOwner(const Model::VerifyDcdnDomainOwnerRequest &request)const;
			void verifyDcdnDomainOwnerAsync(const Model::VerifyDcdnDomainOwnerRequest& request, const VerifyDcdnDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyDcdnDomainOwnerOutcomeCallable verifyDcdnDomainOwnerCallable(const Model::VerifyDcdnDomainOwnerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DCDN_DCDNCLIENT_H_
