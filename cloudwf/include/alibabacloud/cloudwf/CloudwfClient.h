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

#ifndef ALIBABACLOUD_CLOUDWF_CLOUDWFCLIENT_H_
#define ALIBABACLOUD_CLOUDWF_CLOUDWFCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CloudwfExport.h"
#include "model/AddApgroupConfigRequest.h"
#include "model/AddApgroupConfigResult.h"
#include "model/AliyunRegisterApAssetRequest.h"
#include "model/AliyunRegisterApAssetResult.h"
#include "model/ApgroupBatchAddApRequest.h"
#include "model/ApgroupBatchAddApResult.h"
#include "model/ApgroupBatchDeleteApRequest.h"
#include "model/ApgroupBatchDeleteApResult.h"
#include "model/AreaCreateRequest.h"
#include "model/AreaCreateResult.h"
#include "model/AreaDeleteRequest.h"
#include "model/AreaDeleteResult.h"
#include "model/AreaInfoRequest.h"
#include "model/AreaInfoResult.h"
#include "model/AreaShowListRequest.h"
#include "model/AreaShowListResult.h"
#include "model/AreaUpdateRequest.h"
#include "model/AreaUpdateResult.h"
#include "model/BatchChangeGroupApNameRequest.h"
#include "model/BatchChangeGroupApNameResult.h"
#include "model/BatchRegisterApAssetRequest.h"
#include "model/BatchRegisterApAssetResult.h"
#include "model/BatchSaveApPositionRequest.h"
#include "model/BatchSaveApPositionResult.h"
#include "model/BusinessCreateRequest.h"
#include "model/BusinessCreateResult.h"
#include "model/BusinessInfoRequest.h"
#include "model/BusinessInfoResult.h"
#include "model/BusinessShowListRequest.h"
#include "model/BusinessShowListResult.h"
#include "model/BusinessUpdateRequest.h"
#include "model/BusinessUpdateResult.h"
#include "model/CeaseInstanceRequest.h"
#include "model/CeaseInstanceResult.h"
#include "model/CheckRootPermissionRequest.h"
#include "model/CheckRootPermissionResult.h"
#include "model/CheckUmengDataAnalysisPermissionRequest.h"
#include "model/CheckUmengDataAnalysisPermissionResult.h"
#include "model/ConfigAutoRenewRequest.h"
#include "model/ConfigAutoRenewResult.h"
#include "model/CreateRenewOrderRequest.h"
#include "model/CreateRenewOrderResult.h"
#include "model/CreateSubAccountPermissionRequest.h"
#include "model/CreateSubAccountPermissionResult.h"
#include "model/DelApPositionRequest.h"
#include "model/DelApPositionResult.h"
#include "model/DelPageConfigTemplateRequest.h"
#include "model/DelPageConfigTemplateResult.h"
#include "model/DelPortalTempRequest.h"
#include "model/DelPortalTempResult.h"
#include "model/DelSubAccountPermissionRequest.h"
#include "model/DelSubAccountPermissionResult.h"
#include "model/DelUmengPagePermission4RootRequest.h"
#include "model/DelUmengPagePermission4RootResult.h"
#include "model/DeleteApRadioSsidConfigRequest.h"
#include "model/DeleteApRadioSsidConfigResult.h"
#include "model/DeleteApgroupConfigRequest.h"
#include "model/DeleteApgroupConfigResult.h"
#include "model/DeleteApgroupSsidConfigRequest.h"
#include "model/DeleteApgroupSsidConfigResult.h"
#include "model/DeletePositionMapRequest.h"
#include "model/DeletePositionMapResult.h"
#include "model/DeviceBatchCreateRequest.h"
#include "model/DeviceBatchCreateResult.h"
#include "model/DeviceCreateRequest.h"
#include "model/DeviceCreateResult.h"
#include "model/DeviceDeleteRequest.h"
#include "model/DeviceDeleteResult.h"
#include "model/DeviceShowListRequest.h"
#include "model/DeviceShowListResult.h"
#include "model/DeviceUpdateRequest.h"
#include "model/DeviceUpdateResult.h"
#include "model/ExcelToJsonRequest.h"
#include "model/ExcelToJsonResult.h"
#include "model/FindApRequest.h"
#include "model/FindApResult.h"
#include "model/FrequencyAnalyseRequest.h"
#include "model/FrequencyAnalyseResult.h"
#include "model/GetAccountConfigRequest.h"
#include "model/GetAccountConfigResult.h"
#include "model/GetAddApsProgressRequest.h"
#include "model/GetAddApsProgressResult.h"
#include "model/GetAllActiveShopByGroupRequest.h"
#include "model/GetAllActiveShopByGroupResult.h"
#include "model/GetAllApModelRequest.h"
#include "model/GetAllApModelResult.h"
#include "model/GetApDetailedConfigRequest.h"
#include "model/GetApDetailedConfigResult.h"
#include "model/GetApDetailedStatusRequest.h"
#include "model/GetApDetailedStatusResult.h"
#include "model/GetApPortalBindRequest.h"
#include "model/GetApPortalBindResult.h"
#include "model/GetApRunHistoryTimeSerRequest.h"
#include "model/GetApRunHistoryTimeSerResult.h"
#include "model/GetApStaMiscAggRequest.h"
#include "model/GetApStaMiscAggResult.h"
#include "model/GetApTopRequest.h"
#include "model/GetApTopResult.h"
#include "model/GetApgroupConfigProgressRequest.h"
#include "model/GetApgroupConfigProgressResult.h"
#include "model/GetApgroupDetailedConfigRequest.h"
#include "model/GetApgroupDetailedConfigResult.h"
#include "model/GetApgroupPortalConfigProgressRequest.h"
#include "model/GetApgroupPortalConfigProgressResult.h"
#include "model/GetApgroupScanConfigSaveProgressRequest.h"
#include "model/GetApgroupScanConfigSaveProgressResult.h"
#include "model/GetApgroupSsidConfigProgressRequest.h"
#include "model/GetApgroupSsidConfigProgressResult.h"
#include "model/GetBatchSaveApAssetProgressRequest.h"
#include "model/GetBatchSaveApAssetProgressResult.h"
#include "model/GetBidRequest.h"
#include "model/GetBidResult.h"
#include "model/GetBids4Uid4RootRequest.h"
#include "model/GetBids4Uid4RootResult.h"
#include "model/GetBindAp4UmengRequest.h"
#include "model/GetBindAp4UmengResult.h"
#include "model/GetCrowdListRequest.h"
#include "model/GetCrowdListResult.h"
#include "model/GetDailyStatisticRequest.h"
#include "model/GetDailyStatisticResult.h"
#include "model/GetDeviceInfoByMacRequest.h"
#include "model/GetDeviceInfoByMacResult.h"
#include "model/GetGroupApChangeNameTemplateRequest.h"
#include "model/GetGroupApChangeNameTemplateResult.h"
#include "model/GetGroupApRadioConfigProgressRequest.h"
#include "model/GetGroupApRadioConfigProgressResult.h"
#include "model/GetGroupApRadioConfigTemplateRequest.h"
#include "model/GetGroupApRadioConfigTemplateResult.h"
#include "model/GetGroupApRadioOnoffProgressRequest.h"
#include "model/GetGroupApRadioOnoffProgressResult.h"
#include "model/GetGroupApRepairProgressRequest.h"
#include "model/GetGroupApRepairProgressResult.h"
#include "model/GetInstanceByShopRequest.h"
#include "model/GetInstanceByShopResult.h"
#include "model/GetLatestApStatisticRequest.h"
#include "model/GetLatestApStatisticResult.h"
#include "model/GetLatestStaStatisticRequest.h"
#include "model/GetLatestStaStatisticResult.h"
#include "model/GetMapUrlRequest.h"
#include "model/GetMapUrlResult.h"
#include "model/GetOnlineApTimeSerRequest.h"
#include "model/GetOnlineApTimeSerResult.h"
#include "model/GetOnlineStaTimeSerRequest.h"
#include "model/GetOnlineStaTimeSerResult.h"
#include "model/GetOssServerSignRequest.h"
#include "model/GetOssServerSignResult.h"
#include "model/GetPageConfigTemplateRequest.h"
#include "model/GetPageConfigTemplateResult.h"
#include "model/GetPagePropertiesRequest.h"
#include "model/GetPagePropertiesResult.h"
#include "model/GetPortalTempDetailRequest.h"
#include "model/GetPortalTempDetailResult.h"
#include "model/GetProbeDataSubscriberConfigRequest.h"
#include "model/GetProbeDataSubscriberConfigResult.h"
#include "model/GetRadioRunHistoryTimeSerRequest.h"
#include "model/GetRadioRunHistoryTimeSerResult.h"
#include "model/GetScanModeRequest.h"
#include "model/GetScanModeResult.h"
#include "model/GetScanProbeTimeSerRequest.h"
#include "model/GetScanProbeTimeSerResult.h"
#include "model/GetSendCommandByMacProgressRequest.h"
#include "model/GetSendCommandByMacProgressResult.h"
#include "model/GetSidsAndGids4BidRequest.h"
#include "model/GetSidsAndGids4BidResult.h"
#include "model/GetStaDetailedStatusRequest.h"
#include "model/GetStaDetailedStatusResult.h"
#include "model/GetStaRunHistoryTimeSerRequest.h"
#include "model/GetStaRunHistoryTimeSerResult.h"
#include "model/GetStaTopRequest.h"
#include "model/GetStaTopResult.h"
#include "model/GetSubAccountPermissionRequest.h"
#include "model/GetSubAccountPermissionResult.h"
#include "model/GetSubAccountStatusRequest.h"
#include "model/GetSubAccountStatusResult.h"
#include "model/GetUmengPagePermission4RootRequest.h"
#include "model/GetUmengPagePermission4RootResult.h"
#include "model/GetUpgradeAPGroupProgressRequest.h"
#include "model/GetUpgradeAPGroupProgressResult.h"
#include "model/GetUpgradeAPProgressRequest.h"
#include "model/GetUpgradeAPProgressResult.h"
#include "model/GetUpgradeImgRequest.h"
#include "model/GetUpgradeImgResult.h"
#include "model/GetUserUmengPagePermissionRequest.h"
#include "model/GetUserUmengPagePermissionResult.h"
#include "model/GroupDetailsRequest.h"
#include "model/GroupDetailsResult.h"
#include "model/GroupIntimeRequest.h"
#include "model/GroupIntimeResult.h"
#include "model/GroupOverviewRequest.h"
#include "model/GroupOverviewResult.h"
#include "model/GroupTrendRequest.h"
#include "model/GroupTrendResult.h"
#include "model/HeadquartersOverviewRequest.h"
#include "model/HeadquartersOverviewResult.h"
#include "model/HeadquartersRankingRequest.h"
#include "model/HeadquartersRankingResult.h"
#include "model/HeadquartersToolsCoincideRequest.h"
#include "model/HeadquartersToolsCoincideResult.h"
#include "model/HeadquartersToolsContrastRequest.h"
#include "model/HeadquartersToolsContrastResult.h"
#include "model/HeadquartersToolsO2ORequest.h"
#include "model/HeadquartersToolsO2OResult.h"
#include "model/HeadquartersTrendRequest.h"
#include "model/HeadquartersTrendResult.h"
#include "model/InnerCheckOrderRequest.h"
#include "model/InnerCheckOrderResult.h"
#include "model/InnerProduceCloudWFRequest.h"
#include "model/InnerProduceCloudWFResult.h"
#include "model/InnerRefundRequest.h"
#include "model/InnerRefundResult.h"
#include "model/KickAndClearPMKcacheRequest.h"
#include "model/KickAndClearPMKcacheResult.h"
#include "model/KickStaRequest.h"
#include "model/KickStaResult.h"
#include "model/ListAccountConfigRequest.h"
#include "model/ListAccountConfigResult.h"
#include "model/ListApAssetRequest.h"
#include "model/ListApAssetResult.h"
#include "model/ListApAssetCanBeAddedRequest.h"
#include "model/ListApAssetCanBeAddedResult.h"
#include "model/ListApDetailInfoRequest.h"
#include "model/ListApDetailInfoResult.h"
#include "model/ListApPositionRequest.h"
#include "model/ListApPositionResult.h"
#include "model/ListApPositionMapRequest.h"
#include "model/ListApPositionMapResult.h"
#include "model/ListApPositionStatusRequest.h"
#include "model/ListApPositionStatusResult.h"
#include "model/ListApRadioStatusRequest.h"
#include "model/ListApRadioStatusResult.h"
#include "model/ListApStaStatusRequest.h"
#include "model/ListApStaStatusResult.h"
#include "model/ListApStatusRequest.h"
#include "model/ListApStatusResult.h"
#include "model/ListApUpgradeRequest.h"
#include "model/ListApUpgradeResult.h"
#include "model/ListApgroupConfigRequest.h"
#include "model/ListApgroupConfigResult.h"
#include "model/ListBriefApConfigRequest.h"
#include "model/ListBriefApConfigResult.h"
#include "model/ListBriefConfigByActionRequest.h"
#include "model/ListBriefConfigByActionResult.h"
#include "model/ListBusinessDetailsRequest.h"
#include "model/ListBusinessDetailsResult.h"
#include "model/ListBusinessesRequest.h"
#include "model/ListBusinessesResult.h"
#include "model/ListConfigByActionRequest.h"
#include "model/ListConfigByActionResult.h"
#include "model/ListGroupApBriefConfigRequest.h"
#include "model/ListGroupApBriefConfigResult.h"
#include "model/ListPageConfigTemplateRequest.h"
#include "model/ListPageConfigTemplateResult.h"
#include "model/ListPortalTemplateRequest.h"
#include "model/ListPortalTemplateResult.h"
#include "model/ListProbeinfoRequest.h"
#include "model/ListProbeinfoResult.h"
#include "model/ListStaOnoffLogRequest.h"
#include "model/ListStaOnoffLogResult.h"
#include "model/ListStaStatusRequest.h"
#include "model/ListStaStatusResult.h"
#include "model/ListSubAccountPermissionRequest.h"
#include "model/ListSubAccountPermissionResult.h"
#include "model/ListUmengPagePermission4RootRequest.h"
#include "model/ListUmengPagePermission4RootResult.h"
#include "model/ListUpgradeImgRequest.h"
#include "model/ListUpgradeImgResult.h"
#include "model/ModifySubAccountPermissionRequest.h"
#include "model/ModifySubAccountPermissionResult.h"
#include "model/OemFlowrateAnalyseRequest.h"
#include "model/OemFlowrateAnalyseResult.h"
#include "model/OemFlowrateIntelligentRequest.h"
#include "model/OemFlowrateIntelligentResult.h"
#include "model/OemFlowrateMonitorRequest.h"
#include "model/OemFlowrateMonitorResult.h"
#include "model/OemFlowrateOverviewRequest.h"
#include "model/OemFlowrateOverviewResult.h"
#include "model/OemFlowrateRankingRequest.h"
#include "model/OemFlowrateRankingResult.h"
#include "model/OemHeatLineRequest.h"
#include "model/OemHeatLineResult.h"
#include "model/OemHeatMapRequest.h"
#include "model/OemHeatMapResult.h"
#include "model/OemHeatSettingRequest.h"
#include "model/OemHeatSettingResult.h"
#include "model/OemMarketingCustomerRequest.h"
#include "model/OemMarketingCustomerResult.h"
#include "model/OemMarketingPotentialRequest.h"
#include "model/OemMarketingPotentialResult.h"
#include "model/OemMarketingSettingDataRequest.h"
#include "model/OemMarketingSettingDataResult.h"
#include "model/OemSitingContrastRequest.h"
#include "model/OemSitingContrastResult.h"
#include "model/OemSitingSelctionRequest.h"
#include "model/OemSitingSelctionResult.h"
#include "model/OnoffGroupApRadioRequest.h"
#include "model/OnoffGroupApRadioResult.h"
#include "model/PeripheryAnalyseRequest.h"
#include "model/PeripheryAnalyseResult.h"
#include "model/ProduceInstanceRequest.h"
#include "model/ProduceInstanceResult.h"
#include "model/ProfileBaseRequest.h"
#include "model/ProfileBaseResult.h"
#include "model/ProfileConsumeRequest.h"
#include "model/ProfileConsumeResult.h"
#include "model/ProfileDistrictRequest.h"
#include "model/ProfileDistrictResult.h"
#include "model/ProfileHistoryRequest.h"
#include "model/ProfileHistoryResult.h"
#include "model/ProfileHistoryListRequest.h"
#include "model/ProfileHistoryListResult.h"
#include "model/ProfileMediaRequest.h"
#include "model/ProfileMediaResult.h"
#include "model/ProfileTagRequest.h"
#include "model/ProfileTagResult.h"
#include "model/ProfileTradeRequest.h"
#include "model/ProfileTradeResult.h"
#include "model/PutOssFileRequest.h"
#include "model/PutOssFileResult.h"
#include "model/QueryRenewPriceRequest.h"
#include "model/QueryRenewPriceResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/RepairApRequest.h"
#include "model/RepairApResult.h"
#include "model/RepairGroupApRequest.h"
#include "model/RepairGroupApResult.h"
#include "model/ReportDayRequest.h"
#include "model/ReportDayResult.h"
#include "model/ReportHourRequest.h"
#include "model/ReportHourResult.h"
#include "model/ReportMinuteRequest.h"
#include "model/ReportMinuteResult.h"
#include "model/ReportRealtimeRequest.h"
#include "model/ReportRealtimeResult.h"
#include "model/ReportZoneDayRequest.h"
#include "model/ReportZoneDayResult.h"
#include "model/ReportZoneHourRequest.h"
#include "model/ReportZoneHourResult.h"
#include "model/ReportZoneMinuteRequest.h"
#include "model/ReportZoneMinuteResult.h"
#include "model/ReportZoneRealtimeRequest.h"
#include "model/ReportZoneRealtimeResult.h"
#include "model/ResetApRequest.h"
#include "model/ResetApResult.h"
#include "model/ResetApConfigRequest.h"
#include "model/ResetApConfigResult.h"
#include "model/ResumeInstanceRequest.h"
#include "model/ResumeInstanceResult.h"
#include "model/SaveAccountConfigRequest.h"
#include "model/SaveAccountConfigResult.h"
#include "model/SaveApConfigRequest.h"
#include "model/SaveApConfigResult.h"
#include "model/SaveApMapInfoRequest.h"
#include "model/SaveApMapInfoResult.h"
#include "model/SaveApPortalConfigRequest.h"
#include "model/SaveApPortalConfigResult.h"
#include "model/SaveApRadioConfigRequest.h"
#include "model/SaveApRadioConfigResult.h"
#include "model/SaveApRadioSsidConfigRequest.h"
#include "model/SaveApRadioSsidConfigResult.h"
#include "model/SaveApScanConfigRequest.h"
#include "model/SaveApScanConfigResult.h"
#include "model/SaveApgroupConfigRequest.h"
#include "model/SaveApgroupConfigResult.h"
#include "model/SaveApgroupScanConfigRequest.h"
#include "model/SaveApgroupScanConfigResult.h"
#include "model/SaveApgroupSsidConfigRequest.h"
#include "model/SaveApgroupSsidConfigResult.h"
#include "model/SaveGroupApRadioConfigRequest.h"
#include "model/SaveGroupApRadioConfigResult.h"
#include "model/SavePageConfigTemplateRequest.h"
#include "model/SavePageConfigTemplateResult.h"
#include "model/SavePortalConfigRequest.h"
#include "model/SavePortalConfigResult.h"
#include "model/SavePortalTemplateRequest.h"
#include "model/SavePortalTemplateResult.h"
#include "model/SaveProbeDataSubscriberRequest.h"
#include "model/SaveProbeDataSubscriberResult.h"
#include "model/SaveStaStatusRequest.h"
#include "model/SaveStaStatusResult.h"
#include "model/SaveUmengPagePermission4RootRequest.h"
#include "model/SaveUmengPagePermission4RootResult.h"
#include "model/SendCommandByMacRequest.h"
#include "model/SendCommandByMacResult.h"
#include "model/SetScanModeRequest.h"
#include "model/SetScanModeResult.h"
#include "model/SetUpgradeImgByModelRequest.h"
#include "model/SetUpgradeImgByModelResult.h"
#include "model/ShopActionCustomeRequest.h"
#include "model/ShopActionCustomeResult.h"
#include "model/ShopActionReturningRequest.h"
#include "model/ShopActionReturningResult.h"
#include "model/ShopCameraRequest.h"
#include "model/ShopCameraResult.h"
#include "model/ShopCreateRequest.h"
#include "model/ShopCreateResult.h"
#include "model/ShopCreatemarketingRequest.h"
#include "model/ShopCreatemarketingResult.h"
#include "model/ShopDataAlarmRequest.h"
#include "model/ShopDataAlarmResult.h"
#include "model/ShopDeleteRequest.h"
#include "model/ShopDeleteResult.h"
#include "model/ShopDeletemarketingRequest.h"
#include "model/ShopDeletemarketingResult.h"
#include "model/ShopGetfiltermacRequest.h"
#include "model/ShopGetfiltermacResult.h"
#include "model/ShopGetredressRequest.h"
#include "model/ShopGetredressResult.h"
#include "model/ShopGroupCreateRequest.h"
#include "model/ShopGroupCreateResult.h"
#include "model/ShopGroupDeleteRequest.h"
#include "model/ShopGroupDeleteResult.h"
#include "model/ShopGroupInfoRequest.h"
#include "model/ShopGroupInfoResult.h"
#include "model/ShopGroupShowListRequest.h"
#include "model/ShopGroupShowListResult.h"
#include "model/ShopGroupUpdateRequest.h"
#include "model/ShopGroupUpdateResult.h"
#include "model/ShopInfoRequest.h"
#include "model/ShopInfoResult.h"
#include "model/ShopMarketingListRequest.h"
#include "model/ShopMarketingListResult.h"
#include "model/ShopOverviewRequest.h"
#include "model/ShopOverviewResult.h"
#include "model/ShopSetfiltermacRequest.h"
#include "model/ShopSetfiltermacResult.h"
#include "model/ShopSetredressRequest.h"
#include "model/ShopSetredressResult.h"
#include "model/ShopShowListRequest.h"
#include "model/ShopShowListResult.h"
#include "model/ShopUpdateRequest.h"
#include "model/ShopUpdateResult.h"
#include "model/UpLoadMapRequest.h"
#include "model/UpLoadMapResult.h"
#include "model/UpgradeAPRequest.h"
#include "model/UpgradeAPResult.h"
#include "model/UpgradeAPGroupRequest.h"
#include "model/UpgradeAPGroupResult.h"
#include "model/UserAnalyseRequest.h"
#include "model/UserAnalyseResult.h"
#include "model/UserDataCreateRequest.h"
#include "model/UserDataCreateResult.h"
#include "model/UserDataDeleteRequest.h"
#include "model/UserDataDeleteResult.h"
#include "model/UserDataShowListRequest.h"
#include "model/UserDataShowListResult.h"
#include "model/UserDataUpdateRequest.h"
#include "model/UserDataUpdateResult.h"


