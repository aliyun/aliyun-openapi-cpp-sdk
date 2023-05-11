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

#ifndef ALIBABACLOUD_ALIDNS_ALIDNSCLIENT_H_
#define ALIBABACLOUD_ALIDNS_ALIDNSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AlidnsExport.h"
#include "model/AddCustomLineRequest.h"
#include "model/AddCustomLineResult.h"
#include "model/AddDnsCacheDomainRequest.h"
#include "model/AddDnsCacheDomainResult.h"
#include "model/AddDnsGtmAccessStrategyRequest.h"
#include "model/AddDnsGtmAccessStrategyResult.h"
#include "model/AddDnsGtmAddressPoolRequest.h"
#include "model/AddDnsGtmAddressPoolResult.h"
#include "model/AddDnsGtmMonitorRequest.h"
#include "model/AddDnsGtmMonitorResult.h"
#include "model/AddDomainRequest.h"
#include "model/AddDomainResult.h"
#include "model/AddDomainBackupRequest.h"
#include "model/AddDomainBackupResult.h"
#include "model/AddDomainGroupRequest.h"
#include "model/AddDomainGroupResult.h"
#include "model/AddDomainRecordRequest.h"
#include "model/AddDomainRecordResult.h"
#include "model/AddGtmAccessStrategyRequest.h"
#include "model/AddGtmAccessStrategyResult.h"
#include "model/AddGtmAddressPoolRequest.h"
#include "model/AddGtmAddressPoolResult.h"
#include "model/AddGtmMonitorRequest.h"
#include "model/AddGtmMonitorResult.h"
#include "model/AddGtmRecoveryPlanRequest.h"
#include "model/AddGtmRecoveryPlanResult.h"
#include "model/BindInstanceDomainsRequest.h"
#include "model/BindInstanceDomainsResult.h"
#include "model/ChangeDomainGroupRequest.h"
#include "model/ChangeDomainGroupResult.h"
#include "model/ChangeDomainOfDnsProductRequest.h"
#include "model/ChangeDomainOfDnsProductResult.h"
#include "model/CopyGtmConfigRequest.h"
#include "model/CopyGtmConfigResult.h"
#include "model/CreatePdnsAppKeyRequest.h"
#include "model/CreatePdnsAppKeyResult.h"
#include "model/CreatePdnsUdpIpSegmentRequest.h"
#include "model/CreatePdnsUdpIpSegmentResult.h"
#include "model/DeleteCustomLinesRequest.h"
#include "model/DeleteCustomLinesResult.h"
#include "model/DeleteDnsCacheDomainRequest.h"
#include "model/DeleteDnsCacheDomainResult.h"
#include "model/DeleteDnsGtmAccessStrategyRequest.h"
#include "model/DeleteDnsGtmAccessStrategyResult.h"
#include "model/DeleteDnsGtmAddressPoolRequest.h"
#include "model/DeleteDnsGtmAddressPoolResult.h"
#include "model/DeleteDomainRequest.h"
#include "model/DeleteDomainResult.h"
#include "model/DeleteDomainGroupRequest.h"
#include "model/DeleteDomainGroupResult.h"
#include "model/DeleteDomainRecordRequest.h"
#include "model/DeleteDomainRecordResult.h"
#include "model/DeleteGtmAccessStrategyRequest.h"
#include "model/DeleteGtmAccessStrategyResult.h"
#include "model/DeleteGtmAddressPoolRequest.h"
#include "model/DeleteGtmAddressPoolResult.h"
#include "model/DeleteGtmRecoveryPlanRequest.h"
#include "model/DeleteGtmRecoveryPlanResult.h"
#include "model/DeleteSubDomainRecordsRequest.h"
#include "model/DeleteSubDomainRecordsResult.h"
#include "model/DescribeBatchResultCountRequest.h"
#include "model/DescribeBatchResultCountResult.h"
#include "model/DescribeBatchResultDetailRequest.h"
#include "model/DescribeBatchResultDetailResult.h"
#include "model/DescribeCustomLineRequest.h"
#include "model/DescribeCustomLineResult.h"
#include "model/DescribeCustomLinesRequest.h"
#include "model/DescribeCustomLinesResult.h"
#include "model/DescribeDNSSLBSubDomainsRequest.h"
#include "model/DescribeDNSSLBSubDomainsResult.h"
#include "model/DescribeDnsCacheDomainsRequest.h"
#include "model/DescribeDnsCacheDomainsResult.h"
#include "model/DescribeDnsGtmAccessStrategiesRequest.h"
#include "model/DescribeDnsGtmAccessStrategiesResult.h"
#include "model/DescribeDnsGtmAccessStrategyRequest.h"
#include "model/DescribeDnsGtmAccessStrategyResult.h"
#include "model/DescribeDnsGtmAccessStrategyAvailableConfigRequest.h"
#include "model/DescribeDnsGtmAccessStrategyAvailableConfigResult.h"
#include "model/DescribeDnsGtmAddrAttributeInfoRequest.h"
#include "model/DescribeDnsGtmAddrAttributeInfoResult.h"
#include "model/DescribeDnsGtmAddressPoolAvailableConfigRequest.h"
#include "model/DescribeDnsGtmAddressPoolAvailableConfigResult.h"
#include "model/DescribeDnsGtmAvailableAlertGroupRequest.h"
#include "model/DescribeDnsGtmAvailableAlertGroupResult.h"
#include "model/DescribeDnsGtmInstanceRequest.h"
#include "model/DescribeDnsGtmInstanceResult.h"
#include "model/DescribeDnsGtmInstanceAddressPoolRequest.h"
#include "model/DescribeDnsGtmInstanceAddressPoolResult.h"
#include "model/DescribeDnsGtmInstanceAddressPoolsRequest.h"
#include "model/DescribeDnsGtmInstanceAddressPoolsResult.h"
#include "model/DescribeDnsGtmInstanceStatusRequest.h"
#include "model/DescribeDnsGtmInstanceStatusResult.h"
#include "model/DescribeDnsGtmInstanceSystemCnameRequest.h"
#include "model/DescribeDnsGtmInstanceSystemCnameResult.h"
#include "model/DescribeDnsGtmInstancesRequest.h"
#include "model/DescribeDnsGtmInstancesResult.h"
#include "model/DescribeDnsGtmLogsRequest.h"
#include "model/DescribeDnsGtmLogsResult.h"
#include "model/DescribeDnsGtmMonitorAvailableConfigRequest.h"
#include "model/DescribeDnsGtmMonitorAvailableConfigResult.h"
#include "model/DescribeDnsGtmMonitorConfigRequest.h"
#include "model/DescribeDnsGtmMonitorConfigResult.h"
#include "model/DescribeDnsProductInstanceRequest.h"
#include "model/DescribeDnsProductInstanceResult.h"
#include "model/DescribeDnsProductInstancesRequest.h"
#include "model/DescribeDnsProductInstancesResult.h"
#include "model/DescribeDohAccountStatisticsRequest.h"
#include "model/DescribeDohAccountStatisticsResult.h"
#include "model/DescribeDohDomainStatisticsRequest.h"
#include "model/DescribeDohDomainStatisticsResult.h"
#include "model/DescribeDohDomainStatisticsSummaryRequest.h"
#include "model/DescribeDohDomainStatisticsSummaryResult.h"
#include "model/DescribeDohSubDomainStatisticsRequest.h"
#include "model/DescribeDohSubDomainStatisticsResult.h"
#include "model/DescribeDohSubDomainStatisticsSummaryRequest.h"
#include "model/DescribeDohSubDomainStatisticsSummaryResult.h"
#include "model/DescribeDohUserInfoRequest.h"
#include "model/DescribeDohUserInfoResult.h"
#include "model/DescribeDomainDnssecInfoRequest.h"
#include "model/DescribeDomainDnssecInfoResult.h"
#include "model/DescribeDomainGroupsRequest.h"
#include "model/DescribeDomainGroupsResult.h"
#include "model/DescribeDomainInfoRequest.h"
#include "model/DescribeDomainInfoResult.h"
#include "model/DescribeDomainLogsRequest.h"
#include "model/DescribeDomainLogsResult.h"
#include "model/DescribeDomainNsRequest.h"
#include "model/DescribeDomainNsResult.h"
#include "model/DescribeDomainRecordInfoRequest.h"
#include "model/DescribeDomainRecordInfoResult.h"
#include "model/DescribeDomainRecordsRequest.h"
#include "model/DescribeDomainRecordsResult.h"
#include "model/DescribeDomainResolveStatisticsSummaryRequest.h"
#include "model/DescribeDomainResolveStatisticsSummaryResult.h"
#include "model/DescribeDomainStatisticsRequest.h"
#include "model/DescribeDomainStatisticsResult.h"
#include "model/DescribeDomainStatisticsSummaryRequest.h"
#include "model/DescribeDomainStatisticsSummaryResult.h"
#include "model/DescribeDomainsRequest.h"
#include "model/DescribeDomainsResult.h"
#include "model/DescribeGtmAccessStrategiesRequest.h"
#include "model/DescribeGtmAccessStrategiesResult.h"
#include "model/DescribeGtmAccessStrategyRequest.h"
#include "model/DescribeGtmAccessStrategyResult.h"
#include "model/DescribeGtmAccessStrategyAvailableConfigRequest.h"
#include "model/DescribeGtmAccessStrategyAvailableConfigResult.h"
#include "model/DescribeGtmAvailableAlertGroupRequest.h"
#include "model/DescribeGtmAvailableAlertGroupResult.h"
#include "model/DescribeGtmInstanceRequest.h"
#include "model/DescribeGtmInstanceResult.h"
#include "model/DescribeGtmInstanceAddressPoolRequest.h"
#include "model/DescribeGtmInstanceAddressPoolResult.h"
#include "model/DescribeGtmInstanceAddressPoolsRequest.h"
#include "model/DescribeGtmInstanceAddressPoolsResult.h"
#include "model/DescribeGtmInstanceStatusRequest.h"
#include "model/DescribeGtmInstanceStatusResult.h"
#include "model/DescribeGtmInstanceSystemCnameRequest.h"
#include "model/DescribeGtmInstanceSystemCnameResult.h"
#include "model/DescribeGtmInstancesRequest.h"
#include "model/DescribeGtmInstancesResult.h"
#include "model/DescribeGtmLogsRequest.h"
#include "model/DescribeGtmLogsResult.h"
#include "model/DescribeGtmMonitorAvailableConfigRequest.h"
#include "model/DescribeGtmMonitorAvailableConfigResult.h"
#include "model/DescribeGtmMonitorConfigRequest.h"
#include "model/DescribeGtmMonitorConfigResult.h"
#include "model/DescribeGtmRecoveryPlanRequest.h"
#include "model/DescribeGtmRecoveryPlanResult.h"
#include "model/DescribeGtmRecoveryPlanAvailableConfigRequest.h"
#include "model/DescribeGtmRecoveryPlanAvailableConfigResult.h"
#include "model/DescribeGtmRecoveryPlansRequest.h"
#include "model/DescribeGtmRecoveryPlansResult.h"
#include "model/DescribeInstanceDomainsRequest.h"
#include "model/DescribeInstanceDomainsResult.h"
#include "model/DescribeIspFlushCacheInstancesRequest.h"
#include "model/DescribeIspFlushCacheInstancesResult.h"
#include "model/DescribeIspFlushCacheRemainQuotaRequest.h"
#include "model/DescribeIspFlushCacheRemainQuotaResult.h"
#include "model/DescribeIspFlushCacheTaskRequest.h"
#include "model/DescribeIspFlushCacheTaskResult.h"
#include "model/DescribeIspFlushCacheTasksRequest.h"
#include "model/DescribeIspFlushCacheTasksResult.h"
#include "model/DescribePdnsAccountSummaryRequest.h"
#include "model/DescribePdnsAccountSummaryResult.h"
#include "model/DescribePdnsAppKeyRequest.h"
#include "model/DescribePdnsAppKeyResult.h"
#include "model/DescribePdnsAppKeysRequest.h"
#include "model/DescribePdnsAppKeysResult.h"
#include "model/DescribePdnsOperateLogsRequest.h"
#include "model/DescribePdnsOperateLogsResult.h"
#include "model/DescribePdnsRequestStatisticRequest.h"
#include "model/DescribePdnsRequestStatisticResult.h"
#include "model/DescribePdnsRequestStatisticsRequest.h"
#include "model/DescribePdnsRequestStatisticsResult.h"
#include "model/DescribePdnsThreatLogsRequest.h"
#include "model/DescribePdnsThreatLogsResult.h"
#include "model/DescribePdnsThreatStatisticRequest.h"
#include "model/DescribePdnsThreatStatisticResult.h"
#include "model/DescribePdnsThreatStatisticsRequest.h"
#include "model/DescribePdnsThreatStatisticsResult.h"
#include "model/DescribePdnsUdpIpSegmentsRequest.h"
#include "model/DescribePdnsUdpIpSegmentsResult.h"
#include "model/DescribePdnsUserInfoRequest.h"
#include "model/DescribePdnsUserInfoResult.h"
#include "model/DescribeRecordLogsRequest.h"
#include "model/DescribeRecordLogsResult.h"
#include "model/DescribeRecordResolveStatisticsSummaryRequest.h"
#include "model/DescribeRecordResolveStatisticsSummaryResult.h"
#include "model/DescribeRecordStatisticsRequest.h"
#include "model/DescribeRecordStatisticsResult.h"
#include "model/DescribeRecordStatisticsSummaryRequest.h"
#include "model/DescribeRecordStatisticsSummaryResult.h"
#include "model/DescribeSubDomainRecordsRequest.h"
#include "model/DescribeSubDomainRecordsResult.h"
#include "model/DescribeSupportLinesRequest.h"
#include "model/DescribeSupportLinesResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeTransferDomainsRequest.h"
#include "model/DescribeTransferDomainsResult.h"
#include "model/ExecuteGtmRecoveryPlanRequest.h"
#include "model/ExecuteGtmRecoveryPlanResult.h"
#include "model/GetMainDomainNameRequest.h"
#include "model/GetMainDomainNameResult.h"
#include "model/GetTxtRecordForVerifyRequest.h"
#include "model/GetTxtRecordForVerifyResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyHichinaDomainDNSRequest.h"
#include "model/ModifyHichinaDomainDNSResult.h"
#include "model/MoveDomainResourceGroupRequest.h"
#include "model/MoveDomainResourceGroupResult.h"
#include "model/MoveGtmResourceGroupRequest.h"
#include "model/MoveGtmResourceGroupResult.h"
#include "model/OperateBatchDomainRequest.h"
#include "model/OperateBatchDomainResult.h"
#include "model/PausePdnsServiceRequest.h"
#include "model/PausePdnsServiceResult.h"
#include "model/PreviewGtmRecoveryPlanRequest.h"
#include "model/PreviewGtmRecoveryPlanResult.h"
#include "model/RemovePdnsAppKeyRequest.h"
#include "model/RemovePdnsAppKeyResult.h"
#include "model/RemovePdnsUdpIpSegmentRequest.h"
#include "model/RemovePdnsUdpIpSegmentResult.h"
#include "model/ResumePdnsServiceRequest.h"
#include "model/ResumePdnsServiceResult.h"
#include "model/RetrieveDomainRequest.h"
#include "model/RetrieveDomainResult.h"
#include "model/RollbackGtmRecoveryPlanRequest.h"
#include "model/RollbackGtmRecoveryPlanResult.h"
#include "model/SetDNSSLBStatusRequest.h"
#include "model/SetDNSSLBStatusResult.h"
#include "model/SetDnsGtmAccessModeRequest.h"
#include "model/SetDnsGtmAccessModeResult.h"
#include "model/SetDnsGtmMonitorStatusRequest.h"
#include "model/SetDnsGtmMonitorStatusResult.h"
#include "model/SetDomainDnssecStatusRequest.h"
#include "model/SetDomainDnssecStatusResult.h"
#include "model/SetDomainRecordStatusRequest.h"
#include "model/SetDomainRecordStatusResult.h"
#include "model/SetGtmAccessModeRequest.h"
#include "model/SetGtmAccessModeResult.h"
#include "model/SetGtmMonitorStatusRequest.h"
#include "model/SetGtmMonitorStatusResult.h"
#include "model/SubmitIspFlushCacheTaskRequest.h"
#include "model/SubmitIspFlushCacheTaskResult.h"
#include "model/SwitchDnsGtmInstanceStrategyModeRequest.h"
#include "model/SwitchDnsGtmInstanceStrategyModeResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TransferDomainRequest.h"
#include "model/TransferDomainResult.h"
#include "model/UnbindInstanceDomainsRequest.h"
#include "model/UnbindInstanceDomainsResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAppKeyStateRequest.h"
#include "model/UpdateAppKeyStateResult.h"
#include "model/UpdateCustomLineRequest.h"
#include "model/UpdateCustomLineResult.h"
#include "model/UpdateDNSSLBWeightRequest.h"
#include "model/UpdateDNSSLBWeightResult.h"
#include "model/UpdateDnsCacheDomainRequest.h"
#include "model/UpdateDnsCacheDomainResult.h"
#include "model/UpdateDnsCacheDomainRemarkRequest.h"
#include "model/UpdateDnsCacheDomainRemarkResult.h"
#include "model/UpdateDnsGtmAccessStrategyRequest.h"
#include "model/UpdateDnsGtmAccessStrategyResult.h"
#include "model/UpdateDnsGtmAddressPoolRequest.h"
#include "model/UpdateDnsGtmAddressPoolResult.h"
#include "model/UpdateDnsGtmInstanceGlobalConfigRequest.h"
#include "model/UpdateDnsGtmInstanceGlobalConfigResult.h"
#include "model/UpdateDnsGtmMonitorRequest.h"
#include "model/UpdateDnsGtmMonitorResult.h"
#include "model/UpdateDomainGroupRequest.h"
#include "model/UpdateDomainGroupResult.h"
#include "model/UpdateDomainRecordRequest.h"
#include "model/UpdateDomainRecordResult.h"
#include "model/UpdateDomainRecordRemarkRequest.h"
#include "model/UpdateDomainRecordRemarkResult.h"
#include "model/UpdateDomainRemarkRequest.h"
#include "model/UpdateDomainRemarkResult.h"
#include "model/UpdateGtmAccessStrategyRequest.h"
#include "model/UpdateGtmAccessStrategyResult.h"
#include "model/UpdateGtmAddressPoolRequest.h"
#include "model/UpdateGtmAddressPoolResult.h"
#include "model/UpdateGtmInstanceGlobalConfigRequest.h"
#include "model/UpdateGtmInstanceGlobalConfigResult.h"
#include "model/UpdateGtmMonitorRequest.h"
#include "model/UpdateGtmMonitorResult.h"
#include "model/UpdateGtmRecoveryPlanRequest.h"
#include "model/UpdateGtmRecoveryPlanResult.h"
#include "model/UpdateIspFlushCacheInstanceConfigRequest.h"
#include "model/UpdateIspFlushCacheInstanceConfigResult.h"
#include "model/ValidateDnsGtmCnameRrCanUseRequest.h"
#include "model/ValidateDnsGtmCnameRrCanUseResult.h"
#include "model/ValidatePdnsUdpIpSegmentRequest.h"
#include "model/ValidatePdnsUdpIpSegmentResult.h"


