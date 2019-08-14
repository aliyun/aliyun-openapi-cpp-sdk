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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_CUSANALYTIC_SC_ONLINECLIENT_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_CUSANALYTIC_SC_ONLINECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Cusanalytic_sc_onlineExport.h"
#include "model/DescribeLocationsRequest.h"
#include "model/DescribeLocationsResult.h"
#include "model/GetSupportStoreRequest.h"
#include "model/GetSupportStoreResult.h"
#include "model/DescribeActionDataRequest.h"
#include "model/DescribeActionDataResult.h"
#include "model/GetPortrayalRequest.h"
#include "model/GetPortrayalResult.h"
#include "model/GetHeatMapDataRequest.h"
#include "model/GetHeatMapDataResult.h"
#include "model/GetActionCursorRequest.h"
#include "model/GetActionCursorResult.h"
#include "model/GetImageUrlRequest.h"
#include "model/GetImageUrlResult.h"
#include "model/GetAnalyzePlaceDataRequest.h"
#include "model/GetAnalyzePlaceDataResult.h"
#include "model/GetOverviewDataRequest.h"
#include "model/GetOverviewDataResult.h"
#include "model/GetLocationsRequest.h"
#include "model/GetLocationsResult.h"
#include "model/GetAnalyzeCommodityDataRequest.h"
#include "model/GetAnalyzeCommodityDataResult.h"
#include "model/ListVisitorsRequest.h"
#include "model/ListVisitorsResult.h"
#include "model/GetEMapRequest.h"
#include "model/GetEMapResult.h"
#include "model/SearchPersonByImgRequest.h"
#include "model/SearchPersonByImgResult.h"


