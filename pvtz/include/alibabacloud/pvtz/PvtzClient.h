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

#ifndef ALIBABACLOUD_PVTZ_PVTZCLIENT_H_
#define ALIBABACLOUD_PVTZ_PVTZCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "PvtzExport.h"
#include "model/AddZoneRequest.h"
#include "model/AddZoneResult.h"
#include "model/AddZoneRecordRequest.h"
#include "model/AddZoneRecordResult.h"
#include "model/BindZoneVpcRequest.h"
#include "model/BindZoneVpcResult.h"
#include "model/CheckZoneNameRequest.h"
#include "model/CheckZoneNameResult.h"
#include "model/DeleteZoneRequest.h"
#include "model/DeleteZoneResult.h"
#include "model/DeleteZoneRecordRequest.h"
#include "model/DeleteZoneRecordResult.h"
#include "model/DescribeChangeLogsRequest.h"
#include "model/DescribeChangeLogsResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRequestGraphRequest.h"
#include "model/DescribeRequestGraphResult.h"
#include "model/DescribeStatisticSummaryRequest.h"
#include "model/DescribeStatisticSummaryResult.h"
#include "model/DescribeUserServiceStatusRequest.h"
#include "model/DescribeUserServiceStatusResult.h"
#include "model/DescribeZoneInfoRequest.h"
#include "model/DescribeZoneInfoResult.h"
#include "model/DescribeZoneRecordsRequest.h"
#include "model/DescribeZoneRecordsResult.h"
#include "model/DescribeZoneVpcTreeRequest.h"
#include "model/DescribeZoneVpcTreeResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/SetProxyPatternRequest.h"
#include "model/SetProxyPatternResult.h"
#include "model/SetZoneRecordStatusRequest.h"
#include "model/SetZoneRecordStatusResult.h"
#include "model/UpdateRecordRemarkRequest.h"
#include "model/UpdateRecordRemarkResult.h"
#include "model/UpdateZoneRecordRequest.h"
#include "model/UpdateZoneRecordResult.h"
#include "model/UpdateZoneRemarkRequest.h"
#include "model/UpdateZoneRemarkResult.h"


