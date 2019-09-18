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

#ifndef ALIBABACLOUD_APPMALLSSERVICE_APPMALLSSERVICECLIENT_H_
#define ALIBABACLOUD_APPMALLSSERVICE_APPMALLSSERVICECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AppMallsServiceExport.h"
#include "model/GetMessagesRequest.h"
#include "model/GetMessagesResult.h"
#include "model/RemoveMessagesRequest.h"
#include "model/RemoveMessagesResult.h"
#include "model/TaobaoFilmGetCinemasRequest.h"
#include "model/TaobaoFilmGetCinemasResult.h"
#include "model/TaobaoFilmGetHotShowsRequest.h"
#include "model/TaobaoFilmGetHotShowsResult.h"
#include "model/TaobaoFilmGetRegionListRequest.h"
#include "model/TaobaoFilmGetRegionListResult.h"
#include "model/TaobaoFilmGetSchedulesRequest.h"
#include "model/TaobaoFilmGetSchedulesResult.h"
#include "model/TaobaoFilmGetSeatsRequest.h"
#include "model/TaobaoFilmGetSeatsResult.h"
#include "model/TaobaoFilmGetShowCommentsRequest.h"
#include "model/TaobaoFilmGetShowCommentsResult.h"
#include "model/TaobaoFilmGetSoonShowsRequest.h"
#include "model/TaobaoFilmGetSoonShowsResult.h"
#include "model/TaobaoFilmIssueOrderRequest.h"
#include "model/TaobaoFilmIssueOrderResult.h"
#include "model/TaobaoFilmLockSeatRequest.h"
#include "model/TaobaoFilmLockSeatResult.h"
#include "model/TaobaoFilmUnLockSeatRequest.h"
#include "model/TaobaoFilmUnLockSeatResult.h"