namespace AlibabaCloud
{
	namespace Cusanalytic_sc_online
	{
		class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT Cusanalytic_sc_onlineClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeLocationsResult> DescribeLocationsOutcome;
			typedef std::future<DescribeLocationsOutcome> DescribeLocationsOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::DescribeLocationsRequest&, const DescribeLocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocationsAsyncHandler;
			typedef Outcome<Error, Model::GetSupportStoreResult> GetSupportStoreOutcome;
			typedef std::future<GetSupportStoreOutcome> GetSupportStoreOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetSupportStoreRequest&, const GetSupportStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSupportStoreAsyncHandler;
			typedef Outcome<Error, Model::DescribeActionDataResult> DescribeActionDataOutcome;
			typedef std::future<DescribeActionDataOutcome> DescribeActionDataOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::DescribeActionDataRequest&, const DescribeActionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActionDataAsyncHandler;
			typedef Outcome<Error, Model::GetPortrayalResult> GetPortrayalOutcome;
			typedef std::future<GetPortrayalOutcome> GetPortrayalOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetPortrayalRequest&, const GetPortrayalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPortrayalAsyncHandler;
			typedef Outcome<Error, Model::GetHeatMapDataResult> GetHeatMapDataOutcome;
			typedef std::future<GetHeatMapDataOutcome> GetHeatMapDataOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetHeatMapDataRequest&, const GetHeatMapDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHeatMapDataAsyncHandler;
			typedef Outcome<Error, Model::GetActionCursorResult> GetActionCursorOutcome;
			typedef std::future<GetActionCursorOutcome> GetActionCursorOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetActionCursorRequest&, const GetActionCursorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetActionCursorAsyncHandler;
			typedef Outcome<Error, Model::GetImageUrlResult> GetImageUrlOutcome;
			typedef std::future<GetImageUrlOutcome> GetImageUrlOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetImageUrlRequest&, const GetImageUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageUrlAsyncHandler;
			typedef Outcome<Error, Model::GetAnalyzePlaceDataResult> GetAnalyzePlaceDataOutcome;
			typedef std::future<GetAnalyzePlaceDataOutcome> GetAnalyzePlaceDataOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetAnalyzePlaceDataRequest&, const GetAnalyzePlaceDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAnalyzePlaceDataAsyncHandler;
			typedef Outcome<Error, Model::GetOverviewDataResult> GetOverviewDataOutcome;
			typedef std::future<GetOverviewDataOutcome> GetOverviewDataOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetOverviewDataRequest&, const GetOverviewDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOverviewDataAsyncHandler;
			typedef Outcome<Error, Model::GetLocationsResult> GetLocationsOutcome;
			typedef std::future<GetLocationsOutcome> GetLocationsOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetLocationsRequest&, const GetLocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLocationsAsyncHandler;
			typedef Outcome<Error, Model::GetAnalyzeCommodityDataResult> GetAnalyzeCommodityDataOutcome;
			typedef std::future<GetAnalyzeCommodityDataOutcome> GetAnalyzeCommodityDataOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetAnalyzeCommodityDataRequest&, const GetAnalyzeCommodityDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAnalyzeCommodityDataAsyncHandler;
			typedef Outcome<Error, Model::ListVisitorsResult> ListVisitorsOutcome;
			typedef std::future<ListVisitorsOutcome> ListVisitorsOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::ListVisitorsRequest&, const ListVisitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVisitorsAsyncHandler;
			typedef Outcome<Error, Model::GetEMapResult> GetEMapOutcome;
			typedef std::future<GetEMapOutcome> GetEMapOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::GetEMapRequest&, const GetEMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEMapAsyncHandler;
			typedef Outcome<Error, Model::SearchPersonByImgResult> SearchPersonByImgOutcome;
			typedef std::future<SearchPersonByImgOutcome> SearchPersonByImgOutcomeCallable;
			typedef std::function<void(const Cusanalytic_sc_onlineClient*, const Model::SearchPersonByImgRequest&, const SearchPersonByImgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchPersonByImgAsyncHandler;

			Cusanalytic_sc_onlineClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Cusanalytic_sc_onlineClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Cusanalytic_sc_onlineClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Cusanalytic_sc_onlineClient();
			DescribeLocationsOutcome describeLocations(const Model::DescribeLocationsRequest &request)const;
			void describeLocationsAsync(const Model::DescribeLocationsRequest& request, const DescribeLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLocationsOutcomeCallable describeLocationsCallable(const Model::DescribeLocationsRequest& request) const;
			GetSupportStoreOutcome getSupportStore(const Model::GetSupportStoreRequest &request)const;
			void getSupportStoreAsync(const Model::GetSupportStoreRequest& request, const GetSupportStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSupportStoreOutcomeCallable getSupportStoreCallable(const Model::GetSupportStoreRequest& request) const;
			DescribeActionDataOutcome describeActionData(const Model::DescribeActionDataRequest &request)const;
			void describeActionDataAsync(const Model::DescribeActionDataRequest& request, const DescribeActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActionDataOutcomeCallable describeActionDataCallable(const Model::DescribeActionDataRequest& request) const;
			GetPortrayalOutcome getPortrayal(const Model::GetPortrayalRequest &request)const;
			void getPortrayalAsync(const Model::GetPortrayalRequest& request, const GetPortrayalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPortrayalOutcomeCallable getPortrayalCallable(const Model::GetPortrayalRequest& request) const;
			GetHeatMapDataOutcome getHeatMapData(const Model::GetHeatMapDataRequest &request)const;
			void getHeatMapDataAsync(const Model::GetHeatMapDataRequest& request, const GetHeatMapDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHeatMapDataOutcomeCallable getHeatMapDataCallable(const Model::GetHeatMapDataRequest& request) const;
			GetActionCursorOutcome getActionCursor(const Model::GetActionCursorRequest &request)const;
			void getActionCursorAsync(const Model::GetActionCursorRequest& request, const GetActionCursorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetActionCursorOutcomeCallable getActionCursorCallable(const Model::GetActionCursorRequest& request) const;
			GetImageUrlOutcome getImageUrl(const Model::GetImageUrlRequest &request)const;
			void getImageUrlAsync(const Model::GetImageUrlRequest& request, const GetImageUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageUrlOutcomeCallable getImageUrlCallable(const Model::GetImageUrlRequest& request) const;
			GetAnalyzePlaceDataOutcome getAnalyzePlaceData(const Model::GetAnalyzePlaceDataRequest &request)const;
			void getAnalyzePlaceDataAsync(const Model::GetAnalyzePlaceDataRequest& request, const GetAnalyzePlaceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAnalyzePlaceDataOutcomeCallable getAnalyzePlaceDataCallable(const Model::GetAnalyzePlaceDataRequest& request) const;
			GetOverviewDataOutcome getOverviewData(const Model::GetOverviewDataRequest &request)const;
			void getOverviewDataAsync(const Model::GetOverviewDataRequest& request, const GetOverviewDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOverviewDataOutcomeCallable getOverviewDataCallable(const Model::GetOverviewDataRequest& request) const;
			GetLocationsOutcome getLocations(const Model::GetLocationsRequest &request)const;
			void getLocationsAsync(const Model::GetLocationsRequest& request, const GetLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLocationsOutcomeCallable getLocationsCallable(const Model::GetLocationsRequest& request) const;
			GetAnalyzeCommodityDataOutcome getAnalyzeCommodityData(const Model::GetAnalyzeCommodityDataRequest &request)const;
			void getAnalyzeCommodityDataAsync(const Model::GetAnalyzeCommodityDataRequest& request, const GetAnalyzeCommodityDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAnalyzeCommodityDataOutcomeCallable getAnalyzeCommodityDataCallable(const Model::GetAnalyzeCommodityDataRequest& request) const;
			ListVisitorsOutcome listVisitors(const Model::ListVisitorsRequest &request)const;
			void listVisitorsAsync(const Model::ListVisitorsRequest& request, const ListVisitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVisitorsOutcomeCallable listVisitorsCallable(const Model::ListVisitorsRequest& request) const;
			GetEMapOutcome getEMap(const Model::GetEMapRequest &request)const;
			void getEMapAsync(const Model::GetEMapRequest& request, const GetEMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEMapOutcomeCallable getEMapCallable(const Model::GetEMapRequest& request) const;
			SearchPersonByImgOutcome searchPersonByImg(const Model::SearchPersonByImgRequest &request)const;
			void searchPersonByImgAsync(const Model::SearchPersonByImgRequest& request, const SearchPersonByImgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchPersonByImgOutcomeCallable searchPersonByImgCallable(const Model::SearchPersonByImgRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_CUSANALYTIC_SC_ONLINECLIENT_H_
