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
#include "model/AddDomainRequest.h"
#include "model/AddDomainResult.h"
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
#include "model/ChangeDomainGroupRequest.h"
#include "model/ChangeDomainGroupResult.h"
#include "model/ChangeDomainOfDnsProductRequest.h"
#include "model/ChangeDomainOfDnsProductResult.h"
#include "model/CheckDomainRecordRequest.h"
#include "model/CheckDomainRecordResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
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
#include "model/DescribeDNSSLBSubDomainsRequest.h"
#include "model/DescribeDNSSLBSubDomainsResult.h"
#include "model/DescribeDnsProductInstanceRequest.h"
#include "model/DescribeDnsProductInstanceResult.h"
#include "model/DescribeDnsProductInstancesRequest.h"
#include "model/DescribeDnsProductInstancesResult.h"
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
#include "model/DescribeRecordLogsRequest.h"
#include "model/DescribeRecordLogsResult.h"
#include "model/DescribeRecordStatisticsRequest.h"
#include "model/DescribeRecordStatisticsResult.h"
#include "model/DescribeRecordStatisticsSummaryRequest.h"
#include "model/DescribeRecordStatisticsSummaryResult.h"
#include "model/DescribeSubDomainRecordsRequest.h"
#include "model/DescribeSubDomainRecordsResult.h"
#include "model/DescribeSupportLinesRequest.h"
#include "model/DescribeSupportLinesResult.h"
#include "model/ExecuteGtmRecoveryPlanRequest.h"
#include "model/ExecuteGtmRecoveryPlanResult.h"
#include "model/GetMainDomainNameRequest.h"
#include "model/GetMainDomainNameResult.h"
#include "model/ModifyHichinaDomainDNSRequest.h"
#include "model/ModifyHichinaDomainDNSResult.h"
#include "model/OperateBatchDomainRequest.h"
#include "model/OperateBatchDomainResult.h"
#include "model/PreviewGtmRecoveryPlanRequest.h"
#include "model/PreviewGtmRecoveryPlanResult.h"
#include "model/QueryCreateInstancePriceRequest.h"
#include "model/QueryCreateInstancePriceResult.h"
#include "model/RollbackGtmRecoveryPlanRequest.h"
#include "model/RollbackGtmRecoveryPlanResult.h"
#include "model/SetDNSSLBStatusRequest.h"
#include "model/SetDNSSLBStatusResult.h"
#include "model/SetDomainRecordStatusRequest.h"
#include "model/SetDomainRecordStatusResult.h"
#include "model/SetGtmAccessModeRequest.h"
#include "model/SetGtmAccessModeResult.h"
#include "model/SetGtmMonitorStatusRequest.h"
#include "model/SetGtmMonitorStatusResult.h"
#include "model/UpdateDNSSLBWeightRequest.h"
#include "model/UpdateDNSSLBWeightResult.h"
#include "model/UpdateDomainGroupRequest.h"
#include "model/UpdateDomainGroupResult.h"
#include "model/UpdateDomainRecordRequest.h"
#include "model/UpdateDomainRecordResult.h"
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