namespace AlibabaCloud
{
	namespace AppMallsService
	{
		class ALIBABACLOUD_APPMALLSSERVICE_EXPORT AppMallsServiceClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetMessagesResult> GetMessagesOutcome;
			typedef std::future<GetMessagesOutcome> GetMessagesOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::GetMessagesRequest&, const GetMessagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessagesAsyncHandler;
			typedef Outcome<Error, Model::RemoveMessagesResult> RemoveMessagesOutcome;
			typedef std::future<RemoveMessagesOutcome> RemoveMessagesOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::RemoveMessagesRequest&, const RemoveMessagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMessagesAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmGetCinemasResult> TaobaoFilmGetCinemasOutcome;
			typedef std::future<TaobaoFilmGetCinemasOutcome> TaobaoFilmGetCinemasOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmGetCinemasRequest&, const TaobaoFilmGetCinemasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmGetCinemasAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmGetHotShowsResult> TaobaoFilmGetHotShowsOutcome;
			typedef std::future<TaobaoFilmGetHotShowsOutcome> TaobaoFilmGetHotShowsOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmGetHotShowsRequest&, const TaobaoFilmGetHotShowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmGetHotShowsAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmGetRegionListResult> TaobaoFilmGetRegionListOutcome;
			typedef std::future<TaobaoFilmGetRegionListOutcome> TaobaoFilmGetRegionListOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmGetRegionListRequest&, const TaobaoFilmGetRegionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmGetRegionListAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmGetSchedulesResult> TaobaoFilmGetSchedulesOutcome;
			typedef std::future<TaobaoFilmGetSchedulesOutcome> TaobaoFilmGetSchedulesOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmGetSchedulesRequest&, const TaobaoFilmGetSchedulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmGetSchedulesAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmGetSeatsResult> TaobaoFilmGetSeatsOutcome;
			typedef std::future<TaobaoFilmGetSeatsOutcome> TaobaoFilmGetSeatsOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmGetSeatsRequest&, const TaobaoFilmGetSeatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmGetSeatsAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmGetShowCommentsResult> TaobaoFilmGetShowCommentsOutcome;
			typedef std::future<TaobaoFilmGetShowCommentsOutcome> TaobaoFilmGetShowCommentsOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmGetShowCommentsRequest&, const TaobaoFilmGetShowCommentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmGetShowCommentsAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmGetSoonShowsResult> TaobaoFilmGetSoonShowsOutcome;
			typedef std::future<TaobaoFilmGetSoonShowsOutcome> TaobaoFilmGetSoonShowsOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmGetSoonShowsRequest&, const TaobaoFilmGetSoonShowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmGetSoonShowsAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmIssueOrderResult> TaobaoFilmIssueOrderOutcome;
			typedef std::future<TaobaoFilmIssueOrderOutcome> TaobaoFilmIssueOrderOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmIssueOrderRequest&, const TaobaoFilmIssueOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmIssueOrderAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmLockSeatResult> TaobaoFilmLockSeatOutcome;
			typedef std::future<TaobaoFilmLockSeatOutcome> TaobaoFilmLockSeatOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmLockSeatRequest&, const TaobaoFilmLockSeatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmLockSeatAsyncHandler;
			typedef Outcome<Error, Model::TaobaoFilmUnLockSeatResult> TaobaoFilmUnLockSeatOutcome;
			typedef std::future<TaobaoFilmUnLockSeatOutcome> TaobaoFilmUnLockSeatOutcomeCallable;
			typedef std::function<void(const AppMallsServiceClient*, const Model::TaobaoFilmUnLockSeatRequest&, const TaobaoFilmUnLockSeatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaobaoFilmUnLockSeatAsyncHandler;

			AppMallsServiceClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AppMallsServiceClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AppMallsServiceClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AppMallsServiceClient();
			GetMessagesOutcome getMessages(const Model::GetMessagesRequest &request)const;
			void getMessagesAsync(const Model::GetMessagesRequest& request, const GetMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessagesOutcomeCallable getMessagesCallable(const Model::GetMessagesRequest& request) const;
			RemoveMessagesOutcome removeMessages(const Model::RemoveMessagesRequest &request)const;
			void removeMessagesAsync(const Model::RemoveMessagesRequest& request, const RemoveMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveMessagesOutcomeCallable removeMessagesCallable(const Model::RemoveMessagesRequest& request) const;
			TaobaoFilmGetCinemasOutcome taobaoFilmGetCinemas(const Model::TaobaoFilmGetCinemasRequest &request)const;
			void taobaoFilmGetCinemasAsync(const Model::TaobaoFilmGetCinemasRequest& request, const TaobaoFilmGetCinemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmGetCinemasOutcomeCallable taobaoFilmGetCinemasCallable(const Model::TaobaoFilmGetCinemasRequest& request) const;
			TaobaoFilmGetHotShowsOutcome taobaoFilmGetHotShows(const Model::TaobaoFilmGetHotShowsRequest &request)const;
			void taobaoFilmGetHotShowsAsync(const Model::TaobaoFilmGetHotShowsRequest& request, const TaobaoFilmGetHotShowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmGetHotShowsOutcomeCallable taobaoFilmGetHotShowsCallable(const Model::TaobaoFilmGetHotShowsRequest& request) const;
			TaobaoFilmGetRegionListOutcome taobaoFilmGetRegionList(const Model::TaobaoFilmGetRegionListRequest &request)const;
			void taobaoFilmGetRegionListAsync(const Model::TaobaoFilmGetRegionListRequest& request, const TaobaoFilmGetRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmGetRegionListOutcomeCallable taobaoFilmGetRegionListCallable(const Model::TaobaoFilmGetRegionListRequest& request) const;
			TaobaoFilmGetSchedulesOutcome taobaoFilmGetSchedules(const Model::TaobaoFilmGetSchedulesRequest &request)const;
			void taobaoFilmGetSchedulesAsync(const Model::TaobaoFilmGetSchedulesRequest& request, const TaobaoFilmGetSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmGetSchedulesOutcomeCallable taobaoFilmGetSchedulesCallable(const Model::TaobaoFilmGetSchedulesRequest& request) const;
			TaobaoFilmGetSeatsOutcome taobaoFilmGetSeats(const Model::TaobaoFilmGetSeatsRequest &request)const;
			void taobaoFilmGetSeatsAsync(const Model::TaobaoFilmGetSeatsRequest& request, const TaobaoFilmGetSeatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmGetSeatsOutcomeCallable taobaoFilmGetSeatsCallable(const Model::TaobaoFilmGetSeatsRequest& request) const;
			TaobaoFilmGetShowCommentsOutcome taobaoFilmGetShowComments(const Model::TaobaoFilmGetShowCommentsRequest &request)const;
			void taobaoFilmGetShowCommentsAsync(const Model::TaobaoFilmGetShowCommentsRequest& request, const TaobaoFilmGetShowCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmGetShowCommentsOutcomeCallable taobaoFilmGetShowCommentsCallable(const Model::TaobaoFilmGetShowCommentsRequest& request) const;
			TaobaoFilmGetSoonShowsOutcome taobaoFilmGetSoonShows(const Model::TaobaoFilmGetSoonShowsRequest &request)const;
			void taobaoFilmGetSoonShowsAsync(const Model::TaobaoFilmGetSoonShowsRequest& request, const TaobaoFilmGetSoonShowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmGetSoonShowsOutcomeCallable taobaoFilmGetSoonShowsCallable(const Model::TaobaoFilmGetSoonShowsRequest& request) const;
			TaobaoFilmIssueOrderOutcome taobaoFilmIssueOrder(const Model::TaobaoFilmIssueOrderRequest &request)const;
			void taobaoFilmIssueOrderAsync(const Model::TaobaoFilmIssueOrderRequest& request, const TaobaoFilmIssueOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmIssueOrderOutcomeCallable taobaoFilmIssueOrderCallable(const Model::TaobaoFilmIssueOrderRequest& request) const;
			TaobaoFilmLockSeatOutcome taobaoFilmLockSeat(const Model::TaobaoFilmLockSeatRequest &request)const;
			void taobaoFilmLockSeatAsync(const Model::TaobaoFilmLockSeatRequest& request, const TaobaoFilmLockSeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmLockSeatOutcomeCallable taobaoFilmLockSeatCallable(const Model::TaobaoFilmLockSeatRequest& request) const;
			TaobaoFilmUnLockSeatOutcome taobaoFilmUnLockSeat(const Model::TaobaoFilmUnLockSeatRequest &request)const;
			void taobaoFilmUnLockSeatAsync(const Model::TaobaoFilmUnLockSeatRequest& request, const TaobaoFilmUnLockSeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaobaoFilmUnLockSeatOutcomeCallable taobaoFilmUnLockSeatCallable(const Model::TaobaoFilmUnLockSeatRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_APPMALLSSERVICE_APPMALLSSERVICECLIENT_H_