namespace AlibabaCloud
{
	namespace Pvtz
	{
		class ALIBABACLOUD_PVTZ_EXPORT PvtzClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddZoneResult> AddZoneOutcome;
			typedef std::future<AddZoneOutcome> AddZoneOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::AddZoneRequest&, const AddZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddZoneAsyncHandler;
			typedef Outcome<Error, Model::AddZoneRecordResult> AddZoneRecordOutcome;
			typedef std::future<AddZoneRecordOutcome> AddZoneRecordOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::AddZoneRecordRequest&, const AddZoneRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddZoneRecordAsyncHandler;
			typedef Outcome<Error, Model::BindZoneVpcResult> BindZoneVpcOutcome;
			typedef std::future<BindZoneVpcOutcome> BindZoneVpcOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::BindZoneVpcRequest&, const BindZoneVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindZoneVpcAsyncHandler;
			typedef Outcome<Error, Model::CheckZoneNameResult> CheckZoneNameOutcome;
			typedef std::future<CheckZoneNameOutcome> CheckZoneNameOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::CheckZoneNameRequest&, const CheckZoneNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckZoneNameAsyncHandler;
			typedef Outcome<Error, Model::DeleteZoneResult> DeleteZoneOutcome;
			typedef std::future<DeleteZoneOutcome> DeleteZoneOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DeleteZoneRequest&, const DeleteZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneAsyncHandler;
			typedef Outcome<Error, Model::DeleteZoneRecordResult> DeleteZoneRecordOutcome;
			typedef std::future<DeleteZoneRecordOutcome> DeleteZoneRecordOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DeleteZoneRecordRequest&, const DeleteZoneRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneRecordAsyncHandler;
			typedef Outcome<Error, Model::DescribeChangeLogsResult> DescribeChangeLogsOutcome;
			typedef std::future<DescribeChangeLogsOutcome> DescribeChangeLogsOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeChangeLogsRequest&, const DescribeChangeLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChangeLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRequestGraphResult> DescribeRequestGraphOutcome;
			typedef std::future<DescribeRequestGraphOutcome> DescribeRequestGraphOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeRequestGraphRequest&, const DescribeRequestGraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRequestGraphAsyncHandler;
			typedef Outcome<Error, Model::DescribeStatisticSummaryResult> DescribeStatisticSummaryOutcome;
			typedef std::future<DescribeStatisticSummaryOutcome> DescribeStatisticSummaryOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeStatisticSummaryRequest&, const DescribeStatisticSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserServiceStatusResult> DescribeUserServiceStatusOutcome;
			typedef std::future<DescribeUserServiceStatusOutcome> DescribeUserServiceStatusOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeUserServiceStatusRequest&, const DescribeUserServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeZoneInfoResult> DescribeZoneInfoOutcome;
			typedef std::future<DescribeZoneInfoOutcome> DescribeZoneInfoOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeZoneInfoRequest&, const DescribeZoneInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeZoneRecordsResult> DescribeZoneRecordsOutcome;
			typedef std::future<DescribeZoneRecordsOutcome> DescribeZoneRecordsOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeZoneRecordsRequest&, const DescribeZoneRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZoneVpcTreeResult> DescribeZoneVpcTreeOutcome;
			typedef std::future<DescribeZoneVpcTreeOutcome> DescribeZoneVpcTreeOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeZoneVpcTreeRequest&, const DescribeZoneVpcTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneVpcTreeAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::SetProxyPatternResult> SetProxyPatternOutcome;
			typedef std::future<SetProxyPatternOutcome> SetProxyPatternOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::SetProxyPatternRequest&, const SetProxyPatternOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetProxyPatternAsyncHandler;
			typedef Outcome<Error, Model::SetZoneRecordStatusResult> SetZoneRecordStatusOutcome;
			typedef std::future<SetZoneRecordStatusOutcome> SetZoneRecordStatusOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::SetZoneRecordStatusRequest&, const SetZoneRecordStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetZoneRecordStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateRecordRemarkResult> UpdateRecordRemarkOutcome;
			typedef std::future<UpdateRecordRemarkOutcome> UpdateRecordRemarkOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::UpdateRecordRemarkRequest&, const UpdateRecordRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordRemarkAsyncHandler;
			typedef Outcome<Error, Model::UpdateZoneRecordResult> UpdateZoneRecordOutcome;
			typedef std::future<UpdateZoneRecordOutcome> UpdateZoneRecordOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::UpdateZoneRecordRequest&, const UpdateZoneRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateZoneRecordAsyncHandler;
			typedef Outcome<Error, Model::UpdateZoneRemarkResult> UpdateZoneRemarkOutcome;
			typedef std::future<UpdateZoneRemarkOutcome> UpdateZoneRemarkOutcomeCallable;
			typedef std::function<void(const PvtzClient*, const Model::UpdateZoneRemarkRequest&, const UpdateZoneRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateZoneRemarkAsyncHandler;

			PvtzClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PvtzClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PvtzClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PvtzClient();
			AddZoneOutcome addZone(const Model::AddZoneRequest &request)const;
			void addZoneAsync(const Model::AddZoneRequest& request, const AddZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddZoneOutcomeCallable addZoneCallable(const Model::AddZoneRequest& request) const;
			AddZoneRecordOutcome addZoneRecord(const Model::AddZoneRecordRequest &request)const;
			void addZoneRecordAsync(const Model::AddZoneRecordRequest& request, const AddZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddZoneRecordOutcomeCallable addZoneRecordCallable(const Model::AddZoneRecordRequest& request) const;
			BindZoneVpcOutcome bindZoneVpc(const Model::BindZoneVpcRequest &request)const;
			void bindZoneVpcAsync(const Model::BindZoneVpcRequest& request, const BindZoneVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindZoneVpcOutcomeCallable bindZoneVpcCallable(const Model::BindZoneVpcRequest& request) const;
			CheckZoneNameOutcome checkZoneName(const Model::CheckZoneNameRequest &request)const;
			void checkZoneNameAsync(const Model::CheckZoneNameRequest& request, const CheckZoneNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckZoneNameOutcomeCallable checkZoneNameCallable(const Model::CheckZoneNameRequest& request) const;
			DeleteZoneOutcome deleteZone(const Model::DeleteZoneRequest &request)const;
			void deleteZoneAsync(const Model::DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteZoneOutcomeCallable deleteZoneCallable(const Model::DeleteZoneRequest& request) const;
			DeleteZoneRecordOutcome deleteZoneRecord(const Model::DeleteZoneRecordRequest &request)const;
			void deleteZoneRecordAsync(const Model::DeleteZoneRecordRequest& request, const DeleteZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteZoneRecordOutcomeCallable deleteZoneRecordCallable(const Model::DeleteZoneRecordRequest& request) const;
			DescribeChangeLogsOutcome describeChangeLogs(const Model::DescribeChangeLogsRequest &request)const;
			void describeChangeLogsAsync(const Model::DescribeChangeLogsRequest& request, const DescribeChangeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChangeLogsOutcomeCallable describeChangeLogsCallable(const Model::DescribeChangeLogsRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRequestGraphOutcome describeRequestGraph(const Model::DescribeRequestGraphRequest &request)const;
			void describeRequestGraphAsync(const Model::DescribeRequestGraphRequest& request, const DescribeRequestGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRequestGraphOutcomeCallable describeRequestGraphCallable(const Model::DescribeRequestGraphRequest& request) const;
			DescribeStatisticSummaryOutcome describeStatisticSummary(const Model::DescribeStatisticSummaryRequest &request)const;
			void describeStatisticSummaryAsync(const Model::DescribeStatisticSummaryRequest& request, const DescribeStatisticSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStatisticSummaryOutcomeCallable describeStatisticSummaryCallable(const Model::DescribeStatisticSummaryRequest& request) const;
			DescribeUserServiceStatusOutcome describeUserServiceStatus(const Model::DescribeUserServiceStatusRequest &request)const;
			void describeUserServiceStatusAsync(const Model::DescribeUserServiceStatusRequest& request, const DescribeUserServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserServiceStatusOutcomeCallable describeUserServiceStatusCallable(const Model::DescribeUserServiceStatusRequest& request) const;
			DescribeZoneInfoOutcome describeZoneInfo(const Model::DescribeZoneInfoRequest &request)const;
			void describeZoneInfoAsync(const Model::DescribeZoneInfoRequest& request, const DescribeZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZoneInfoOutcomeCallable describeZoneInfoCallable(const Model::DescribeZoneInfoRequest& request) const;
			DescribeZoneRecordsOutcome describeZoneRecords(const Model::DescribeZoneRecordsRequest &request)const;
			void describeZoneRecordsAsync(const Model::DescribeZoneRecordsRequest& request, const DescribeZoneRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZoneRecordsOutcomeCallable describeZoneRecordsCallable(const Model::DescribeZoneRecordsRequest& request) const;
			DescribeZoneVpcTreeOutcome describeZoneVpcTree(const Model::DescribeZoneVpcTreeRequest &request)const;
			void describeZoneVpcTreeAsync(const Model::DescribeZoneVpcTreeRequest& request, const DescribeZoneVpcTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZoneVpcTreeOutcomeCallable describeZoneVpcTreeCallable(const Model::DescribeZoneVpcTreeRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			SetProxyPatternOutcome setProxyPattern(const Model::SetProxyPatternRequest &request)const;
			void setProxyPatternAsync(const Model::SetProxyPatternRequest& request, const SetProxyPatternAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetProxyPatternOutcomeCallable setProxyPatternCallable(const Model::SetProxyPatternRequest& request) const;
			SetZoneRecordStatusOutcome setZoneRecordStatus(const Model::SetZoneRecordStatusRequest &request)const;
			void setZoneRecordStatusAsync(const Model::SetZoneRecordStatusRequest& request, const SetZoneRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetZoneRecordStatusOutcomeCallable setZoneRecordStatusCallable(const Model::SetZoneRecordStatusRequest& request) const;
			UpdateRecordRemarkOutcome updateRecordRemark(const Model::UpdateRecordRemarkRequest &request)const;
			void updateRecordRemarkAsync(const Model::UpdateRecordRemarkRequest& request, const UpdateRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRecordRemarkOutcomeCallable updateRecordRemarkCallable(const Model::UpdateRecordRemarkRequest& request) const;
			UpdateZoneRecordOutcome updateZoneRecord(const Model::UpdateZoneRecordRequest &request)const;
			void updateZoneRecordAsync(const Model::UpdateZoneRecordRequest& request, const UpdateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateZoneRecordOutcomeCallable updateZoneRecordCallable(const Model::UpdateZoneRecordRequest& request) const;
			UpdateZoneRemarkOutcome updateZoneRemark(const Model::UpdateZoneRemarkRequest &request)const;
			void updateZoneRemarkAsync(const Model::UpdateZoneRemarkRequest& request, const UpdateZoneRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateZoneRemarkOutcomeCallable updateZoneRemarkCallable(const Model::UpdateZoneRemarkRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_PVTZ_PVTZCLIENT_H_