namespace AlibabaCloud
{
	namespace Alidns
	{
		class ALIBABACLOUD_ALIDNS_EXPORT AlidnsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDomainResult> AddDomainOutcome;
			typedef std::future<AddDomainOutcome> AddDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::AddDomainRequest&, const AddDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDomainAsyncHandler;
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
			typedef Outcome<Error, Model::ChangeDomainGroupResult> ChangeDomainGroupOutcome;
			typedef std::future<ChangeDomainGroupOutcome> ChangeDomainGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ChangeDomainGroupRequest&, const ChangeDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::ChangeDomainOfDnsProductResult> ChangeDomainOfDnsProductOutcome;
			typedef std::future<ChangeDomainOfDnsProductOutcome> ChangeDomainOfDnsProductOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ChangeDomainOfDnsProductRequest&, const ChangeDomainOfDnsProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeDomainOfDnsProductAsyncHandler;
			typedef Outcome<Error, Model::CheckDomainRecordResult> CheckDomainRecordOutcome;
			typedef std::future<CheckDomainRecordOutcome> CheckDomainRecordOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::CheckDomainRecordRequest&, const CheckDomainRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDomainRecordAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeDNSSLBSubDomainsResult> DescribeDNSSLBSubDomainsOutcome;
			typedef std::future<DescribeDNSSLBSubDomainsOutcome> DescribeDNSSLBSubDomainsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDNSSLBSubDomainsRequest&, const DescribeDNSSLBSubDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDNSSLBSubDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsProductInstanceResult> DescribeDnsProductInstanceOutcome;
			typedef std::future<DescribeDnsProductInstanceOutcome> DescribeDnsProductInstanceOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsProductInstanceRequest&, const DescribeDnsProductInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsProductInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnsProductInstancesResult> DescribeDnsProductInstancesOutcome;
			typedef std::future<DescribeDnsProductInstancesOutcome> DescribeDnsProductInstancesOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeDnsProductInstancesRequest&, const DescribeDnsProductInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsProductInstancesAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeRecordLogsResult> DescribeRecordLogsOutcome;
			typedef std::future<DescribeRecordLogsOutcome> DescribeRecordLogsOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::DescribeRecordLogsRequest&, const DescribeRecordLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordLogsAsyncHandler;
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
			typedef Outcome<Error, Model::ExecuteGtmRecoveryPlanResult> ExecuteGtmRecoveryPlanOutcome;
			typedef std::future<ExecuteGtmRecoveryPlanOutcome> ExecuteGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ExecuteGtmRecoveryPlanRequest&, const ExecuteGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::GetMainDomainNameResult> GetMainDomainNameOutcome;
			typedef std::future<GetMainDomainNameOutcome> GetMainDomainNameOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::GetMainDomainNameRequest&, const GetMainDomainNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMainDomainNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyHichinaDomainDNSResult> ModifyHichinaDomainDNSOutcome;
			typedef std::future<ModifyHichinaDomainDNSOutcome> ModifyHichinaDomainDNSOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::ModifyHichinaDomainDNSRequest&, const ModifyHichinaDomainDNSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHichinaDomainDNSAsyncHandler;
			typedef Outcome<Error, Model::OperateBatchDomainResult> OperateBatchDomainOutcome;
			typedef std::future<OperateBatchDomainOutcome> OperateBatchDomainOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::OperateBatchDomainRequest&, const OperateBatchDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateBatchDomainAsyncHandler;
			typedef Outcome<Error, Model::PreviewGtmRecoveryPlanResult> PreviewGtmRecoveryPlanOutcome;
			typedef std::future<PreviewGtmRecoveryPlanOutcome> PreviewGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::PreviewGtmRecoveryPlanRequest&, const PreviewGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreviewGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::QueryCreateInstancePriceResult> QueryCreateInstancePriceOutcome;
			typedef std::future<QueryCreateInstancePriceOutcome> QueryCreateInstancePriceOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::QueryCreateInstancePriceRequest&, const QueryCreateInstancePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCreateInstancePriceAsyncHandler;
			typedef Outcome<Error, Model::RollbackGtmRecoveryPlanResult> RollbackGtmRecoveryPlanOutcome;
			typedef std::future<RollbackGtmRecoveryPlanOutcome> RollbackGtmRecoveryPlanOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::RollbackGtmRecoveryPlanRequest&, const RollbackGtmRecoveryPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackGtmRecoveryPlanAsyncHandler;
			typedef Outcome<Error, Model::SetDNSSLBStatusResult> SetDNSSLBStatusOutcome;
			typedef std::future<SetDNSSLBStatusOutcome> SetDNSSLBStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetDNSSLBStatusRequest&, const SetDNSSLBStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDNSSLBStatusAsyncHandler;
			typedef Outcome<Error, Model::SetDomainRecordStatusResult> SetDomainRecordStatusOutcome;
			typedef std::future<SetDomainRecordStatusOutcome> SetDomainRecordStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetDomainRecordStatusRequest&, const SetDomainRecordStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainRecordStatusAsyncHandler;
			typedef Outcome<Error, Model::SetGtmAccessModeResult> SetGtmAccessModeOutcome;
			typedef std::future<SetGtmAccessModeOutcome> SetGtmAccessModeOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetGtmAccessModeRequest&, const SetGtmAccessModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGtmAccessModeAsyncHandler;
			typedef Outcome<Error, Model::SetGtmMonitorStatusResult> SetGtmMonitorStatusOutcome;
			typedef std::future<SetGtmMonitorStatusOutcome> SetGtmMonitorStatusOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::SetGtmMonitorStatusRequest&, const SetGtmMonitorStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGtmMonitorStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateDNSSLBWeightResult> UpdateDNSSLBWeightOutcome;
			typedef std::future<UpdateDNSSLBWeightOutcome> UpdateDNSSLBWeightOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDNSSLBWeightRequest&, const UpdateDNSSLBWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDNSSLBWeightAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainGroupResult> UpdateDomainGroupOutcome;
			typedef std::future<UpdateDomainGroupOutcome> UpdateDomainGroupOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDomainGroupRequest&, const UpdateDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainRecordResult> UpdateDomainRecordOutcome;
			typedef std::future<UpdateDomainRecordOutcome> UpdateDomainRecordOutcomeCallable;
			typedef std::function<void(const AlidnsClient*, const Model::UpdateDomainRecordRequest&, const UpdateDomainRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainRecordAsyncHandler;
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

			AlidnsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AlidnsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AlidnsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AlidnsClient();
			AddDomainOutcome addDomain(const Model::AddDomainRequest &request)const;
			void addDomainAsync(const Model::AddDomainRequest& request, const AddDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDomainOutcomeCallable addDomainCallable(const Model::AddDomainRequest& request) const;
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
			ChangeDomainGroupOutcome changeDomainGroup(const Model::ChangeDomainGroupRequest &request)const;
			void changeDomainGroupAsync(const Model::ChangeDomainGroupRequest& request, const ChangeDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeDomainGroupOutcomeCallable changeDomainGroupCallable(const Model::ChangeDomainGroupRequest& request) const;
			ChangeDomainOfDnsProductOutcome changeDomainOfDnsProduct(const Model::ChangeDomainOfDnsProductRequest &request)const;
			void changeDomainOfDnsProductAsync(const Model::ChangeDomainOfDnsProductRequest& request, const ChangeDomainOfDnsProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeDomainOfDnsProductOutcomeCallable changeDomainOfDnsProductCallable(const Model::ChangeDomainOfDnsProductRequest& request) const;
			CheckDomainRecordOutcome checkDomainRecord(const Model::CheckDomainRecordRequest &request)const;
			void checkDomainRecordAsync(const Model::CheckDomainRecordRequest& request, const CheckDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDomainRecordOutcomeCallable checkDomainRecordCallable(const Model::CheckDomainRecordRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
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
			DescribeDNSSLBSubDomainsOutcome describeDNSSLBSubDomains(const Model::DescribeDNSSLBSubDomainsRequest &request)const;
			void describeDNSSLBSubDomainsAsync(const Model::DescribeDNSSLBSubDomainsRequest& request, const DescribeDNSSLBSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDNSSLBSubDomainsOutcomeCallable describeDNSSLBSubDomainsCallable(const Model::DescribeDNSSLBSubDomainsRequest& request) const;
			DescribeDnsProductInstanceOutcome describeDnsProductInstance(const Model::DescribeDnsProductInstanceRequest &request)const;
			void describeDnsProductInstanceAsync(const Model::DescribeDnsProductInstanceRequest& request, const DescribeDnsProductInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsProductInstanceOutcomeCallable describeDnsProductInstanceCallable(const Model::DescribeDnsProductInstanceRequest& request) const;
			DescribeDnsProductInstancesOutcome describeDnsProductInstances(const Model::DescribeDnsProductInstancesRequest &request)const;
			void describeDnsProductInstancesAsync(const Model::DescribeDnsProductInstancesRequest& request, const DescribeDnsProductInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnsProductInstancesOutcomeCallable describeDnsProductInstancesCallable(const Model::DescribeDnsProductInstancesRequest& request) const;
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
			DescribeRecordLogsOutcome describeRecordLogs(const Model::DescribeRecordLogsRequest &request)const;
			void describeRecordLogsAsync(const Model::DescribeRecordLogsRequest& request, const DescribeRecordLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordLogsOutcomeCallable describeRecordLogsCallable(const Model::DescribeRecordLogsRequest& request) const;
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
			ExecuteGtmRecoveryPlanOutcome executeGtmRecoveryPlan(const Model::ExecuteGtmRecoveryPlanRequest &request)const;
			void executeGtmRecoveryPlanAsync(const Model::ExecuteGtmRecoveryPlanRequest& request, const ExecuteGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteGtmRecoveryPlanOutcomeCallable executeGtmRecoveryPlanCallable(const Model::ExecuteGtmRecoveryPlanRequest& request) const;
			GetMainDomainNameOutcome getMainDomainName(const Model::GetMainDomainNameRequest &request)const;
			void getMainDomainNameAsync(const Model::GetMainDomainNameRequest& request, const GetMainDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMainDomainNameOutcomeCallable getMainDomainNameCallable(const Model::GetMainDomainNameRequest& request) const;
			ModifyHichinaDomainDNSOutcome modifyHichinaDomainDNS(const Model::ModifyHichinaDomainDNSRequest &request)const;
			void modifyHichinaDomainDNSAsync(const Model::ModifyHichinaDomainDNSRequest& request, const ModifyHichinaDomainDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHichinaDomainDNSOutcomeCallable modifyHichinaDomainDNSCallable(const Model::ModifyHichinaDomainDNSRequest& request) const;
			OperateBatchDomainOutcome operateBatchDomain(const Model::OperateBatchDomainRequest &request)const;
			void operateBatchDomainAsync(const Model::OperateBatchDomainRequest& request, const OperateBatchDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateBatchDomainOutcomeCallable operateBatchDomainCallable(const Model::OperateBatchDomainRequest& request) const;
			PreviewGtmRecoveryPlanOutcome previewGtmRecoveryPlan(const Model::PreviewGtmRecoveryPlanRequest &request)const;
			void previewGtmRecoveryPlanAsync(const Model::PreviewGtmRecoveryPlanRequest& request, const PreviewGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreviewGtmRecoveryPlanOutcomeCallable previewGtmRecoveryPlanCallable(const Model::PreviewGtmRecoveryPlanRequest& request) const;
			QueryCreateInstancePriceOutcome queryCreateInstancePrice(const Model::QueryCreateInstancePriceRequest &request)const;
			void queryCreateInstancePriceAsync(const Model::QueryCreateInstancePriceRequest& request, const QueryCreateInstancePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCreateInstancePriceOutcomeCallable queryCreateInstancePriceCallable(const Model::QueryCreateInstancePriceRequest& request) const;
			RollbackGtmRecoveryPlanOutcome rollbackGtmRecoveryPlan(const Model::RollbackGtmRecoveryPlanRequest &request)const;
			void rollbackGtmRecoveryPlanAsync(const Model::RollbackGtmRecoveryPlanRequest& request, const RollbackGtmRecoveryPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackGtmRecoveryPlanOutcomeCallable rollbackGtmRecoveryPlanCallable(const Model::RollbackGtmRecoveryPlanRequest& request) const;
			SetDNSSLBStatusOutcome setDNSSLBStatus(const Model::SetDNSSLBStatusRequest &request)const;
			void setDNSSLBStatusAsync(const Model::SetDNSSLBStatusRequest& request, const SetDNSSLBStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDNSSLBStatusOutcomeCallable setDNSSLBStatusCallable(const Model::SetDNSSLBStatusRequest& request) const;
			SetDomainRecordStatusOutcome setDomainRecordStatus(const Model::SetDomainRecordStatusRequest &request)const;
			void setDomainRecordStatusAsync(const Model::SetDomainRecordStatusRequest& request, const SetDomainRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainRecordStatusOutcomeCallable setDomainRecordStatusCallable(const Model::SetDomainRecordStatusRequest& request) const;
			SetGtmAccessModeOutcome setGtmAccessMode(const Model::SetGtmAccessModeRequest &request)const;
			void setGtmAccessModeAsync(const Model::SetGtmAccessModeRequest& request, const SetGtmAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGtmAccessModeOutcomeCallable setGtmAccessModeCallable(const Model::SetGtmAccessModeRequest& request) const;
			SetGtmMonitorStatusOutcome setGtmMonitorStatus(const Model::SetGtmMonitorStatusRequest &request)const;
			void setGtmMonitorStatusAsync(const Model::SetGtmMonitorStatusRequest& request, const SetGtmMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGtmMonitorStatusOutcomeCallable setGtmMonitorStatusCallable(const Model::SetGtmMonitorStatusRequest& request) const;
			UpdateDNSSLBWeightOutcome updateDNSSLBWeight(const Model::UpdateDNSSLBWeightRequest &request)const;
			void updateDNSSLBWeightAsync(const Model::UpdateDNSSLBWeightRequest& request, const UpdateDNSSLBWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDNSSLBWeightOutcomeCallable updateDNSSLBWeightCallable(const Model::UpdateDNSSLBWeightRequest& request) const;
			UpdateDomainGroupOutcome updateDomainGroup(const Model::UpdateDomainGroupRequest &request)const;
			void updateDomainGroupAsync(const Model::UpdateDomainGroupRequest& request, const UpdateDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainGroupOutcomeCallable updateDomainGroupCallable(const Model::UpdateDomainGroupRequest& request) const;
			UpdateDomainRecordOutcome updateDomainRecord(const Model::UpdateDomainRecordRequest &request)const;
			void updateDomainRecordAsync(const Model::UpdateDomainRecordRequest& request, const UpdateDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainRecordOutcomeCallable updateDomainRecordCallable(const Model::UpdateDomainRecordRequest& request) const;
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
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALIDNS_ALIDNSCLIENT_H_
