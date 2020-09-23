#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(dcdn_public_header 
	include/alibabacloud/dcdn/DcdnClient.h
	include/alibabacloud/dcdn/DcdnExport.h )

set(dcdn_public_header_model 
	include/alibabacloud/dcdn/model/AddDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/AddDcdnDomainResult.h
	include/alibabacloud/dcdn/model/AddDcdnIpaDomainRequest.h
	include/alibabacloud/dcdn/model/AddDcdnIpaDomainResult.h
	include/alibabacloud/dcdn/model/BatchAddDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/BatchAddDcdnDomainResult.h
	include/alibabacloud/dcdn/model/BatchDeleteDcdnDomainConfigsRequest.h
	include/alibabacloud/dcdn/model/BatchDeleteDcdnDomainConfigsResult.h
	include/alibabacloud/dcdn/model/BatchSetDcdnDomainCertificateRequest.h
	include/alibabacloud/dcdn/model/BatchSetDcdnDomainCertificateResult.h
	include/alibabacloud/dcdn/model/BatchSetDcdnDomainConfigsRequest.h
	include/alibabacloud/dcdn/model/BatchSetDcdnDomainConfigsResult.h
	include/alibabacloud/dcdn/model/BatchSetDcdnIpaDomainConfigsRequest.h
	include/alibabacloud/dcdn/model/BatchSetDcdnIpaDomainConfigsResult.h
	include/alibabacloud/dcdn/model/BatchStartDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/BatchStartDcdnDomainResult.h
	include/alibabacloud/dcdn/model/BatchStopDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/BatchStopDcdnDomainResult.h
	include/alibabacloud/dcdn/model/DeleteDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/DeleteDcdnDomainResult.h
	include/alibabacloud/dcdn/model/DeleteDcdnIpaDomainRequest.h
	include/alibabacloud/dcdn/model/DeleteDcdnIpaDomainResult.h
	include/alibabacloud/dcdn/model/DeleteDcdnIpaSpecificConfigRequest.h
	include/alibabacloud/dcdn/model/DeleteDcdnIpaSpecificConfigResult.h
	include/alibabacloud/dcdn/model/DeleteDcdnSpecificConfigRequest.h
	include/alibabacloud/dcdn/model/DeleteDcdnSpecificConfigResult.h
	include/alibabacloud/dcdn/model/DeleteDcdnSpecificStagingConfigRequest.h
	include/alibabacloud/dcdn/model/DeleteDcdnSpecificStagingConfigResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnBgpBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnBgpBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnBgpTrafficDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnBgpTrafficDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnCertificateDetailRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnCertificateDetailResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnCertificateListRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnCertificateListResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnConfigOfVersionRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnConfigOfVersionResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainByCertificateRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainByCertificateResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainCertificateInfoRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainCertificateInfoResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainCnameRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainCnameResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainConfigsRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainConfigsResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainDetailRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainDetailResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainHitRateDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainHitRateDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainHttpCodeDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainHttpCodeDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainIpaBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainIpaBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainIpaTrafficDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainIpaTrafficDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainIspDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainIspDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainLogRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainLogResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainMultiUsageDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainMultiUsageDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainOriginBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainOriginBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainOriginTrafficDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainOriginTrafficDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainPvDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainPvDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainQpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainQpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeByteHitRateDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeByteHitRateDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeDetailDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeDetailDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeHttpCodeDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeHttpCodeDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeQpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeQpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeReqHitRateDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeReqHitRateDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcHttpCodeDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcTrafficDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcTrafficDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRegionDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainRegionDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainStagingConfigRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainStagingConfigResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainTopReferVisitRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainTopReferVisitResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainTopUrlVisitRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainTopUrlVisitResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainTrafficDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainTrafficDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainUvDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainUvDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketBpsDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketBpsDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketHttpCodeDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketHttpCodeDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketTrafficDataRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketTrafficDataResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnHttpsDomainListRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnHttpsDomainListResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpInfoRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpInfoResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpaDomainConfigsRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpaDomainConfigsResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpaDomainDetailRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpaDomainDetailResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpaServiceRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpaServiceResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpaUserDomainsRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnIpaUserDomainsResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnRefreshQuotaRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnRefreshQuotaResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnRefreshTasksRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnRefreshTasksResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnServiceRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnServiceResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnStagingIpRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnStagingIpResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnTagResourcesRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnTagResourcesResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnTopDomainsByFlowRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnTopDomainsByFlowResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserBillTypeRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserBillTypeResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserDomainsRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserDomainsResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserQuotaRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserQuotaResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserResourcePackageRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserResourcePackageResult.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserTagsRequest.h
	include/alibabacloud/dcdn/model/DescribeDcdnUserTagsResult.h
	include/alibabacloud/dcdn/model/DescribeUserDcdnIpaStatusRequest.h
	include/alibabacloud/dcdn/model/DescribeUserDcdnIpaStatusResult.h
	include/alibabacloud/dcdn/model/DescribeUserDcdnStatusRequest.h
	include/alibabacloud/dcdn/model/DescribeUserDcdnStatusResult.h
	include/alibabacloud/dcdn/model/ModifyDCdnDomainSchdmByPropertyRequest.h
	include/alibabacloud/dcdn/model/ModifyDCdnDomainSchdmByPropertyResult.h
	include/alibabacloud/dcdn/model/PreloadDcdnObjectCachesRequest.h
	include/alibabacloud/dcdn/model/PreloadDcdnObjectCachesResult.h
	include/alibabacloud/dcdn/model/PublishDcdnStagingConfigToProductionRequest.h
	include/alibabacloud/dcdn/model/PublishDcdnStagingConfigToProductionResult.h
	include/alibabacloud/dcdn/model/RefreshDcdnObjectCachesRequest.h
	include/alibabacloud/dcdn/model/RefreshDcdnObjectCachesResult.h
	include/alibabacloud/dcdn/model/RollbackDcdnStagingConfigRequest.h
	include/alibabacloud/dcdn/model/RollbackDcdnStagingConfigResult.h
	include/alibabacloud/dcdn/model/SetDcdnConfigOfVersionRequest.h
	include/alibabacloud/dcdn/model/SetDcdnConfigOfVersionResult.h
	include/alibabacloud/dcdn/model/SetDcdnDomainCertificateRequest.h
	include/alibabacloud/dcdn/model/SetDcdnDomainCertificateResult.h
	include/alibabacloud/dcdn/model/SetDcdnDomainStagingConfigRequest.h
	include/alibabacloud/dcdn/model/SetDcdnDomainStagingConfigResult.h
	include/alibabacloud/dcdn/model/StartDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/StartDcdnDomainResult.h
	include/alibabacloud/dcdn/model/StartDcdnIpaDomainRequest.h
	include/alibabacloud/dcdn/model/StartDcdnIpaDomainResult.h
	include/alibabacloud/dcdn/model/StopDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/StopDcdnDomainResult.h
	include/alibabacloud/dcdn/model/StopDcdnIpaDomainRequest.h
	include/alibabacloud/dcdn/model/StopDcdnIpaDomainResult.h
	include/alibabacloud/dcdn/model/TagDcdnResourcesRequest.h
	include/alibabacloud/dcdn/model/TagDcdnResourcesResult.h
	include/alibabacloud/dcdn/model/UntagDcdnResourcesRequest.h
	include/alibabacloud/dcdn/model/UntagDcdnResourcesResult.h
	include/alibabacloud/dcdn/model/UpdateDcdnDomainRequest.h
	include/alibabacloud/dcdn/model/UpdateDcdnDomainResult.h
	include/alibabacloud/dcdn/model/UpdateDcdnIpaDomainRequest.h
	include/alibabacloud/dcdn/model/UpdateDcdnIpaDomainResult.h )