namespace AlibabaCloud
{
	namespace Cloudwf
	{
		class ALIBABACLOUD_CLOUDWF_EXPORT CloudwfClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddApgroupConfigResult> AddApgroupConfigOutcome;
			typedef std::future<AddApgroupConfigOutcome> AddApgroupConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::AddApgroupConfigRequest&, const AddApgroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddApgroupConfigAsyncHandler;
			typedef Outcome<Error, Model::AliyunRegisterApAssetResult> AliyunRegisterApAssetOutcome;
			typedef std::future<AliyunRegisterApAssetOutcome> AliyunRegisterApAssetOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::AliyunRegisterApAssetRequest&, const AliyunRegisterApAssetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AliyunRegisterApAssetAsyncHandler;
			typedef Outcome<Error, Model::ApgroupBatchAddApResult> ApgroupBatchAddApOutcome;
			typedef std::future<ApgroupBatchAddApOutcome> ApgroupBatchAddApOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ApgroupBatchAddApRequest&, const ApgroupBatchAddApOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApgroupBatchAddApAsyncHandler;
			typedef Outcome<Error, Model::ApgroupBatchDeleteApResult> ApgroupBatchDeleteApOutcome;
			typedef std::future<ApgroupBatchDeleteApOutcome> ApgroupBatchDeleteApOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ApgroupBatchDeleteApRequest&, const ApgroupBatchDeleteApOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApgroupBatchDeleteApAsyncHandler;
			typedef Outcome<Error, Model::AreaCreateResult> AreaCreateOutcome;
			typedef std::future<AreaCreateOutcome> AreaCreateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::AreaCreateRequest&, const AreaCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AreaCreateAsyncHandler;
			typedef Outcome<Error, Model::AreaDeleteResult> AreaDeleteOutcome;
			typedef std::future<AreaDeleteOutcome> AreaDeleteOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::AreaDeleteRequest&, const AreaDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AreaDeleteAsyncHandler;
			typedef Outcome<Error, Model::AreaInfoResult> AreaInfoOutcome;
			typedef std::future<AreaInfoOutcome> AreaInfoOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::AreaInfoRequest&, const AreaInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AreaInfoAsyncHandler;
			typedef Outcome<Error, Model::AreaShowListResult> AreaShowListOutcome;
			typedef std::future<AreaShowListOutcome> AreaShowListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::AreaShowListRequest&, const AreaShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AreaShowListAsyncHandler;
			typedef Outcome<Error, Model::AreaUpdateResult> AreaUpdateOutcome;
			typedef std::future<AreaUpdateOutcome> AreaUpdateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::AreaUpdateRequest&, const AreaUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AreaUpdateAsyncHandler;
			typedef Outcome<Error, Model::BatchChangeGroupApNameResult> BatchChangeGroupApNameOutcome;
			typedef std::future<BatchChangeGroupApNameOutcome> BatchChangeGroupApNameOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::BatchChangeGroupApNameRequest&, const BatchChangeGroupApNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchChangeGroupApNameAsyncHandler;
			typedef Outcome<Error, Model::BatchRegisterApAssetResult> BatchRegisterApAssetOutcome;
			typedef std::future<BatchRegisterApAssetOutcome> BatchRegisterApAssetOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::BatchRegisterApAssetRequest&, const BatchRegisterApAssetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterApAssetAsyncHandler;
			typedef Outcome<Error, Model::BatchSaveApPositionResult> BatchSaveApPositionOutcome;
			typedef std::future<BatchSaveApPositionOutcome> BatchSaveApPositionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::BatchSaveApPositionRequest&, const BatchSaveApPositionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSaveApPositionAsyncHandler;
			typedef Outcome<Error, Model::BusinessCreateResult> BusinessCreateOutcome;
			typedef std::future<BusinessCreateOutcome> BusinessCreateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::BusinessCreateRequest&, const BusinessCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BusinessCreateAsyncHandler;
			typedef Outcome<Error, Model::BusinessInfoResult> BusinessInfoOutcome;
			typedef std::future<BusinessInfoOutcome> BusinessInfoOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::BusinessInfoRequest&, const BusinessInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BusinessInfoAsyncHandler;
			typedef Outcome<Error, Model::BusinessShowListResult> BusinessShowListOutcome;
			typedef std::future<BusinessShowListOutcome> BusinessShowListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::BusinessShowListRequest&, const BusinessShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BusinessShowListAsyncHandler;
			typedef Outcome<Error, Model::BusinessUpdateResult> BusinessUpdateOutcome;
			typedef std::future<BusinessUpdateOutcome> BusinessUpdateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::BusinessUpdateRequest&, const BusinessUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BusinessUpdateAsyncHandler;
			typedef Outcome<Error, Model::CeaseInstanceResult> CeaseInstanceOutcome;
			typedef std::future<CeaseInstanceOutcome> CeaseInstanceOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::CeaseInstanceRequest&, const CeaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CeaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::CheckRootPermissionResult> CheckRootPermissionOutcome;
			typedef std::future<CheckRootPermissionOutcome> CheckRootPermissionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::CheckRootPermissionRequest&, const CheckRootPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckRootPermissionAsyncHandler;
			typedef Outcome<Error, Model::CheckUmengDataAnalysisPermissionResult> CheckUmengDataAnalysisPermissionOutcome;
			typedef std::future<CheckUmengDataAnalysisPermissionOutcome> CheckUmengDataAnalysisPermissionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::CheckUmengDataAnalysisPermissionRequest&, const CheckUmengDataAnalysisPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckUmengDataAnalysisPermissionAsyncHandler;
			typedef Outcome<Error, Model::ConfigAutoRenewResult> ConfigAutoRenewOutcome;
			typedef std::future<ConfigAutoRenewOutcome> ConfigAutoRenewOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ConfigAutoRenewRequest&, const ConfigAutoRenewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigAutoRenewAsyncHandler;
			typedef Outcome<Error, Model::CreateRenewOrderResult> CreateRenewOrderOutcome;
			typedef std::future<CreateRenewOrderOutcome> CreateRenewOrderOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::CreateRenewOrderRequest&, const CreateRenewOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRenewOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateSubAccountPermissionResult> CreateSubAccountPermissionOutcome;
			typedef std::future<CreateSubAccountPermissionOutcome> CreateSubAccountPermissionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::CreateSubAccountPermissionRequest&, const CreateSubAccountPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubAccountPermissionAsyncHandler;
			typedef Outcome<Error, Model::DelApPositionResult> DelApPositionOutcome;
			typedef std::future<DelApPositionOutcome> DelApPositionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DelApPositionRequest&, const DelApPositionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelApPositionAsyncHandler;
			typedef Outcome<Error, Model::DelPageConfigTemplateResult> DelPageConfigTemplateOutcome;
			typedef std::future<DelPageConfigTemplateOutcome> DelPageConfigTemplateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DelPageConfigTemplateRequest&, const DelPageConfigTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelPageConfigTemplateAsyncHandler;
			typedef Outcome<Error, Model::DelPortalTempResult> DelPortalTempOutcome;
			typedef std::future<DelPortalTempOutcome> DelPortalTempOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DelPortalTempRequest&, const DelPortalTempOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelPortalTempAsyncHandler;
			typedef Outcome<Error, Model::DelSubAccountPermissionResult> DelSubAccountPermissionOutcome;
			typedef std::future<DelSubAccountPermissionOutcome> DelSubAccountPermissionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DelSubAccountPermissionRequest&, const DelSubAccountPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelSubAccountPermissionAsyncHandler;
			typedef Outcome<Error, Model::DelUmengPagePermission4RootResult> DelUmengPagePermission4RootOutcome;
			typedef std::future<DelUmengPagePermission4RootOutcome> DelUmengPagePermission4RootOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DelUmengPagePermission4RootRequest&, const DelUmengPagePermission4RootOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelUmengPagePermission4RootAsyncHandler;
			typedef Outcome<Error, Model::DeleteApRadioSsidConfigResult> DeleteApRadioSsidConfigOutcome;
			typedef std::future<DeleteApRadioSsidConfigOutcome> DeleteApRadioSsidConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeleteApRadioSsidConfigRequest&, const DeleteApRadioSsidConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApRadioSsidConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteApgroupConfigResult> DeleteApgroupConfigOutcome;
			typedef std::future<DeleteApgroupConfigOutcome> DeleteApgroupConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeleteApgroupConfigRequest&, const DeleteApgroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApgroupConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteApgroupSsidConfigResult> DeleteApgroupSsidConfigOutcome;
			typedef std::future<DeleteApgroupSsidConfigOutcome> DeleteApgroupSsidConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeleteApgroupSsidConfigRequest&, const DeleteApgroupSsidConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApgroupSsidConfigAsyncHandler;
			typedef Outcome<Error, Model::DeletePositionMapResult> DeletePositionMapOutcome;
			typedef std::future<DeletePositionMapOutcome> DeletePositionMapOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeletePositionMapRequest&, const DeletePositionMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePositionMapAsyncHandler;
			typedef Outcome<Error, Model::DeviceBatchCreateResult> DeviceBatchCreateOutcome;
			typedef std::future<DeviceBatchCreateOutcome> DeviceBatchCreateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeviceBatchCreateRequest&, const DeviceBatchCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeviceBatchCreateAsyncHandler;
			typedef Outcome<Error, Model::DeviceCreateResult> DeviceCreateOutcome;
			typedef std::future<DeviceCreateOutcome> DeviceCreateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeviceCreateRequest&, const DeviceCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeviceCreateAsyncHandler;
			typedef Outcome<Error, Model::DeviceDeleteResult> DeviceDeleteOutcome;
			typedef std::future<DeviceDeleteOutcome> DeviceDeleteOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeviceDeleteRequest&, const DeviceDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeviceDeleteAsyncHandler;
			typedef Outcome<Error, Model::DeviceShowListResult> DeviceShowListOutcome;
			typedef std::future<DeviceShowListOutcome> DeviceShowListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeviceShowListRequest&, const DeviceShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeviceShowListAsyncHandler;
			typedef Outcome<Error, Model::DeviceUpdateResult> DeviceUpdateOutcome;
			typedef std::future<DeviceUpdateOutcome> DeviceUpdateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::DeviceUpdateRequest&, const DeviceUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeviceUpdateAsyncHandler;
			typedef Outcome<Error, Model::ExcelToJsonResult> ExcelToJsonOutcome;
			typedef std::future<ExcelToJsonOutcome> ExcelToJsonOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ExcelToJsonRequest&, const ExcelToJsonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExcelToJsonAsyncHandler;
			typedef Outcome<Error, Model::FindApResult> FindApOutcome;
			typedef std::future<FindApOutcome> FindApOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::FindApRequest&, const FindApOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindApAsyncHandler;
			typedef Outcome<Error, Model::FrequencyAnalyseResult> FrequencyAnalyseOutcome;
			typedef std::future<FrequencyAnalyseOutcome> FrequencyAnalyseOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::FrequencyAnalyseRequest&, const FrequencyAnalyseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FrequencyAnalyseAsyncHandler;
			typedef Outcome<Error, Model::GetAccountConfigResult> GetAccountConfigOutcome;
			typedef std::future<GetAccountConfigOutcome> GetAccountConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetAccountConfigRequest&, const GetAccountConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountConfigAsyncHandler;
			typedef Outcome<Error, Model::GetAddApsProgressResult> GetAddApsProgressOutcome;
			typedef std::future<GetAddApsProgressOutcome> GetAddApsProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetAddApsProgressRequest&, const GetAddApsProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAddApsProgressAsyncHandler;
			typedef Outcome<Error, Model::GetAllActiveShopByGroupResult> GetAllActiveShopByGroupOutcome;
			typedef std::future<GetAllActiveShopByGroupOutcome> GetAllActiveShopByGroupOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetAllActiveShopByGroupRequest&, const GetAllActiveShopByGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllActiveShopByGroupAsyncHandler;
			typedef Outcome<Error, Model::GetAllApModelResult> GetAllApModelOutcome;
			typedef std::future<GetAllApModelOutcome> GetAllApModelOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetAllApModelRequest&, const GetAllApModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllApModelAsyncHandler;
			typedef Outcome<Error, Model::GetApDetailedConfigResult> GetApDetailedConfigOutcome;
			typedef std::future<GetApDetailedConfigOutcome> GetApDetailedConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApDetailedConfigRequest&, const GetApDetailedConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApDetailedConfigAsyncHandler;
			typedef Outcome<Error, Model::GetApDetailedStatusResult> GetApDetailedStatusOutcome;
			typedef std::future<GetApDetailedStatusOutcome> GetApDetailedStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApDetailedStatusRequest&, const GetApDetailedStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApDetailedStatusAsyncHandler;
			typedef Outcome<Error, Model::GetApPortalBindResult> GetApPortalBindOutcome;
			typedef std::future<GetApPortalBindOutcome> GetApPortalBindOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApPortalBindRequest&, const GetApPortalBindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApPortalBindAsyncHandler;
			typedef Outcome<Error, Model::GetApRunHistoryTimeSerResult> GetApRunHistoryTimeSerOutcome;
			typedef std::future<GetApRunHistoryTimeSerOutcome> GetApRunHistoryTimeSerOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApRunHistoryTimeSerRequest&, const GetApRunHistoryTimeSerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApRunHistoryTimeSerAsyncHandler;
			typedef Outcome<Error, Model::GetApStaMiscAggResult> GetApStaMiscAggOutcome;
			typedef std::future<GetApStaMiscAggOutcome> GetApStaMiscAggOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApStaMiscAggRequest&, const GetApStaMiscAggOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApStaMiscAggAsyncHandler;
			typedef Outcome<Error, Model::GetApTopResult> GetApTopOutcome;
			typedef std::future<GetApTopOutcome> GetApTopOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApTopRequest&, const GetApTopOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApTopAsyncHandler;
			typedef Outcome<Error, Model::GetApgroupConfigProgressResult> GetApgroupConfigProgressOutcome;
			typedef std::future<GetApgroupConfigProgressOutcome> GetApgroupConfigProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApgroupConfigProgressRequest&, const GetApgroupConfigProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApgroupConfigProgressAsyncHandler;
			typedef Outcome<Error, Model::GetApgroupDetailedConfigResult> GetApgroupDetailedConfigOutcome;
			typedef std::future<GetApgroupDetailedConfigOutcome> GetApgroupDetailedConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApgroupDetailedConfigRequest&, const GetApgroupDetailedConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApgroupDetailedConfigAsyncHandler;
			typedef Outcome<Error, Model::GetApgroupPortalConfigProgressResult> GetApgroupPortalConfigProgressOutcome;
			typedef std::future<GetApgroupPortalConfigProgressOutcome> GetApgroupPortalConfigProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApgroupPortalConfigProgressRequest&, const GetApgroupPortalConfigProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApgroupPortalConfigProgressAsyncHandler;
			typedef Outcome<Error, Model::GetApgroupScanConfigSaveProgressResult> GetApgroupScanConfigSaveProgressOutcome;
			typedef std::future<GetApgroupScanConfigSaveProgressOutcome> GetApgroupScanConfigSaveProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApgroupScanConfigSaveProgressRequest&, const GetApgroupScanConfigSaveProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApgroupScanConfigSaveProgressAsyncHandler;
			typedef Outcome<Error, Model::GetApgroupSsidConfigProgressResult> GetApgroupSsidConfigProgressOutcome;
			typedef std::future<GetApgroupSsidConfigProgressOutcome> GetApgroupSsidConfigProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetApgroupSsidConfigProgressRequest&, const GetApgroupSsidConfigProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApgroupSsidConfigProgressAsyncHandler;
			typedef Outcome<Error, Model::GetBatchSaveApAssetProgressResult> GetBatchSaveApAssetProgressOutcome;
			typedef std::future<GetBatchSaveApAssetProgressOutcome> GetBatchSaveApAssetProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetBatchSaveApAssetProgressRequest&, const GetBatchSaveApAssetProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBatchSaveApAssetProgressAsyncHandler;
			typedef Outcome<Error, Model::GetBidResult> GetBidOutcome;
			typedef std::future<GetBidOutcome> GetBidOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetBidRequest&, const GetBidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBidAsyncHandler;
			typedef Outcome<Error, Model::GetBids4Uid4RootResult> GetBids4Uid4RootOutcome;
			typedef std::future<GetBids4Uid4RootOutcome> GetBids4Uid4RootOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetBids4Uid4RootRequest&, const GetBids4Uid4RootOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBids4Uid4RootAsyncHandler;
			typedef Outcome<Error, Model::GetBindAp4UmengResult> GetBindAp4UmengOutcome;
			typedef std::future<GetBindAp4UmengOutcome> GetBindAp4UmengOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetBindAp4UmengRequest&, const GetBindAp4UmengOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBindAp4UmengAsyncHandler;
			typedef Outcome<Error, Model::GetCrowdListResult> GetCrowdListOutcome;
			typedef std::future<GetCrowdListOutcome> GetCrowdListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetCrowdListRequest&, const GetCrowdListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCrowdListAsyncHandler;
			typedef Outcome<Error, Model::GetDailyStatisticResult> GetDailyStatisticOutcome;
			typedef std::future<GetDailyStatisticOutcome> GetDailyStatisticOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetDailyStatisticRequest&, const GetDailyStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDailyStatisticAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceInfoByMacResult> GetDeviceInfoByMacOutcome;
			typedef std::future<GetDeviceInfoByMacOutcome> GetDeviceInfoByMacOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetDeviceInfoByMacRequest&, const GetDeviceInfoByMacOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceInfoByMacAsyncHandler;
			typedef Outcome<Error, Model::GetGroupApChangeNameTemplateResult> GetGroupApChangeNameTemplateOutcome;
			typedef std::future<GetGroupApChangeNameTemplateOutcome> GetGroupApChangeNameTemplateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetGroupApChangeNameTemplateRequest&, const GetGroupApChangeNameTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupApChangeNameTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetGroupApRadioConfigProgressResult> GetGroupApRadioConfigProgressOutcome;
			typedef std::future<GetGroupApRadioConfigProgressOutcome> GetGroupApRadioConfigProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetGroupApRadioConfigProgressRequest&, const GetGroupApRadioConfigProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupApRadioConfigProgressAsyncHandler;
			typedef Outcome<Error, Model::GetGroupApRadioConfigTemplateResult> GetGroupApRadioConfigTemplateOutcome;
			typedef std::future<GetGroupApRadioConfigTemplateOutcome> GetGroupApRadioConfigTemplateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetGroupApRadioConfigTemplateRequest&, const GetGroupApRadioConfigTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupApRadioConfigTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetGroupApRadioOnoffProgressResult> GetGroupApRadioOnoffProgressOutcome;
			typedef std::future<GetGroupApRadioOnoffProgressOutcome> GetGroupApRadioOnoffProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetGroupApRadioOnoffProgressRequest&, const GetGroupApRadioOnoffProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupApRadioOnoffProgressAsyncHandler;
			typedef Outcome<Error, Model::GetGroupApRepairProgressResult> GetGroupApRepairProgressOutcome;
			typedef std::future<GetGroupApRepairProgressOutcome> GetGroupApRepairProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetGroupApRepairProgressRequest&, const GetGroupApRepairProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupApRepairProgressAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceByShopResult> GetInstanceByShopOutcome;
			typedef std::future<GetInstanceByShopOutcome> GetInstanceByShopOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetInstanceByShopRequest&, const GetInstanceByShopOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceByShopAsyncHandler;
			typedef Outcome<Error, Model::GetLatestApStatisticResult> GetLatestApStatisticOutcome;
			typedef std::future<GetLatestApStatisticOutcome> GetLatestApStatisticOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetLatestApStatisticRequest&, const GetLatestApStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLatestApStatisticAsyncHandler;
			typedef Outcome<Error, Model::GetLatestStaStatisticResult> GetLatestStaStatisticOutcome;
			typedef std::future<GetLatestStaStatisticOutcome> GetLatestStaStatisticOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetLatestStaStatisticRequest&, const GetLatestStaStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLatestStaStatisticAsyncHandler;
			typedef Outcome<Error, Model::GetMapUrlResult> GetMapUrlOutcome;
			typedef std::future<GetMapUrlOutcome> GetMapUrlOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetMapUrlRequest&, const GetMapUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMapUrlAsyncHandler;
			typedef Outcome<Error, Model::GetOnlineApTimeSerResult> GetOnlineApTimeSerOutcome;
			typedef std::future<GetOnlineApTimeSerOutcome> GetOnlineApTimeSerOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetOnlineApTimeSerRequest&, const GetOnlineApTimeSerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOnlineApTimeSerAsyncHandler;
			typedef Outcome<Error, Model::GetOnlineStaTimeSerResult> GetOnlineStaTimeSerOutcome;
			typedef std::future<GetOnlineStaTimeSerOutcome> GetOnlineStaTimeSerOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetOnlineStaTimeSerRequest&, const GetOnlineStaTimeSerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOnlineStaTimeSerAsyncHandler;
			typedef Outcome<Error, Model::GetOssServerSignResult> GetOssServerSignOutcome;
			typedef std::future<GetOssServerSignOutcome> GetOssServerSignOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetOssServerSignRequest&, const GetOssServerSignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOssServerSignAsyncHandler;
			typedef Outcome<Error, Model::GetPageConfigTemplateResult> GetPageConfigTemplateOutcome;
			typedef std::future<GetPageConfigTemplateOutcome> GetPageConfigTemplateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetPageConfigTemplateRequest&, const GetPageConfigTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPageConfigTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetPagePropertiesResult> GetPagePropertiesOutcome;
			typedef std::future<GetPagePropertiesOutcome> GetPagePropertiesOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetPagePropertiesRequest&, const GetPagePropertiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPagePropertiesAsyncHandler;
			typedef Outcome<Error, Model::GetPortalTempDetailResult> GetPortalTempDetailOutcome;
			typedef std::future<GetPortalTempDetailOutcome> GetPortalTempDetailOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetPortalTempDetailRequest&, const GetPortalTempDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPortalTempDetailAsyncHandler;
			typedef Outcome<Error, Model::GetProbeDataSubscriberConfigResult> GetProbeDataSubscriberConfigOutcome;
			typedef std::future<GetProbeDataSubscriberConfigOutcome> GetProbeDataSubscriberConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetProbeDataSubscriberConfigRequest&, const GetProbeDataSubscriberConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProbeDataSubscriberConfigAsyncHandler;
			typedef Outcome<Error, Model::GetRadioRunHistoryTimeSerResult> GetRadioRunHistoryTimeSerOutcome;
			typedef std::future<GetRadioRunHistoryTimeSerOutcome> GetRadioRunHistoryTimeSerOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetRadioRunHistoryTimeSerRequest&, const GetRadioRunHistoryTimeSerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRadioRunHistoryTimeSerAsyncHandler;
			typedef Outcome<Error, Model::GetScanModeResult> GetScanModeOutcome;
			typedef std::future<GetScanModeOutcome> GetScanModeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetScanModeRequest&, const GetScanModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScanModeAsyncHandler;
			typedef Outcome<Error, Model::GetScanProbeTimeSerResult> GetScanProbeTimeSerOutcome;
			typedef std::future<GetScanProbeTimeSerOutcome> GetScanProbeTimeSerOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetScanProbeTimeSerRequest&, const GetScanProbeTimeSerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScanProbeTimeSerAsyncHandler;
			typedef Outcome<Error, Model::GetSendCommandByMacProgressResult> GetSendCommandByMacProgressOutcome;
			typedef std::future<GetSendCommandByMacProgressOutcome> GetSendCommandByMacProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetSendCommandByMacProgressRequest&, const GetSendCommandByMacProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSendCommandByMacProgressAsyncHandler;
			typedef Outcome<Error, Model::GetSidsAndGids4BidResult> GetSidsAndGids4BidOutcome;
			typedef std::future<GetSidsAndGids4BidOutcome> GetSidsAndGids4BidOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetSidsAndGids4BidRequest&, const GetSidsAndGids4BidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSidsAndGids4BidAsyncHandler;
			typedef Outcome<Error, Model::GetStaDetailedStatusResult> GetStaDetailedStatusOutcome;
			typedef std::future<GetStaDetailedStatusOutcome> GetStaDetailedStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetStaDetailedStatusRequest&, const GetStaDetailedStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStaDetailedStatusAsyncHandler;
			typedef Outcome<Error, Model::GetStaRunHistoryTimeSerResult> GetStaRunHistoryTimeSerOutcome;
			typedef std::future<GetStaRunHistoryTimeSerOutcome> GetStaRunHistoryTimeSerOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetStaRunHistoryTimeSerRequest&, const GetStaRunHistoryTimeSerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStaRunHistoryTimeSerAsyncHandler;
			typedef Outcome<Error, Model::GetStaTopResult> GetStaTopOutcome;
			typedef std::future<GetStaTopOutcome> GetStaTopOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetStaTopRequest&, const GetStaTopOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStaTopAsyncHandler;
			typedef Outcome<Error, Model::GetSubAccountPermissionResult> GetSubAccountPermissionOutcome;
			typedef std::future<GetSubAccountPermissionOutcome> GetSubAccountPermissionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetSubAccountPermissionRequest&, const GetSubAccountPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubAccountPermissionAsyncHandler;
			typedef Outcome<Error, Model::GetSubAccountStatusResult> GetSubAccountStatusOutcome;
			typedef std::future<GetSubAccountStatusOutcome> GetSubAccountStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetSubAccountStatusRequest&, const GetSubAccountStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubAccountStatusAsyncHandler;
			typedef Outcome<Error, Model::GetUmengPagePermission4RootResult> GetUmengPagePermission4RootOutcome;
			typedef std::future<GetUmengPagePermission4RootOutcome> GetUmengPagePermission4RootOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetUmengPagePermission4RootRequest&, const GetUmengPagePermission4RootOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUmengPagePermission4RootAsyncHandler;
			typedef Outcome<Error, Model::GetUpgradeAPGroupProgressResult> GetUpgradeAPGroupProgressOutcome;
			typedef std::future<GetUpgradeAPGroupProgressOutcome> GetUpgradeAPGroupProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetUpgradeAPGroupProgressRequest&, const GetUpgradeAPGroupProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeAPGroupProgressAsyncHandler;
			typedef Outcome<Error, Model::GetUpgradeAPProgressResult> GetUpgradeAPProgressOutcome;
			typedef std::future<GetUpgradeAPProgressOutcome> GetUpgradeAPProgressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetUpgradeAPProgressRequest&, const GetUpgradeAPProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeAPProgressAsyncHandler;
			typedef Outcome<Error, Model::GetUpgradeImgResult> GetUpgradeImgOutcome;
			typedef std::future<GetUpgradeImgOutcome> GetUpgradeImgOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetUpgradeImgRequest&, const GetUpgradeImgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeImgAsyncHandler;
			typedef Outcome<Error, Model::GetUserUmengPagePermissionResult> GetUserUmengPagePermissionOutcome;
			typedef std::future<GetUserUmengPagePermissionOutcome> GetUserUmengPagePermissionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GetUserUmengPagePermissionRequest&, const GetUserUmengPagePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserUmengPagePermissionAsyncHandler;
			typedef Outcome<Error, Model::GroupDetailsResult> GroupDetailsOutcome;
			typedef std::future<GroupDetailsOutcome> GroupDetailsOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GroupDetailsRequest&, const GroupDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GroupDetailsAsyncHandler;
			typedef Outcome<Error, Model::GroupIntimeResult> GroupIntimeOutcome;
			typedef std::future<GroupIntimeOutcome> GroupIntimeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GroupIntimeRequest&, const GroupIntimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GroupIntimeAsyncHandler;
			typedef Outcome<Error, Model::GroupOverviewResult> GroupOverviewOutcome;
			typedef std::future<GroupOverviewOutcome> GroupOverviewOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GroupOverviewRequest&, const GroupOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GroupOverviewAsyncHandler;
			typedef Outcome<Error, Model::GroupTrendResult> GroupTrendOutcome;
			typedef std::future<GroupTrendOutcome> GroupTrendOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::GroupTrendRequest&, const GroupTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GroupTrendAsyncHandler;
			typedef Outcome<Error, Model::HeadquartersOverviewResult> HeadquartersOverviewOutcome;
			typedef std::future<HeadquartersOverviewOutcome> HeadquartersOverviewOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::HeadquartersOverviewRequest&, const HeadquartersOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HeadquartersOverviewAsyncHandler;
			typedef Outcome<Error, Model::HeadquartersRankingResult> HeadquartersRankingOutcome;
			typedef std::future<HeadquartersRankingOutcome> HeadquartersRankingOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::HeadquartersRankingRequest&, const HeadquartersRankingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HeadquartersRankingAsyncHandler;
			typedef Outcome<Error, Model::HeadquartersToolsCoincideResult> HeadquartersToolsCoincideOutcome;
			typedef std::future<HeadquartersToolsCoincideOutcome> HeadquartersToolsCoincideOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::HeadquartersToolsCoincideRequest&, const HeadquartersToolsCoincideOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HeadquartersToolsCoincideAsyncHandler;
			typedef Outcome<Error, Model::HeadquartersToolsContrastResult> HeadquartersToolsContrastOutcome;
			typedef std::future<HeadquartersToolsContrastOutcome> HeadquartersToolsContrastOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::HeadquartersToolsContrastRequest&, const HeadquartersToolsContrastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HeadquartersToolsContrastAsyncHandler;
			typedef Outcome<Error, Model::HeadquartersToolsO2OResult> HeadquartersToolsO2OOutcome;
			typedef std::future<HeadquartersToolsO2OOutcome> HeadquartersToolsO2OOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::HeadquartersToolsO2ORequest&, const HeadquartersToolsO2OOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HeadquartersToolsO2OAsyncHandler;
			typedef Outcome<Error, Model::HeadquartersTrendResult> HeadquartersTrendOutcome;
			typedef std::future<HeadquartersTrendOutcome> HeadquartersTrendOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::HeadquartersTrendRequest&, const HeadquartersTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HeadquartersTrendAsyncHandler;
			typedef Outcome<Error, Model::InnerCheckOrderResult> InnerCheckOrderOutcome;
			typedef std::future<InnerCheckOrderOutcome> InnerCheckOrderOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::InnerCheckOrderRequest&, const InnerCheckOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InnerCheckOrderAsyncHandler;
			typedef Outcome<Error, Model::InnerProduceCloudWFResult> InnerProduceCloudWFOutcome;
			typedef std::future<InnerProduceCloudWFOutcome> InnerProduceCloudWFOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::InnerProduceCloudWFRequest&, const InnerProduceCloudWFOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InnerProduceCloudWFAsyncHandler;
			typedef Outcome<Error, Model::InnerRefundResult> InnerRefundOutcome;
			typedef std::future<InnerRefundOutcome> InnerRefundOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::InnerRefundRequest&, const InnerRefundOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InnerRefundAsyncHandler;
			typedef Outcome<Error, Model::KickAndClearPMKcacheResult> KickAndClearPMKcacheOutcome;
			typedef std::future<KickAndClearPMKcacheOutcome> KickAndClearPMKcacheOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::KickAndClearPMKcacheRequest&, const KickAndClearPMKcacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KickAndClearPMKcacheAsyncHandler;
			typedef Outcome<Error, Model::KickStaResult> KickStaOutcome;
			typedef std::future<KickStaOutcome> KickStaOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::KickStaRequest&, const KickStaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KickStaAsyncHandler;
			typedef Outcome<Error, Model::ListAccountConfigResult> ListAccountConfigOutcome;
			typedef std::future<ListAccountConfigOutcome> ListAccountConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListAccountConfigRequest&, const ListAccountConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountConfigAsyncHandler;
			typedef Outcome<Error, Model::ListApAssetResult> ListApAssetOutcome;
			typedef std::future<ListApAssetOutcome> ListApAssetOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApAssetRequest&, const ListApAssetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApAssetAsyncHandler;
			typedef Outcome<Error, Model::ListApAssetCanBeAddedResult> ListApAssetCanBeAddedOutcome;
			typedef std::future<ListApAssetCanBeAddedOutcome> ListApAssetCanBeAddedOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApAssetCanBeAddedRequest&, const ListApAssetCanBeAddedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApAssetCanBeAddedAsyncHandler;
			typedef Outcome<Error, Model::ListApDetailInfoResult> ListApDetailInfoOutcome;
			typedef std::future<ListApDetailInfoOutcome> ListApDetailInfoOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApDetailInfoRequest&, const ListApDetailInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApDetailInfoAsyncHandler;
			typedef Outcome<Error, Model::ListApPositionResult> ListApPositionOutcome;
			typedef std::future<ListApPositionOutcome> ListApPositionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApPositionRequest&, const ListApPositionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApPositionAsyncHandler;
			typedef Outcome<Error, Model::ListApPositionMapResult> ListApPositionMapOutcome;
			typedef std::future<ListApPositionMapOutcome> ListApPositionMapOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApPositionMapRequest&, const ListApPositionMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApPositionMapAsyncHandler;
			typedef Outcome<Error, Model::ListApPositionStatusResult> ListApPositionStatusOutcome;
			typedef std::future<ListApPositionStatusOutcome> ListApPositionStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApPositionStatusRequest&, const ListApPositionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApPositionStatusAsyncHandler;
			typedef Outcome<Error, Model::ListApRadioStatusResult> ListApRadioStatusOutcome;
			typedef std::future<ListApRadioStatusOutcome> ListApRadioStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApRadioStatusRequest&, const ListApRadioStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApRadioStatusAsyncHandler;
			typedef Outcome<Error, Model::ListApStaStatusResult> ListApStaStatusOutcome;
			typedef std::future<ListApStaStatusOutcome> ListApStaStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApStaStatusRequest&, const ListApStaStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApStaStatusAsyncHandler;
			typedef Outcome<Error, Model::ListApStatusResult> ListApStatusOutcome;
			typedef std::future<ListApStatusOutcome> ListApStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApStatusRequest&, const ListApStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApStatusAsyncHandler;
			typedef Outcome<Error, Model::ListApUpgradeResult> ListApUpgradeOutcome;
			typedef std::future<ListApUpgradeOutcome> ListApUpgradeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApUpgradeRequest&, const ListApUpgradeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApUpgradeAsyncHandler;
			typedef Outcome<Error, Model::ListApgroupConfigResult> ListApgroupConfigOutcome;
			typedef std::future<ListApgroupConfigOutcome> ListApgroupConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListApgroupConfigRequest&, const ListApgroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApgroupConfigAsyncHandler;
			typedef Outcome<Error, Model::ListBriefApConfigResult> ListBriefApConfigOutcome;
			typedef std::future<ListBriefApConfigOutcome> ListBriefApConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListBriefApConfigRequest&, const ListBriefApConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBriefApConfigAsyncHandler;
			typedef Outcome<Error, Model::ListBriefConfigByActionResult> ListBriefConfigByActionOutcome;
			typedef std::future<ListBriefConfigByActionOutcome> ListBriefConfigByActionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListBriefConfigByActionRequest&, const ListBriefConfigByActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBriefConfigByActionAsyncHandler;
			typedef Outcome<Error, Model::ListBusinessDetailsResult> ListBusinessDetailsOutcome;
			typedef std::future<ListBusinessDetailsOutcome> ListBusinessDetailsOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListBusinessDetailsRequest&, const ListBusinessDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBusinessDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListBusinessesResult> ListBusinessesOutcome;
			typedef std::future<ListBusinessesOutcome> ListBusinessesOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListBusinessesRequest&, const ListBusinessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBusinessesAsyncHandler;
			typedef Outcome<Error, Model::ListConfigByActionResult> ListConfigByActionOutcome;
			typedef std::future<ListConfigByActionOutcome> ListConfigByActionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListConfigByActionRequest&, const ListConfigByActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigByActionAsyncHandler;
			typedef Outcome<Error, Model::ListGroupApBriefConfigResult> ListGroupApBriefConfigOutcome;
			typedef std::future<ListGroupApBriefConfigOutcome> ListGroupApBriefConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListGroupApBriefConfigRequest&, const ListGroupApBriefConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupApBriefConfigAsyncHandler;
			typedef Outcome<Error, Model::ListPageConfigTemplateResult> ListPageConfigTemplateOutcome;
			typedef std::future<ListPageConfigTemplateOutcome> ListPageConfigTemplateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListPageConfigTemplateRequest&, const ListPageConfigTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPageConfigTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListPortalTemplateResult> ListPortalTemplateOutcome;
			typedef std::future<ListPortalTemplateOutcome> ListPortalTemplateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListPortalTemplateRequest&, const ListPortalTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPortalTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListProbeinfoResult> ListProbeinfoOutcome;
			typedef std::future<ListProbeinfoOutcome> ListProbeinfoOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListProbeinfoRequest&, const ListProbeinfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProbeinfoAsyncHandler;
			typedef Outcome<Error, Model::ListStaOnoffLogResult> ListStaOnoffLogOutcome;
			typedef std::future<ListStaOnoffLogOutcome> ListStaOnoffLogOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListStaOnoffLogRequest&, const ListStaOnoffLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStaOnoffLogAsyncHandler;
			typedef Outcome<Error, Model::ListStaStatusResult> ListStaStatusOutcome;
			typedef std::future<ListStaStatusOutcome> ListStaStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListStaStatusRequest&, const ListStaStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStaStatusAsyncHandler;
			typedef Outcome<Error, Model::ListSubAccountPermissionResult> ListSubAccountPermissionOutcome;
			typedef std::future<ListSubAccountPermissionOutcome> ListSubAccountPermissionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListSubAccountPermissionRequest&, const ListSubAccountPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSubAccountPermissionAsyncHandler;
			typedef Outcome<Error, Model::ListUmengPagePermission4RootResult> ListUmengPagePermission4RootOutcome;
			typedef std::future<ListUmengPagePermission4RootOutcome> ListUmengPagePermission4RootOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListUmengPagePermission4RootRequest&, const ListUmengPagePermission4RootOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUmengPagePermission4RootAsyncHandler;
			typedef Outcome<Error, Model::ListUpgradeImgResult> ListUpgradeImgOutcome;
			typedef std::future<ListUpgradeImgOutcome> ListUpgradeImgOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ListUpgradeImgRequest&, const ListUpgradeImgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUpgradeImgAsyncHandler;
			typedef Outcome<Error, Model::ModifySubAccountPermissionResult> ModifySubAccountPermissionOutcome;
			typedef std::future<ModifySubAccountPermissionOutcome> ModifySubAccountPermissionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ModifySubAccountPermissionRequest&, const ModifySubAccountPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubAccountPermissionAsyncHandler;
			typedef Outcome<Error, Model::OemFlowrateAnalyseResult> OemFlowrateAnalyseOutcome;
			typedef std::future<OemFlowrateAnalyseOutcome> OemFlowrateAnalyseOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemFlowrateAnalyseRequest&, const OemFlowrateAnalyseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemFlowrateAnalyseAsyncHandler;
			typedef Outcome<Error, Model::OemFlowrateIntelligentResult> OemFlowrateIntelligentOutcome;
			typedef std::future<OemFlowrateIntelligentOutcome> OemFlowrateIntelligentOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemFlowrateIntelligentRequest&, const OemFlowrateIntelligentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemFlowrateIntelligentAsyncHandler;
			typedef Outcome<Error, Model::OemFlowrateMonitorResult> OemFlowrateMonitorOutcome;
			typedef std::future<OemFlowrateMonitorOutcome> OemFlowrateMonitorOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemFlowrateMonitorRequest&, const OemFlowrateMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemFlowrateMonitorAsyncHandler;
			typedef Outcome<Error, Model::OemFlowrateOverviewResult> OemFlowrateOverviewOutcome;
			typedef std::future<OemFlowrateOverviewOutcome> OemFlowrateOverviewOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemFlowrateOverviewRequest&, const OemFlowrateOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemFlowrateOverviewAsyncHandler;
			typedef Outcome<Error, Model::OemFlowrateRankingResult> OemFlowrateRankingOutcome;
			typedef std::future<OemFlowrateRankingOutcome> OemFlowrateRankingOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemFlowrateRankingRequest&, const OemFlowrateRankingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemFlowrateRankingAsyncHandler;
			typedef Outcome<Error, Model::OemHeatLineResult> OemHeatLineOutcome;
			typedef std::future<OemHeatLineOutcome> OemHeatLineOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemHeatLineRequest&, const OemHeatLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemHeatLineAsyncHandler;
			typedef Outcome<Error, Model::OemHeatMapResult> OemHeatMapOutcome;
			typedef std::future<OemHeatMapOutcome> OemHeatMapOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemHeatMapRequest&, const OemHeatMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemHeatMapAsyncHandler;
			typedef Outcome<Error, Model::OemHeatSettingResult> OemHeatSettingOutcome;
			typedef std::future<OemHeatSettingOutcome> OemHeatSettingOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemHeatSettingRequest&, const OemHeatSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemHeatSettingAsyncHandler;
			typedef Outcome<Error, Model::OemMarketingCustomerResult> OemMarketingCustomerOutcome;
			typedef std::future<OemMarketingCustomerOutcome> OemMarketingCustomerOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemMarketingCustomerRequest&, const OemMarketingCustomerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemMarketingCustomerAsyncHandler;
			typedef Outcome<Error, Model::OemMarketingPotentialResult> OemMarketingPotentialOutcome;
			typedef std::future<OemMarketingPotentialOutcome> OemMarketingPotentialOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemMarketingPotentialRequest&, const OemMarketingPotentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemMarketingPotentialAsyncHandler;
			typedef Outcome<Error, Model::OemMarketingSettingDataResult> OemMarketingSettingDataOutcome;
			typedef std::future<OemMarketingSettingDataOutcome> OemMarketingSettingDataOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemMarketingSettingDataRequest&, const OemMarketingSettingDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemMarketingSettingDataAsyncHandler;
			typedef Outcome<Error, Model::OemSitingContrastResult> OemSitingContrastOutcome;
			typedef std::future<OemSitingContrastOutcome> OemSitingContrastOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemSitingContrastRequest&, const OemSitingContrastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemSitingContrastAsyncHandler;
			typedef Outcome<Error, Model::OemSitingSelctionResult> OemSitingSelctionOutcome;
			typedef std::future<OemSitingSelctionOutcome> OemSitingSelctionOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OemSitingSelctionRequest&, const OemSitingSelctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OemSitingSelctionAsyncHandler;
			typedef Outcome<Error, Model::OnoffGroupApRadioResult> OnoffGroupApRadioOutcome;
			typedef std::future<OnoffGroupApRadioOutcome> OnoffGroupApRadioOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::OnoffGroupApRadioRequest&, const OnoffGroupApRadioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnoffGroupApRadioAsyncHandler;
			typedef Outcome<Error, Model::PeripheryAnalyseResult> PeripheryAnalyseOutcome;
			typedef std::future<PeripheryAnalyseOutcome> PeripheryAnalyseOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::PeripheryAnalyseRequest&, const PeripheryAnalyseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PeripheryAnalyseAsyncHandler;
			typedef Outcome<Error, Model::ProduceInstanceResult> ProduceInstanceOutcome;
			typedef std::future<ProduceInstanceOutcome> ProduceInstanceOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProduceInstanceRequest&, const ProduceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProduceInstanceAsyncHandler;
			typedef Outcome<Error, Model::ProfileBaseResult> ProfileBaseOutcome;
			typedef std::future<ProfileBaseOutcome> ProfileBaseOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProfileBaseRequest&, const ProfileBaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileBaseAsyncHandler;
			typedef Outcome<Error, Model::ProfileConsumeResult> ProfileConsumeOutcome;
			typedef std::future<ProfileConsumeOutcome> ProfileConsumeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProfileConsumeRequest&, const ProfileConsumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileConsumeAsyncHandler;
			typedef Outcome<Error, Model::ProfileDistrictResult> ProfileDistrictOutcome;
			typedef std::future<ProfileDistrictOutcome> ProfileDistrictOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProfileDistrictRequest&, const ProfileDistrictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileDistrictAsyncHandler;
			typedef Outcome<Error, Model::ProfileHistoryResult> ProfileHistoryOutcome;
			typedef std::future<ProfileHistoryOutcome> ProfileHistoryOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProfileHistoryRequest&, const ProfileHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileHistoryAsyncHandler;
			typedef Outcome<Error, Model::ProfileHistoryListResult> ProfileHistoryListOutcome;
			typedef std::future<ProfileHistoryListOutcome> ProfileHistoryListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProfileHistoryListRequest&, const ProfileHistoryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileHistoryListAsyncHandler;
			typedef Outcome<Error, Model::ProfileMediaResult> ProfileMediaOutcome;
			typedef std::future<ProfileMediaOutcome> ProfileMediaOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProfileMediaRequest&, const ProfileMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileMediaAsyncHandler;
			typedef Outcome<Error, Model::ProfileTagResult> ProfileTagOutcome;
			typedef std::future<ProfileTagOutcome> ProfileTagOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProfileTagRequest&, const ProfileTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileTagAsyncHandler;
			typedef Outcome<Error, Model::ProfileTradeResult> ProfileTradeOutcome;
			typedef std::future<ProfileTradeOutcome> ProfileTradeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ProfileTradeRequest&, const ProfileTradeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileTradeAsyncHandler;
			typedef Outcome<Error, Model::PutOssFileResult> PutOssFileOutcome;
			typedef std::future<PutOssFileOutcome> PutOssFileOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::PutOssFileRequest&, const PutOssFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutOssFileAsyncHandler;
			typedef Outcome<Error, Model::QueryRenewPriceResult> QueryRenewPriceOutcome;
			typedef std::future<QueryRenewPriceOutcome> QueryRenewPriceOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::QueryRenewPriceRequest&, const QueryRenewPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRenewPriceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::RepairApResult> RepairApOutcome;
			typedef std::future<RepairApOutcome> RepairApOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::RepairApRequest&, const RepairApOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RepairApAsyncHandler;
			typedef Outcome<Error, Model::RepairGroupApResult> RepairGroupApOutcome;
			typedef std::future<RepairGroupApOutcome> RepairGroupApOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::RepairGroupApRequest&, const RepairGroupApOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RepairGroupApAsyncHandler;
			typedef Outcome<Error, Model::ReportDayResult> ReportDayOutcome;
			typedef std::future<ReportDayOutcome> ReportDayOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReportDayRequest&, const ReportDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportDayAsyncHandler;
			typedef Outcome<Error, Model::ReportHourResult> ReportHourOutcome;
			typedef std::future<ReportHourOutcome> ReportHourOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReportHourRequest&, const ReportHourOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportHourAsyncHandler;
			typedef Outcome<Error, Model::ReportMinuteResult> ReportMinuteOutcome;
			typedef std::future<ReportMinuteOutcome> ReportMinuteOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReportMinuteRequest&, const ReportMinuteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportMinuteAsyncHandler;
			typedef Outcome<Error, Model::ReportRealtimeResult> ReportRealtimeOutcome;
			typedef std::future<ReportRealtimeOutcome> ReportRealtimeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReportRealtimeRequest&, const ReportRealtimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportRealtimeAsyncHandler;
			typedef Outcome<Error, Model::ReportZoneDayResult> ReportZoneDayOutcome;
			typedef std::future<ReportZoneDayOutcome> ReportZoneDayOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReportZoneDayRequest&, const ReportZoneDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportZoneDayAsyncHandler;
			typedef Outcome<Error, Model::ReportZoneHourResult> ReportZoneHourOutcome;
			typedef std::future<ReportZoneHourOutcome> ReportZoneHourOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReportZoneHourRequest&, const ReportZoneHourOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportZoneHourAsyncHandler;
			typedef Outcome<Error, Model::ReportZoneMinuteResult> ReportZoneMinuteOutcome;
			typedef std::future<ReportZoneMinuteOutcome> ReportZoneMinuteOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReportZoneMinuteRequest&, const ReportZoneMinuteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportZoneMinuteAsyncHandler;
			typedef Outcome<Error, Model::ReportZoneRealtimeResult> ReportZoneRealtimeOutcome;
			typedef std::future<ReportZoneRealtimeOutcome> ReportZoneRealtimeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ReportZoneRealtimeRequest&, const ReportZoneRealtimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportZoneRealtimeAsyncHandler;
			typedef Outcome<Error, Model::ResetApResult> ResetApOutcome;
			typedef std::future<ResetApOutcome> ResetApOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ResetApRequest&, const ResetApOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetApAsyncHandler;
			typedef Outcome<Error, Model::ResetApConfigResult> ResetApConfigOutcome;
			typedef std::future<ResetApConfigOutcome> ResetApConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ResetApConfigRequest&, const ResetApConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetApConfigAsyncHandler;
			typedef Outcome<Error, Model::ResumeInstanceResult> ResumeInstanceOutcome;
			typedef std::future<ResumeInstanceOutcome> ResumeInstanceOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ResumeInstanceRequest&, const ResumeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeInstanceAsyncHandler;
			typedef Outcome<Error, Model::SaveAccountConfigResult> SaveAccountConfigOutcome;
			typedef std::future<SaveAccountConfigOutcome> SaveAccountConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveAccountConfigRequest&, const SaveAccountConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveAccountConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveApConfigResult> SaveApConfigOutcome;
			typedef std::future<SaveApConfigOutcome> SaveApConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApConfigRequest&, const SaveApConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveApMapInfoResult> SaveApMapInfoOutcome;
			typedef std::future<SaveApMapInfoOutcome> SaveApMapInfoOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApMapInfoRequest&, const SaveApMapInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApMapInfoAsyncHandler;
			typedef Outcome<Error, Model::SaveApPortalConfigResult> SaveApPortalConfigOutcome;
			typedef std::future<SaveApPortalConfigOutcome> SaveApPortalConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApPortalConfigRequest&, const SaveApPortalConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApPortalConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveApRadioConfigResult> SaveApRadioConfigOutcome;
			typedef std::future<SaveApRadioConfigOutcome> SaveApRadioConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApRadioConfigRequest&, const SaveApRadioConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApRadioConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveApRadioSsidConfigResult> SaveApRadioSsidConfigOutcome;
			typedef std::future<SaveApRadioSsidConfigOutcome> SaveApRadioSsidConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApRadioSsidConfigRequest&, const SaveApRadioSsidConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApRadioSsidConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveApScanConfigResult> SaveApScanConfigOutcome;
			typedef std::future<SaveApScanConfigOutcome> SaveApScanConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApScanConfigRequest&, const SaveApScanConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApScanConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveApgroupConfigResult> SaveApgroupConfigOutcome;
			typedef std::future<SaveApgroupConfigOutcome> SaveApgroupConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApgroupConfigRequest&, const SaveApgroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApgroupConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveApgroupScanConfigResult> SaveApgroupScanConfigOutcome;
			typedef std::future<SaveApgroupScanConfigOutcome> SaveApgroupScanConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApgroupScanConfigRequest&, const SaveApgroupScanConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApgroupScanConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveApgroupSsidConfigResult> SaveApgroupSsidConfigOutcome;
			typedef std::future<SaveApgroupSsidConfigOutcome> SaveApgroupSsidConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveApgroupSsidConfigRequest&, const SaveApgroupSsidConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveApgroupSsidConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveGroupApRadioConfigResult> SaveGroupApRadioConfigOutcome;
			typedef std::future<SaveGroupApRadioConfigOutcome> SaveGroupApRadioConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveGroupApRadioConfigRequest&, const SaveGroupApRadioConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveGroupApRadioConfigAsyncHandler;
			typedef Outcome<Error, Model::SavePageConfigTemplateResult> SavePageConfigTemplateOutcome;
			typedef std::future<SavePageConfigTemplateOutcome> SavePageConfigTemplateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SavePageConfigTemplateRequest&, const SavePageConfigTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SavePageConfigTemplateAsyncHandler;
			typedef Outcome<Error, Model::SavePortalConfigResult> SavePortalConfigOutcome;
			typedef std::future<SavePortalConfigOutcome> SavePortalConfigOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SavePortalConfigRequest&, const SavePortalConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SavePortalConfigAsyncHandler;
			typedef Outcome<Error, Model::SavePortalTemplateResult> SavePortalTemplateOutcome;
			typedef std::future<SavePortalTemplateOutcome> SavePortalTemplateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SavePortalTemplateRequest&, const SavePortalTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SavePortalTemplateAsyncHandler;
			typedef Outcome<Error, Model::SaveProbeDataSubscriberResult> SaveProbeDataSubscriberOutcome;
			typedef std::future<SaveProbeDataSubscriberOutcome> SaveProbeDataSubscriberOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveProbeDataSubscriberRequest&, const SaveProbeDataSubscriberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveProbeDataSubscriberAsyncHandler;
			typedef Outcome<Error, Model::SaveStaStatusResult> SaveStaStatusOutcome;
			typedef std::future<SaveStaStatusOutcome> SaveStaStatusOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveStaStatusRequest&, const SaveStaStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveStaStatusAsyncHandler;
			typedef Outcome<Error, Model::SaveUmengPagePermission4RootResult> SaveUmengPagePermission4RootOutcome;
			typedef std::future<SaveUmengPagePermission4RootOutcome> SaveUmengPagePermission4RootOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SaveUmengPagePermission4RootRequest&, const SaveUmengPagePermission4RootOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveUmengPagePermission4RootAsyncHandler;
			typedef Outcome<Error, Model::SendCommandByMacResult> SendCommandByMacOutcome;
			typedef std::future<SendCommandByMacOutcome> SendCommandByMacOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SendCommandByMacRequest&, const SendCommandByMacOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendCommandByMacAsyncHandler;
			typedef Outcome<Error, Model::SetScanModeResult> SetScanModeOutcome;
			typedef std::future<SetScanModeOutcome> SetScanModeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SetScanModeRequest&, const SetScanModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetScanModeAsyncHandler;
			typedef Outcome<Error, Model::SetUpgradeImgByModelResult> SetUpgradeImgByModelOutcome;
			typedef std::future<SetUpgradeImgByModelOutcome> SetUpgradeImgByModelOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::SetUpgradeImgByModelRequest&, const SetUpgradeImgByModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUpgradeImgByModelAsyncHandler;
			typedef Outcome<Error, Model::ShopActionCustomeResult> ShopActionCustomeOutcome;
			typedef std::future<ShopActionCustomeOutcome> ShopActionCustomeOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopActionCustomeRequest&, const ShopActionCustomeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopActionCustomeAsyncHandler;
			typedef Outcome<Error, Model::ShopActionReturningResult> ShopActionReturningOutcome;
			typedef std::future<ShopActionReturningOutcome> ShopActionReturningOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopActionReturningRequest&, const ShopActionReturningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopActionReturningAsyncHandler;
			typedef Outcome<Error, Model::ShopCameraResult> ShopCameraOutcome;
			typedef std::future<ShopCameraOutcome> ShopCameraOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopCameraRequest&, const ShopCameraOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopCameraAsyncHandler;
			typedef Outcome<Error, Model::ShopCreateResult> ShopCreateOutcome;
			typedef std::future<ShopCreateOutcome> ShopCreateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopCreateRequest&, const ShopCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopCreateAsyncHandler;
			typedef Outcome<Error, Model::ShopCreatemarketingResult> ShopCreatemarketingOutcome;
			typedef std::future<ShopCreatemarketingOutcome> ShopCreatemarketingOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopCreatemarketingRequest&, const ShopCreatemarketingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopCreatemarketingAsyncHandler;
			typedef Outcome<Error, Model::ShopDataAlarmResult> ShopDataAlarmOutcome;
			typedef std::future<ShopDataAlarmOutcome> ShopDataAlarmOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopDataAlarmRequest&, const ShopDataAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopDataAlarmAsyncHandler;
			typedef Outcome<Error, Model::ShopDeleteResult> ShopDeleteOutcome;
			typedef std::future<ShopDeleteOutcome> ShopDeleteOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopDeleteRequest&, const ShopDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopDeleteAsyncHandler;
			typedef Outcome<Error, Model::ShopDeletemarketingResult> ShopDeletemarketingOutcome;
			typedef std::future<ShopDeletemarketingOutcome> ShopDeletemarketingOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopDeletemarketingRequest&, const ShopDeletemarketingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopDeletemarketingAsyncHandler;
			typedef Outcome<Error, Model::ShopGetfiltermacResult> ShopGetfiltermacOutcome;
			typedef std::future<ShopGetfiltermacOutcome> ShopGetfiltermacOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopGetfiltermacRequest&, const ShopGetfiltermacOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopGetfiltermacAsyncHandler;
			typedef Outcome<Error, Model::ShopGetredressResult> ShopGetredressOutcome;
			typedef std::future<ShopGetredressOutcome> ShopGetredressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopGetredressRequest&, const ShopGetredressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopGetredressAsyncHandler;
			typedef Outcome<Error, Model::ShopGroupCreateResult> ShopGroupCreateOutcome;
			typedef std::future<ShopGroupCreateOutcome> ShopGroupCreateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopGroupCreateRequest&, const ShopGroupCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopGroupCreateAsyncHandler;
			typedef Outcome<Error, Model::ShopGroupDeleteResult> ShopGroupDeleteOutcome;
			typedef std::future<ShopGroupDeleteOutcome> ShopGroupDeleteOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopGroupDeleteRequest&, const ShopGroupDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopGroupDeleteAsyncHandler;
			typedef Outcome<Error, Model::ShopGroupInfoResult> ShopGroupInfoOutcome;
			typedef std::future<ShopGroupInfoOutcome> ShopGroupInfoOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopGroupInfoRequest&, const ShopGroupInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopGroupInfoAsyncHandler;
			typedef Outcome<Error, Model::ShopGroupShowListResult> ShopGroupShowListOutcome;
			typedef std::future<ShopGroupShowListOutcome> ShopGroupShowListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopGroupShowListRequest&, const ShopGroupShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopGroupShowListAsyncHandler;
			typedef Outcome<Error, Model::ShopGroupUpdateResult> ShopGroupUpdateOutcome;
			typedef std::future<ShopGroupUpdateOutcome> ShopGroupUpdateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopGroupUpdateRequest&, const ShopGroupUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopGroupUpdateAsyncHandler;
			typedef Outcome<Error, Model::ShopInfoResult> ShopInfoOutcome;
			typedef std::future<ShopInfoOutcome> ShopInfoOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopInfoRequest&, const ShopInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopInfoAsyncHandler;
			typedef Outcome<Error, Model::ShopMarketingListResult> ShopMarketingListOutcome;
			typedef std::future<ShopMarketingListOutcome> ShopMarketingListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopMarketingListRequest&, const ShopMarketingListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopMarketingListAsyncHandler;
			typedef Outcome<Error, Model::ShopOverviewResult> ShopOverviewOutcome;
			typedef std::future<ShopOverviewOutcome> ShopOverviewOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopOverviewRequest&, const ShopOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopOverviewAsyncHandler;
			typedef Outcome<Error, Model::ShopSetfiltermacResult> ShopSetfiltermacOutcome;
			typedef std::future<ShopSetfiltermacOutcome> ShopSetfiltermacOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopSetfiltermacRequest&, const ShopSetfiltermacOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopSetfiltermacAsyncHandler;
			typedef Outcome<Error, Model::ShopSetredressResult> ShopSetredressOutcome;
			typedef std::future<ShopSetredressOutcome> ShopSetredressOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopSetredressRequest&, const ShopSetredressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopSetredressAsyncHandler;
			typedef Outcome<Error, Model::ShopShowListResult> ShopShowListOutcome;
			typedef std::future<ShopShowListOutcome> ShopShowListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopShowListRequest&, const ShopShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopShowListAsyncHandler;
			typedef Outcome<Error, Model::ShopUpdateResult> ShopUpdateOutcome;
			typedef std::future<ShopUpdateOutcome> ShopUpdateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::ShopUpdateRequest&, const ShopUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShopUpdateAsyncHandler;
			typedef Outcome<Error, Model::UpLoadMapResult> UpLoadMapOutcome;
			typedef std::future<UpLoadMapOutcome> UpLoadMapOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::UpLoadMapRequest&, const UpLoadMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpLoadMapAsyncHandler;
			typedef Outcome<Error, Model::UpgradeAPResult> UpgradeAPOutcome;
			typedef std::future<UpgradeAPOutcome> UpgradeAPOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::UpgradeAPRequest&, const UpgradeAPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeAPAsyncHandler;
			typedef Outcome<Error, Model::UpgradeAPGroupResult> UpgradeAPGroupOutcome;
			typedef std::future<UpgradeAPGroupOutcome> UpgradeAPGroupOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::UpgradeAPGroupRequest&, const UpgradeAPGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeAPGroupAsyncHandler;
			typedef Outcome<Error, Model::UserAnalyseResult> UserAnalyseOutcome;
			typedef std::future<UserAnalyseOutcome> UserAnalyseOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::UserAnalyseRequest&, const UserAnalyseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UserAnalyseAsyncHandler;
			typedef Outcome<Error, Model::UserDataCreateResult> UserDataCreateOutcome;
			typedef std::future<UserDataCreateOutcome> UserDataCreateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::UserDataCreateRequest&, const UserDataCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UserDataCreateAsyncHandler;
			typedef Outcome<Error, Model::UserDataDeleteResult> UserDataDeleteOutcome;
			typedef std::future<UserDataDeleteOutcome> UserDataDeleteOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::UserDataDeleteRequest&, const UserDataDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UserDataDeleteAsyncHandler;
			typedef Outcome<Error, Model::UserDataShowListResult> UserDataShowListOutcome;
			typedef std::future<UserDataShowListOutcome> UserDataShowListOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::UserDataShowListRequest&, const UserDataShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UserDataShowListAsyncHandler;
			typedef Outcome<Error, Model::UserDataUpdateResult> UserDataUpdateOutcome;
			typedef std::future<UserDataUpdateOutcome> UserDataUpdateOutcomeCallable;
			typedef std::function<void(const CloudwfClient*, const Model::UserDataUpdateRequest&, const UserDataUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UserDataUpdateAsyncHandler;

			CloudwfClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudwfClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudwfClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudwfClient();
			AddApgroupConfigOutcome addApgroupConfig(const Model::AddApgroupConfigRequest &request)const;
			void addApgroupConfigAsync(const Model::AddApgroupConfigRequest& request, const AddApgroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddApgroupConfigOutcomeCallable addApgroupConfigCallable(const Model::AddApgroupConfigRequest& request) const;
			AliyunRegisterApAssetOutcome aliyunRegisterApAsset(const Model::AliyunRegisterApAssetRequest &request)const;
			void aliyunRegisterApAssetAsync(const Model::AliyunRegisterApAssetRequest& request, const AliyunRegisterApAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AliyunRegisterApAssetOutcomeCallable aliyunRegisterApAssetCallable(const Model::AliyunRegisterApAssetRequest& request) const;
			ApgroupBatchAddApOutcome apgroupBatchAddAp(const Model::ApgroupBatchAddApRequest &request)const;
			void apgroupBatchAddApAsync(const Model::ApgroupBatchAddApRequest& request, const ApgroupBatchAddApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApgroupBatchAddApOutcomeCallable apgroupBatchAddApCallable(const Model::ApgroupBatchAddApRequest& request) const;
			ApgroupBatchDeleteApOutcome apgroupBatchDeleteAp(const Model::ApgroupBatchDeleteApRequest &request)const;
			void apgroupBatchDeleteApAsync(const Model::ApgroupBatchDeleteApRequest& request, const ApgroupBatchDeleteApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApgroupBatchDeleteApOutcomeCallable apgroupBatchDeleteApCallable(const Model::ApgroupBatchDeleteApRequest& request) const;
			AreaCreateOutcome areaCreate(const Model::AreaCreateRequest &request)const;
			void areaCreateAsync(const Model::AreaCreateRequest& request, const AreaCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AreaCreateOutcomeCallable areaCreateCallable(const Model::AreaCreateRequest& request) const;
			AreaDeleteOutcome areaDelete(const Model::AreaDeleteRequest &request)const;
			void areaDeleteAsync(const Model::AreaDeleteRequest& request, const AreaDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AreaDeleteOutcomeCallable areaDeleteCallable(const Model::AreaDeleteRequest& request) const;
			AreaInfoOutcome areaInfo(const Model::AreaInfoRequest &request)const;
			void areaInfoAsync(const Model::AreaInfoRequest& request, const AreaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AreaInfoOutcomeCallable areaInfoCallable(const Model::AreaInfoRequest& request) const;
			AreaShowListOutcome areaShowList(const Model::AreaShowListRequest &request)const;
			void areaShowListAsync(const Model::AreaShowListRequest& request, const AreaShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AreaShowListOutcomeCallable areaShowListCallable(const Model::AreaShowListRequest& request) const;
			AreaUpdateOutcome areaUpdate(const Model::AreaUpdateRequest &request)const;
			void areaUpdateAsync(const Model::AreaUpdateRequest& request, const AreaUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AreaUpdateOutcomeCallable areaUpdateCallable(const Model::AreaUpdateRequest& request) const;
			BatchChangeGroupApNameOutcome batchChangeGroupApName(const Model::BatchChangeGroupApNameRequest &request)const;
			void batchChangeGroupApNameAsync(const Model::BatchChangeGroupApNameRequest& request, const BatchChangeGroupApNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchChangeGroupApNameOutcomeCallable batchChangeGroupApNameCallable(const Model::BatchChangeGroupApNameRequest& request) const;
			BatchRegisterApAssetOutcome batchRegisterApAsset(const Model::BatchRegisterApAssetRequest &request)const;
			void batchRegisterApAssetAsync(const Model::BatchRegisterApAssetRequest& request, const BatchRegisterApAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchRegisterApAssetOutcomeCallable batchRegisterApAssetCallable(const Model::BatchRegisterApAssetRequest& request) const;
			BatchSaveApPositionOutcome batchSaveApPosition(const Model::BatchSaveApPositionRequest &request)const;
			void batchSaveApPositionAsync(const Model::BatchSaveApPositionRequest& request, const BatchSaveApPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSaveApPositionOutcomeCallable batchSaveApPositionCallable(const Model::BatchSaveApPositionRequest& request) const;
			BusinessCreateOutcome businessCreate(const Model::BusinessCreateRequest &request)const;
			void businessCreateAsync(const Model::BusinessCreateRequest& request, const BusinessCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BusinessCreateOutcomeCallable businessCreateCallable(const Model::BusinessCreateRequest& request) const;
			BusinessInfoOutcome businessInfo(const Model::BusinessInfoRequest &request)const;
			void businessInfoAsync(const Model::BusinessInfoRequest& request, const BusinessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BusinessInfoOutcomeCallable businessInfoCallable(const Model::BusinessInfoRequest& request) const;
			BusinessShowListOutcome businessShowList(const Model::BusinessShowListRequest &request)const;
			void businessShowListAsync(const Model::BusinessShowListRequest& request, const BusinessShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BusinessShowListOutcomeCallable businessShowListCallable(const Model::BusinessShowListRequest& request) const;
			BusinessUpdateOutcome businessUpdate(const Model::BusinessUpdateRequest &request)const;
			void businessUpdateAsync(const Model::BusinessUpdateRequest& request, const BusinessUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BusinessUpdateOutcomeCallable businessUpdateCallable(const Model::BusinessUpdateRequest& request) const;
			CeaseInstanceOutcome ceaseInstance(const Model::CeaseInstanceRequest &request)const;
			void ceaseInstanceAsync(const Model::CeaseInstanceRequest& request, const CeaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CeaseInstanceOutcomeCallable ceaseInstanceCallable(const Model::CeaseInstanceRequest& request) const;
			CheckRootPermissionOutcome checkRootPermission(const Model::CheckRootPermissionRequest &request)const;
			void checkRootPermissionAsync(const Model::CheckRootPermissionRequest& request, const CheckRootPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckRootPermissionOutcomeCallable checkRootPermissionCallable(const Model::CheckRootPermissionRequest& request) const;
			CheckUmengDataAnalysisPermissionOutcome checkUmengDataAnalysisPermission(const Model::CheckUmengDataAnalysisPermissionRequest &request)const;
			void checkUmengDataAnalysisPermissionAsync(const Model::CheckUmengDataAnalysisPermissionRequest& request, const CheckUmengDataAnalysisPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckUmengDataAnalysisPermissionOutcomeCallable checkUmengDataAnalysisPermissionCallable(const Model::CheckUmengDataAnalysisPermissionRequest& request) const;
			ConfigAutoRenewOutcome configAutoRenew(const Model::ConfigAutoRenewRequest &request)const;
			void configAutoRenewAsync(const Model::ConfigAutoRenewRequest& request, const ConfigAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigAutoRenewOutcomeCallable configAutoRenewCallable(const Model::ConfigAutoRenewRequest& request) const;
			CreateRenewOrderOutcome createRenewOrder(const Model::CreateRenewOrderRequest &request)const;
			void createRenewOrderAsync(const Model::CreateRenewOrderRequest& request, const CreateRenewOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRenewOrderOutcomeCallable createRenewOrderCallable(const Model::CreateRenewOrderRequest& request) const;
			CreateSubAccountPermissionOutcome createSubAccountPermission(const Model::CreateSubAccountPermissionRequest &request)const;
			void createSubAccountPermissionAsync(const Model::CreateSubAccountPermissionRequest& request, const CreateSubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubAccountPermissionOutcomeCallable createSubAccountPermissionCallable(const Model::CreateSubAccountPermissionRequest& request) const;
			DelApPositionOutcome delApPosition(const Model::DelApPositionRequest &request)const;
			void delApPositionAsync(const Model::DelApPositionRequest& request, const DelApPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelApPositionOutcomeCallable delApPositionCallable(const Model::DelApPositionRequest& request) const;
			DelPageConfigTemplateOutcome delPageConfigTemplate(const Model::DelPageConfigTemplateRequest &request)const;
			void delPageConfigTemplateAsync(const Model::DelPageConfigTemplateRequest& request, const DelPageConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelPageConfigTemplateOutcomeCallable delPageConfigTemplateCallable(const Model::DelPageConfigTemplateRequest& request) const;
			DelPortalTempOutcome delPortalTemp(const Model::DelPortalTempRequest &request)const;
			void delPortalTempAsync(const Model::DelPortalTempRequest& request, const DelPortalTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelPortalTempOutcomeCallable delPortalTempCallable(const Model::DelPortalTempRequest& request) const;
			DelSubAccountPermissionOutcome delSubAccountPermission(const Model::DelSubAccountPermissionRequest &request)const;
			void delSubAccountPermissionAsync(const Model::DelSubAccountPermissionRequest& request, const DelSubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelSubAccountPermissionOutcomeCallable delSubAccountPermissionCallable(const Model::DelSubAccountPermissionRequest& request) const;
			DelUmengPagePermission4RootOutcome delUmengPagePermission4Root(const Model::DelUmengPagePermission4RootRequest &request)const;
			void delUmengPagePermission4RootAsync(const Model::DelUmengPagePermission4RootRequest& request, const DelUmengPagePermission4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelUmengPagePermission4RootOutcomeCallable delUmengPagePermission4RootCallable(const Model::DelUmengPagePermission4RootRequest& request) const;
			DeleteApRadioSsidConfigOutcome deleteApRadioSsidConfig(const Model::DeleteApRadioSsidConfigRequest &request)const;
			void deleteApRadioSsidConfigAsync(const Model::DeleteApRadioSsidConfigRequest& request, const DeleteApRadioSsidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApRadioSsidConfigOutcomeCallable deleteApRadioSsidConfigCallable(const Model::DeleteApRadioSsidConfigRequest& request) const;
			DeleteApgroupConfigOutcome deleteApgroupConfig(const Model::DeleteApgroupConfigRequest &request)const;
			void deleteApgroupConfigAsync(const Model::DeleteApgroupConfigRequest& request, const DeleteApgroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApgroupConfigOutcomeCallable deleteApgroupConfigCallable(const Model::DeleteApgroupConfigRequest& request) const;
			DeleteApgroupSsidConfigOutcome deleteApgroupSsidConfig(const Model::DeleteApgroupSsidConfigRequest &request)const;
			void deleteApgroupSsidConfigAsync(const Model::DeleteApgroupSsidConfigRequest& request, const DeleteApgroupSsidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApgroupSsidConfigOutcomeCallable deleteApgroupSsidConfigCallable(const Model::DeleteApgroupSsidConfigRequest& request) const;
			DeletePositionMapOutcome deletePositionMap(const Model::DeletePositionMapRequest &request)const;
			void deletePositionMapAsync(const Model::DeletePositionMapRequest& request, const DeletePositionMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePositionMapOutcomeCallable deletePositionMapCallable(const Model::DeletePositionMapRequest& request) const;
			DeviceBatchCreateOutcome deviceBatchCreate(const Model::DeviceBatchCreateRequest &request)const;
			void deviceBatchCreateAsync(const Model::DeviceBatchCreateRequest& request, const DeviceBatchCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeviceBatchCreateOutcomeCallable deviceBatchCreateCallable(const Model::DeviceBatchCreateRequest& request) const;
			DeviceCreateOutcome deviceCreate(const Model::DeviceCreateRequest &request)const;
			void deviceCreateAsync(const Model::DeviceCreateRequest& request, const DeviceCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeviceCreateOutcomeCallable deviceCreateCallable(const Model::DeviceCreateRequest& request) const;
			DeviceDeleteOutcome deviceDelete(const Model::DeviceDeleteRequest &request)const;
			void deviceDeleteAsync(const Model::DeviceDeleteRequest& request, const DeviceDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeviceDeleteOutcomeCallable deviceDeleteCallable(const Model::DeviceDeleteRequest& request) const;
			DeviceShowListOutcome deviceShowList(const Model::DeviceShowListRequest &request)const;
			void deviceShowListAsync(const Model::DeviceShowListRequest& request, const DeviceShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeviceShowListOutcomeCallable deviceShowListCallable(const Model::DeviceShowListRequest& request) const;
			DeviceUpdateOutcome deviceUpdate(const Model::DeviceUpdateRequest &request)const;
			void deviceUpdateAsync(const Model::DeviceUpdateRequest& request, const DeviceUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeviceUpdateOutcomeCallable deviceUpdateCallable(const Model::DeviceUpdateRequest& request) const;
			ExcelToJsonOutcome excelToJson(const Model::ExcelToJsonRequest &request)const;
			void excelToJsonAsync(const Model::ExcelToJsonRequest& request, const ExcelToJsonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExcelToJsonOutcomeCallable excelToJsonCallable(const Model::ExcelToJsonRequest& request) const;
			FindApOutcome findAp(const Model::FindApRequest &request)const;
			void findApAsync(const Model::FindApRequest& request, const FindApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindApOutcomeCallable findApCallable(const Model::FindApRequest& request) const;
			FrequencyAnalyseOutcome frequencyAnalyse(const Model::FrequencyAnalyseRequest &request)const;
			void frequencyAnalyseAsync(const Model::FrequencyAnalyseRequest& request, const FrequencyAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FrequencyAnalyseOutcomeCallable frequencyAnalyseCallable(const Model::FrequencyAnalyseRequest& request) const;
			GetAccountConfigOutcome getAccountConfig(const Model::GetAccountConfigRequest &request)const;
			void getAccountConfigAsync(const Model::GetAccountConfigRequest& request, const GetAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountConfigOutcomeCallable getAccountConfigCallable(const Model::GetAccountConfigRequest& request) const;
			GetAddApsProgressOutcome getAddApsProgress(const Model::GetAddApsProgressRequest &request)const;
			void getAddApsProgressAsync(const Model::GetAddApsProgressRequest& request, const GetAddApsProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAddApsProgressOutcomeCallable getAddApsProgressCallable(const Model::GetAddApsProgressRequest& request) const;
			GetAllActiveShopByGroupOutcome getAllActiveShopByGroup(const Model::GetAllActiveShopByGroupRequest &request)const;
			void getAllActiveShopByGroupAsync(const Model::GetAllActiveShopByGroupRequest& request, const GetAllActiveShopByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllActiveShopByGroupOutcomeCallable getAllActiveShopByGroupCallable(const Model::GetAllActiveShopByGroupRequest& request) const;
			GetAllApModelOutcome getAllApModel(const Model::GetAllApModelRequest &request)const;
			void getAllApModelAsync(const Model::GetAllApModelRequest& request, const GetAllApModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllApModelOutcomeCallable getAllApModelCallable(const Model::GetAllApModelRequest& request) const;
			GetApDetailedConfigOutcome getApDetailedConfig(const Model::GetApDetailedConfigRequest &request)const;
			void getApDetailedConfigAsync(const Model::GetApDetailedConfigRequest& request, const GetApDetailedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApDetailedConfigOutcomeCallable getApDetailedConfigCallable(const Model::GetApDetailedConfigRequest& request) const;
			GetApDetailedStatusOutcome getApDetailedStatus(const Model::GetApDetailedStatusRequest &request)const;
			void getApDetailedStatusAsync(const Model::GetApDetailedStatusRequest& request, const GetApDetailedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApDetailedStatusOutcomeCallable getApDetailedStatusCallable(const Model::GetApDetailedStatusRequest& request) const;
			GetApPortalBindOutcome getApPortalBind(const Model::GetApPortalBindRequest &request)const;
			void getApPortalBindAsync(const Model::GetApPortalBindRequest& request, const GetApPortalBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApPortalBindOutcomeCallable getApPortalBindCallable(const Model::GetApPortalBindRequest& request) const;
			GetApRunHistoryTimeSerOutcome getApRunHistoryTimeSer(const Model::GetApRunHistoryTimeSerRequest &request)const;
			void getApRunHistoryTimeSerAsync(const Model::GetApRunHistoryTimeSerRequest& request, const GetApRunHistoryTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApRunHistoryTimeSerOutcomeCallable getApRunHistoryTimeSerCallable(const Model::GetApRunHistoryTimeSerRequest& request) const;
			GetApStaMiscAggOutcome getApStaMiscAgg(const Model::GetApStaMiscAggRequest &request)const;
			void getApStaMiscAggAsync(const Model::GetApStaMiscAggRequest& request, const GetApStaMiscAggAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApStaMiscAggOutcomeCallable getApStaMiscAggCallable(const Model::GetApStaMiscAggRequest& request) const;
			GetApTopOutcome getApTop(const Model::GetApTopRequest &request)const;
			void getApTopAsync(const Model::GetApTopRequest& request, const GetApTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApTopOutcomeCallable getApTopCallable(const Model::GetApTopRequest& request) const;
			GetApgroupConfigProgressOutcome getApgroupConfigProgress(const Model::GetApgroupConfigProgressRequest &request)const;
			void getApgroupConfigProgressAsync(const Model::GetApgroupConfigProgressRequest& request, const GetApgroupConfigProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApgroupConfigProgressOutcomeCallable getApgroupConfigProgressCallable(const Model::GetApgroupConfigProgressRequest& request) const;
			GetApgroupDetailedConfigOutcome getApgroupDetailedConfig(const Model::GetApgroupDetailedConfigRequest &request)const;
			void getApgroupDetailedConfigAsync(const Model::GetApgroupDetailedConfigRequest& request, const GetApgroupDetailedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApgroupDetailedConfigOutcomeCallable getApgroupDetailedConfigCallable(const Model::GetApgroupDetailedConfigRequest& request) const;
			GetApgroupPortalConfigProgressOutcome getApgroupPortalConfigProgress(const Model::GetApgroupPortalConfigProgressRequest &request)const;
			void getApgroupPortalConfigProgressAsync(const Model::GetApgroupPortalConfigProgressRequest& request, const GetApgroupPortalConfigProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApgroupPortalConfigProgressOutcomeCallable getApgroupPortalConfigProgressCallable(const Model::GetApgroupPortalConfigProgressRequest& request) const;
			GetApgroupScanConfigSaveProgressOutcome getApgroupScanConfigSaveProgress(const Model::GetApgroupScanConfigSaveProgressRequest &request)const;
			void getApgroupScanConfigSaveProgressAsync(const Model::GetApgroupScanConfigSaveProgressRequest& request, const GetApgroupScanConfigSaveProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApgroupScanConfigSaveProgressOutcomeCallable getApgroupScanConfigSaveProgressCallable(const Model::GetApgroupScanConfigSaveProgressRequest& request) const;
			GetApgroupSsidConfigProgressOutcome getApgroupSsidConfigProgress(const Model::GetApgroupSsidConfigProgressRequest &request)const;
			void getApgroupSsidConfigProgressAsync(const Model::GetApgroupSsidConfigProgressRequest& request, const GetApgroupSsidConfigProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApgroupSsidConfigProgressOutcomeCallable getApgroupSsidConfigProgressCallable(const Model::GetApgroupSsidConfigProgressRequest& request) const;
			GetBatchSaveApAssetProgressOutcome getBatchSaveApAssetProgress(const Model::GetBatchSaveApAssetProgressRequest &request)const;
			void getBatchSaveApAssetProgressAsync(const Model::GetBatchSaveApAssetProgressRequest& request, const GetBatchSaveApAssetProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBatchSaveApAssetProgressOutcomeCallable getBatchSaveApAssetProgressCallable(const Model::GetBatchSaveApAssetProgressRequest& request) const;
			GetBidOutcome getBid(const Model::GetBidRequest &request)const;
			void getBidAsync(const Model::GetBidRequest& request, const GetBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBidOutcomeCallable getBidCallable(const Model::GetBidRequest& request) const;
			GetBids4Uid4RootOutcome getBids4Uid4Root(const Model::GetBids4Uid4RootRequest &request)const;
			void getBids4Uid4RootAsync(const Model::GetBids4Uid4RootRequest& request, const GetBids4Uid4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBids4Uid4RootOutcomeCallable getBids4Uid4RootCallable(const Model::GetBids4Uid4RootRequest& request) const;
			GetBindAp4UmengOutcome getBindAp4Umeng(const Model::GetBindAp4UmengRequest &request)const;
			void getBindAp4UmengAsync(const Model::GetBindAp4UmengRequest& request, const GetBindAp4UmengAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBindAp4UmengOutcomeCallable getBindAp4UmengCallable(const Model::GetBindAp4UmengRequest& request) const;
			GetCrowdListOutcome getCrowdList(const Model::GetCrowdListRequest &request)const;
			void getCrowdListAsync(const Model::GetCrowdListRequest& request, const GetCrowdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCrowdListOutcomeCallable getCrowdListCallable(const Model::GetCrowdListRequest& request) const;
			GetDailyStatisticOutcome getDailyStatistic(const Model::GetDailyStatisticRequest &request)const;
			void getDailyStatisticAsync(const Model::GetDailyStatisticRequest& request, const GetDailyStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDailyStatisticOutcomeCallable getDailyStatisticCallable(const Model::GetDailyStatisticRequest& request) const;
			GetDeviceInfoByMacOutcome getDeviceInfoByMac(const Model::GetDeviceInfoByMacRequest &request)const;
			void getDeviceInfoByMacAsync(const Model::GetDeviceInfoByMacRequest& request, const GetDeviceInfoByMacAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceInfoByMacOutcomeCallable getDeviceInfoByMacCallable(const Model::GetDeviceInfoByMacRequest& request) const;
			GetGroupApChangeNameTemplateOutcome getGroupApChangeNameTemplate(const Model::GetGroupApChangeNameTemplateRequest &request)const;
			void getGroupApChangeNameTemplateAsync(const Model::GetGroupApChangeNameTemplateRequest& request, const GetGroupApChangeNameTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupApChangeNameTemplateOutcomeCallable getGroupApChangeNameTemplateCallable(const Model::GetGroupApChangeNameTemplateRequest& request) const;
			GetGroupApRadioConfigProgressOutcome getGroupApRadioConfigProgress(const Model::GetGroupApRadioConfigProgressRequest &request)const;
			void getGroupApRadioConfigProgressAsync(const Model::GetGroupApRadioConfigProgressRequest& request, const GetGroupApRadioConfigProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupApRadioConfigProgressOutcomeCallable getGroupApRadioConfigProgressCallable(const Model::GetGroupApRadioConfigProgressRequest& request) const;
			GetGroupApRadioConfigTemplateOutcome getGroupApRadioConfigTemplate(const Model::GetGroupApRadioConfigTemplateRequest &request)const;
			void getGroupApRadioConfigTemplateAsync(const Model::GetGroupApRadioConfigTemplateRequest& request, const GetGroupApRadioConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupApRadioConfigTemplateOutcomeCallable getGroupApRadioConfigTemplateCallable(const Model::GetGroupApRadioConfigTemplateRequest& request) const;
			GetGroupApRadioOnoffProgressOutcome getGroupApRadioOnoffProgress(const Model::GetGroupApRadioOnoffProgressRequest &request)const;
			void getGroupApRadioOnoffProgressAsync(const Model::GetGroupApRadioOnoffProgressRequest& request, const GetGroupApRadioOnoffProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupApRadioOnoffProgressOutcomeCallable getGroupApRadioOnoffProgressCallable(const Model::GetGroupApRadioOnoffProgressRequest& request) const;
			GetGroupApRepairProgressOutcome getGroupApRepairProgress(const Model::GetGroupApRepairProgressRequest &request)const;
			void getGroupApRepairProgressAsync(const Model::GetGroupApRepairProgressRequest& request, const GetGroupApRepairProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupApRepairProgressOutcomeCallable getGroupApRepairProgressCallable(const Model::GetGroupApRepairProgressRequest& request) const;
			GetInstanceByShopOutcome getInstanceByShop(const Model::GetInstanceByShopRequest &request)const;
			void getInstanceByShopAsync(const Model::GetInstanceByShopRequest& request, const GetInstanceByShopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceByShopOutcomeCallable getInstanceByShopCallable(const Model::GetInstanceByShopRequest& request) const;
			GetLatestApStatisticOutcome getLatestApStatistic(const Model::GetLatestApStatisticRequest &request)const;
			void getLatestApStatisticAsync(const Model::GetLatestApStatisticRequest& request, const GetLatestApStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLatestApStatisticOutcomeCallable getLatestApStatisticCallable(const Model::GetLatestApStatisticRequest& request) const;
			GetLatestStaStatisticOutcome getLatestStaStatistic(const Model::GetLatestStaStatisticRequest &request)const;
			void getLatestStaStatisticAsync(const Model::GetLatestStaStatisticRequest& request, const GetLatestStaStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLatestStaStatisticOutcomeCallable getLatestStaStatisticCallable(const Model::GetLatestStaStatisticRequest& request) const;
			GetMapUrlOutcome getMapUrl(const Model::GetMapUrlRequest &request)const;
			void getMapUrlAsync(const Model::GetMapUrlRequest& request, const GetMapUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMapUrlOutcomeCallable getMapUrlCallable(const Model::GetMapUrlRequest& request) const;
			GetOnlineApTimeSerOutcome getOnlineApTimeSer(const Model::GetOnlineApTimeSerRequest &request)const;
			void getOnlineApTimeSerAsync(const Model::GetOnlineApTimeSerRequest& request, const GetOnlineApTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOnlineApTimeSerOutcomeCallable getOnlineApTimeSerCallable(const Model::GetOnlineApTimeSerRequest& request) const;
			GetOnlineStaTimeSerOutcome getOnlineStaTimeSer(const Model::GetOnlineStaTimeSerRequest &request)const;
			void getOnlineStaTimeSerAsync(const Model::GetOnlineStaTimeSerRequest& request, const GetOnlineStaTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOnlineStaTimeSerOutcomeCallable getOnlineStaTimeSerCallable(const Model::GetOnlineStaTimeSerRequest& request) const;
			GetOssServerSignOutcome getOssServerSign(const Model::GetOssServerSignRequest &request)const;
			void getOssServerSignAsync(const Model::GetOssServerSignRequest& request, const GetOssServerSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOssServerSignOutcomeCallable getOssServerSignCallable(const Model::GetOssServerSignRequest& request) const;
			GetPageConfigTemplateOutcome getPageConfigTemplate(const Model::GetPageConfigTemplateRequest &request)const;
			void getPageConfigTemplateAsync(const Model::GetPageConfigTemplateRequest& request, const GetPageConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPageConfigTemplateOutcomeCallable getPageConfigTemplateCallable(const Model::GetPageConfigTemplateRequest& request) const;
			GetPagePropertiesOutcome getPageProperties(const Model::GetPagePropertiesRequest &request)const;
			void getPagePropertiesAsync(const Model::GetPagePropertiesRequest& request, const GetPagePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPagePropertiesOutcomeCallable getPagePropertiesCallable(const Model::GetPagePropertiesRequest& request) const;
			GetPortalTempDetailOutcome getPortalTempDetail(const Model::GetPortalTempDetailRequest &request)const;
			void getPortalTempDetailAsync(const Model::GetPortalTempDetailRequest& request, const GetPortalTempDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPortalTempDetailOutcomeCallable getPortalTempDetailCallable(const Model::GetPortalTempDetailRequest& request) const;
			GetProbeDataSubscriberConfigOutcome getProbeDataSubscriberConfig(const Model::GetProbeDataSubscriberConfigRequest &request)const;
			void getProbeDataSubscriberConfigAsync(const Model::GetProbeDataSubscriberConfigRequest& request, const GetProbeDataSubscriberConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProbeDataSubscriberConfigOutcomeCallable getProbeDataSubscriberConfigCallable(const Model::GetProbeDataSubscriberConfigRequest& request) const;
			GetRadioRunHistoryTimeSerOutcome getRadioRunHistoryTimeSer(const Model::GetRadioRunHistoryTimeSerRequest &request)const;
			void getRadioRunHistoryTimeSerAsync(const Model::GetRadioRunHistoryTimeSerRequest& request, const GetRadioRunHistoryTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRadioRunHistoryTimeSerOutcomeCallable getRadioRunHistoryTimeSerCallable(const Model::GetRadioRunHistoryTimeSerRequest& request) const;
			GetScanModeOutcome getScanMode(const Model::GetScanModeRequest &request)const;
			void getScanModeAsync(const Model::GetScanModeRequest& request, const GetScanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScanModeOutcomeCallable getScanModeCallable(const Model::GetScanModeRequest& request) const;
			GetScanProbeTimeSerOutcome getScanProbeTimeSer(const Model::GetScanProbeTimeSerRequest &request)const;
			void getScanProbeTimeSerAsync(const Model::GetScanProbeTimeSerRequest& request, const GetScanProbeTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScanProbeTimeSerOutcomeCallable getScanProbeTimeSerCallable(const Model::GetScanProbeTimeSerRequest& request) const;
			GetSendCommandByMacProgressOutcome getSendCommandByMacProgress(const Model::GetSendCommandByMacProgressRequest &request)const;
			void getSendCommandByMacProgressAsync(const Model::GetSendCommandByMacProgressRequest& request, const GetSendCommandByMacProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSendCommandByMacProgressOutcomeCallable getSendCommandByMacProgressCallable(const Model::GetSendCommandByMacProgressRequest& request) const;
			GetSidsAndGids4BidOutcome getSidsAndGids4Bid(const Model::GetSidsAndGids4BidRequest &request)const;
			void getSidsAndGids4BidAsync(const Model::GetSidsAndGids4BidRequest& request, const GetSidsAndGids4BidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSidsAndGids4BidOutcomeCallable getSidsAndGids4BidCallable(const Model::GetSidsAndGids4BidRequest& request) const;
			GetStaDetailedStatusOutcome getStaDetailedStatus(const Model::GetStaDetailedStatusRequest &request)const;
			void getStaDetailedStatusAsync(const Model::GetStaDetailedStatusRequest& request, const GetStaDetailedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStaDetailedStatusOutcomeCallable getStaDetailedStatusCallable(const Model::GetStaDetailedStatusRequest& request) const;
			GetStaRunHistoryTimeSerOutcome getStaRunHistoryTimeSer(const Model::GetStaRunHistoryTimeSerRequest &request)const;
			void getStaRunHistoryTimeSerAsync(const Model::GetStaRunHistoryTimeSerRequest& request, const GetStaRunHistoryTimeSerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStaRunHistoryTimeSerOutcomeCallable getStaRunHistoryTimeSerCallable(const Model::GetStaRunHistoryTimeSerRequest& request) const;
			GetStaTopOutcome getStaTop(const Model::GetStaTopRequest &request)const;
			void getStaTopAsync(const Model::GetStaTopRequest& request, const GetStaTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStaTopOutcomeCallable getStaTopCallable(const Model::GetStaTopRequest& request) const;
			GetSubAccountPermissionOutcome getSubAccountPermission(const Model::GetSubAccountPermissionRequest &request)const;
			void getSubAccountPermissionAsync(const Model::GetSubAccountPermissionRequest& request, const GetSubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubAccountPermissionOutcomeCallable getSubAccountPermissionCallable(const Model::GetSubAccountPermissionRequest& request) const;
			GetSubAccountStatusOutcome getSubAccountStatus(const Model::GetSubAccountStatusRequest &request)const;
			void getSubAccountStatusAsync(const Model::GetSubAccountStatusRequest& request, const GetSubAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubAccountStatusOutcomeCallable getSubAccountStatusCallable(const Model::GetSubAccountStatusRequest& request) const;
			GetUmengPagePermission4RootOutcome getUmengPagePermission4Root(const Model::GetUmengPagePermission4RootRequest &request)const;
			void getUmengPagePermission4RootAsync(const Model::GetUmengPagePermission4RootRequest& request, const GetUmengPagePermission4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUmengPagePermission4RootOutcomeCallable getUmengPagePermission4RootCallable(const Model::GetUmengPagePermission4RootRequest& request) const;
			GetUpgradeAPGroupProgressOutcome getUpgradeAPGroupProgress(const Model::GetUpgradeAPGroupProgressRequest &request)const;
			void getUpgradeAPGroupProgressAsync(const Model::GetUpgradeAPGroupProgressRequest& request, const GetUpgradeAPGroupProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUpgradeAPGroupProgressOutcomeCallable getUpgradeAPGroupProgressCallable(const Model::GetUpgradeAPGroupProgressRequest& request) const;
			GetUpgradeAPProgressOutcome getUpgradeAPProgress(const Model::GetUpgradeAPProgressRequest &request)const;
			void getUpgradeAPProgressAsync(const Model::GetUpgradeAPProgressRequest& request, const GetUpgradeAPProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUpgradeAPProgressOutcomeCallable getUpgradeAPProgressCallable(const Model::GetUpgradeAPProgressRequest& request) const;
			GetUpgradeImgOutcome getUpgradeImg(const Model::GetUpgradeImgRequest &request)const;
			void getUpgradeImgAsync(const Model::GetUpgradeImgRequest& request, const GetUpgradeImgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUpgradeImgOutcomeCallable getUpgradeImgCallable(const Model::GetUpgradeImgRequest& request) const;
			GetUserUmengPagePermissionOutcome getUserUmengPagePermission(const Model::GetUserUmengPagePermissionRequest &request)const;
			void getUserUmengPagePermissionAsync(const Model::GetUserUmengPagePermissionRequest& request, const GetUserUmengPagePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserUmengPagePermissionOutcomeCallable getUserUmengPagePermissionCallable(const Model::GetUserUmengPagePermissionRequest& request) const;
			GroupDetailsOutcome groupDetails(const Model::GroupDetailsRequest &request)const;
			void groupDetailsAsync(const Model::GroupDetailsRequest& request, const GroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GroupDetailsOutcomeCallable groupDetailsCallable(const Model::GroupDetailsRequest& request) const;
			GroupIntimeOutcome groupIntime(const Model::GroupIntimeRequest &request)const;
			void groupIntimeAsync(const Model::GroupIntimeRequest& request, const GroupIntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GroupIntimeOutcomeCallable groupIntimeCallable(const Model::GroupIntimeRequest& request) const;
			GroupOverviewOutcome groupOverview(const Model::GroupOverviewRequest &request)const;
			void groupOverviewAsync(const Model::GroupOverviewRequest& request, const GroupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GroupOverviewOutcomeCallable groupOverviewCallable(const Model::GroupOverviewRequest& request) const;
			GroupTrendOutcome groupTrend(const Model::GroupTrendRequest &request)const;
			void groupTrendAsync(const Model::GroupTrendRequest& request, const GroupTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GroupTrendOutcomeCallable groupTrendCallable(const Model::GroupTrendRequest& request) const;
			HeadquartersOverviewOutcome headquartersOverview(const Model::HeadquartersOverviewRequest &request)const;
			void headquartersOverviewAsync(const Model::HeadquartersOverviewRequest& request, const HeadquartersOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HeadquartersOverviewOutcomeCallable headquartersOverviewCallable(const Model::HeadquartersOverviewRequest& request) const;
			HeadquartersRankingOutcome headquartersRanking(const Model::HeadquartersRankingRequest &request)const;
			void headquartersRankingAsync(const Model::HeadquartersRankingRequest& request, const HeadquartersRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HeadquartersRankingOutcomeCallable headquartersRankingCallable(const Model::HeadquartersRankingRequest& request) const;
			HeadquartersToolsCoincideOutcome headquartersToolsCoincide(const Model::HeadquartersToolsCoincideRequest &request)const;
			void headquartersToolsCoincideAsync(const Model::HeadquartersToolsCoincideRequest& request, const HeadquartersToolsCoincideAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HeadquartersToolsCoincideOutcomeCallable headquartersToolsCoincideCallable(const Model::HeadquartersToolsCoincideRequest& request) const;
			HeadquartersToolsContrastOutcome headquartersToolsContrast(const Model::HeadquartersToolsContrastRequest &request)const;
			void headquartersToolsContrastAsync(const Model::HeadquartersToolsContrastRequest& request, const HeadquartersToolsContrastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HeadquartersToolsContrastOutcomeCallable headquartersToolsContrastCallable(const Model::HeadquartersToolsContrastRequest& request) const;
			HeadquartersToolsO2OOutcome headquartersToolsO2O(const Model::HeadquartersToolsO2ORequest &request)const;
			void headquartersToolsO2OAsync(const Model::HeadquartersToolsO2ORequest& request, const HeadquartersToolsO2OAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HeadquartersToolsO2OOutcomeCallable headquartersToolsO2OCallable(const Model::HeadquartersToolsO2ORequest& request) const;
			HeadquartersTrendOutcome headquartersTrend(const Model::HeadquartersTrendRequest &request)const;
			void headquartersTrendAsync(const Model::HeadquartersTrendRequest& request, const HeadquartersTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HeadquartersTrendOutcomeCallable headquartersTrendCallable(const Model::HeadquartersTrendRequest& request) const;
			InnerCheckOrderOutcome innerCheckOrder(const Model::InnerCheckOrderRequest &request)const;
			void innerCheckOrderAsync(const Model::InnerCheckOrderRequest& request, const InnerCheckOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InnerCheckOrderOutcomeCallable innerCheckOrderCallable(const Model::InnerCheckOrderRequest& request) const;
			InnerProduceCloudWFOutcome innerProduceCloudWF(const Model::InnerProduceCloudWFRequest &request)const;
			void innerProduceCloudWFAsync(const Model::InnerProduceCloudWFRequest& request, const InnerProduceCloudWFAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InnerProduceCloudWFOutcomeCallable innerProduceCloudWFCallable(const Model::InnerProduceCloudWFRequest& request) const;
			InnerRefundOutcome innerRefund(const Model::InnerRefundRequest &request)const;
			void innerRefundAsync(const Model::InnerRefundRequest& request, const InnerRefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InnerRefundOutcomeCallable innerRefundCallable(const Model::InnerRefundRequest& request) const;
			KickAndClearPMKcacheOutcome kickAndClearPMKcache(const Model::KickAndClearPMKcacheRequest &request)const;
			void kickAndClearPMKcacheAsync(const Model::KickAndClearPMKcacheRequest& request, const KickAndClearPMKcacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KickAndClearPMKcacheOutcomeCallable kickAndClearPMKcacheCallable(const Model::KickAndClearPMKcacheRequest& request) const;
			KickStaOutcome kickSta(const Model::KickStaRequest &request)const;
			void kickStaAsync(const Model::KickStaRequest& request, const KickStaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KickStaOutcomeCallable kickStaCallable(const Model::KickStaRequest& request) const;
			ListAccountConfigOutcome listAccountConfig(const Model::ListAccountConfigRequest &request)const;
			void listAccountConfigAsync(const Model::ListAccountConfigRequest& request, const ListAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccountConfigOutcomeCallable listAccountConfigCallable(const Model::ListAccountConfigRequest& request) const;
			ListApAssetOutcome listApAsset(const Model::ListApAssetRequest &request)const;
			void listApAssetAsync(const Model::ListApAssetRequest& request, const ListApAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApAssetOutcomeCallable listApAssetCallable(const Model::ListApAssetRequest& request) const;
			ListApAssetCanBeAddedOutcome listApAssetCanBeAdded(const Model::ListApAssetCanBeAddedRequest &request)const;
			void listApAssetCanBeAddedAsync(const Model::ListApAssetCanBeAddedRequest& request, const ListApAssetCanBeAddedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApAssetCanBeAddedOutcomeCallable listApAssetCanBeAddedCallable(const Model::ListApAssetCanBeAddedRequest& request) const;
			ListApDetailInfoOutcome listApDetailInfo(const Model::ListApDetailInfoRequest &request)const;
			void listApDetailInfoAsync(const Model::ListApDetailInfoRequest& request, const ListApDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApDetailInfoOutcomeCallable listApDetailInfoCallable(const Model::ListApDetailInfoRequest& request) const;
			ListApPositionOutcome listApPosition(const Model::ListApPositionRequest &request)const;
			void listApPositionAsync(const Model::ListApPositionRequest& request, const ListApPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApPositionOutcomeCallable listApPositionCallable(const Model::ListApPositionRequest& request) const;
			ListApPositionMapOutcome listApPositionMap(const Model::ListApPositionMapRequest &request)const;
			void listApPositionMapAsync(const Model::ListApPositionMapRequest& request, const ListApPositionMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApPositionMapOutcomeCallable listApPositionMapCallable(const Model::ListApPositionMapRequest& request) const;
			ListApPositionStatusOutcome listApPositionStatus(const Model::ListApPositionStatusRequest &request)const;
			void listApPositionStatusAsync(const Model::ListApPositionStatusRequest& request, const ListApPositionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApPositionStatusOutcomeCallable listApPositionStatusCallable(const Model::ListApPositionStatusRequest& request) const;
			ListApRadioStatusOutcome listApRadioStatus(const Model::ListApRadioStatusRequest &request)const;
			void listApRadioStatusAsync(const Model::ListApRadioStatusRequest& request, const ListApRadioStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApRadioStatusOutcomeCallable listApRadioStatusCallable(const Model::ListApRadioStatusRequest& request) const;
			ListApStaStatusOutcome listApStaStatus(const Model::ListApStaStatusRequest &request)const;
			void listApStaStatusAsync(const Model::ListApStaStatusRequest& request, const ListApStaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApStaStatusOutcomeCallable listApStaStatusCallable(const Model::ListApStaStatusRequest& request) const;
			ListApStatusOutcome listApStatus(const Model::ListApStatusRequest &request)const;
			void listApStatusAsync(const Model::ListApStatusRequest& request, const ListApStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApStatusOutcomeCallable listApStatusCallable(const Model::ListApStatusRequest& request) const;
			ListApUpgradeOutcome listApUpgrade(const Model::ListApUpgradeRequest &request)const;
			void listApUpgradeAsync(const Model::ListApUpgradeRequest& request, const ListApUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApUpgradeOutcomeCallable listApUpgradeCallable(const Model::ListApUpgradeRequest& request) const;
			ListApgroupConfigOutcome listApgroupConfig(const Model::ListApgroupConfigRequest &request)const;
			void listApgroupConfigAsync(const Model::ListApgroupConfigRequest& request, const ListApgroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApgroupConfigOutcomeCallable listApgroupConfigCallable(const Model::ListApgroupConfigRequest& request) const;
			ListBriefApConfigOutcome listBriefApConfig(const Model::ListBriefApConfigRequest &request)const;
			void listBriefApConfigAsync(const Model::ListBriefApConfigRequest& request, const ListBriefApConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBriefApConfigOutcomeCallable listBriefApConfigCallable(const Model::ListBriefApConfigRequest& request) const;
			ListBriefConfigByActionOutcome listBriefConfigByAction(const Model::ListBriefConfigByActionRequest &request)const;
			void listBriefConfigByActionAsync(const Model::ListBriefConfigByActionRequest& request, const ListBriefConfigByActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBriefConfigByActionOutcomeCallable listBriefConfigByActionCallable(const Model::ListBriefConfigByActionRequest& request) const;
			ListBusinessDetailsOutcome listBusinessDetails(const Model::ListBusinessDetailsRequest &request)const;
			void listBusinessDetailsAsync(const Model::ListBusinessDetailsRequest& request, const ListBusinessDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBusinessDetailsOutcomeCallable listBusinessDetailsCallable(const Model::ListBusinessDetailsRequest& request) const;
			ListBusinessesOutcome listBusinesses(const Model::ListBusinessesRequest &request)const;
			void listBusinessesAsync(const Model::ListBusinessesRequest& request, const ListBusinessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBusinessesOutcomeCallable listBusinessesCallable(const Model::ListBusinessesRequest& request) const;
			ListConfigByActionOutcome listConfigByAction(const Model::ListConfigByActionRequest &request)const;
			void listConfigByActionAsync(const Model::ListConfigByActionRequest& request, const ListConfigByActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigByActionOutcomeCallable listConfigByActionCallable(const Model::ListConfigByActionRequest& request) const;
			ListGroupApBriefConfigOutcome listGroupApBriefConfig(const Model::ListGroupApBriefConfigRequest &request)const;
			void listGroupApBriefConfigAsync(const Model::ListGroupApBriefConfigRequest& request, const ListGroupApBriefConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupApBriefConfigOutcomeCallable listGroupApBriefConfigCallable(const Model::ListGroupApBriefConfigRequest& request) const;
			ListPageConfigTemplateOutcome listPageConfigTemplate(const Model::ListPageConfigTemplateRequest &request)const;
			void listPageConfigTemplateAsync(const Model::ListPageConfigTemplateRequest& request, const ListPageConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPageConfigTemplateOutcomeCallable listPageConfigTemplateCallable(const Model::ListPageConfigTemplateRequest& request) const;
			ListPortalTemplateOutcome listPortalTemplate(const Model::ListPortalTemplateRequest &request)const;
			void listPortalTemplateAsync(const Model::ListPortalTemplateRequest& request, const ListPortalTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPortalTemplateOutcomeCallable listPortalTemplateCallable(const Model::ListPortalTemplateRequest& request) const;
			ListProbeinfoOutcome listProbeinfo(const Model::ListProbeinfoRequest &request)const;
			void listProbeinfoAsync(const Model::ListProbeinfoRequest& request, const ListProbeinfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProbeinfoOutcomeCallable listProbeinfoCallable(const Model::ListProbeinfoRequest& request) const;
			ListStaOnoffLogOutcome listStaOnoffLog(const Model::ListStaOnoffLogRequest &request)const;
			void listStaOnoffLogAsync(const Model::ListStaOnoffLogRequest& request, const ListStaOnoffLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStaOnoffLogOutcomeCallable listStaOnoffLogCallable(const Model::ListStaOnoffLogRequest& request) const;
			ListStaStatusOutcome listStaStatus(const Model::ListStaStatusRequest &request)const;
			void listStaStatusAsync(const Model::ListStaStatusRequest& request, const ListStaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStaStatusOutcomeCallable listStaStatusCallable(const Model::ListStaStatusRequest& request) const;
			ListSubAccountPermissionOutcome listSubAccountPermission(const Model::ListSubAccountPermissionRequest &request)const;
			void listSubAccountPermissionAsync(const Model::ListSubAccountPermissionRequest& request, const ListSubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSubAccountPermissionOutcomeCallable listSubAccountPermissionCallable(const Model::ListSubAccountPermissionRequest& request) const;
			ListUmengPagePermission4RootOutcome listUmengPagePermission4Root(const Model::ListUmengPagePermission4RootRequest &request)const;
			void listUmengPagePermission4RootAsync(const Model::ListUmengPagePermission4RootRequest& request, const ListUmengPagePermission4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUmengPagePermission4RootOutcomeCallable listUmengPagePermission4RootCallable(const Model::ListUmengPagePermission4RootRequest& request) const;
			ListUpgradeImgOutcome listUpgradeImg(const Model::ListUpgradeImgRequest &request)const;
			void listUpgradeImgAsync(const Model::ListUpgradeImgRequest& request, const ListUpgradeImgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUpgradeImgOutcomeCallable listUpgradeImgCallable(const Model::ListUpgradeImgRequest& request) const;
			ModifySubAccountPermissionOutcome modifySubAccountPermission(const Model::ModifySubAccountPermissionRequest &request)const;
			void modifySubAccountPermissionAsync(const Model::ModifySubAccountPermissionRequest& request, const ModifySubAccountPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySubAccountPermissionOutcomeCallable modifySubAccountPermissionCallable(const Model::ModifySubAccountPermissionRequest& request) const;
			OemFlowrateAnalyseOutcome oemFlowrateAnalyse(const Model::OemFlowrateAnalyseRequest &request)const;
			void oemFlowrateAnalyseAsync(const Model::OemFlowrateAnalyseRequest& request, const OemFlowrateAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemFlowrateAnalyseOutcomeCallable oemFlowrateAnalyseCallable(const Model::OemFlowrateAnalyseRequest& request) const;
			OemFlowrateIntelligentOutcome oemFlowrateIntelligent(const Model::OemFlowrateIntelligentRequest &request)const;
			void oemFlowrateIntelligentAsync(const Model::OemFlowrateIntelligentRequest& request, const OemFlowrateIntelligentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemFlowrateIntelligentOutcomeCallable oemFlowrateIntelligentCallable(const Model::OemFlowrateIntelligentRequest& request) const;
			OemFlowrateMonitorOutcome oemFlowrateMonitor(const Model::OemFlowrateMonitorRequest &request)const;
			void oemFlowrateMonitorAsync(const Model::OemFlowrateMonitorRequest& request, const OemFlowrateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemFlowrateMonitorOutcomeCallable oemFlowrateMonitorCallable(const Model::OemFlowrateMonitorRequest& request) const;
			OemFlowrateOverviewOutcome oemFlowrateOverview(const Model::OemFlowrateOverviewRequest &request)const;
			void oemFlowrateOverviewAsync(const Model::OemFlowrateOverviewRequest& request, const OemFlowrateOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemFlowrateOverviewOutcomeCallable oemFlowrateOverviewCallable(const Model::OemFlowrateOverviewRequest& request) const;
			OemFlowrateRankingOutcome oemFlowrateRanking(const Model::OemFlowrateRankingRequest &request)const;
			void oemFlowrateRankingAsync(const Model::OemFlowrateRankingRequest& request, const OemFlowrateRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemFlowrateRankingOutcomeCallable oemFlowrateRankingCallable(const Model::OemFlowrateRankingRequest& request) const;
			OemHeatLineOutcome oemHeatLine(const Model::OemHeatLineRequest &request)const;
			void oemHeatLineAsync(const Model::OemHeatLineRequest& request, const OemHeatLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemHeatLineOutcomeCallable oemHeatLineCallable(const Model::OemHeatLineRequest& request) const;
			OemHeatMapOutcome oemHeatMap(const Model::OemHeatMapRequest &request)const;
			void oemHeatMapAsync(const Model::OemHeatMapRequest& request, const OemHeatMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemHeatMapOutcomeCallable oemHeatMapCallable(const Model::OemHeatMapRequest& request) const;
			OemHeatSettingOutcome oemHeatSetting(const Model::OemHeatSettingRequest &request)const;
			void oemHeatSettingAsync(const Model::OemHeatSettingRequest& request, const OemHeatSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemHeatSettingOutcomeCallable oemHeatSettingCallable(const Model::OemHeatSettingRequest& request) const;
			OemMarketingCustomerOutcome oemMarketingCustomer(const Model::OemMarketingCustomerRequest &request)const;
			void oemMarketingCustomerAsync(const Model::OemMarketingCustomerRequest& request, const OemMarketingCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemMarketingCustomerOutcomeCallable oemMarketingCustomerCallable(const Model::OemMarketingCustomerRequest& request) const;
			OemMarketingPotentialOutcome oemMarketingPotential(const Model::OemMarketingPotentialRequest &request)const;
			void oemMarketingPotentialAsync(const Model::OemMarketingPotentialRequest& request, const OemMarketingPotentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemMarketingPotentialOutcomeCallable oemMarketingPotentialCallable(const Model::OemMarketingPotentialRequest& request) const;
			OemMarketingSettingDataOutcome oemMarketingSettingData(const Model::OemMarketingSettingDataRequest &request)const;
			void oemMarketingSettingDataAsync(const Model::OemMarketingSettingDataRequest& request, const OemMarketingSettingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemMarketingSettingDataOutcomeCallable oemMarketingSettingDataCallable(const Model::OemMarketingSettingDataRequest& request) const;
			OemSitingContrastOutcome oemSitingContrast(const Model::OemSitingContrastRequest &request)const;
			void oemSitingContrastAsync(const Model::OemSitingContrastRequest& request, const OemSitingContrastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemSitingContrastOutcomeCallable oemSitingContrastCallable(const Model::OemSitingContrastRequest& request) const;
			OemSitingSelctionOutcome oemSitingSelction(const Model::OemSitingSelctionRequest &request)const;
			void oemSitingSelctionAsync(const Model::OemSitingSelctionRequest& request, const OemSitingSelctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OemSitingSelctionOutcomeCallable oemSitingSelctionCallable(const Model::OemSitingSelctionRequest& request) const;
			OnoffGroupApRadioOutcome onoffGroupApRadio(const Model::OnoffGroupApRadioRequest &request)const;
			void onoffGroupApRadioAsync(const Model::OnoffGroupApRadioRequest& request, const OnoffGroupApRadioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnoffGroupApRadioOutcomeCallable onoffGroupApRadioCallable(const Model::OnoffGroupApRadioRequest& request) const;
			PeripheryAnalyseOutcome peripheryAnalyse(const Model::PeripheryAnalyseRequest &request)const;
			void peripheryAnalyseAsync(const Model::PeripheryAnalyseRequest& request, const PeripheryAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PeripheryAnalyseOutcomeCallable peripheryAnalyseCallable(const Model::PeripheryAnalyseRequest& request) const;
			ProduceInstanceOutcome produceInstance(const Model::ProduceInstanceRequest &request)const;
			void produceInstanceAsync(const Model::ProduceInstanceRequest& request, const ProduceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProduceInstanceOutcomeCallable produceInstanceCallable(const Model::ProduceInstanceRequest& request) const;
			ProfileBaseOutcome profileBase(const Model::ProfileBaseRequest &request)const;
			void profileBaseAsync(const Model::ProfileBaseRequest& request, const ProfileBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileBaseOutcomeCallable profileBaseCallable(const Model::ProfileBaseRequest& request) const;
			ProfileConsumeOutcome profileConsume(const Model::ProfileConsumeRequest &request)const;
			void profileConsumeAsync(const Model::ProfileConsumeRequest& request, const ProfileConsumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileConsumeOutcomeCallable profileConsumeCallable(const Model::ProfileConsumeRequest& request) const;
			ProfileDistrictOutcome profileDistrict(const Model::ProfileDistrictRequest &request)const;
			void profileDistrictAsync(const Model::ProfileDistrictRequest& request, const ProfileDistrictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileDistrictOutcomeCallable profileDistrictCallable(const Model::ProfileDistrictRequest& request) const;
			ProfileHistoryOutcome profileHistory(const Model::ProfileHistoryRequest &request)const;
			void profileHistoryAsync(const Model::ProfileHistoryRequest& request, const ProfileHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileHistoryOutcomeCallable profileHistoryCallable(const Model::ProfileHistoryRequest& request) const;
			ProfileHistoryListOutcome profileHistoryList(const Model::ProfileHistoryListRequest &request)const;
			void profileHistoryListAsync(const Model::ProfileHistoryListRequest& request, const ProfileHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileHistoryListOutcomeCallable profileHistoryListCallable(const Model::ProfileHistoryListRequest& request) const;
			ProfileMediaOutcome profileMedia(const Model::ProfileMediaRequest &request)const;
			void profileMediaAsync(const Model::ProfileMediaRequest& request, const ProfileMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileMediaOutcomeCallable profileMediaCallable(const Model::ProfileMediaRequest& request) const;
			ProfileTagOutcome profileTag(const Model::ProfileTagRequest &request)const;
			void profileTagAsync(const Model::ProfileTagRequest& request, const ProfileTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileTagOutcomeCallable profileTagCallable(const Model::ProfileTagRequest& request) const;
			ProfileTradeOutcome profileTrade(const Model::ProfileTradeRequest &request)const;
			void profileTradeAsync(const Model::ProfileTradeRequest& request, const ProfileTradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProfileTradeOutcomeCallable profileTradeCallable(const Model::ProfileTradeRequest& request) const;
			PutOssFileOutcome putOssFile(const Model::PutOssFileRequest &request)const;
			void putOssFileAsync(const Model::PutOssFileRequest& request, const PutOssFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutOssFileOutcomeCallable putOssFileCallable(const Model::PutOssFileRequest& request) const;
			QueryRenewPriceOutcome queryRenewPrice(const Model::QueryRenewPriceRequest &request)const;
			void queryRenewPriceAsync(const Model::QueryRenewPriceRequest& request, const QueryRenewPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRenewPriceOutcomeCallable queryRenewPriceCallable(const Model::QueryRenewPriceRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			RepairApOutcome repairAp(const Model::RepairApRequest &request)const;
			void repairApAsync(const Model::RepairApRequest& request, const RepairApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RepairApOutcomeCallable repairApCallable(const Model::RepairApRequest& request) const;
			RepairGroupApOutcome repairGroupAp(const Model::RepairGroupApRequest &request)const;
			void repairGroupApAsync(const Model::RepairGroupApRequest& request, const RepairGroupApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RepairGroupApOutcomeCallable repairGroupApCallable(const Model::RepairGroupApRequest& request) const;
			ReportDayOutcome reportDay(const Model::ReportDayRequest &request)const;
			void reportDayAsync(const Model::ReportDayRequest& request, const ReportDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportDayOutcomeCallable reportDayCallable(const Model::ReportDayRequest& request) const;
			ReportHourOutcome reportHour(const Model::ReportHourRequest &request)const;
			void reportHourAsync(const Model::ReportHourRequest& request, const ReportHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportHourOutcomeCallable reportHourCallable(const Model::ReportHourRequest& request) const;
			ReportMinuteOutcome reportMinute(const Model::ReportMinuteRequest &request)const;
			void reportMinuteAsync(const Model::ReportMinuteRequest& request, const ReportMinuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportMinuteOutcomeCallable reportMinuteCallable(const Model::ReportMinuteRequest& request) const;
			ReportRealtimeOutcome reportRealtime(const Model::ReportRealtimeRequest &request)const;
			void reportRealtimeAsync(const Model::ReportRealtimeRequest& request, const ReportRealtimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportRealtimeOutcomeCallable reportRealtimeCallable(const Model::ReportRealtimeRequest& request) const;
			ReportZoneDayOutcome reportZoneDay(const Model::ReportZoneDayRequest &request)const;
			void reportZoneDayAsync(const Model::ReportZoneDayRequest& request, const ReportZoneDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportZoneDayOutcomeCallable reportZoneDayCallable(const Model::ReportZoneDayRequest& request) const;
			ReportZoneHourOutcome reportZoneHour(const Model::ReportZoneHourRequest &request)const;
			void reportZoneHourAsync(const Model::ReportZoneHourRequest& request, const ReportZoneHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportZoneHourOutcomeCallable reportZoneHourCallable(const Model::ReportZoneHourRequest& request) const;
			ReportZoneMinuteOutcome reportZoneMinute(const Model::ReportZoneMinuteRequest &request)const;
			void reportZoneMinuteAsync(const Model::ReportZoneMinuteRequest& request, const ReportZoneMinuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportZoneMinuteOutcomeCallable reportZoneMinuteCallable(const Model::ReportZoneMinuteRequest& request) const;
			ReportZoneRealtimeOutcome reportZoneRealtime(const Model::ReportZoneRealtimeRequest &request)const;
			void reportZoneRealtimeAsync(const Model::ReportZoneRealtimeRequest& request, const ReportZoneRealtimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportZoneRealtimeOutcomeCallable reportZoneRealtimeCallable(const Model::ReportZoneRealtimeRequest& request) const;
			ResetApOutcome resetAp(const Model::ResetApRequest &request)const;
			void resetApAsync(const Model::ResetApRequest& request, const ResetApAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetApOutcomeCallable resetApCallable(const Model::ResetApRequest& request) const;
			ResetApConfigOutcome resetApConfig(const Model::ResetApConfigRequest &request)const;
			void resetApConfigAsync(const Model::ResetApConfigRequest& request, const ResetApConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetApConfigOutcomeCallable resetApConfigCallable(const Model::ResetApConfigRequest& request) const;
			ResumeInstanceOutcome resumeInstance(const Model::ResumeInstanceRequest &request)const;
			void resumeInstanceAsync(const Model::ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeInstanceOutcomeCallable resumeInstanceCallable(const Model::ResumeInstanceRequest& request) const;
			SaveAccountConfigOutcome saveAccountConfig(const Model::SaveAccountConfigRequest &request)const;
			void saveAccountConfigAsync(const Model::SaveAccountConfigRequest& request, const SaveAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveAccountConfigOutcomeCallable saveAccountConfigCallable(const Model::SaveAccountConfigRequest& request) const;
			SaveApConfigOutcome saveApConfig(const Model::SaveApConfigRequest &request)const;
			void saveApConfigAsync(const Model::SaveApConfigRequest& request, const SaveApConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApConfigOutcomeCallable saveApConfigCallable(const Model::SaveApConfigRequest& request) const;
			SaveApMapInfoOutcome saveApMapInfo(const Model::SaveApMapInfoRequest &request)const;
			void saveApMapInfoAsync(const Model::SaveApMapInfoRequest& request, const SaveApMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApMapInfoOutcomeCallable saveApMapInfoCallable(const Model::SaveApMapInfoRequest& request) const;
			SaveApPortalConfigOutcome saveApPortalConfig(const Model::SaveApPortalConfigRequest &request)const;
			void saveApPortalConfigAsync(const Model::SaveApPortalConfigRequest& request, const SaveApPortalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApPortalConfigOutcomeCallable saveApPortalConfigCallable(const Model::SaveApPortalConfigRequest& request) const;
			SaveApRadioConfigOutcome saveApRadioConfig(const Model::SaveApRadioConfigRequest &request)const;
			void saveApRadioConfigAsync(const Model::SaveApRadioConfigRequest& request, const SaveApRadioConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApRadioConfigOutcomeCallable saveApRadioConfigCallable(const Model::SaveApRadioConfigRequest& request) const;
			SaveApRadioSsidConfigOutcome saveApRadioSsidConfig(const Model::SaveApRadioSsidConfigRequest &request)const;
			void saveApRadioSsidConfigAsync(const Model::SaveApRadioSsidConfigRequest& request, const SaveApRadioSsidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApRadioSsidConfigOutcomeCallable saveApRadioSsidConfigCallable(const Model::SaveApRadioSsidConfigRequest& request) const;
			SaveApScanConfigOutcome saveApScanConfig(const Model::SaveApScanConfigRequest &request)const;
			void saveApScanConfigAsync(const Model::SaveApScanConfigRequest& request, const SaveApScanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApScanConfigOutcomeCallable saveApScanConfigCallable(const Model::SaveApScanConfigRequest& request) const;
			SaveApgroupConfigOutcome saveApgroupConfig(const Model::SaveApgroupConfigRequest &request)const;
			void saveApgroupConfigAsync(const Model::SaveApgroupConfigRequest& request, const SaveApgroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApgroupConfigOutcomeCallable saveApgroupConfigCallable(const Model::SaveApgroupConfigRequest& request) const;
			SaveApgroupScanConfigOutcome saveApgroupScanConfig(const Model::SaveApgroupScanConfigRequest &request)const;
			void saveApgroupScanConfigAsync(const Model::SaveApgroupScanConfigRequest& request, const SaveApgroupScanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApgroupScanConfigOutcomeCallable saveApgroupScanConfigCallable(const Model::SaveApgroupScanConfigRequest& request) const;
			SaveApgroupSsidConfigOutcome saveApgroupSsidConfig(const Model::SaveApgroupSsidConfigRequest &request)const;
			void saveApgroupSsidConfigAsync(const Model::SaveApgroupSsidConfigRequest& request, const SaveApgroupSsidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveApgroupSsidConfigOutcomeCallable saveApgroupSsidConfigCallable(const Model::SaveApgroupSsidConfigRequest& request) const;
			SaveGroupApRadioConfigOutcome saveGroupApRadioConfig(const Model::SaveGroupApRadioConfigRequest &request)const;
			void saveGroupApRadioConfigAsync(const Model::SaveGroupApRadioConfigRequest& request, const SaveGroupApRadioConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveGroupApRadioConfigOutcomeCallable saveGroupApRadioConfigCallable(const Model::SaveGroupApRadioConfigRequest& request) const;
			SavePageConfigTemplateOutcome savePageConfigTemplate(const Model::SavePageConfigTemplateRequest &request)const;
			void savePageConfigTemplateAsync(const Model::SavePageConfigTemplateRequest& request, const SavePageConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SavePageConfigTemplateOutcomeCallable savePageConfigTemplateCallable(const Model::SavePageConfigTemplateRequest& request) const;
			SavePortalConfigOutcome savePortalConfig(const Model::SavePortalConfigRequest &request)const;
			void savePortalConfigAsync(const Model::SavePortalConfigRequest& request, const SavePortalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SavePortalConfigOutcomeCallable savePortalConfigCallable(const Model::SavePortalConfigRequest& request) const;
			SavePortalTemplateOutcome savePortalTemplate(const Model::SavePortalTemplateRequest &request)const;
			void savePortalTemplateAsync(const Model::SavePortalTemplateRequest& request, const SavePortalTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SavePortalTemplateOutcomeCallable savePortalTemplateCallable(const Model::SavePortalTemplateRequest& request) const;
			SaveProbeDataSubscriberOutcome saveProbeDataSubscriber(const Model::SaveProbeDataSubscriberRequest &request)const;
			void saveProbeDataSubscriberAsync(const Model::SaveProbeDataSubscriberRequest& request, const SaveProbeDataSubscriberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveProbeDataSubscriberOutcomeCallable saveProbeDataSubscriberCallable(const Model::SaveProbeDataSubscriberRequest& request) const;
			SaveStaStatusOutcome saveStaStatus(const Model::SaveStaStatusRequest &request)const;
			void saveStaStatusAsync(const Model::SaveStaStatusRequest& request, const SaveStaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveStaStatusOutcomeCallable saveStaStatusCallable(const Model::SaveStaStatusRequest& request) const;
			SaveUmengPagePermission4RootOutcome saveUmengPagePermission4Root(const Model::SaveUmengPagePermission4RootRequest &request)const;
			void saveUmengPagePermission4RootAsync(const Model::SaveUmengPagePermission4RootRequest& request, const SaveUmengPagePermission4RootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveUmengPagePermission4RootOutcomeCallable saveUmengPagePermission4RootCallable(const Model::SaveUmengPagePermission4RootRequest& request) const;
			SendCommandByMacOutcome sendCommandByMac(const Model::SendCommandByMacRequest &request)const;
			void sendCommandByMacAsync(const Model::SendCommandByMacRequest& request, const SendCommandByMacAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendCommandByMacOutcomeCallable sendCommandByMacCallable(const Model::SendCommandByMacRequest& request) const;
			SetScanModeOutcome setScanMode(const Model::SetScanModeRequest &request)const;
			void setScanModeAsync(const Model::SetScanModeRequest& request, const SetScanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetScanModeOutcomeCallable setScanModeCallable(const Model::SetScanModeRequest& request) const;
			SetUpgradeImgByModelOutcome setUpgradeImgByModel(const Model::SetUpgradeImgByModelRequest &request)const;
			void setUpgradeImgByModelAsync(const Model::SetUpgradeImgByModelRequest& request, const SetUpgradeImgByModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetUpgradeImgByModelOutcomeCallable setUpgradeImgByModelCallable(const Model::SetUpgradeImgByModelRequest& request) const;
			ShopActionCustomeOutcome shopActionCustome(const Model::ShopActionCustomeRequest &request)const;
			void shopActionCustomeAsync(const Model::ShopActionCustomeRequest& request, const ShopActionCustomeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopActionCustomeOutcomeCallable shopActionCustomeCallable(const Model::ShopActionCustomeRequest& request) const;
			ShopActionReturningOutcome shopActionReturning(const Model::ShopActionReturningRequest &request)const;
			void shopActionReturningAsync(const Model::ShopActionReturningRequest& request, const ShopActionReturningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopActionReturningOutcomeCallable shopActionReturningCallable(const Model::ShopActionReturningRequest& request) const;
			ShopCameraOutcome shopCamera(const Model::ShopCameraRequest &request)const;
			void shopCameraAsync(const Model::ShopCameraRequest& request, const ShopCameraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopCameraOutcomeCallable shopCameraCallable(const Model::ShopCameraRequest& request) const;
			ShopCreateOutcome shopCreate(const Model::ShopCreateRequest &request)const;
			void shopCreateAsync(const Model::ShopCreateRequest& request, const ShopCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopCreateOutcomeCallable shopCreateCallable(const Model::ShopCreateRequest& request) const;
			ShopCreatemarketingOutcome shopCreatemarketing(const Model::ShopCreatemarketingRequest &request)const;
			void shopCreatemarketingAsync(const Model::ShopCreatemarketingRequest& request, const ShopCreatemarketingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopCreatemarketingOutcomeCallable shopCreatemarketingCallable(const Model::ShopCreatemarketingRequest& request) const;
			ShopDataAlarmOutcome shopDataAlarm(const Model::ShopDataAlarmRequest &request)const;
			void shopDataAlarmAsync(const Model::ShopDataAlarmRequest& request, const ShopDataAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopDataAlarmOutcomeCallable shopDataAlarmCallable(const Model::ShopDataAlarmRequest& request) const;
			ShopDeleteOutcome shopDelete(const Model::ShopDeleteRequest &request)const;
			void shopDeleteAsync(const Model::ShopDeleteRequest& request, const ShopDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopDeleteOutcomeCallable shopDeleteCallable(const Model::ShopDeleteRequest& request) const;
			ShopDeletemarketingOutcome shopDeletemarketing(const Model::ShopDeletemarketingRequest &request)const;
			void shopDeletemarketingAsync(const Model::ShopDeletemarketingRequest& request, const ShopDeletemarketingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopDeletemarketingOutcomeCallable shopDeletemarketingCallable(const Model::ShopDeletemarketingRequest& request) const;
			ShopGetfiltermacOutcome shopGetfiltermac(const Model::ShopGetfiltermacRequest &request)const;
			void shopGetfiltermacAsync(const Model::ShopGetfiltermacRequest& request, const ShopGetfiltermacAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopGetfiltermacOutcomeCallable shopGetfiltermacCallable(const Model::ShopGetfiltermacRequest& request) const;
			ShopGetredressOutcome shopGetredress(const Model::ShopGetredressRequest &request)const;
			void shopGetredressAsync(const Model::ShopGetredressRequest& request, const ShopGetredressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopGetredressOutcomeCallable shopGetredressCallable(const Model::ShopGetredressRequest& request) const;
			ShopGroupCreateOutcome shopGroupCreate(const Model::ShopGroupCreateRequest &request)const;
			void shopGroupCreateAsync(const Model::ShopGroupCreateRequest& request, const ShopGroupCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopGroupCreateOutcomeCallable shopGroupCreateCallable(const Model::ShopGroupCreateRequest& request) const;
			ShopGroupDeleteOutcome shopGroupDelete(const Model::ShopGroupDeleteRequest &request)const;
			void shopGroupDeleteAsync(const Model::ShopGroupDeleteRequest& request, const ShopGroupDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopGroupDeleteOutcomeCallable shopGroupDeleteCallable(const Model::ShopGroupDeleteRequest& request) const;
			ShopGroupInfoOutcome shopGroupInfo(const Model::ShopGroupInfoRequest &request)const;
			void shopGroupInfoAsync(const Model::ShopGroupInfoRequest& request, const ShopGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopGroupInfoOutcomeCallable shopGroupInfoCallable(const Model::ShopGroupInfoRequest& request) const;
			ShopGroupShowListOutcome shopGroupShowList(const Model::ShopGroupShowListRequest &request)const;
			void shopGroupShowListAsync(const Model::ShopGroupShowListRequest& request, const ShopGroupShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopGroupShowListOutcomeCallable shopGroupShowListCallable(const Model::ShopGroupShowListRequest& request) const;
			ShopGroupUpdateOutcome shopGroupUpdate(const Model::ShopGroupUpdateRequest &request)const;
			void shopGroupUpdateAsync(const Model::ShopGroupUpdateRequest& request, const ShopGroupUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopGroupUpdateOutcomeCallable shopGroupUpdateCallable(const Model::ShopGroupUpdateRequest& request) const;
			ShopInfoOutcome shopInfo(const Model::ShopInfoRequest &request)const;
			void shopInfoAsync(const Model::ShopInfoRequest& request, const ShopInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopInfoOutcomeCallable shopInfoCallable(const Model::ShopInfoRequest& request) const;
			ShopMarketingListOutcome shopMarketingList(const Model::ShopMarketingListRequest &request)const;
			void shopMarketingListAsync(const Model::ShopMarketingListRequest& request, const ShopMarketingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopMarketingListOutcomeCallable shopMarketingListCallable(const Model::ShopMarketingListRequest& request) const;
			ShopOverviewOutcome shopOverview(const Model::ShopOverviewRequest &request)const;
			void shopOverviewAsync(const Model::ShopOverviewRequest& request, const ShopOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopOverviewOutcomeCallable shopOverviewCallable(const Model::ShopOverviewRequest& request) const;
			ShopSetfiltermacOutcome shopSetfiltermac(const Model::ShopSetfiltermacRequest &request)const;
			void shopSetfiltermacAsync(const Model::ShopSetfiltermacRequest& request, const ShopSetfiltermacAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopSetfiltermacOutcomeCallable shopSetfiltermacCallable(const Model::ShopSetfiltermacRequest& request) const;
			ShopSetredressOutcome shopSetredress(const Model::ShopSetredressRequest &request)const;
			void shopSetredressAsync(const Model::ShopSetredressRequest& request, const ShopSetredressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopSetredressOutcomeCallable shopSetredressCallable(const Model::ShopSetredressRequest& request) const;
			ShopShowListOutcome shopShowList(const Model::ShopShowListRequest &request)const;
			void shopShowListAsync(const Model::ShopShowListRequest& request, const ShopShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopShowListOutcomeCallable shopShowListCallable(const Model::ShopShowListRequest& request) const;
			ShopUpdateOutcome shopUpdate(const Model::ShopUpdateRequest &request)const;
			void shopUpdateAsync(const Model::ShopUpdateRequest& request, const ShopUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShopUpdateOutcomeCallable shopUpdateCallable(const Model::ShopUpdateRequest& request) const;
			UpLoadMapOutcome upLoadMap(const Model::UpLoadMapRequest &request)const;
			void upLoadMapAsync(const Model::UpLoadMapRequest& request, const UpLoadMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpLoadMapOutcomeCallable upLoadMapCallable(const Model::UpLoadMapRequest& request) const;
			UpgradeAPOutcome upgradeAP(const Model::UpgradeAPRequest &request)const;
			void upgradeAPAsync(const Model::UpgradeAPRequest& request, const UpgradeAPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeAPOutcomeCallable upgradeAPCallable(const Model::UpgradeAPRequest& request) const;
			UpgradeAPGroupOutcome upgradeAPGroup(const Model::UpgradeAPGroupRequest &request)const;
			void upgradeAPGroupAsync(const Model::UpgradeAPGroupRequest& request, const UpgradeAPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeAPGroupOutcomeCallable upgradeAPGroupCallable(const Model::UpgradeAPGroupRequest& request) const;
			UserAnalyseOutcome userAnalyse(const Model::UserAnalyseRequest &request)const;
			void userAnalyseAsync(const Model::UserAnalyseRequest& request, const UserAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UserAnalyseOutcomeCallable userAnalyseCallable(const Model::UserAnalyseRequest& request) const;
			UserDataCreateOutcome userDataCreate(const Model::UserDataCreateRequest &request)const;
			void userDataCreateAsync(const Model::UserDataCreateRequest& request, const UserDataCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UserDataCreateOutcomeCallable userDataCreateCallable(const Model::UserDataCreateRequest& request) const;
			UserDataDeleteOutcome userDataDelete(const Model::UserDataDeleteRequest &request)const;
			void userDataDeleteAsync(const Model::UserDataDeleteRequest& request, const UserDataDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UserDataDeleteOutcomeCallable userDataDeleteCallable(const Model::UserDataDeleteRequest& request) const;
			UserDataShowListOutcome userDataShowList(const Model::UserDataShowListRequest &request)const;
			void userDataShowListAsync(const Model::UserDataShowListRequest& request, const UserDataShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UserDataShowListOutcomeCallable userDataShowListCallable(const Model::UserDataShowListRequest& request) const;
			UserDataUpdateOutcome userDataUpdate(const Model::UserDataUpdateRequest &request)const;
			void userDataUpdateAsync(const Model::UserDataUpdateRequest& request, const UserDataUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UserDataUpdateOutcomeCallable userDataUpdateCallable(const Model::UserDataUpdateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDWF_CLOUDWFCLIENT_H_