namespace AlibabaCloud
{
	namespace Alidns
	{
		class ALIBABACLOUD_ALIDNS_EXPORT AlidnsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddCustomLineResult> AddCustomLineOutcome;
			typedef std::future<AddCustomLineOutcome> AddCustomLineOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddCustomLineRequest&, const AddCustomLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomLineAsyncHandler;
			typedef Outcome<Error, Model::AddDnsCacheDomainResult> AddDnsCacheDomainOutcome;
			typedef std::future<AddDnsCacheDomainOutcome> AddDnsCacheDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDnsCacheDomainRequest&, const AddDnsCacheDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDnsCacheDomainAsyncHandler;
			typedef Outcome<Error, Model::AddDnsGtmAccessStrategyResult> AddDnsGtmAccessStrategyOutcome;
			typedef std::future<AddDnsGtmAccessStrategyOutcome> AddDnsGtmAccessStrategyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDnsGtmAccessStrategyRequest&, const AddDnsGtmAccessStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDnsGtmAccessStrategyAsyncHandler;
			typedef Outcome<Error, Model::AddDnsGtmAddressPoolResult> AddDnsGtmAddressPoolOutcome;
			typedef std::future<AddDnsGtmAddressPoolOutcome> AddDnsGtmAddressPoolOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDnsGtmAddressPoolRequest&, const AddDnsGtmAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDnsGtmAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::AddDnsGtmMonitorResult> AddDnsGtmMonitorOutcome;
			typedef std::future<AddDnsGtmMonitorOutcome> AddDnsGtmMonitorOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDnsGtmMonitorRequest&, const AddDnsGtmMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDnsGtmMonitorAsyncHandler;
			typedef Outcome<Error, Model::AddDomainResult> AddDomainOutcome;
			typedef std::future<AddDomainOutcome> AddDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDomainRequest&, const AddDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDomainAsyncHandler;
			typedef Outcome<Error, Model::AddDomainBackupResult> AddDomainBackupOutcome;
			typedef std::future<AddDomainBackupOutcome> AddDomainBackupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDomainBackupRequest&, const AddDomainBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDomainBackupAsyncHandler;
			typedef Outcome<Error, Model::AddDomainGroupResult> AddDomainGroupOutcome;
			typedef std::future<AddDomainGroupOutcome> AddDomainGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDomainGroupRequest&, const AddDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::AddDomainRecordResult> AddDomainRecordOutcome;
			typedef std::future<AddDomainRecordOutcome> AddDomainRecordOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDomainRecordRequest&, const AddDomainRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDomainRecordAsyncHandler;
			typedef Outcome<Error, Model::AddGtmAccessStrategyResult> AddGtmAccessStrategyOutcome;
			typedef std::future<AddGtmAccessStrategyOutcome> AddGtmAccessStrategyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddGtmAccessStrategyRequest&, const AddGtmAccessStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGtmAccessStrategyAsyncHandler;
			typedef Outcome<Error, Model::AddGtmAddressPoolResult> AddGtmAddressPoolOutcome;
			typedef std::future<AddGtmAddressPoolOutcome> AddGtmAddressPoolOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddGtmAddressPoolRequest&, const AddGtmAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGtmAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::AddGtmMonitorResult> AddGtmMonitorOutcome;
			typedef std::future<AddGtmMonitorOutcome> AddGtmMonitorOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddGtmMonitorRequest&, const AddGtmMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGtmMonitorAsyncHandler;
			typedef Outcome<Error, Model::AddGtmRecoveryPlanResult> AddGtmRecoveryPlanOutcome;
			typedef std::future<AddGtmRecoveryPlanOutcome> AddGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddGtmRecoveryPlanRequest&, const AddGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::BindInstanceDomainsResult> BindInstanceDomainsOutcome;
			typedef std::future<BindInstanceDomainsOutcome> BindInstanceDomainsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::BindInstanceDomainsRequest&, const BindInstanceDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindInstanceDomainsAsyncHandler;
			typedef Outcome<Error, Model::ChangeDomainGroupResult> ChangeDomainGroupOutcome;
			typedef std::future<ChangeDomainGroupOutcome> ChangeDomainGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ChangeDomainGroupRequest&, const ChangeDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::ChangeDomainOfDnsProductResult> ChangeDomainOfDnsProductOutcome;
			typedef std::future<ChangeDomainOfDnsProductOutcome> ChangeDomainOfDnsProductOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ChangeDomainOfDnsProductRequest&, const ChangeDomainOfDnsProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeDomainOfDnsProductAsyncHandler;
			typedef Outcome<Error, Model::CopyGtmConfigResult> CopyGtmConfigOutcome;
			typedef std::future<CopyGtmConfigOutcome> CopyGtmConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::CopyGtmConfigRequest&, const CopyGtmConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyGtmConfigAsyncHandler;
			typedef Outcome<Error, Model::CreatePdnsAppKeyResult> CreatePdnsAppKeyOutcome;
			typedef std::future<CreatePdnsAppKeyOutcome> CreatePdnsAppKeyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::CreatePdnsAppKeyRequest&, const CreatePdnsAppKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePdnsAppKeyAsyncHandler;
			typedef Outcome<Error, Model::CreatePdnsUdpIpSegmentResult> CreatePdnsUdpIpSegmentOutcome;
			typedef std::future<CreatePdnsUdpIpSegmentOutcome> CreatePdnsUdpIpSegmentOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::CreatePdnsUdpIpSegmentRequest&, const CreatePdnsUdpIpSegmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePdnsUdpIpSegmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomLinesResult> DeleteCustomLinesOutcome;
			typedef std::future<DeleteCustomLinesOutcome> DeleteCustomLinesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteCustomLinesRequest&, const DeleteCustomLinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomLinesAsyncHandler;
			typedef Outcome<Error, Model::DeleteDnsCacheDomainResult> DeleteDnsCacheDomainOutcome;
			typedef std::future<DeleteDnsCacheDomainOutcome> DeleteDnsCacheDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteDnsCacheDomainRequest&, const DeleteDnsCacheDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnsCacheDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteDnsGtmAccessStrategyResult> DeleteDnsGtmAccessStrategyOutcome;
			typedef std::future<DeleteDnsGtmAccessStrategyOutcome> DeleteDnsGtmAccessStrategyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteDnsGtmAccessStrategyRequest&, const DeleteDnsGtmAccessStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnsGtmAccessStrategyAsyncHandler;
			typedef Outcome<Error, Model::DeleteDnsGtmAddressPoolResult> DeleteDnsGtmAddressPoolOutcome;
			typedef std::future<DeleteDnsGtmAddressPoolOutcome> DeleteDnsGtmAddressPoolOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteDnsGtmAddressPoolRequest&, const DeleteDnsGtmAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnsGtmAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainResult> DeleteDomainOutcome;
			typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteDomainRequest&, const DeleteDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainGroupResult> DeleteDomainGroupOutcome;
			typedef std::future<DeleteDomainGroupOutcome> DeleteDomainGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteDomainGroupRequest&, const DeleteDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainRecordResult> DeleteDomainRecordOutcome;
			typedef std::future<DeleteDomainRecordOutcome> DeleteDomainRecordOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteDomainRecordRequest&, const DeleteDomainRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainRecordAsyncHandler;
			typedef Outcome<Error, Model::DeleteGtmAccessStrategyResult> DeleteGtmAccessStrategyOutcome;
			typedef std::future<DeleteGtmAccessStrategyOutcome> DeleteGtmAccessStrategyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteGtmAccessStrategyRequest&, const DeleteGtmAccessStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGtmAccessStrategyAsyncHandler;
			typedef Outcome<Error, Model::DeleteGtmAddressPoolResult> DeleteGtmAddressPoolOutcome;
			typedef std::future<DeleteGtmAddressPoolOutcome> DeleteGtmAddressPoolOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteGtmAddressPoolRequest&, const DeleteGtmAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGtmAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::DeleteGtmRecoveryPlanResult> DeleteGtmRecoveryPlanOutcome;
			typedef std::future<DeleteGtmRecoveryPlanOutcome> DeleteGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteGtmRecoveryPlanRequest&, const DeleteGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::DeleteSubDomainRecordsResult> DeleteSubDomainRecordsOutcome;
			typedef std::future<DeleteSubDomainRecordsOutcome> DeleteSubDomainRecordsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DeleteSubDomainRecordsRequest&, const DeleteSubDomainRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubDomainRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBatchResultCountResult> DescribeBatchResultCountOutcome;
			typedef std::future<DescribeBatchResultCountOutcome> DescribeBatchResultCountOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeBatchResultCountRequest&, const DescribeBatchResultCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchResultCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeBatchResultDetailResult> DescribeBatchResultDetailOutcome;
			typedef std::future<DescribeBatchResultDetailOutcome> DescribeBatchResultDetailOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeBatchResultDetailRequest&, const DescribeBatchResultDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchResultDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomLineResult> DescribeCustomLineOutcome;
			typedef std::future<DescribeCustomLineOutcome> DescribeCustomLineOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeCustomLineRequest&, const DescribeCustomLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomLineAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomLinesResult> DescribeCustomLinesOutcome;
			typedef std::future<DescribeCustomLinesOutcome> DescribeCustomLinesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeCustomLinesRequest&, const DescribeCustomLinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomLinesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDNSSLBSubDomainsResult> DescribeDNSSLBSubDomainsOutcome;
			typedef std::future<DescribeDNSSLBSubDomainsOutcome> DescribeDNSSLBSubDomainsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDNSSLBSubDomainsRequest&, const DescribeDNSSLBSubDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDNSSLBSubDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsCacheDomainsResult> DescribeDnsCacheDomainsOutcome;
			typedef std::future<DescribeDnsCacheDomainsOutcome> DescribeDnsCacheDomainsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsCacheDomainsRequest&, const DescribeDnsCacheDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsCacheDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmAccessStrategiesResult> DescribeDnsGtmAccessStrategiesOutcome;
			typedef std::future<DescribeDnsGtmAccessStrategiesOutcome> DescribeDnsGtmAccessStrategiesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmAccessStrategiesRequest&, const DescribeDnsGtmAccessStrategiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmAccessStrategiesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmAccessStrategyResult> DescribeDnsGtmAccessStrategyOutcome;
			typedef std::future<DescribeDnsGtmAccessStrategyOutcome> DescribeDnsGtmAccessStrategyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmAccessStrategyRequest&, const DescribeDnsGtmAccessStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmAccessStrategyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmAccessStrategyAvailableConfigResult> DescribeDnsGtmAccessStrategyAvailableConfigOutcome;
			typedef std::future<DescribeDnsGtmAccessStrategyAvailableConfigOutcome> DescribeDnsGtmAccessStrategyAvailableConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmAccessStrategyAvailableConfigRequest&, const DescribeDnsGtmAccessStrategyAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmAccessStrategyAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmAddrAttributeInfoResult> DescribeDnsGtmAddrAttributeInfoOutcome;
			typedef std::future<DescribeDnsGtmAddrAttributeInfoOutcome> DescribeDnsGtmAddrAttributeInfoOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmAddrAttributeInfoRequest&, const DescribeDnsGtmAddrAttributeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmAddrAttributeInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmAddressPoolAvailableConfigResult> DescribeDnsGtmAddressPoolAvailableConfigOutcome;
			typedef std::future<DescribeDnsGtmAddressPoolAvailableConfigOutcome> DescribeDnsGtmAddressPoolAvailableConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmAddressPoolAvailableConfigRequest&, const DescribeDnsGtmAddressPoolAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmAddressPoolAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmAvailableAlertGroupResult> DescribeDnsGtmAvailableAlertGroupOutcome;
			typedef std::future<DescribeDnsGtmAvailableAlertGroupOutcome> DescribeDnsGtmAvailableAlertGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmAvailableAlertGroupRequest&, const DescribeDnsGtmAvailableAlertGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmAvailableAlertGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmInstanceResult> DescribeDnsGtmInstanceOutcome;
			typedef std::future<DescribeDnsGtmInstanceOutcome> DescribeDnsGtmInstanceOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmInstanceRequest&, const DescribeDnsGtmInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmInstanceAddressPoolResult> DescribeDnsGtmInstanceAddressPoolOutcome;
			typedef std::future<DescribeDnsGtmInstanceAddressPoolOutcome> DescribeDnsGtmInstanceAddressPoolOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmInstanceAddressPoolRequest&, const DescribeDnsGtmInstanceAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmInstanceAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmInstanceAddressPoolsResult> DescribeDnsGtmInstanceAddressPoolsOutcome;
			typedef std::future<DescribeDnsGtmInstanceAddressPoolsOutcome> DescribeDnsGtmInstanceAddressPoolsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmInstanceAddressPoolsRequest&, const DescribeDnsGtmInstanceAddressPoolsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmInstanceAddressPoolsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmInstanceStatusResult> DescribeDnsGtmInstanceStatusOutcome;
			typedef std::future<DescribeDnsGtmInstanceStatusOutcome> DescribeDnsGtmInstanceStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmInstanceStatusRequest&, const DescribeDnsGtmInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmInstanceSystemCnameResult> DescribeDnsGtmInstanceSystemCnameOutcome;
			typedef std::future<DescribeDnsGtmInstanceSystemCnameOutcome> DescribeDnsGtmInstanceSystemCnameOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmInstanceSystemCnameRequest&, const DescribeDnsGtmInstanceSystemCnameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmInstanceSystemCnameAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmInstancesResult> DescribeDnsGtmInstancesOutcome;
			typedef std::future<DescribeDnsGtmInstancesOutcome> DescribeDnsGtmInstancesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmInstancesRequest&, const DescribeDnsGtmInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmLogsResult> DescribeDnsGtmLogsOutcome;
			typedef std::future<DescribeDnsGtmLogsOutcome> DescribeDnsGtmLogsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmLogsRequest&, const DescribeDnsGtmLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmMonitorAvailableConfigResult> DescribeDnsGtmMonitorAvailableConfigOutcome;
			typedef std::future<DescribeDnsGtmMonitorAvailableConfigOutcome> DescribeDnsGtmMonitorAvailableConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmMonitorAvailableConfigRequest&, const DescribeDnsGtmMonitorAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmMonitorAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsGtmMonitorConfigResult> DescribeDnsGtmMonitorConfigOutcome;
			typedef std::future<DescribeDnsGtmMonitorConfigOutcome> DescribeDnsGtmMonitorConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsGtmMonitorConfigRequest&, const DescribeDnsGtmMonitorConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsGtmMonitorConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsProductInstanceResult> DescribeDnsProductInstanceOutcome;
			typedef std::future<DescribeDnsProductInstanceOutcome> DescribeDnsProductInstanceOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsProductInstanceRequest&, const DescribeDnsProductInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsProductInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsProductInstancesResult> DescribeDnsProductInstancesOutcome;
			typedef std::future<DescribeDnsProductInstancesOutcome> DescribeDnsProductInstancesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsProductInstancesRequest&, const DescribeDnsProductInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsProductInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDohAccountStatisticsResult> DescribeDohAccountStatisticsOutcome;
			typedef std::future<DescribeDohAccountStatisticsOutcome> DescribeDohAccountStatisticsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDohAccountStatisticsRequest&, const DescribeDohAccountStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDohAccountStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDohDomainStatisticsResult> DescribeDohDomainStatisticsOutcome;
			typedef std::future<DescribeDohDomainStatisticsOutcome> DescribeDohDomainStatisticsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDohDomainStatisticsRequest&, const DescribeDohDomainStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDohDomainStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDohDomainStatisticsSummaryResult> DescribeDohDomainStatisticsSummaryOutcome;
			typedef std::future<DescribeDohDomainStatisticsSummaryOutcome> DescribeDohDomainStatisticsSummaryOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDohDomainStatisticsSummaryRequest&, const DescribeDohDomainStatisticsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDohDomainStatisticsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDohSubDomainStatisticsResult> DescribeDohSubDomainStatisticsOutcome;
			typedef std::future<DescribeDohSubDomainStatisticsOutcome> DescribeDohSubDomainStatisticsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDohSubDomainStatisticsRequest&, const DescribeDohSubDomainStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDohSubDomainStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDohSubDomainStatisticsSummaryResult> DescribeDohSubDomainStatisticsSummaryOutcome;
			typedef std::future<DescribeDohSubDomainStatisticsSummaryOutcome> DescribeDohSubDomainStatisticsSummaryOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDohSubDomainStatisticsSummaryRequest&, const DescribeDohSubDomainStatisticsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDohSubDomainStatisticsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDohUserInfoResult> DescribeDohUserInfoOutcome;
			typedef std::future<DescribeDohUserInfoOutcome> DescribeDohUserInfoOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDohUserInfoRequest&, const DescribeDohUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDohUserInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainDnssecInfoResult> DescribeDomainDnssecInfoOutcome;
			typedef std::future<DescribeDomainDnssecInfoOutcome> DescribeDomainDnssecInfoOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainDnssecInfoRequest&, const DescribeDomainDnssecInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDnssecInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainGroupsResult> DescribeDomainGroupsOutcome;
			typedef std::future<DescribeDomainGroupsOutcome> DescribeDomainGroupsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainGroupsRequest&, const DescribeDomainGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainInfoResult> DescribeDomainInfoOutcome;
			typedef std::future<DescribeDomainInfoOutcome> DescribeDomainInfoOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainInfoRequest&, const DescribeDomainInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainLogsResult> DescribeDomainLogsOutcome;
			typedef std::future<DescribeDomainLogsOutcome> DescribeDomainLogsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainLogsRequest&, const DescribeDomainLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainNsResult> DescribeDomainNsOutcome;
			typedef std::future<DescribeDomainNsOutcome> DescribeDomainNsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainNsRequest&, const DescribeDomainNsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainNsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRecordInfoResult> DescribeDomainRecordInfoOutcome;
			typedef std::future<DescribeDomainRecordInfoOutcome> DescribeDomainRecordInfoOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainRecordInfoRequest&, const DescribeDomainRecordInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRecordInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRecordsResult> DescribeDomainRecordsOutcome;
			typedef std::future<DescribeDomainRecordsOutcome> DescribeDomainRecordsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainRecordsRequest&, const DescribeDomainRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainResolveStatisticsSummaryResult> DescribeDomainResolveStatisticsSummaryOutcome;
			typedef std::future<DescribeDomainResolveStatisticsSummaryOutcome> DescribeDomainResolveStatisticsSummaryOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainResolveStatisticsSummaryRequest&, const DescribeDomainResolveStatisticsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainResolveStatisticsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainStatisticsResult> DescribeDomainStatisticsOutcome;
			typedef std::future<DescribeDomainStatisticsOutcome> DescribeDomainStatisticsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainStatisticsRequest&, const DescribeDomainStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainStatisticsSummaryResult> DescribeDomainStatisticsSummaryOutcome;
			typedef std::future<DescribeDomainStatisticsSummaryOutcome> DescribeDomainStatisticsSummaryOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainStatisticsSummaryRequest&, const DescribeDomainStatisticsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainStatisticsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsResult> DescribeDomainsOutcome;
			typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDomainsRequest&, const DescribeDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmAccessStrategiesResult> DescribeGtmAccessStrategiesOutcome;
			typedef std::future<DescribeGtmAccessStrategiesOutcome> DescribeGtmAccessStrategiesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmAccessStrategiesRequest&, const DescribeGtmAccessStrategiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmAccessStrategiesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmAccessStrategyResult> DescribeGtmAccessStrategyOutcome;
			typedef std::future<DescribeGtmAccessStrategyOutcome> DescribeGtmAccessStrategyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmAccessStrategyRequest&, const DescribeGtmAccessStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmAccessStrategyAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmAccessStrategyAvailableConfigResult> DescribeGtmAccessStrategyAvailableConfigOutcome;
			typedef std::future<DescribeGtmAccessStrategyAvailableConfigOutcome> DescribeGtmAccessStrategyAvailableConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmAccessStrategyAvailableConfigRequest&, const DescribeGtmAccessStrategyAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmAccessStrategyAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmAvailableAlertGroupResult> DescribeGtmAvailableAlertGroupOutcome;
			typedef std::future<DescribeGtmAvailableAlertGroupOutcome> DescribeGtmAvailableAlertGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmAvailableAlertGroupRequest&, const DescribeGtmAvailableAlertGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmAvailableAlertGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmInstanceResult> DescribeGtmInstanceOutcome;
			typedef std::future<DescribeGtmInstanceOutcome> DescribeGtmInstanceOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmInstanceRequest&, const DescribeGtmInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmInstanceAddressPoolResult> DescribeGtmInstanceAddressPoolOutcome;
			typedef std::future<DescribeGtmInstanceAddressPoolOutcome> DescribeGtmInstanceAddressPoolOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmInstanceAddressPoolRequest&, const DescribeGtmInstanceAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmInstanceAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmInstanceAddressPoolsResult> DescribeGtmInstanceAddressPoolsOutcome;
			typedef std::future<DescribeGtmInstanceAddressPoolsOutcome> DescribeGtmInstanceAddressPoolsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmInstanceAddressPoolsRequest&, const DescribeGtmInstanceAddressPoolsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmInstanceAddressPoolsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmInstanceStatusResult> DescribeGtmInstanceStatusOutcome;
			typedef std::future<DescribeGtmInstanceStatusOutcome> DescribeGtmInstanceStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmInstanceStatusRequest&, const DescribeGtmInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmInstanceSystemCnameResult> DescribeGtmInstanceSystemCnameOutcome;
			typedef std::future<DescribeGtmInstanceSystemCnameOutcome> DescribeGtmInstanceSystemCnameOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmInstanceSystemCnameRequest&, const DescribeGtmInstanceSystemCnameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmInstanceSystemCnameAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmInstancesResult> DescribeGtmInstancesOutcome;
			typedef std::future<DescribeGtmInstancesOutcome> DescribeGtmInstancesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmInstancesRequest&, const DescribeGtmInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmLogsResult> DescribeGtmLogsOutcome;
			typedef std::future<DescribeGtmLogsOutcome> DescribeGtmLogsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmLogsRequest&, const DescribeGtmLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmMonitorAvailableConfigResult> DescribeGtmMonitorAvailableConfigOutcome;
			typedef std::future<DescribeGtmMonitorAvailableConfigOutcome> DescribeGtmMonitorAvailableConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmMonitorAvailableConfigRequest&, const DescribeGtmMonitorAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmMonitorAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmMonitorConfigResult> DescribeGtmMonitorConfigOutcome;
			typedef std::future<DescribeGtmMonitorConfigOutcome> DescribeGtmMonitorConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmMonitorConfigRequest&, const DescribeGtmMonitorConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmMonitorConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmRecoveryPlanResult> DescribeGtmRecoveryPlanOutcome;
			typedef std::future<DescribeGtmRecoveryPlanOutcome> DescribeGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmRecoveryPlanRequest&, const DescribeGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmRecoveryPlanAvailableConfigResult> DescribeGtmRecoveryPlanAvailableConfigOutcome;
			typedef std::future<DescribeGtmRecoveryPlanAvailableConfigOutcome> DescribeGtmRecoveryPlanAvailableConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmRecoveryPlanAvailableConfigRequest&, const DescribeGtmRecoveryPlanAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmRecoveryPlanAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeGtmRecoveryPlansResult> DescribeGtmRecoveryPlansOutcome;
			typedef std::future<DescribeGtmRecoveryPlansOutcome> DescribeGtmRecoveryPlansOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeGtmRecoveryPlansRequest&, const DescribeGtmRecoveryPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGtmRecoveryPlansAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceDomainsResult> DescribeInstanceDomainsOutcome;
			typedef std::future<DescribeInstanceDomainsOutcome> DescribeInstanceDomainsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeInstanceDomainsRequest&, const DescribeInstanceDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeIspFlushCacheInstancesResult> DescribeIspFlushCacheInstancesOutcome;
			typedef std::future<DescribeIspFlushCacheInstancesOutcome> DescribeIspFlushCacheInstancesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeIspFlushCacheInstancesRequest&, const DescribeIspFlushCacheInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIspFlushCacheInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIspFlushCacheRemainQuotaResult> DescribeIspFlushCacheRemainQuotaOutcome;
			typedef std::future<DescribeIspFlushCacheRemainQuotaOutcome> DescribeIspFlushCacheRemainQuotaOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeIspFlushCacheRemainQuotaRequest&, const DescribeIspFlushCacheRemainQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIspFlushCacheRemainQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeIspFlushCacheTaskResult> DescribeIspFlushCacheTaskOutcome;
			typedef std::future<DescribeIspFlushCacheTaskOutcome> DescribeIspFlushCacheTaskOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeIspFlushCacheTaskRequest&, const DescribeIspFlushCacheTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIspFlushCacheTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeIspFlushCacheTasksResult> DescribeIspFlushCacheTasksOutcome;
			typedef std::future<DescribeIspFlushCacheTasksOutcome> DescribeIspFlushCacheTasksOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeIspFlushCacheTasksRequest&, const DescribeIspFlushCacheTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIspFlushCacheTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsAccountSummaryResult> DescribePdnsAccountSummaryOutcome;
			typedef std::future<DescribePdnsAccountSummaryOutcome> DescribePdnsAccountSummaryOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsAccountSummaryRequest&, const DescribePdnsAccountSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsAccountSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsAppKeyResult> DescribePdnsAppKeyOutcome;
			typedef std::future<DescribePdnsAppKeyOutcome> DescribePdnsAppKeyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsAppKeyRequest&, const DescribePdnsAppKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsAppKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsAppKeysResult> DescribePdnsAppKeysOutcome;
			typedef std::future<DescribePdnsAppKeysOutcome> DescribePdnsAppKeysOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsAppKeysRequest&, const DescribePdnsAppKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsAppKeysAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsOperateLogsResult> DescribePdnsOperateLogsOutcome;
			typedef std::future<DescribePdnsOperateLogsOutcome> DescribePdnsOperateLogsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsOperateLogsRequest&, const DescribePdnsOperateLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsOperateLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsRequestStatisticResult> DescribePdnsRequestStatisticOutcome;
			typedef std::future<DescribePdnsRequestStatisticOutcome> DescribePdnsRequestStatisticOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsRequestStatisticRequest&, const DescribePdnsRequestStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsRequestStatisticAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsRequestStatisticsResult> DescribePdnsRequestStatisticsOutcome;
			typedef std::future<DescribePdnsRequestStatisticsOutcome> DescribePdnsRequestStatisticsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsRequestStatisticsRequest&, const DescribePdnsRequestStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsRequestStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsThreatLogsResult> DescribePdnsThreatLogsOutcome;
			typedef std::future<DescribePdnsThreatLogsOutcome> DescribePdnsThreatLogsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsThreatLogsRequest&, const DescribePdnsThreatLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsThreatLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsThreatStatisticResult> DescribePdnsThreatStatisticOutcome;
			typedef std::future<DescribePdnsThreatStatisticOutcome> DescribePdnsThreatStatisticOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsThreatStatisticRequest&, const DescribePdnsThreatStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsThreatStatisticAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsThreatStatisticsResult> DescribePdnsThreatStatisticsOutcome;
			typedef std::future<DescribePdnsThreatStatisticsOutcome> DescribePdnsThreatStatisticsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsThreatStatisticsRequest&, const DescribePdnsThreatStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsThreatStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsUdpIpSegmentsResult> DescribePdnsUdpIpSegmentsOutcome;
			typedef std::future<DescribePdnsUdpIpSegmentsOutcome> DescribePdnsUdpIpSegmentsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsUdpIpSegmentsRequest&, const DescribePdnsUdpIpSegmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsUdpIpSegmentsAsyncHandler;
			typedef Outcome<Error, Model::DescribePdnsUserInfoResult> DescribePdnsUserInfoOutcome;
			typedef std::future<DescribePdnsUserInfoOutcome> DescribePdnsUserInfoOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribePdnsUserInfoRequest&, const DescribePdnsUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePdnsUserInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordLogsResult> DescribeRecordLogsOutcome;
			typedef std::future<DescribeRecordLogsOutcome> DescribeRecordLogsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeRecordLogsRequest&, const DescribeRecordLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordResolveStatisticsSummaryResult> DescribeRecordResolveStatisticsSummaryOutcome;
			typedef std::future<DescribeRecordResolveStatisticsSummaryOutcome> DescribeRecordResolveStatisticsSummaryOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeRecordResolveStatisticsSummaryRequest&, const DescribeRecordResolveStatisticsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordResolveStatisticsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordStatisticsResult> DescribeRecordStatisticsOutcome;
			typedef std::future<DescribeRecordStatisticsOutcome> DescribeRecordStatisticsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeRecordStatisticsRequest&, const DescribeRecordStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordStatisticsSummaryResult> DescribeRecordStatisticsSummaryOutcome;
			typedef std::future<DescribeRecordStatisticsSummaryOutcome> DescribeRecordStatisticsSummaryOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeRecordStatisticsSummaryRequest&, const DescribeRecordStatisticsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordStatisticsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubDomainRecordsResult> DescribeSubDomainRecordsOutcome;
			typedef std::future<DescribeSubDomainRecordsOutcome> DescribeSubDomainRecordsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeSubDomainRecordsRequest&, const DescribeSubDomainRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubDomainRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSupportLinesResult> DescribeSupportLinesOutcome;
			typedef std::future<DescribeSupportLinesOutcome> DescribeSupportLinesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeSupportLinesRequest&, const DescribeSupportLinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportLinesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTransferDomainsResult> DescribeTransferDomainsOutcome;
			typedef std::future<DescribeTransferDomainsOutcome> DescribeTransferDomainsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeTransferDomainsRequest&, const DescribeTransferDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTransferDomainsAsyncHandler;
			typedef Outcome<Error, Model::ExecuteGtmRecoveryPlanResult> ExecuteGtmRecoveryPlanOutcome;
			typedef std::future<ExecuteGtmRecoveryPlanOutcome> ExecuteGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ExecuteGtmRecoveryPlanRequest&, const ExecuteGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::GetMainDomainNameResult> GetMainDomainNameOutcome;
			typedef std::future<GetMainDomainNameOutcome> GetMainDomainNameOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::GetMainDomainNameRequest&, const GetMainDomainNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMainDomainNameAsyncHandler;
			typedef Outcome<Error, Model::GetTxtRecordForVerifyResult> GetTxtRecordForVerifyOutcome;
			typedef std::future<GetTxtRecordForVerifyOutcome> GetTxtRecordForVerifyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::GetTxtRecordForVerifyRequest&, const GetTxtRecordForVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTxtRecordForVerifyAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyHichinaDomainDNSResult> ModifyHichinaDomainDNSOutcome;
			typedef std::future<ModifyHichinaDomainDNSOutcome> ModifyHichinaDomainDNSOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ModifyHichinaDomainDNSRequest&, const ModifyHichinaDomainDNSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHichinaDomainDNSAsyncHandler;
			typedef Outcome<Error, Model::MoveDomainResourceGroupResult> MoveDomainResourceGroupOutcome;
			typedef std::future<MoveDomainResourceGroupOutcome> MoveDomainResourceGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::MoveDomainResourceGroupRequest&, const MoveDomainResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveDomainResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::MoveGtmResourceGroupResult> MoveGtmResourceGroupOutcome;
			typedef std::future<MoveGtmResourceGroupOutcome> MoveGtmResourceGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::MoveGtmResourceGroupRequest&, const MoveGtmResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveGtmResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::OperateBatchDomainResult> OperateBatchDomainOutcome;
			typedef std::future<OperateBatchDomainOutcome> OperateBatchDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::OperateBatchDomainRequest&, const OperateBatchDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateBatchDomainAsyncHandler;
			typedef Outcome<Error, Model::PausePdnsServiceResult> PausePdnsServiceOutcome;
			typedef std::future<PausePdnsServiceOutcome> PausePdnsServiceOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::PausePdnsServiceRequest&, const PausePdnsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PausePdnsServiceAsyncHandler;
			typedef Outcome<Error, Model::PreviewGtmRecoveryPlanResult> PreviewGtmRecoveryPlanOutcome;
			typedef std::future<PreviewGtmRecoveryPlanOutcome> PreviewGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::PreviewGtmRecoveryPlanRequest&, const PreviewGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreviewGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::RemovePdnsAppKeyResult> RemovePdnsAppKeyOutcome;
			typedef std::future<RemovePdnsAppKeyOutcome> RemovePdnsAppKeyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::RemovePdnsAppKeyRequest&, const RemovePdnsAppKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePdnsAppKeyAsyncHandler;
			typedef Outcome<Error, Model::RemovePdnsUdpIpSegmentResult> RemovePdnsUdpIpSegmentOutcome;
			typedef std::future<RemovePdnsUdpIpSegmentOutcome> RemovePdnsUdpIpSegmentOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::RemovePdnsUdpIpSegmentRequest&, const RemovePdnsUdpIpSegmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePdnsUdpIpSegmentAsyncHandler;
			typedef Outcome<Error, Model::ResumePdnsServiceResult> ResumePdnsServiceOutcome;
			typedef std::future<ResumePdnsServiceOutcome> ResumePdnsServiceOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ResumePdnsServiceRequest&, const ResumePdnsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumePdnsServiceAsyncHandler;
			typedef Outcome<Error, Model::RetrieveDomainResult> RetrieveDomainOutcome;
			typedef std::future<RetrieveDomainOutcome> RetrieveDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::RetrieveDomainRequest&, const RetrieveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetrieveDomainAsyncHandler;
			typedef Outcome<Error, Model::RollbackGtmRecoveryPlanResult> RollbackGtmRecoveryPlanOutcome;
			typedef std::future<RollbackGtmRecoveryPlanOutcome> RollbackGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::RollbackGtmRecoveryPlanRequest&, const RollbackGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::SetDNSSLBStatusResult> SetDNSSLBStatusOutcome;
			typedef std::future<SetDNSSLBStatusOutcome> SetDNSSLBStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetDNSSLBStatusRequest&, const SetDNSSLBStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDNSSLBStatusAsyncHandler;
			typedef Outcome<Error, Model::SetDnsGtmAccessModeResult> SetDnsGtmAccessModeOutcome;
			typedef std::future<SetDnsGtmAccessModeOutcome> SetDnsGtmAccessModeOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetDnsGtmAccessModeRequest&, const SetDnsGtmAccessModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDnsGtmAccessModeAsyncHandler;
			typedef Outcome<Error, Model::SetDnsGtmMonitorStatusResult> SetDnsGtmMonitorStatusOutcome;
			typedef std::future<SetDnsGtmMonitorStatusOutcome> SetDnsGtmMonitorStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetDnsGtmMonitorStatusRequest&, const SetDnsGtmMonitorStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDnsGtmMonitorStatusAsyncHandler;
			typedef Outcome<Error, Model::SetDomainDnssecStatusResult> SetDomainDnssecStatusOutcome;
			typedef std::future<SetDomainDnssecStatusOutcome> SetDomainDnssecStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetDomainDnssecStatusRequest&, const SetDomainDnssecStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainDnssecStatusAsyncHandler;
			typedef Outcome<Error, Model::SetDomainRecordStatusResult> SetDomainRecordStatusOutcome;
			typedef std::future<SetDomainRecordStatusOutcome> SetDomainRecordStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetDomainRecordStatusRequest&, const SetDomainRecordStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainRecordStatusAsyncHandler;
			typedef Outcome<Error, Model::SetGtmAccessModeResult> SetGtmAccessModeOutcome;
			typedef std::future<SetGtmAccessModeOutcome> SetGtmAccessModeOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetGtmAccessModeRequest&, const SetGtmAccessModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGtmAccessModeAsyncHandler;
			typedef Outcome<Error, Model::SetGtmMonitorStatusResult> SetGtmMonitorStatusOutcome;
			typedef std::future<SetGtmMonitorStatusOutcome> SetGtmMonitorStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetGtmMonitorStatusRequest&, const SetGtmMonitorStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGtmMonitorStatusAsyncHandler;
			typedef Outcome<Error, Model::SubmitIspFlushCacheTaskResult> SubmitIspFlushCacheTaskOutcome;
			typedef std::future<SubmitIspFlushCacheTaskOutcome> SubmitIspFlushCacheTaskOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SubmitIspFlushCacheTaskRequest&, const SubmitIspFlushCacheTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitIspFlushCacheTaskAsyncHandler;
			typedef Outcome<Error, Model::SwitchDnsGtmInstanceStrategyModeResult> SwitchDnsGtmInstanceStrategyModeOutcome;
			typedef std::future<SwitchDnsGtmInstanceStrategyModeOutcome> SwitchDnsGtmInstanceStrategyModeOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SwitchDnsGtmInstanceStrategyModeRequest&, const SwitchDnsGtmInstanceStrategyModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDnsGtmInstanceStrategyModeAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TransferDomainResult> TransferDomainOutcome;
			typedef std::future<TransferDomainOutcome> TransferDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::TransferDomainRequest&, const TransferDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferDomainAsyncHandler;
			typedef Outcome<Error, Model::UnbindInstanceDomainsResult> UnbindInstanceDomainsOutcome;
			typedef std::future<UnbindInstanceDomainsOutcome> UnbindInstanceDomainsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UnbindInstanceDomainsRequest&, const UnbindInstanceDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindInstanceDomainsAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppKeyStateResult> UpdateAppKeyStateOutcome;
			typedef std::future<UpdateAppKeyStateOutcome> UpdateAppKeyStateOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateAppKeyStateRequest&, const UpdateAppKeyStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppKeyStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomLineResult> UpdateCustomLineOutcome;
			typedef std::future<UpdateCustomLineOutcome> UpdateCustomLineOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateCustomLineRequest&, const UpdateCustomLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomLineAsyncHandler;
			typedef Outcome<Error, Model::UpdateDNSSLBWeightResult> UpdateDNSSLBWeightOutcome;
			typedef std::future<UpdateDNSSLBWeightOutcome> UpdateDNSSLBWeightOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDNSSLBWeightRequest&, const UpdateDNSSLBWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDNSSLBWeightAsyncHandler;
			typedef Outcome<Error, Model::UpdateDnsCacheDomainResult> UpdateDnsCacheDomainOutcome;
			typedef std::future<UpdateDnsCacheDomainOutcome> UpdateDnsCacheDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDnsCacheDomainRequest&, const UpdateDnsCacheDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDnsCacheDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateDnsCacheDomainRemarkResult> UpdateDnsCacheDomainRemarkOutcome;
			typedef std::future<UpdateDnsCacheDomainRemarkOutcome> UpdateDnsCacheDomainRemarkOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDnsCacheDomainRemarkRequest&, const UpdateDnsCacheDomainRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDnsCacheDomainRemarkAsyncHandler;
			typedef Outcome<Error, Model::UpdateDnsGtmAccessStrategyResult> UpdateDnsGtmAccessStrategyOutcome;
			typedef std::future<UpdateDnsGtmAccessStrategyOutcome> UpdateDnsGtmAccessStrategyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDnsGtmAccessStrategyRequest&, const UpdateDnsGtmAccessStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDnsGtmAccessStrategyAsyncHandler;
			typedef Outcome<Error, Model::UpdateDnsGtmAddressPoolResult> UpdateDnsGtmAddressPoolOutcome;
			typedef std::future<UpdateDnsGtmAddressPoolOutcome> UpdateDnsGtmAddressPoolOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDnsGtmAddressPoolRequest&, const UpdateDnsGtmAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDnsGtmAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::UpdateDnsGtmInstanceGlobalConfigResult> UpdateDnsGtmInstanceGlobalConfigOutcome;
			typedef std::future<UpdateDnsGtmInstanceGlobalConfigOutcome> UpdateDnsGtmInstanceGlobalConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDnsGtmInstanceGlobalConfigRequest&, const UpdateDnsGtmInstanceGlobalConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDnsGtmInstanceGlobalConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateDnsGtmMonitorResult> UpdateDnsGtmMonitorOutcome;
			typedef std::future<UpdateDnsGtmMonitorOutcome> UpdateDnsGtmMonitorOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDnsGtmMonitorRequest&, const UpdateDnsGtmMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDnsGtmMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainGroupResult> UpdateDomainGroupOutcome;
			typedef std::future<UpdateDomainGroupOutcome> UpdateDomainGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDomainGroupRequest&, const UpdateDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainRecordResult> UpdateDomainRecordOutcome;
			typedef std::future<UpdateDomainRecordOutcome> UpdateDomainRecordOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDomainRecordRequest&, const UpdateDomainRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainRecordAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainRecordRemarkResult> UpdateDomainRecordRemarkOutcome;
			typedef std::future<UpdateDomainRecordRemarkOutcome> UpdateDomainRecordRemarkOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDomainRecordRemarkRequest&, const UpdateDomainRecordRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainRecordRemarkAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainRemarkResult> UpdateDomainRemarkOutcome;
			typedef std::future<UpdateDomainRemarkOutcome> UpdateDomainRemarkOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDomainRemarkRequest&, const UpdateDomainRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainRemarkAsyncHandler;
			typedef Outcome<Error, Model::UpdateGtmAccessStrategyResult> UpdateGtmAccessStrategyOutcome;
			typedef std::future<UpdateGtmAccessStrategyOutcome> UpdateGtmAccessStrategyOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateGtmAccessStrategyRequest&, const UpdateGtmAccessStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGtmAccessStrategyAsyncHandler;
			typedef Outcome<Error, Model::UpdateGtmAddressPoolResult> UpdateGtmAddressPoolOutcome;
			typedef std::future<UpdateGtmAddressPoolOutcome> UpdateGtmAddressPoolOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateGtmAddressPoolRequest&, const UpdateGtmAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGtmAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::UpdateGtmInstanceGlobalConfigResult> UpdateGtmInstanceGlobalConfigOutcome;
			typedef std::future<UpdateGtmInstanceGlobalConfigOutcome> UpdateGtmInstanceGlobalConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateGtmInstanceGlobalConfigRequest&, const UpdateGtmInstanceGlobalConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGtmInstanceGlobalConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateGtmMonitorResult> UpdateGtmMonitorOutcome;
			typedef std::future<UpdateGtmMonitorOutcome> UpdateGtmMonitorOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateGtmMonitorRequest&, const UpdateGtmMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGtmMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateGtmRecoveryPlanResult> UpdateGtmRecoveryPlanOutcome;
			typedef std::future<UpdateGtmRecoveryPlanOutcome> UpdateGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateGtmRecoveryPlanRequest&, const UpdateGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::UpdateIspFlushCacheInstanceConfigResult> UpdateIspFlushCacheInstanceConfigOutcome;
			typedef std::future<UpdateIspFlushCacheInstanceConfigOutcome> UpdateIspFlushCacheInstanceConfigOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateIspFlushCacheInstanceConfigRequest&, const UpdateIspFlushCacheInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIspFlushCacheInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::ValidateDnsGtmCnameRrCanUseResult> ValidateDnsGtmCnameRrCanUseOutcome;
			typedef std::future<ValidateDnsGtmCnameRrCanUseOutcome> ValidateDnsGtmCnameRrCanUseOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ValidateDnsGtmCnameRrCanUseRequest&, const ValidateDnsGtmCnameRrCanUseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateDnsGtmCnameRrCanUseAsyncHandler;
			typedef Outcome<Error, Model::ValidatePdnsUdpIpSegmentResult> ValidatePdnsUdpIpSegmentOutcome;
			typedef std::future<ValidatePdnsUdpIpSegmentOutcome> ValidatePdnsUdpIpSegmentOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ValidatePdnsUdpIpSegmentRequest&, const ValidatePdnsUdpIpSegmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidatePdnsUdpIpSegmentAsyncHandler;

			AlidnsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AlidnsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AlidnsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AlidnsClient();
			AddCustomLineOutcome addCustomLine(const Model::AddCustomLineRequest &request)const;
			void addCustomLineAsync(const Model::AddCustomLineRequest& request, const AddCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCustomLineOutcomeCallable addCustomLineCallable(const Model::AddCustomLineRequest& request) const;
			AddDnsCacheDomainOutcome addDnsCacheDomain(const Model::AddDnsCacheDomainRequest &request)const;
			void addDnsCacheDomainAsync(const Model::AddDnsCacheDomainRequest& request, const AddDnsCacheDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDnsCacheDomainOutcomeCallable addDnsCacheDomainCallable(const Model::AddDnsCacheDomainRequest& request) const;
			AddDnsGtmAccessStrategyOutcome addDnsGtmAccessStrategy(const Model::AddDnsGtmAccessStrategyRequest &request)const;
			void addDnsGtmAccessStrategyAsync(const Model::AddDnsGtmAccessStrategyRequest& request, const AddDnsGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDnsGtmAccessStrategyOutcomeCallable addDnsGtmAccessStrategyCallable(const Model::AddDnsGtmAccessStrategyRequest& request) const;
			AddDnsGtmAddressPoolOutcome addDnsGtmAddressPool(const Model::AddDnsGtmAddressPoolRequest &request)const;
			void addDnsGtmAddressPoolAsync(const Model::AddDnsGtmAddressPoolRequest& request, const AddDnsGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDnsGtmAddressPoolOutcomeCallable addDnsGtmAddressPoolCallable(const Model::AddDnsGtmAddressPoolRequest& request) const;
			AddDnsGtmMonitorOutcome addDnsGtmMonitor(const Model::AddDnsGtmMonitorRequest &request)const;
			void addDnsGtmMonitorAsync(const Model::AddDnsGtmMonitorRequest& request, const AddDnsGtmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDnsGtmMonitorOutcomeCallable addDnsGtmMonitorCallable(const Model::AddDnsGtmMonitorRequest& request) const;
			AddDomainOutcome addDomain(const Model::AddDomainRequest &request)const;
			void addDomainAsync(const Model::AddDomainRequest& request, const AddDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDomainOutcomeCallable addDomainCallable(const Model::AddDomainRequest& request) const;
			AddDomainBackupOutcome addDomainBackup(const Model::AddDomainBackupRequest &request)const;
			void addDomainBackupAsync(const Model::AddDomainBackupRequest& request, const AddDomainBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDomainBackupOutcomeCallable addDomainBackupCallable(const Model::AddDomainBackupRequest& request) const;
			AddDomainGroupOutcome addDomainGroup(const Model::AddDomainGroupRequest &request)const;
			void addDomainGroupAsync(const Model::AddDomainGroupRequest& request, const AddDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDomainGroupOutcomeCallable addDomainGroupCallable(const Model::AddDomainGroupRequest& request) const;
			AddDomainRecordOutcome addDomainRecord(const Model::AddDomainRecordRequest &request)const;
			void addDomainRecordAsync(const Model::AddDomainRecordRequest& request, const AddDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDomainRecordOutcomeCallable addDomainRecordCallable(const Model::AddDomainRecordRequest& request) const;
			AddGtmAccessStrategyOutcome addGtmAccessStrategy(const Model::AddGtmAccessStrategyRequest &request)const;
			void addGtmAccessStrategyAsync(const Model::AddGtmAccessStrategyRequest& request, const AddGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGtmAccessStrategyOutcomeCallable addGtmAccessStrategyCallable(const Model::AddGtmAccessStrategyRequest& request) const;
			AddGtmAddressPoolOutcome addGtmAddressPool(const Model::AddGtmAddressPoolRequest &request)const;
			void addGtmAddressPoolAsync(const Model::AddGtmAddressPoolRequest& request, const AddGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGtmAddressPoolOutcomeCallable addGtmAddressPoolCallable(const Model::AddGtmAddressPoolRequest& request) const;
			AddGtmMonitorOutcome addGtmMonitor(const Model::AddGtmMonitorRequest &request)const;
			void addGtmMonitorAsync(const Model::AddGtmMonitorRequest& request, const AddGtmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGtmMonitorOutcomeCallable addGtmMonitorCallable(const Model::AddGtmMonitorRequest& request) const;
			AddGtmRecoveryPlanOutcome addGtmRecoveryPlan(const Model::AddGtmRecoveryPlanRequest &request)const;
			void addGtmRecoveryPlanAsync(const Model::AddGtmRecoveryPlanRequest& request, const AddGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGtmRecoveryPlanOutcomeCallable addGtmRecoveryPlanCallable(const Model::AddGtmRecoveryPlanRequest& request) const;
			BindInstanceDomainsOutcome bindInstanceDomains(const Model::BindInstanceDomainsRequest &request)const;
			void bindInstanceDomainsAsync(const Model::BindInstanceDomainsRequest& request, const BindInstanceDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindInstanceDomainsOutcomeCallable bindInstanceDomainsCallable(const Model::BindInstanceDomainsRequest& request) const;
			ChangeDomainGroupOutcome changeDomainGroup(const Model::ChangeDomainGroupRequest &request)const;
			void changeDomainGroupAsync(const Model::ChangeDomainGroupRequest& request, const ChangeDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeDomainGroupOutcomeCallable changeDomainGroupCallable(const Model::ChangeDomainGroupRequest& request) const;
			ChangeDomainOfDnsProductOutcome changeDomainOfDnsProduct(const Model::ChangeDomainOfDnsProductRequest &request)const;
			void changeDomainOfDnsProductAsync(const Model::ChangeDomainOfDnsProductRequest& request, const ChangeDomainOfDnsProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeDomainOfDnsProductOutcomeCallable changeDomainOfDnsProductCallable(const Model::ChangeDomainOfDnsProductRequest& request) const;
			CopyGtmConfigOutcome copyGtmConfig(const Model::CopyGtmConfigRequest &request)const;
			void copyGtmConfigAsync(const Model::CopyGtmConfigRequest& request, const CopyGtmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyGtmConfigOutcomeCallable copyGtmConfigCallable(const Model::CopyGtmConfigRequest& request) const;
			CreatePdnsAppKeyOutcome createPdnsAppKey(const Model::CreatePdnsAppKeyRequest &request)const;
			void createPdnsAppKeyAsync(const Model::CreatePdnsAppKeyRequest& request, const CreatePdnsAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePdnsAppKeyOutcomeCallable createPdnsAppKeyCallable(const Model::CreatePdnsAppKeyRequest& request) const;
			CreatePdnsUdpIpSegmentOutcome createPdnsUdpIpSegment(const Model::CreatePdnsUdpIpSegmentRequest &request)const;
			void createPdnsUdpIpSegmentAsync(const Model::CreatePdnsUdpIpSegmentRequest& request, const CreatePdnsUdpIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePdnsUdpIpSegmentOutcomeCallable createPdnsUdpIpSegmentCallable(const Model::CreatePdnsUdpIpSegmentRequest& request) const;
			DeleteCustomLinesOutcome deleteCustomLines(const Model::DeleteCustomLinesRequest &request)const;
			void deleteCustomLinesAsync(const Model::DeleteCustomLinesRequest& request, const DeleteCustomLinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomLinesOutcomeCallable deleteCustomLinesCallable(const Model::DeleteCustomLinesRequest& request) const;
			DeleteDnsCacheDomainOutcome deleteDnsCacheDomain(const Model::DeleteDnsCacheDomainRequest &request)const;
			void deleteDnsCacheDomainAsync(const Model::DeleteDnsCacheDomainRequest& request, const DeleteDnsCacheDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDnsCacheDomainOutcomeCallable deleteDnsCacheDomainCallable(const Model::DeleteDnsCacheDomainRequest& request) const;
			DeleteDnsGtmAccessStrategyOutcome deleteDnsGtmAccessStrategy(const Model::DeleteDnsGtmAccessStrategyRequest &request)const;
			void deleteDnsGtmAccessStrategyAsync(const Model::DeleteDnsGtmAccessStrategyRequest& request, const DeleteDnsGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDnsGtmAccessStrategyOutcomeCallable deleteDnsGtmAccessStrategyCallable(const Model::DeleteDnsGtmAccessStrategyRequest& request) const;
			DeleteDnsGtmAddressPoolOutcome deleteDnsGtmAddressPool(const Model::DeleteDnsGtmAddressPoolRequest &request)const;
			void deleteDnsGtmAddressPoolAsync(const Model::DeleteDnsGtmAddressPoolRequest& request, const DeleteDnsGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDnsGtmAddressPoolOutcomeCallable deleteDnsGtmAddressPoolCallable(const Model::DeleteDnsGtmAddressPoolRequest& request) const;
			DeleteDomainOutcome deleteDomain(const Model::DeleteDomainRequest &request)const;
			void deleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainOutcomeCallable deleteDomainCallable(const Model::DeleteDomainRequest& request) const;
			DeleteDomainGroupOutcome deleteDomainGroup(const Model::DeleteDomainGroupRequest &request)const;
			void deleteDomainGroupAsync(const Model::DeleteDomainGroupRequest& request, const DeleteDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainGroupOutcomeCallable deleteDomainGroupCallable(const Model::DeleteDomainGroupRequest& request) const;
			DeleteDomainRecordOutcome deleteDomainRecord(const Model::DeleteDomainRecordRequest &request)const;
			void deleteDomainRecordAsync(const Model::DeleteDomainRecordRequest& request, const DeleteDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainRecordOutcomeCallable deleteDomainRecordCallable(const Model::DeleteDomainRecordRequest& request) const;
			DeleteGtmAccessStrategyOutcome deleteGtmAccessStrategy(const Model::DeleteGtmAccessStrategyRequest &request)const;
			void deleteGtmAccessStrategyAsync(const Model::DeleteGtmAccessStrategyRequest& request, const DeleteGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGtmAccessStrategyOutcomeCallable deleteGtmAccessStrategyCallable(const Model::DeleteGtmAccessStrategyRequest& request) const;
			DeleteGtmAddressPoolOutcome deleteGtmAddressPool(const Model::DeleteGtmAddressPoolRequest &request)const;
			void deleteGtmAddressPoolAsync(const Model::DeleteGtmAddressPoolRequest& request, const DeleteGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGtmAddressPoolOutcomeCallable deleteGtmAddressPoolCallable(const Model::DeleteGtmAddressPoolRequest& request) const;
			DeleteGtmRecoveryPlanOutcome deleteGtmRecoveryPlan(const Model::DeleteGtmRecoveryPlanRequest &request)const;
			void deleteGtmRecoveryPlanAsync(const Model::DeleteGtmRecoveryPlanRequest& request, const DeleteGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGtmRecoveryPlanOutcomeCallable deleteGtmRecoveryPlanCallable(const Model::DeleteGtmRecoveryPlanRequest& request) const;
			DeleteSubDomainRecordsOutcome deleteSubDomainRecords(const Model::DeleteSubDomainRecordsRequest &request)const;
			void deleteSubDomainRecordsAsync(const Model::DeleteSubDomainRecordsRequest& request, const DeleteSubDomainRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSubDomainRecordsOutcomeCallable deleteSubDomainRecordsCallable(const Model::DeleteSubDomainRecordsRequest& request) const;
			DescribeBatchResultCountOutcome describeBatchResultCount(const Model::DescribeBatchResultCountRequest &request)const;
			void describeBatchResultCountAsync(const Model::DescribeBatchResultCountRequest& request, const DescribeBatchResultCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBatchResultCountOutcomeCallable describeBatchResultCountCallable(const Model::DescribeBatchResultCountRequest& request) const;
			DescribeBatchResultDetailOutcome describeBatchResultDetail(const Model::DescribeBatchResultDetailRequest &request)const;
			void describeBatchResultDetailAsync(const Model::DescribeBatchResultDetailRequest& request, const DescribeBatchResultDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBatchResultDetailOutcomeCallable describeBatchResultDetailCallable(const Model::DescribeBatchResultDetailRequest& request) const;
			DescribeCustomLineOutcome describeCustomLine(const Model::DescribeCustomLineRequest &request)const;
			void describeCustomLineAsync(const Model::DescribeCustomLineRequest& request, const DescribeCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomLineOutcomeCallable describeCustomLineCallable(const Model::DescribeCustomLineRequest& request) const;
			DescribeCustomLinesOutcome describeCustomLines(const Model::DescribeCustomLinesRequest &request)const;
			void describeCustomLinesAsync(const Model::DescribeCustomLinesRequest& request, const DescribeCustomLinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomLinesOutcomeCallable describeCustomLinesCallable(const Model::DescribeCustomLinesRequest& request) const;
			DescribeDNSSLBSubDomainsOutcome describeDNSSLBSubDomains(const Model::DescribeDNSSLBSubDomainsRequest &request)const;
			void describeDNSSLBSubDomainsAsync(const Model::DescribeDNSSLBSubDomainsRequest& request, const DescribeDNSSLBSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDNSSLBSubDomainsOutcomeCallable describeDNSSLBSubDomainsCallable(const Model::DescribeDNSSLBSubDomainsRequest& request) const;
			DescribeDnsCacheDomainsOutcome describeDnsCacheDomains(const Model::DescribeDnsCacheDomainsRequest &request)const;
			void describeDnsCacheDomainsAsync(const Model::DescribeDnsCacheDomainsRequest& request, const DescribeDnsCacheDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsCacheDomainsOutcomeCallable describeDnsCacheDomainsCallable(const Model::DescribeDnsCacheDomainsRequest& request) const;
			DescribeDnsGtmAccessStrategiesOutcome describeDnsGtmAccessStrategies(const Model::DescribeDnsGtmAccessStrategiesRequest &request)const;
			void describeDnsGtmAccessStrategiesAsync(const Model::DescribeDnsGtmAccessStrategiesRequest& request, const DescribeDnsGtmAccessStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmAccessStrategiesOutcomeCallable describeDnsGtmAccessStrategiesCallable(const Model::DescribeDnsGtmAccessStrategiesRequest& request) const;
			DescribeDnsGtmAccessStrategyOutcome describeDnsGtmAccessStrategy(const Model::DescribeDnsGtmAccessStrategyRequest &request)const;
			void describeDnsGtmAccessStrategyAsync(const Model::DescribeDnsGtmAccessStrategyRequest& request, const DescribeDnsGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmAccessStrategyOutcomeCallable describeDnsGtmAccessStrategyCallable(const Model::DescribeDnsGtmAccessStrategyRequest& request) const;
			DescribeDnsGtmAccessStrategyAvailableConfigOutcome describeDnsGtmAccessStrategyAvailableConfig(const Model::DescribeDnsGtmAccessStrategyAvailableConfigRequest &request)const;
			void describeDnsGtmAccessStrategyAvailableConfigAsync(const Model::DescribeDnsGtmAccessStrategyAvailableConfigRequest& request, const DescribeDnsGtmAccessStrategyAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmAccessStrategyAvailableConfigOutcomeCallable describeDnsGtmAccessStrategyAvailableConfigCallable(const Model::DescribeDnsGtmAccessStrategyAvailableConfigRequest& request) const;
			DescribeDnsGtmAddrAttributeInfoOutcome describeDnsGtmAddrAttributeInfo(const Model::DescribeDnsGtmAddrAttributeInfoRequest &request)const;
			void describeDnsGtmAddrAttributeInfoAsync(const Model::DescribeDnsGtmAddrAttributeInfoRequest& request, const DescribeDnsGtmAddrAttributeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmAddrAttributeInfoOutcomeCallable describeDnsGtmAddrAttributeInfoCallable(const Model::DescribeDnsGtmAddrAttributeInfoRequest& request) const;
			DescribeDnsGtmAddressPoolAvailableConfigOutcome describeDnsGtmAddressPoolAvailableConfig(const Model::DescribeDnsGtmAddressPoolAvailableConfigRequest &request)const;
			void describeDnsGtmAddressPoolAvailableConfigAsync(const Model::DescribeDnsGtmAddressPoolAvailableConfigRequest& request, const DescribeDnsGtmAddressPoolAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmAddressPoolAvailableConfigOutcomeCallable describeDnsGtmAddressPoolAvailableConfigCallable(const Model::DescribeDnsGtmAddressPoolAvailableConfigRequest& request) const;
			DescribeDnsGtmAvailableAlertGroupOutcome describeDnsGtmAvailableAlertGroup(const Model::DescribeDnsGtmAvailableAlertGroupRequest &request)const;
			void describeDnsGtmAvailableAlertGroupAsync(const Model::DescribeDnsGtmAvailableAlertGroupRequest& request, const DescribeDnsGtmAvailableAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmAvailableAlertGroupOutcomeCallable describeDnsGtmAvailableAlertGroupCallable(const Model::DescribeDnsGtmAvailableAlertGroupRequest& request) const;
			DescribeDnsGtmInstanceOutcome describeDnsGtmInstance(const Model::DescribeDnsGtmInstanceRequest &request)const;
			void describeDnsGtmInstanceAsync(const Model::DescribeDnsGtmInstanceRequest& request, const DescribeDnsGtmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmInstanceOutcomeCallable describeDnsGtmInstanceCallable(const Model::DescribeDnsGtmInstanceRequest& request) const;
			DescribeDnsGtmInstanceAddressPoolOutcome describeDnsGtmInstanceAddressPool(const Model::DescribeDnsGtmInstanceAddressPoolRequest &request)const;
			void describeDnsGtmInstanceAddressPoolAsync(const Model::DescribeDnsGtmInstanceAddressPoolRequest& request, const DescribeDnsGtmInstanceAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmInstanceAddressPoolOutcomeCallable describeDnsGtmInstanceAddressPoolCallable(const Model::DescribeDnsGtmInstanceAddressPoolRequest& request) const;
			DescribeDnsGtmInstanceAddressPoolsOutcome describeDnsGtmInstanceAddressPools(const Model::DescribeDnsGtmInstanceAddressPoolsRequest &request)const;
			void describeDnsGtmInstanceAddressPoolsAsync(const Model::DescribeDnsGtmInstanceAddressPoolsRequest& request, const DescribeDnsGtmInstanceAddressPoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmInstanceAddressPoolsOutcomeCallable describeDnsGtmInstanceAddressPoolsCallable(const Model::DescribeDnsGtmInstanceAddressPoolsRequest& request) const;
			DescribeDnsGtmInstanceStatusOutcome describeDnsGtmInstanceStatus(const Model::DescribeDnsGtmInstanceStatusRequest &request)const;
			void describeDnsGtmInstanceStatusAsync(const Model::DescribeDnsGtmInstanceStatusRequest& request, const DescribeDnsGtmInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmInstanceStatusOutcomeCallable describeDnsGtmInstanceStatusCallable(const Model::DescribeDnsGtmInstanceStatusRequest& request) const;
			DescribeDnsGtmInstanceSystemCnameOutcome describeDnsGtmInstanceSystemCname(const Model::DescribeDnsGtmInstanceSystemCnameRequest &request)const;
			void describeDnsGtmInstanceSystemCnameAsync(const Model::DescribeDnsGtmInstanceSystemCnameRequest& request, const DescribeDnsGtmInstanceSystemCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmInstanceSystemCnameOutcomeCallable describeDnsGtmInstanceSystemCnameCallable(const Model::DescribeDnsGtmInstanceSystemCnameRequest& request) const;
			DescribeDnsGtmInstancesOutcome describeDnsGtmInstances(const Model::DescribeDnsGtmInstancesRequest &request)const;
			void describeDnsGtmInstancesAsync(const Model::DescribeDnsGtmInstancesRequest& request, const DescribeDnsGtmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmInstancesOutcomeCallable describeDnsGtmInstancesCallable(const Model::DescribeDnsGtmInstancesRequest& request) const;
			DescribeDnsGtmLogsOutcome describeDnsGtmLogs(const Model::DescribeDnsGtmLogsRequest &request)const;
			void describeDnsGtmLogsAsync(const Model::DescribeDnsGtmLogsRequest& request, const DescribeDnsGtmLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmLogsOutcomeCallable describeDnsGtmLogsCallable(const Model::DescribeDnsGtmLogsRequest& request) const;
			DescribeDnsGtmMonitorAvailableConfigOutcome describeDnsGtmMonitorAvailableConfig(const Model::DescribeDnsGtmMonitorAvailableConfigRequest &request)const;
			void describeDnsGtmMonitorAvailableConfigAsync(const Model::DescribeDnsGtmMonitorAvailableConfigRequest& request, const DescribeDnsGtmMonitorAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmMonitorAvailableConfigOutcomeCallable describeDnsGtmMonitorAvailableConfigCallable(const Model::DescribeDnsGtmMonitorAvailableConfigRequest& request) const;
			DescribeDnsGtmMonitorConfigOutcome describeDnsGtmMonitorConfig(const Model::DescribeDnsGtmMonitorConfigRequest &request)const;
			void describeDnsGtmMonitorConfigAsync(const Model::DescribeDnsGtmMonitorConfigRequest& request, const DescribeDnsGtmMonitorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsGtmMonitorConfigOutcomeCallable describeDnsGtmMonitorConfigCallable(const Model::DescribeDnsGtmMonitorConfigRequest& request) const;
			DescribeDnsProductInstanceOutcome describeDnsProductInstance(const Model::DescribeDnsProductInstanceRequest &request)const;
			void describeDnsProductInstanceAsync(const Model::DescribeDnsProductInstanceRequest& request, const DescribeDnsProductInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsProductInstanceOutcomeCallable describeDnsProductInstanceCallable(const Model::DescribeDnsProductInstanceRequest& request) const;
			DescribeDnsProductInstancesOutcome describeDnsProductInstances(const Model::DescribeDnsProductInstancesRequest &request)const;
			void describeDnsProductInstancesAsync(const Model::DescribeDnsProductInstancesRequest& request, const DescribeDnsProductInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsProductInstancesOutcomeCallable describeDnsProductInstancesCallable(const Model::DescribeDnsProductInstancesRequest& request) const;
			DescribeDohAccountStatisticsOutcome describeDohAccountStatistics(const Model::DescribeDohAccountStatisticsRequest &request)const;
			void describeDohAccountStatisticsAsync(const Model::DescribeDohAccountStatisticsRequest& request, const DescribeDohAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDohAccountStatisticsOutcomeCallable describeDohAccountStatisticsCallable(const Model::DescribeDohAccountStatisticsRequest& request) const;
			DescribeDohDomainStatisticsOutcome describeDohDomainStatistics(const Model::DescribeDohDomainStatisticsRequest &request)const;
			void describeDohDomainStatisticsAsync(const Model::DescribeDohDomainStatisticsRequest& request, const DescribeDohDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDohDomainStatisticsOutcomeCallable describeDohDomainStatisticsCallable(const Model::DescribeDohDomainStatisticsRequest& request) const;
			DescribeDohDomainStatisticsSummaryOutcome describeDohDomainStatisticsSummary(const Model::DescribeDohDomainStatisticsSummaryRequest &request)const;
			void describeDohDomainStatisticsSummaryAsync(const Model::DescribeDohDomainStatisticsSummaryRequest& request, const DescribeDohDomainStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDohDomainStatisticsSummaryOutcomeCallable describeDohDomainStatisticsSummaryCallable(const Model::DescribeDohDomainStatisticsSummaryRequest& request) const;
			DescribeDohSubDomainStatisticsOutcome describeDohSubDomainStatistics(const Model::DescribeDohSubDomainStatisticsRequest &request)const;
			void describeDohSubDomainStatisticsAsync(const Model::DescribeDohSubDomainStatisticsRequest& request, const DescribeDohSubDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDohSubDomainStatisticsOutcomeCallable describeDohSubDomainStatisticsCallable(const Model::DescribeDohSubDomainStatisticsRequest& request) const;
			DescribeDohSubDomainStatisticsSummaryOutcome describeDohSubDomainStatisticsSummary(const Model::DescribeDohSubDomainStatisticsSummaryRequest &request)const;
			void describeDohSubDomainStatisticsSummaryAsync(const Model::DescribeDohSubDomainStatisticsSummaryRequest& request, const DescribeDohSubDomainStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDohSubDomainStatisticsSummaryOutcomeCallable describeDohSubDomainStatisticsSummaryCallable(const Model::DescribeDohSubDomainStatisticsSummaryRequest& request) const;
			DescribeDohUserInfoOutcome describeDohUserInfo(const Model::DescribeDohUserInfoRequest &request)const;
			void describeDohUserInfoAsync(const Model::DescribeDohUserInfoRequest& request, const DescribeDohUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDohUserInfoOutcomeCallable describeDohUserInfoCallable(const Model::DescribeDohUserInfoRequest& request) const;
			DescribeDomainDnssecInfoOutcome describeDomainDnssecInfo(const Model::DescribeDomainDnssecInfoRequest &request)const;
			void describeDomainDnssecInfoAsync(const Model::DescribeDomainDnssecInfoRequest& request, const DescribeDomainDnssecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainDnssecInfoOutcomeCallable describeDomainDnssecInfoCallable(const Model::DescribeDomainDnssecInfoRequest& request) const;
			DescribeDomainGroupsOutcome describeDomainGroups(const Model::DescribeDomainGroupsRequest &request)const;
			void describeDomainGroupsAsync(const Model::DescribeDomainGroupsRequest& request, const DescribeDomainGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainGroupsOutcomeCallable describeDomainGroupsCallable(const Model::DescribeDomainGroupsRequest& request) const;
			DescribeDomainInfoOutcome describeDomainInfo(const Model::DescribeDomainInfoRequest &request)const;
			void describeDomainInfoAsync(const Model::DescribeDomainInfoRequest& request, const DescribeDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainInfoOutcomeCallable describeDomainInfoCallable(const Model::DescribeDomainInfoRequest& request) const;
			DescribeDomainLogsOutcome describeDomainLogs(const Model::DescribeDomainLogsRequest &request)const;
			void describeDomainLogsAsync(const Model::DescribeDomainLogsRequest& request, const DescribeDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainLogsOutcomeCallable describeDomainLogsCallable(const Model::DescribeDomainLogsRequest& request) const;
			DescribeDomainNsOutcome describeDomainNs(const Model::DescribeDomainNsRequest &request)const;
			void describeDomainNsAsync(const Model::DescribeDomainNsRequest& request, const DescribeDomainNsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainNsOutcomeCallable describeDomainNsCallable(const Model::DescribeDomainNsRequest& request) const;
			DescribeDomainRecordInfoOutcome describeDomainRecordInfo(const Model::DescribeDomainRecordInfoRequest &request)const;
			void describeDomainRecordInfoAsync(const Model::DescribeDomainRecordInfoRequest& request, const DescribeDomainRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRecordInfoOutcomeCallable describeDomainRecordInfoCallable(const Model::DescribeDomainRecordInfoRequest& request) const;
			DescribeDomainRecordsOutcome describeDomainRecords(const Model::DescribeDomainRecordsRequest &request)const;
			void describeDomainRecordsAsync(const Model::DescribeDomainRecordsRequest& request, const DescribeDomainRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRecordsOutcomeCallable describeDomainRecordsCallable(const Model::DescribeDomainRecordsRequest& request) const;
			DescribeDomainResolveStatisticsSummaryOutcome describeDomainResolveStatisticsSummary(const Model::DescribeDomainResolveStatisticsSummaryRequest &request)const;
			void describeDomainResolveStatisticsSummaryAsync(const Model::DescribeDomainResolveStatisticsSummaryRequest& request, const DescribeDomainResolveStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainResolveStatisticsSummaryOutcomeCallable describeDomainResolveStatisticsSummaryCallable(const Model::DescribeDomainResolveStatisticsSummaryRequest& request) const;
			DescribeDomainStatisticsOutcome describeDomainStatistics(const Model::DescribeDomainStatisticsRequest &request)const;
			void describeDomainStatisticsAsync(const Model::DescribeDomainStatisticsRequest& request, const DescribeDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainStatisticsOutcomeCallable describeDomainStatisticsCallable(const Model::DescribeDomainStatisticsRequest& request) const;
			DescribeDomainStatisticsSummaryOutcome describeDomainStatisticsSummary(const Model::DescribeDomainStatisticsSummaryRequest &request)const;
			void describeDomainStatisticsSummaryAsync(const Model::DescribeDomainStatisticsSummaryRequest& request, const DescribeDomainStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainStatisticsSummaryOutcomeCallable describeDomainStatisticsSummaryCallable(const Model::DescribeDomainStatisticsSummaryRequest& request) const;
			DescribeDomainsOutcome describeDomains(const Model::DescribeDomainsRequest &request)const;
			void describeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainsOutcomeCallable describeDomainsCallable(const Model::DescribeDomainsRequest& request) const;
			DescribeGtmAccessStrategiesOutcome describeGtmAccessStrategies(const Model::DescribeGtmAccessStrategiesRequest &request)const;
			void describeGtmAccessStrategiesAsync(const Model::DescribeGtmAccessStrategiesRequest& request, const DescribeGtmAccessStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmAccessStrategiesOutcomeCallable describeGtmAccessStrategiesCallable(const Model::DescribeGtmAccessStrategiesRequest& request) const;
			DescribeGtmAccessStrategyOutcome describeGtmAccessStrategy(const Model::DescribeGtmAccessStrategyRequest &request)const;
			void describeGtmAccessStrategyAsync(const Model::DescribeGtmAccessStrategyRequest& request, const DescribeGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmAccessStrategyOutcomeCallable describeGtmAccessStrategyCallable(const Model::DescribeGtmAccessStrategyRequest& request) const;
			DescribeGtmAccessStrategyAvailableConfigOutcome describeGtmAccessStrategyAvailableConfig(const Model::DescribeGtmAccessStrategyAvailableConfigRequest &request)const;
			void describeGtmAccessStrategyAvailableConfigAsync(const Model::DescribeGtmAccessStrategyAvailableConfigRequest& request, const DescribeGtmAccessStrategyAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmAccessStrategyAvailableConfigOutcomeCallable describeGtmAccessStrategyAvailableConfigCallable(const Model::DescribeGtmAccessStrategyAvailableConfigRequest& request) const;
			DescribeGtmAvailableAlertGroupOutcome describeGtmAvailableAlertGroup(const Model::DescribeGtmAvailableAlertGroupRequest &request)const;
			void describeGtmAvailableAlertGroupAsync(const Model::DescribeGtmAvailableAlertGroupRequest& request, const DescribeGtmAvailableAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmAvailableAlertGroupOutcomeCallable describeGtmAvailableAlertGroupCallable(const Model::DescribeGtmAvailableAlertGroupRequest& request) const;
			DescribeGtmInstanceOutcome describeGtmInstance(const Model::DescribeGtmInstanceRequest &request)const;
			void describeGtmInstanceAsync(const Model::DescribeGtmInstanceRequest& request, const DescribeGtmInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmInstanceOutcomeCallable describeGtmInstanceCallable(const Model::DescribeGtmInstanceRequest& request) const;
			DescribeGtmInstanceAddressPoolOutcome describeGtmInstanceAddressPool(const Model::DescribeGtmInstanceAddressPoolRequest &request)const;
			void describeGtmInstanceAddressPoolAsync(const Model::DescribeGtmInstanceAddressPoolRequest& request, const DescribeGtmInstanceAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmInstanceAddressPoolOutcomeCallable describeGtmInstanceAddressPoolCallable(const Model::DescribeGtmInstanceAddressPoolRequest& request) const;
			DescribeGtmInstanceAddressPoolsOutcome describeGtmInstanceAddressPools(const Model::DescribeGtmInstanceAddressPoolsRequest &request)const;
			void describeGtmInstanceAddressPoolsAsync(const Model::DescribeGtmInstanceAddressPoolsRequest& request, const DescribeGtmInstanceAddressPoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmInstanceAddressPoolsOutcomeCallable describeGtmInstanceAddressPoolsCallable(const Model::DescribeGtmInstanceAddressPoolsRequest& request) const;
			DescribeGtmInstanceStatusOutcome describeGtmInstanceStatus(const Model::DescribeGtmInstanceStatusRequest &request)const;
			void describeGtmInstanceStatusAsync(const Model::DescribeGtmInstanceStatusRequest& request, const DescribeGtmInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmInstanceStatusOutcomeCallable describeGtmInstanceStatusCallable(const Model::DescribeGtmInstanceStatusRequest& request) const;
			DescribeGtmInstanceSystemCnameOutcome describeGtmInstanceSystemCname(const Model::DescribeGtmInstanceSystemCnameRequest &request)const;
			void describeGtmInstanceSystemCnameAsync(const Model::DescribeGtmInstanceSystemCnameRequest& request, const DescribeGtmInstanceSystemCnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmInstanceSystemCnameOutcomeCallable describeGtmInstanceSystemCnameCallable(const Model::DescribeGtmInstanceSystemCnameRequest& request) const;
			DescribeGtmInstancesOutcome describeGtmInstances(const Model::DescribeGtmInstancesRequest &request)const;
			void describeGtmInstancesAsync(const Model::DescribeGtmInstancesRequest& request, const DescribeGtmInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmInstancesOutcomeCallable describeGtmInstancesCallable(const Model::DescribeGtmInstancesRequest& request) const;
			DescribeGtmLogsOutcome describeGtmLogs(const Model::DescribeGtmLogsRequest &request)const;
			void describeGtmLogsAsync(const Model::DescribeGtmLogsRequest& request, const DescribeGtmLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmLogsOutcomeCallable describeGtmLogsCallable(const Model::DescribeGtmLogsRequest& request) const;
			DescribeGtmMonitorAvailableConfigOutcome describeGtmMonitorAvailableConfig(const Model::DescribeGtmMonitorAvailableConfigRequest &request)const;
			void describeGtmMonitorAvailableConfigAsync(const Model::DescribeGtmMonitorAvailableConfigRequest& request, const DescribeGtmMonitorAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmMonitorAvailableConfigOutcomeCallable describeGtmMonitorAvailableConfigCallable(const Model::DescribeGtmMonitorAvailableConfigRequest& request) const;
			DescribeGtmMonitorConfigOutcome describeGtmMonitorConfig(const Model::DescribeGtmMonitorConfigRequest &request)const;
			void describeGtmMonitorConfigAsync(const Model::DescribeGtmMonitorConfigRequest& request, const DescribeGtmMonitorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmMonitorConfigOutcomeCallable describeGtmMonitorConfigCallable(const Model::DescribeGtmMonitorConfigRequest& request) const;
			DescribeGtmRecoveryPlanOutcome describeGtmRecoveryPlan(const Model::DescribeGtmRecoveryPlanRequest &request)const;
			void describeGtmRecoveryPlanAsync(const Model::DescribeGtmRecoveryPlanRequest& request, const DescribeGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmRecoveryPlanOutcomeCallable describeGtmRecoveryPlanCallable(const Model::DescribeGtmRecoveryPlanRequest& request) const;
			DescribeGtmRecoveryPlanAvailableConfigOutcome describeGtmRecoveryPlanAvailableConfig(const Model::DescribeGtmRecoveryPlanAvailableConfigRequest &request)const;
			void describeGtmRecoveryPlanAvailableConfigAsync(const Model::DescribeGtmRecoveryPlanAvailableConfigRequest& request, const DescribeGtmRecoveryPlanAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmRecoveryPlanAvailableConfigOutcomeCallable describeGtmRecoveryPlanAvailableConfigCallable(const Model::DescribeGtmRecoveryPlanAvailableConfigRequest& request) const;
			DescribeGtmRecoveryPlansOutcome describeGtmRecoveryPlans(const Model::DescribeGtmRecoveryPlansRequest &request)const;
			void describeGtmRecoveryPlansAsync(const Model::DescribeGtmRecoveryPlansRequest& request, const DescribeGtmRecoveryPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGtmRecoveryPlansOutcomeCallable describeGtmRecoveryPlansCallable(const Model::DescribeGtmRecoveryPlansRequest& request) const;
			DescribeInstanceDomainsOutcome describeInstanceDomains(const Model::DescribeInstanceDomainsRequest &request)const;
			void describeInstanceDomainsAsync(const Model::DescribeInstanceDomainsRequest& request, const DescribeInstanceDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceDomainsOutcomeCallable describeInstanceDomainsCallable(const Model::DescribeInstanceDomainsRequest& request) const;
			DescribeIspFlushCacheInstancesOutcome describeIspFlushCacheInstances(const Model::DescribeIspFlushCacheInstancesRequest &request)const;
			void describeIspFlushCacheInstancesAsync(const Model::DescribeIspFlushCacheInstancesRequest& request, const DescribeIspFlushCacheInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIspFlushCacheInstancesOutcomeCallable describeIspFlushCacheInstancesCallable(const Model::DescribeIspFlushCacheInstancesRequest& request) const;
			DescribeIspFlushCacheRemainQuotaOutcome describeIspFlushCacheRemainQuota(const Model::DescribeIspFlushCacheRemainQuotaRequest &request)const;
			void describeIspFlushCacheRemainQuotaAsync(const Model::DescribeIspFlushCacheRemainQuotaRequest& request, const DescribeIspFlushCacheRemainQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIspFlushCacheRemainQuotaOutcomeCallable describeIspFlushCacheRemainQuotaCallable(const Model::DescribeIspFlushCacheRemainQuotaRequest& request) const;
			DescribeIspFlushCacheTaskOutcome describeIspFlushCacheTask(const Model::DescribeIspFlushCacheTaskRequest &request)const;
			void describeIspFlushCacheTaskAsync(const Model::DescribeIspFlushCacheTaskRequest& request, const DescribeIspFlushCacheTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIspFlushCacheTaskOutcomeCallable describeIspFlushCacheTaskCallable(const Model::DescribeIspFlushCacheTaskRequest& request) const;
			DescribeIspFlushCacheTasksOutcome describeIspFlushCacheTasks(const Model::DescribeIspFlushCacheTasksRequest &request)const;
			void describeIspFlushCacheTasksAsync(const Model::DescribeIspFlushCacheTasksRequest& request, const DescribeIspFlushCacheTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIspFlushCacheTasksOutcomeCallable describeIspFlushCacheTasksCallable(const Model::DescribeIspFlushCacheTasksRequest& request) const;
			DescribePdnsAccountSummaryOutcome describePdnsAccountSummary(const Model::DescribePdnsAccountSummaryRequest &request)const;
			void describePdnsAccountSummaryAsync(const Model::DescribePdnsAccountSummaryRequest& request, const DescribePdnsAccountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsAccountSummaryOutcomeCallable describePdnsAccountSummaryCallable(const Model::DescribePdnsAccountSummaryRequest& request) const;
			DescribePdnsAppKeyOutcome describePdnsAppKey(const Model::DescribePdnsAppKeyRequest &request)const;
			void describePdnsAppKeyAsync(const Model::DescribePdnsAppKeyRequest& request, const DescribePdnsAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsAppKeyOutcomeCallable describePdnsAppKeyCallable(const Model::DescribePdnsAppKeyRequest& request) const;
			DescribePdnsAppKeysOutcome describePdnsAppKeys(const Model::DescribePdnsAppKeysRequest &request)const;
			void describePdnsAppKeysAsync(const Model::DescribePdnsAppKeysRequest& request, const DescribePdnsAppKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsAppKeysOutcomeCallable describePdnsAppKeysCallable(const Model::DescribePdnsAppKeysRequest& request) const;
			DescribePdnsOperateLogsOutcome describePdnsOperateLogs(const Model::DescribePdnsOperateLogsRequest &request)const;
			void describePdnsOperateLogsAsync(const Model::DescribePdnsOperateLogsRequest& request, const DescribePdnsOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsOperateLogsOutcomeCallable describePdnsOperateLogsCallable(const Model::DescribePdnsOperateLogsRequest& request) const;
			DescribePdnsRequestStatisticOutcome describePdnsRequestStatistic(const Model::DescribePdnsRequestStatisticRequest &request)const;
			void describePdnsRequestStatisticAsync(const Model::DescribePdnsRequestStatisticRequest& request, const DescribePdnsRequestStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsRequestStatisticOutcomeCallable describePdnsRequestStatisticCallable(const Model::DescribePdnsRequestStatisticRequest& request) const;
			DescribePdnsRequestStatisticsOutcome describePdnsRequestStatistics(const Model::DescribePdnsRequestStatisticsRequest &request)const;
			void describePdnsRequestStatisticsAsync(const Model::DescribePdnsRequestStatisticsRequest& request, const DescribePdnsRequestStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsRequestStatisticsOutcomeCallable describePdnsRequestStatisticsCallable(const Model::DescribePdnsRequestStatisticsRequest& request) const;
			DescribePdnsThreatLogsOutcome describePdnsThreatLogs(const Model::DescribePdnsThreatLogsRequest &request)const;
			void describePdnsThreatLogsAsync(const Model::DescribePdnsThreatLogsRequest& request, const DescribePdnsThreatLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsThreatLogsOutcomeCallable describePdnsThreatLogsCallable(const Model::DescribePdnsThreatLogsRequest& request) const;
			DescribePdnsThreatStatisticOutcome describePdnsThreatStatistic(const Model::DescribePdnsThreatStatisticRequest &request)const;
			void describePdnsThreatStatisticAsync(const Model::DescribePdnsThreatStatisticRequest& request, const DescribePdnsThreatStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsThreatStatisticOutcomeCallable describePdnsThreatStatisticCallable(const Model::DescribePdnsThreatStatisticRequest& request) const;
			DescribePdnsThreatStatisticsOutcome describePdnsThreatStatistics(const Model::DescribePdnsThreatStatisticsRequest &request)const;
			void describePdnsThreatStatisticsAsync(const Model::DescribePdnsThreatStatisticsRequest& request, const DescribePdnsThreatStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsThreatStatisticsOutcomeCallable describePdnsThreatStatisticsCallable(const Model::DescribePdnsThreatStatisticsRequest& request) const;
			DescribePdnsUdpIpSegmentsOutcome describePdnsUdpIpSegments(const Model::DescribePdnsUdpIpSegmentsRequest &request)const;
			void describePdnsUdpIpSegmentsAsync(const Model::DescribePdnsUdpIpSegmentsRequest& request, const DescribePdnsUdpIpSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsUdpIpSegmentsOutcomeCallable describePdnsUdpIpSegmentsCallable(const Model::DescribePdnsUdpIpSegmentsRequest& request) const;
			DescribePdnsUserInfoOutcome describePdnsUserInfo(const Model::DescribePdnsUserInfoRequest &request)const;
			void describePdnsUserInfoAsync(const Model::DescribePdnsUserInfoRequest& request, const DescribePdnsUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePdnsUserInfoOutcomeCallable describePdnsUserInfoCallable(const Model::DescribePdnsUserInfoRequest& request) const;
			DescribeRecordLogsOutcome describeRecordLogs(const Model::DescribeRecordLogsRequest &request)const;
			void describeRecordLogsAsync(const Model::DescribeRecordLogsRequest& request, const DescribeRecordLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordLogsOutcomeCallable describeRecordLogsCallable(const Model::DescribeRecordLogsRequest& request) const;
			DescribeRecordResolveStatisticsSummaryOutcome describeRecordResolveStatisticsSummary(const Model::DescribeRecordResolveStatisticsSummaryRequest &request)const;
			void describeRecordResolveStatisticsSummaryAsync(const Model::DescribeRecordResolveStatisticsSummaryRequest& request, const DescribeRecordResolveStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordResolveStatisticsSummaryOutcomeCallable describeRecordResolveStatisticsSummaryCallable(const Model::DescribeRecordResolveStatisticsSummaryRequest& request) const;
			DescribeRecordStatisticsOutcome describeRecordStatistics(const Model::DescribeRecordStatisticsRequest &request)const;
			void describeRecordStatisticsAsync(const Model::DescribeRecordStatisticsRequest& request, const DescribeRecordStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordStatisticsOutcomeCallable describeRecordStatisticsCallable(const Model::DescribeRecordStatisticsRequest& request) const;
			DescribeRecordStatisticsSummaryOutcome describeRecordStatisticsSummary(const Model::DescribeRecordStatisticsSummaryRequest &request)const;
			void describeRecordStatisticsSummaryAsync(const Model::DescribeRecordStatisticsSummaryRequest& request, const DescribeRecordStatisticsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordStatisticsSummaryOutcomeCallable describeRecordStatisticsSummaryCallable(const Model::DescribeRecordStatisticsSummaryRequest& request) const;
			DescribeSubDomainRecordsOutcome describeSubDomainRecords(const Model::DescribeSubDomainRecordsRequest &request)const;
			void describeSubDomainRecordsAsync(const Model::DescribeSubDomainRecordsRequest& request, const DescribeSubDomainRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubDomainRecordsOutcomeCallable describeSubDomainRecordsCallable(const Model::DescribeSubDomainRecordsRequest& request) const;
			DescribeSupportLinesOutcome describeSupportLines(const Model::DescribeSupportLinesRequest &request)const;
			void describeSupportLinesAsync(const Model::DescribeSupportLinesRequest& request, const DescribeSupportLinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSupportLinesOutcomeCallable describeSupportLinesCallable(const Model::DescribeSupportLinesRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeTransferDomainsOutcome describeTransferDomains(const Model::DescribeTransferDomainsRequest &request)const;
			void describeTransferDomainsAsync(const Model::DescribeTransferDomainsRequest& request, const DescribeTransferDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTransferDomainsOutcomeCallable describeTransferDomainsCallable(const Model::DescribeTransferDomainsRequest& request) const;
			ExecuteGtmRecoveryPlanOutcome executeGtmRecoveryPlan(const Model::ExecuteGtmRecoveryPlanRequest &request)const;
			void executeGtmRecoveryPlanAsync(const Model::ExecuteGtmRecoveryPlanRequest& request, const ExecuteGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteGtmRecoveryPlanOutcomeCallable executeGtmRecoveryPlanCallable(const Model::ExecuteGtmRecoveryPlanRequest& request) const;
			GetMainDomainNameOutcome getMainDomainName(const Model::GetMainDomainNameRequest &request)const;
			void getMainDomainNameAsync(const Model::GetMainDomainNameRequest& request, const GetMainDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMainDomainNameOutcomeCallable getMainDomainNameCallable(const Model::GetMainDomainNameRequest& request) const;
			GetTxtRecordForVerifyOutcome getTxtRecordForVerify(const Model::GetTxtRecordForVerifyRequest &request)const;
			void getTxtRecordForVerifyAsync(const Model::GetTxtRecordForVerifyRequest& request, const GetTxtRecordForVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTxtRecordForVerifyOutcomeCallable getTxtRecordForVerifyCallable(const Model::GetTxtRecordForVerifyRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyHichinaDomainDNSOutcome modifyHichinaDomainDNS(const Model::ModifyHichinaDomainDNSRequest &request)const;
			void modifyHichinaDomainDNSAsync(const Model::ModifyHichinaDomainDNSRequest& request, const ModifyHichinaDomainDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHichinaDomainDNSOutcomeCallable modifyHichinaDomainDNSCallable(const Model::ModifyHichinaDomainDNSRequest& request) const;
			MoveDomainResourceGroupOutcome moveDomainResourceGroup(const Model::MoveDomainResourceGroupRequest &request)const;
			void moveDomainResourceGroupAsync(const Model::MoveDomainResourceGroupRequest& request, const MoveDomainResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveDomainResourceGroupOutcomeCallable moveDomainResourceGroupCallable(const Model::MoveDomainResourceGroupRequest& request) const;
			MoveGtmResourceGroupOutcome moveGtmResourceGroup(const Model::MoveGtmResourceGroupRequest &request)const;
			void moveGtmResourceGroupAsync(const Model::MoveGtmResourceGroupRequest& request, const MoveGtmResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveGtmResourceGroupOutcomeCallable moveGtmResourceGroupCallable(const Model::MoveGtmResourceGroupRequest& request) const;
			OperateBatchDomainOutcome operateBatchDomain(const Model::OperateBatchDomainRequest &request)const;
			void operateBatchDomainAsync(const Model::OperateBatchDomainRequest& request, const OperateBatchDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateBatchDomainOutcomeCallable operateBatchDomainCallable(const Model::OperateBatchDomainRequest& request) const;
			PausePdnsServiceOutcome pausePdnsService(const Model::PausePdnsServiceRequest &request)const;
			void pausePdnsServiceAsync(const Model::PausePdnsServiceRequest& request, const PausePdnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PausePdnsServiceOutcomeCallable pausePdnsServiceCallable(const Model::PausePdnsServiceRequest& request) const;
			PreviewGtmRecoveryPlanOutcome previewGtmRecoveryPlan(const Model::PreviewGtmRecoveryPlanRequest &request)const;
			void previewGtmRecoveryPlanAsync(const Model::PreviewGtmRecoveryPlanRequest& request, const PreviewGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreviewGtmRecoveryPlanOutcomeCallable previewGtmRecoveryPlanCallable(const Model::PreviewGtmRecoveryPlanRequest& request) const;
			RemovePdnsAppKeyOutcome removePdnsAppKey(const Model::RemovePdnsAppKeyRequest &request)const;
			void removePdnsAppKeyAsync(const Model::RemovePdnsAppKeyRequest& request, const RemovePdnsAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePdnsAppKeyOutcomeCallable removePdnsAppKeyCallable(const Model::RemovePdnsAppKeyRequest& request) const;
			RemovePdnsUdpIpSegmentOutcome removePdnsUdpIpSegment(const Model::RemovePdnsUdpIpSegmentRequest &request)const;
			void removePdnsUdpIpSegmentAsync(const Model::RemovePdnsUdpIpSegmentRequest& request, const RemovePdnsUdpIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePdnsUdpIpSegmentOutcomeCallable removePdnsUdpIpSegmentCallable(const Model::RemovePdnsUdpIpSegmentRequest& request) const;
			ResumePdnsServiceOutcome resumePdnsService(const Model::ResumePdnsServiceRequest &request)const;
			void resumePdnsServiceAsync(const Model::ResumePdnsServiceRequest& request, const ResumePdnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumePdnsServiceOutcomeCallable resumePdnsServiceCallable(const Model::ResumePdnsServiceRequest& request) const;
			RetrieveDomainOutcome retrieveDomain(const Model::RetrieveDomainRequest &request)const;
			void retrieveDomainAsync(const Model::RetrieveDomainRequest& request, const RetrieveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetrieveDomainOutcomeCallable retrieveDomainCallable(const Model::RetrieveDomainRequest& request) const;
			RollbackGtmRecoveryPlanOutcome rollbackGtmRecoveryPlan(const Model::RollbackGtmRecoveryPlanRequest &request)const;
			void rollbackGtmRecoveryPlanAsync(const Model::RollbackGtmRecoveryPlanRequest& request, const RollbackGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackGtmRecoveryPlanOutcomeCallable rollbackGtmRecoveryPlanCallable(const Model::RollbackGtmRecoveryPlanRequest& request) const;
			SetDNSSLBStatusOutcome setDNSSLBStatus(const Model::SetDNSSLBStatusRequest &request)const;
			void setDNSSLBStatusAsync(const Model::SetDNSSLBStatusRequest& request, const SetDNSSLBStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDNSSLBStatusOutcomeCallable setDNSSLBStatusCallable(const Model::SetDNSSLBStatusRequest& request) const;
			SetDnsGtmAccessModeOutcome setDnsGtmAccessMode(const Model::SetDnsGtmAccessModeRequest &request)const;
			void setDnsGtmAccessModeAsync(const Model::SetDnsGtmAccessModeRequest& request, const SetDnsGtmAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDnsGtmAccessModeOutcomeCallable setDnsGtmAccessModeCallable(const Model::SetDnsGtmAccessModeRequest& request) const;
			SetDnsGtmMonitorStatusOutcome setDnsGtmMonitorStatus(const Model::SetDnsGtmMonitorStatusRequest &request)const;
			void setDnsGtmMonitorStatusAsync(const Model::SetDnsGtmMonitorStatusRequest& request, const SetDnsGtmMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDnsGtmMonitorStatusOutcomeCallable setDnsGtmMonitorStatusCallable(const Model::SetDnsGtmMonitorStatusRequest& request) const;
			SetDomainDnssecStatusOutcome setDomainDnssecStatus(const Model::SetDomainDnssecStatusRequest &request)const;
			void setDomainDnssecStatusAsync(const Model::SetDomainDnssecStatusRequest& request, const SetDomainDnssecStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainDnssecStatusOutcomeCallable setDomainDnssecStatusCallable(const Model::SetDomainDnssecStatusRequest& request) const;
			SetDomainRecordStatusOutcome setDomainRecordStatus(const Model::SetDomainRecordStatusRequest &request)const;
			void setDomainRecordStatusAsync(const Model::SetDomainRecordStatusRequest& request, const SetDomainRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainRecordStatusOutcomeCallable setDomainRecordStatusCallable(const Model::SetDomainRecordStatusRequest& request) const;
			SetGtmAccessModeOutcome setGtmAccessMode(const Model::SetGtmAccessModeRequest &request)const;
			void setGtmAccessModeAsync(const Model::SetGtmAccessModeRequest& request, const SetGtmAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGtmAccessModeOutcomeCallable setGtmAccessModeCallable(const Model::SetGtmAccessModeRequest& request) const;
			SetGtmMonitorStatusOutcome setGtmMonitorStatus(const Model::SetGtmMonitorStatusRequest &request)const;
			void setGtmMonitorStatusAsync(const Model::SetGtmMonitorStatusRequest& request, const SetGtmMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGtmMonitorStatusOutcomeCallable setGtmMonitorStatusCallable(const Model::SetGtmMonitorStatusRequest& request) const;
			SubmitIspFlushCacheTaskOutcome submitIspFlushCacheTask(const Model::SubmitIspFlushCacheTaskRequest &request)const;
			void submitIspFlushCacheTaskAsync(const Model::SubmitIspFlushCacheTaskRequest& request, const SubmitIspFlushCacheTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitIspFlushCacheTaskOutcomeCallable submitIspFlushCacheTaskCallable(const Model::SubmitIspFlushCacheTaskRequest& request) const;
			SwitchDnsGtmInstanceStrategyModeOutcome switchDnsGtmInstanceStrategyMode(const Model::SwitchDnsGtmInstanceStrategyModeRequest &request)const;
			void switchDnsGtmInstanceStrategyModeAsync(const Model::SwitchDnsGtmInstanceStrategyModeRequest& request, const SwitchDnsGtmInstanceStrategyModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDnsGtmInstanceStrategyModeOutcomeCallable switchDnsGtmInstanceStrategyModeCallable(const Model::SwitchDnsGtmInstanceStrategyModeRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TransferDomainOutcome transferDomain(const Model::TransferDomainRequest &request)const;
			void transferDomainAsync(const Model::TransferDomainRequest& request, const TransferDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferDomainOutcomeCallable transferDomainCallable(const Model::TransferDomainRequest& request) const;
			UnbindInstanceDomainsOutcome unbindInstanceDomains(const Model::UnbindInstanceDomainsRequest &request)const;
			void unbindInstanceDomainsAsync(const Model::UnbindInstanceDomainsRequest& request, const UnbindInstanceDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindInstanceDomainsOutcomeCallable unbindInstanceDomainsCallable(const Model::UnbindInstanceDomainsRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAppKeyStateOutcome updateAppKeyState(const Model::UpdateAppKeyStateRequest &request)const;
			void updateAppKeyStateAsync(const Model::UpdateAppKeyStateRequest& request, const UpdateAppKeyStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppKeyStateOutcomeCallable updateAppKeyStateCallable(const Model::UpdateAppKeyStateRequest& request) const;
			UpdateCustomLineOutcome updateCustomLine(const Model::UpdateCustomLineRequest &request)const;
			void updateCustomLineAsync(const Model::UpdateCustomLineRequest& request, const UpdateCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomLineOutcomeCallable updateCustomLineCallable(const Model::UpdateCustomLineRequest& request) const;
			UpdateDNSSLBWeightOutcome updateDNSSLBWeight(const Model::UpdateDNSSLBWeightRequest &request)const;
			void updateDNSSLBWeightAsync(const Model::UpdateDNSSLBWeightRequest& request, const UpdateDNSSLBWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDNSSLBWeightOutcomeCallable updateDNSSLBWeightCallable(const Model::UpdateDNSSLBWeightRequest& request) const;
			UpdateDnsCacheDomainOutcome updateDnsCacheDomain(const Model::UpdateDnsCacheDomainRequest &request)const;
			void updateDnsCacheDomainAsync(const Model::UpdateDnsCacheDomainRequest& request, const UpdateDnsCacheDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDnsCacheDomainOutcomeCallable updateDnsCacheDomainCallable(const Model::UpdateDnsCacheDomainRequest& request) const;
			UpdateDnsCacheDomainRemarkOutcome updateDnsCacheDomainRemark(const Model::UpdateDnsCacheDomainRemarkRequest &request)const;
			void updateDnsCacheDomainRemarkAsync(const Model::UpdateDnsCacheDomainRemarkRequest& request, const UpdateDnsCacheDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDnsCacheDomainRemarkOutcomeCallable updateDnsCacheDomainRemarkCallable(const Model::UpdateDnsCacheDomainRemarkRequest& request) const;
			UpdateDnsGtmAccessStrategyOutcome updateDnsGtmAccessStrategy(const Model::UpdateDnsGtmAccessStrategyRequest &request)const;
			void updateDnsGtmAccessStrategyAsync(const Model::UpdateDnsGtmAccessStrategyRequest& request, const UpdateDnsGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDnsGtmAccessStrategyOutcomeCallable updateDnsGtmAccessStrategyCallable(const Model::UpdateDnsGtmAccessStrategyRequest& request) const;
			UpdateDnsGtmAddressPoolOutcome updateDnsGtmAddressPool(const Model::UpdateDnsGtmAddressPoolRequest &request)const;
			void updateDnsGtmAddressPoolAsync(const Model::UpdateDnsGtmAddressPoolRequest& request, const UpdateDnsGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDnsGtmAddressPoolOutcomeCallable updateDnsGtmAddressPoolCallable(const Model::UpdateDnsGtmAddressPoolRequest& request) const;
			UpdateDnsGtmInstanceGlobalConfigOutcome updateDnsGtmInstanceGlobalConfig(const Model::UpdateDnsGtmInstanceGlobalConfigRequest &request)const;
			void updateDnsGtmInstanceGlobalConfigAsync(const Model::UpdateDnsGtmInstanceGlobalConfigRequest& request, const UpdateDnsGtmInstanceGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDnsGtmInstanceGlobalConfigOutcomeCallable updateDnsGtmInstanceGlobalConfigCallable(const Model::UpdateDnsGtmInstanceGlobalConfigRequest& request) const;
			UpdateDnsGtmMonitorOutcome updateDnsGtmMonitor(const Model::UpdateDnsGtmMonitorRequest &request)const;
			void updateDnsGtmMonitorAsync(const Model::UpdateDnsGtmMonitorRequest& request, const UpdateDnsGtmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDnsGtmMonitorOutcomeCallable updateDnsGtmMonitorCallable(const Model::UpdateDnsGtmMonitorRequest& request) const;
			UpdateDomainGroupOutcome updateDomainGroup(const Model::UpdateDomainGroupRequest &request)const;
			void updateDomainGroupAsync(const Model::UpdateDomainGroupRequest& request, const UpdateDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainGroupOutcomeCallable updateDomainGroupCallable(const Model::UpdateDomainGroupRequest& request) const;
			UpdateDomainRecordOutcome updateDomainRecord(const Model::UpdateDomainRecordRequest &request)const;
			void updateDomainRecordAsync(const Model::UpdateDomainRecordRequest& request, const UpdateDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainRecordOutcomeCallable updateDomainRecordCallable(const Model::UpdateDomainRecordRequest& request) const;
			UpdateDomainRecordRemarkOutcome updateDomainRecordRemark(const Model::UpdateDomainRecordRemarkRequest &request)const;
			void updateDomainRecordRemarkAsync(const Model::UpdateDomainRecordRemarkRequest& request, const UpdateDomainRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainRecordRemarkOutcomeCallable updateDomainRecordRemarkCallable(const Model::UpdateDomainRecordRemarkRequest& request) const;
			UpdateDomainRemarkOutcome updateDomainRemark(const Model::UpdateDomainRemarkRequest &request)const;
			void updateDomainRemarkAsync(const Model::UpdateDomainRemarkRequest& request, const UpdateDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainRemarkOutcomeCallable updateDomainRemarkCallable(const Model::UpdateDomainRemarkRequest& request) const;
			UpdateGtmAccessStrategyOutcome updateGtmAccessStrategy(const Model::UpdateGtmAccessStrategyRequest &request)const;
			void updateGtmAccessStrategyAsync(const Model::UpdateGtmAccessStrategyRequest& request, const UpdateGtmAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGtmAccessStrategyOutcomeCallable updateGtmAccessStrategyCallable(const Model::UpdateGtmAccessStrategyRequest& request) const;
			UpdateGtmAddressPoolOutcome updateGtmAddressPool(const Model::UpdateGtmAddressPoolRequest &request)const;
			void updateGtmAddressPoolAsync(const Model::UpdateGtmAddressPoolRequest& request, const UpdateGtmAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGtmAddressPoolOutcomeCallable updateGtmAddressPoolCallable(const Model::UpdateGtmAddressPoolRequest& request) const;
			UpdateGtmInstanceGlobalConfigOutcome updateGtmInstanceGlobalConfig(const Model::UpdateGtmInstanceGlobalConfigRequest &request)const;
			void updateGtmInstanceGlobalConfigAsync(const Model::UpdateGtmInstanceGlobalConfigRequest& request, const UpdateGtmInstanceGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGtmInstanceGlobalConfigOutcomeCallable updateGtmInstanceGlobalConfigCallable(const Model::UpdateGtmInstanceGlobalConfigRequest& request) const;
			UpdateGtmMonitorOutcome updateGtmMonitor(const Model::UpdateGtmMonitorRequest &request)const;
			void updateGtmMonitorAsync(const Model::UpdateGtmMonitorRequest& request, const UpdateGtmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGtmMonitorOutcomeCallable updateGtmMonitorCallable(const Model::UpdateGtmMonitorRequest& request) const;
			UpdateGtmRecoveryPlanOutcome updateGtmRecoveryPlan(const Model::UpdateGtmRecoveryPlanRequest &request)const;
			void updateGtmRecoveryPlanAsync(const Model::UpdateGtmRecoveryPlanRequest& request, const UpdateGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGtmRecoveryPlanOutcomeCallable updateGtmRecoveryPlanCallable(const Model::UpdateGtmRecoveryPlanRequest& request) const;
			UpdateIspFlushCacheInstanceConfigOutcome updateIspFlushCacheInstanceConfig(const Model::UpdateIspFlushCacheInstanceConfigRequest &request)const;
			void updateIspFlushCacheInstanceConfigAsync(const Model::UpdateIspFlushCacheInstanceConfigRequest& request, const UpdateIspFlushCacheInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIspFlushCacheInstanceConfigOutcomeCallable updateIspFlushCacheInstanceConfigCallable(const Model::UpdateIspFlushCacheInstanceConfigRequest& request) const;
			ValidateDnsGtmCnameRrCanUseOutcome validateDnsGtmCnameRrCanUse(const Model::ValidateDnsGtmCnameRrCanUseRequest &request)const;
			void validateDnsGtmCnameRrCanUseAsync(const Model::ValidateDnsGtmCnameRrCanUseRequest& request, const ValidateDnsGtmCnameRrCanUseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateDnsGtmCnameRrCanUseOutcomeCallable validateDnsGtmCnameRrCanUseCallable(const Model::ValidateDnsGtmCnameRrCanUseRequest& request) const;
			ValidatePdnsUdpIpSegmentOutcome validatePdnsUdpIpSegment(const Model::ValidatePdnsUdpIpSegmentRequest &request)const;
			void validatePdnsUdpIpSegmentAsync(const Model::ValidatePdnsUdpIpSegmentRequest& request, const ValidatePdnsUdpIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidatePdnsUdpIpSegmentOutcomeCallable validatePdnsUdpIpSegmentCallable(const Model::ValidatePdnsUdpIpSegmentRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALIDNS_ALIDNSCLIENT_H_