set(dcdn_src 
	src/DcdnClient.cc
	src/model/AddDcdnDomainRequest.cc
	src/model/AddDcdnDomainResult.cc
	src/model/AddDcdnIpaDomainRequest.cc
	src/model/AddDcdnIpaDomainResult.cc
	src/model/BatchAddDcdnDomainRequest.cc
	src/model/BatchAddDcdnDomainResult.cc
	src/model/BatchDeleteDcdnDomainConfigsRequest.cc
	src/model/BatchDeleteDcdnDomainConfigsResult.cc
	src/model/BatchSetDcdnDomainCertificateRequest.cc
	src/model/BatchSetDcdnDomainCertificateResult.cc
	src/model/BatchSetDcdnDomainConfigsRequest.cc
	src/model/BatchSetDcdnDomainConfigsResult.cc
	src/model/BatchSetDcdnIpaDomainConfigsRequest.cc
	src/model/BatchSetDcdnIpaDomainConfigsResult.cc
	src/model/BatchStartDcdnDomainRequest.cc
	src/model/BatchStartDcdnDomainResult.cc
	src/model/BatchStopDcdnDomainRequest.cc
	src/model/BatchStopDcdnDomainResult.cc
	src/model/DeleteDcdnDomainRequest.cc
	src/model/DeleteDcdnDomainResult.cc
	src/model/DeleteDcdnIpaDomainRequest.cc
	src/model/DeleteDcdnIpaDomainResult.cc
	src/model/DeleteDcdnIpaSpecificConfigRequest.cc
	src/model/DeleteDcdnIpaSpecificConfigResult.cc
	src/model/DeleteDcdnSpecificConfigRequest.cc
	src/model/DeleteDcdnSpecificConfigResult.cc
	src/model/DeleteDcdnSpecificStagingConfigRequest.cc
	src/model/DeleteDcdnSpecificStagingConfigResult.cc
	src/model/DescribeDcdnBgpBpsDataRequest.cc
	src/model/DescribeDcdnBgpBpsDataResult.cc
	src/model/DescribeDcdnBgpTrafficDataRequest.cc
	src/model/DescribeDcdnBgpTrafficDataResult.cc
	src/model/DescribeDcdnCertificateDetailRequest.cc
	src/model/DescribeDcdnCertificateDetailResult.cc
	src/model/DescribeDcdnCertificateListRequest.cc
	src/model/DescribeDcdnCertificateListResult.cc
	src/model/DescribeDcdnConfigOfVersionRequest.cc
	src/model/DescribeDcdnConfigOfVersionResult.cc
	src/model/DescribeDcdnDomainBpsDataRequest.cc
	src/model/DescribeDcdnDomainBpsDataResult.cc
	src/model/DescribeDcdnDomainByCertificateRequest.cc
	src/model/DescribeDcdnDomainByCertificateResult.cc
	src/model/DescribeDcdnDomainCertificateInfoRequest.cc
	src/model/DescribeDcdnDomainCertificateInfoResult.cc
	src/model/DescribeDcdnDomainCnameRequest.cc
	src/model/DescribeDcdnDomainCnameResult.cc
	src/model/DescribeDcdnDomainConfigsRequest.cc
	src/model/DescribeDcdnDomainConfigsResult.cc
	src/model/DescribeDcdnDomainDetailRequest.cc
	src/model/DescribeDcdnDomainDetailResult.cc
	src/model/DescribeDcdnDomainHitRateDataRequest.cc
	src/model/DescribeDcdnDomainHitRateDataResult.cc
	src/model/DescribeDcdnDomainHttpCodeDataRequest.cc
	src/model/DescribeDcdnDomainHttpCodeDataResult.cc
	src/model/DescribeDcdnDomainIpaBpsDataRequest.cc
	src/model/DescribeDcdnDomainIpaBpsDataResult.cc
	src/model/DescribeDcdnDomainIpaTrafficDataRequest.cc
	src/model/DescribeDcdnDomainIpaTrafficDataResult.cc
	src/model/DescribeDcdnDomainIspDataRequest.cc
	src/model/DescribeDcdnDomainIspDataResult.cc
	src/model/DescribeDcdnDomainLogRequest.cc
	src/model/DescribeDcdnDomainLogResult.cc
	src/model/DescribeDcdnDomainMultiUsageDataRequest.cc
	src/model/DescribeDcdnDomainMultiUsageDataResult.cc
	src/model/DescribeDcdnDomainOriginBpsDataRequest.cc
	src/model/DescribeDcdnDomainOriginBpsDataResult.cc
	src/model/DescribeDcdnDomainOriginTrafficDataRequest.cc
	src/model/DescribeDcdnDomainOriginTrafficDataResult.cc
	src/model/DescribeDcdnDomainPvDataRequest.cc
	src/model/DescribeDcdnDomainPvDataResult.cc
	src/model/DescribeDcdnDomainQpsDataRequest.cc
	src/model/DescribeDcdnDomainQpsDataResult.cc
	src/model/DescribeDcdnDomainRealTimeBpsDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeBpsDataResult.cc
	src/model/DescribeDcdnDomainRealTimeByteHitRateDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeByteHitRateDataResult.cc
	src/model/DescribeDcdnDomainRealTimeDetailDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeDetailDataResult.cc
	src/model/DescribeDcdnDomainRealTimeHttpCodeDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeHttpCodeDataResult.cc
	src/model/DescribeDcdnDomainRealTimeQpsDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeQpsDataResult.cc
	src/model/DescribeDcdnDomainRealTimeReqHitRateDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeReqHitRateDataResult.cc
	src/model/DescribeDcdnDomainRealTimeSrcBpsDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeSrcBpsDataResult.cc
	src/model/DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeSrcHttpCodeDataResult.cc
	src/model/DescribeDcdnDomainRealTimeSrcTrafficDataRequest.cc
	src/model/DescribeDcdnDomainRealTimeSrcTrafficDataResult.cc
	src/model/DescribeDcdnDomainRegionDataRequest.cc
	src/model/DescribeDcdnDomainRegionDataResult.cc
	src/model/DescribeDcdnDomainStagingConfigRequest.cc
	src/model/DescribeDcdnDomainStagingConfigResult.cc
	src/model/DescribeDcdnDomainTopReferVisitRequest.cc
	src/model/DescribeDcdnDomainTopReferVisitResult.cc
	src/model/DescribeDcdnDomainTopUrlVisitRequest.cc
	src/model/DescribeDcdnDomainTopUrlVisitResult.cc
	src/model/DescribeDcdnDomainTrafficDataRequest.cc
	src/model/DescribeDcdnDomainTrafficDataResult.cc
	src/model/DescribeDcdnDomainUvDataRequest.cc
	src/model/DescribeDcdnDomainUvDataResult.cc
	src/model/DescribeDcdnDomainWebsocketBpsDataRequest.cc
	src/model/DescribeDcdnDomainWebsocketBpsDataResult.cc
	src/model/DescribeDcdnDomainWebsocketHttpCodeDataRequest.cc
	src/model/DescribeDcdnDomainWebsocketHttpCodeDataResult.cc
	src/model/DescribeDcdnDomainWebsocketTrafficDataRequest.cc
	src/model/DescribeDcdnDomainWebsocketTrafficDataResult.cc
	src/model/DescribeDcdnHttpsDomainListRequest.cc
	src/model/DescribeDcdnHttpsDomainListResult.cc
	src/model/DescribeDcdnIpInfoRequest.cc
	src/model/DescribeDcdnIpInfoResult.cc
	src/model/DescribeDcdnIpaDomainConfigsRequest.cc
	src/model/DescribeDcdnIpaDomainConfigsResult.cc
	src/model/DescribeDcdnIpaDomainDetailRequest.cc
	src/model/DescribeDcdnIpaDomainDetailResult.cc
	src/model/DescribeDcdnIpaServiceRequest.cc
	src/model/DescribeDcdnIpaServiceResult.cc
	src/model/DescribeDcdnIpaUserDomainsRequest.cc
	src/model/DescribeDcdnIpaUserDomainsResult.cc
	src/model/DescribeDcdnRefreshQuotaRequest.cc
	src/model/DescribeDcdnRefreshQuotaResult.cc
	src/model/DescribeDcdnRefreshTasksRequest.cc
	src/model/DescribeDcdnRefreshTasksResult.cc
	src/model/DescribeDcdnServiceRequest.cc
	src/model/DescribeDcdnServiceResult.cc
	src/model/DescribeDcdnStagingIpRequest.cc
	src/model/DescribeDcdnStagingIpResult.cc
	src/model/DescribeDcdnTagResourcesRequest.cc
	src/model/DescribeDcdnTagResourcesResult.cc
	src/model/DescribeDcdnTopDomainsByFlowRequest.cc
	src/model/DescribeDcdnTopDomainsByFlowResult.cc
	src/model/DescribeDcdnUserBillTypeRequest.cc
	src/model/DescribeDcdnUserBillTypeResult.cc
	src/model/DescribeDcdnUserDomainsRequest.cc
	src/model/DescribeDcdnUserDomainsResult.cc
	src/model/DescribeDcdnUserQuotaRequest.cc
	src/model/DescribeDcdnUserQuotaResult.cc
	src/model/DescribeDcdnUserResourcePackageRequest.cc
	src/model/DescribeDcdnUserResourcePackageResult.cc
	src/model/DescribeDcdnUserTagsRequest.cc
	src/model/DescribeDcdnUserTagsResult.cc
	src/model/DescribeUserDcdnIpaStatusRequest.cc
	src/model/DescribeUserDcdnIpaStatusResult.cc
	src/model/DescribeUserDcdnStatusRequest.cc
	src/model/DescribeUserDcdnStatusResult.cc
	src/model/ModifyDCdnDomainSchdmByPropertyRequest.cc
	src/model/ModifyDCdnDomainSchdmByPropertyResult.cc
	src/model/PreloadDcdnObjectCachesRequest.cc
	src/model/PreloadDcdnObjectCachesResult.cc
	src/model/PublishDcdnStagingConfigToProductionRequest.cc
	src/model/PublishDcdnStagingConfigToProductionResult.cc
	src/model/RefreshDcdnObjectCachesRequest.cc
	src/model/RefreshDcdnObjectCachesResult.cc
	src/model/RollbackDcdnStagingConfigRequest.cc
	src/model/RollbackDcdnStagingConfigResult.cc
	src/model/SetDcdnConfigOfVersionRequest.cc
	src/model/SetDcdnConfigOfVersionResult.cc
	src/model/SetDcdnDomainCertificateRequest.cc
	src/model/SetDcdnDomainCertificateResult.cc
	src/model/SetDcdnDomainStagingConfigRequest.cc
	src/model/SetDcdnDomainStagingConfigResult.cc
	src/model/StartDcdnDomainRequest.cc
	src/model/StartDcdnDomainResult.cc
	src/model/StartDcdnIpaDomainRequest.cc
	src/model/StartDcdnIpaDomainResult.cc
	src/model/StopDcdnDomainRequest.cc
	src/model/StopDcdnDomainResult.cc
	src/model/StopDcdnIpaDomainRequest.cc
	src/model/StopDcdnIpaDomainResult.cc
	src/model/TagDcdnResourcesRequest.cc
	src/model/TagDcdnResourcesResult.cc
	src/model/UntagDcdnResourcesRequest.cc
	src/model/UntagDcdnResourcesResult.cc
	src/model/UpdateDcdnDomainRequest.cc
	src/model/UpdateDcdnDomainResult.cc
	src/model/UpdateDcdnIpaDomainRequest.cc
	src/model/UpdateDcdnIpaDomainResult.cc )

add_library(dcdn ${LIB_TYPE}
	${dcdn_public_header}
	${dcdn_public_header_model}
	${dcdn_src})

set_target_properties(dcdn
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dcdn
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dcdn
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DCDN_LIBRARY)
endif()

target_include_directories(dcdn
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dcdn
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dcdn
		jsoncpp)
	target_include_directories(dcdn
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dcdn
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dcdn
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dcdn
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dcdn
		jsoncpp)
endif()

install(FILES ${dcdn_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dcdn)
install(FILES ${dcdn_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dcdn/model)
install(TARGETS dcdn
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)