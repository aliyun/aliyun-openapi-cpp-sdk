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

#ifndef ALIBABACLOUD_PUSH_PUSHCLIENT_H_
#define ALIBABACLOUD_PUSH_PUSHCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "PushExport.h"
#include "model/UnbindTagRequest.h"
#include "model/UnbindTagResult.h"
#include "model/QueryDeviceStatRequest.h"
#include "model/QueryDeviceStatResult.h"
#include "model/QueryPushStatByAppRequest.h"
#include "model/QueryPushStatByAppResult.h"
#include "model/CheckDeviceRequest.h"
#include "model/CheckDeviceResult.h"
#include "model/ListPushRecordsRequest.h"
#include "model/ListPushRecordsResult.h"
#include "model/QueryDevicesByAliasRequest.h"
#include "model/QueryDevicesByAliasResult.h"
#include "model/PushRequest.h"
#include "model/PushResult.h"
#include "model/QueryTagsRequest.h"
#include "model/QueryTagsResult.h"
#include "model/UnbindAliasRequest.h"
#include "model/UnbindAliasResult.h"
#include "model/QueryDeviceInfoRequest.h"
#include "model/QueryDeviceInfoResult.h"
#include "model/QueryPushStatByMsgRequest.h"
#include "model/QueryPushStatByMsgResult.h"
#include "model/QueryAliasesRequest.h"
#include "model/QueryAliasesResult.h"
#include "model/QueryUniqueDeviceStatRequest.h"
#include "model/QueryUniqueDeviceStatResult.h"
#include "model/ListSummaryAppsRequest.h"
#include "model/ListSummaryAppsResult.h"
#include "model/PushMessageToAndroidRequest.h"
#include "model/PushMessageToAndroidResult.h"
#include "model/QueryDevicesByAccountRequest.h"
#include "model/QueryDevicesByAccountResult.h"
#include "model/BindAliasRequest.h"
#include "model/BindAliasResult.h"
#include "model/UnbindPhoneRequest.h"
#include "model/UnbindPhoneResult.h"
#include "model/PushNoticeToiOSRequest.h"
#include "model/PushNoticeToiOSResult.h"
#include "model/CheckDevicesRequest.h"
#include "model/CheckDevicesResult.h"
#include "model/CancelPushRequest.h"
#include "model/CancelPushResult.h"
#include "model/RemoveTagRequest.h"
#include "model/RemoveTagResult.h"
#include "model/ListTagsRequest.h"
#include "model/ListTagsResult.h"
#include "model/BindTagRequest.h"
#include "model/BindTagResult.h"
#include "model/PushMessageToiOSRequest.h"
#include "model/PushMessageToiOSResult.h"
#include "model/BindPhoneRequest.h"
#include "model/BindPhoneResult.h"
#include "model/PushNoticeToAndroidRequest.h"
#include "model/PushNoticeToAndroidResult.h"
#include "model/QueryPushListRequest.h"
#include "model/QueryPushListResult.h"


namespace AlibabaCloud
{
	namespace Push
	{
		class ALIBABACLOUD_PUSH_EXPORT PushClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::UnbindTagResult> UnbindTagOutcome;
			typedef std::future<UnbindTagOutcome> UnbindTagOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::UnbindTagRequest&, const UnbindTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindTagAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceStatResult> QueryDeviceStatOutcome;
			typedef std::future<QueryDeviceStatOutcome> QueryDeviceStatOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryDeviceStatRequest&, const QueryDeviceStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceStatAsyncHandler;
			typedef Outcome<Error, Model::QueryPushStatByAppResult> QueryPushStatByAppOutcome;
			typedef std::future<QueryPushStatByAppOutcome> QueryPushStatByAppOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryPushStatByAppRequest&, const QueryPushStatByAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPushStatByAppAsyncHandler;
			typedef Outcome<Error, Model::CheckDeviceResult> CheckDeviceOutcome;
			typedef std::future<CheckDeviceOutcome> CheckDeviceOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::CheckDeviceRequest&, const CheckDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListPushRecordsResult> ListPushRecordsOutcome;
			typedef std::future<ListPushRecordsOutcome> ListPushRecordsOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::ListPushRecordsRequest&, const ListPushRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPushRecordsAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicesByAliasResult> QueryDevicesByAliasOutcome;
			typedef std::future<QueryDevicesByAliasOutcome> QueryDevicesByAliasOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryDevicesByAliasRequest&, const QueryDevicesByAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicesByAliasAsyncHandler;
			typedef Outcome<Error, Model::PushResult> PushOutcome;
			typedef std::future<PushOutcome> PushOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::PushRequest&, const PushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushAsyncHandler;
			typedef Outcome<Error, Model::QueryTagsResult> QueryTagsOutcome;
			typedef std::future<QueryTagsOutcome> QueryTagsOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryTagsRequest&, const QueryTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTagsAsyncHandler;
			typedef Outcome<Error, Model::UnbindAliasResult> UnbindAliasOutcome;
			typedef std::future<UnbindAliasOutcome> UnbindAliasOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::UnbindAliasRequest&, const UnbindAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAliasAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceInfoResult> QueryDeviceInfoOutcome;
			typedef std::future<QueryDeviceInfoOutcome> QueryDeviceInfoOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryDeviceInfoRequest&, const QueryDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryPushStatByMsgResult> QueryPushStatByMsgOutcome;
			typedef std::future<QueryPushStatByMsgOutcome> QueryPushStatByMsgOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryPushStatByMsgRequest&, const QueryPushStatByMsgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPushStatByMsgAsyncHandler;
			typedef Outcome<Error, Model::QueryAliasesResult> QueryAliasesOutcome;
			typedef std::future<QueryAliasesOutcome> QueryAliasesOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryAliasesRequest&, const QueryAliasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAliasesAsyncHandler;
			typedef Outcome<Error, Model::QueryUniqueDeviceStatResult> QueryUniqueDeviceStatOutcome;
			typedef std::future<QueryUniqueDeviceStatOutcome> QueryUniqueDeviceStatOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryUniqueDeviceStatRequest&, const QueryUniqueDeviceStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUniqueDeviceStatAsyncHandler;
			typedef Outcome<Error, Model::ListSummaryAppsResult> ListSummaryAppsOutcome;
			typedef std::future<ListSummaryAppsOutcome> ListSummaryAppsOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::ListSummaryAppsRequest&, const ListSummaryAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSummaryAppsAsyncHandler;
			typedef Outcome<Error, Model::PushMessageToAndroidResult> PushMessageToAndroidOutcome;
			typedef std::future<PushMessageToAndroidOutcome> PushMessageToAndroidOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::PushMessageToAndroidRequest&, const PushMessageToAndroidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushMessageToAndroidAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicesByAccountResult> QueryDevicesByAccountOutcome;
			typedef std::future<QueryDevicesByAccountOutcome> QueryDevicesByAccountOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryDevicesByAccountRequest&, const QueryDevicesByAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicesByAccountAsyncHandler;
			typedef Outcome<Error, Model::BindAliasResult> BindAliasOutcome;
			typedef std::future<BindAliasOutcome> BindAliasOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::BindAliasRequest&, const BindAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAliasAsyncHandler;
			typedef Outcome<Error, Model::UnbindPhoneResult> UnbindPhoneOutcome;
			typedef std::future<UnbindPhoneOutcome> UnbindPhoneOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::UnbindPhoneRequest&, const UnbindPhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindPhoneAsyncHandler;
			typedef Outcome<Error, Model::PushNoticeToiOSResult> PushNoticeToiOSOutcome;
			typedef std::future<PushNoticeToiOSOutcome> PushNoticeToiOSOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::PushNoticeToiOSRequest&, const PushNoticeToiOSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushNoticeToiOSAsyncHandler;
			typedef Outcome<Error, Model::CheckDevicesResult> CheckDevicesOutcome;
			typedef std::future<CheckDevicesOutcome> CheckDevicesOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::CheckDevicesRequest&, const CheckDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDevicesAsyncHandler;
			typedef Outcome<Error, Model::CancelPushResult> CancelPushOutcome;
			typedef std::future<CancelPushOutcome> CancelPushOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::CancelPushRequest&, const CancelPushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPushAsyncHandler;
			typedef Outcome<Error, Model::RemoveTagResult> RemoveTagOutcome;
			typedef std::future<RemoveTagOutcome> RemoveTagOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::RemoveTagRequest&, const RemoveTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTagAsyncHandler;
			typedef Outcome<Error, Model::ListTagsResult> ListTagsOutcome;
			typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::ListTagsRequest&, const ListTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsAsyncHandler;
			typedef Outcome<Error, Model::BindTagResult> BindTagOutcome;
			typedef std::future<BindTagOutcome> BindTagOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::BindTagRequest&, const BindTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindTagAsyncHandler;
			typedef Outcome<Error, Model::PushMessageToiOSResult> PushMessageToiOSOutcome;
			typedef std::future<PushMessageToiOSOutcome> PushMessageToiOSOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::PushMessageToiOSRequest&, const PushMessageToiOSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushMessageToiOSAsyncHandler;
			typedef Outcome<Error, Model::BindPhoneResult> BindPhoneOutcome;
			typedef std::future<BindPhoneOutcome> BindPhoneOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::BindPhoneRequest&, const BindPhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindPhoneAsyncHandler;
			typedef Outcome<Error, Model::PushNoticeToAndroidResult> PushNoticeToAndroidOutcome;
			typedef std::future<PushNoticeToAndroidOutcome> PushNoticeToAndroidOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::PushNoticeToAndroidRequest&, const PushNoticeToAndroidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushNoticeToAndroidAsyncHandler;
			typedef Outcome<Error, Model::QueryPushListResult> QueryPushListOutcome;
			typedef std::future<QueryPushListOutcome> QueryPushListOutcomeCallable;
			typedef std::function<void(const PushClient*, const Model::QueryPushListRequest&, const QueryPushListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPushListAsyncHandler;

			PushClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PushClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PushClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PushClient();
			UnbindTagOutcome unbindTag(const Model::UnbindTagRequest &request)const;
			void unbindTagAsync(const Model::UnbindTagRequest& request, const UnbindTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindTagOutcomeCallable unbindTagCallable(const Model::UnbindTagRequest& request) const;
			QueryDeviceStatOutcome queryDeviceStat(const Model::QueryDeviceStatRequest &request)const;
			void queryDeviceStatAsync(const Model::QueryDeviceStatRequest& request, const QueryDeviceStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceStatOutcomeCallable queryDeviceStatCallable(const Model::QueryDeviceStatRequest& request) const;
			QueryPushStatByAppOutcome queryPushStatByApp(const Model::QueryPushStatByAppRequest &request)const;
			void queryPushStatByAppAsync(const Model::QueryPushStatByAppRequest& request, const QueryPushStatByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPushStatByAppOutcomeCallable queryPushStatByAppCallable(const Model::QueryPushStatByAppRequest& request) const;
			CheckDeviceOutcome checkDevice(const Model::CheckDeviceRequest &request)const;
			void checkDeviceAsync(const Model::CheckDeviceRequest& request, const CheckDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDeviceOutcomeCallable checkDeviceCallable(const Model::CheckDeviceRequest& request) const;
			ListPushRecordsOutcome listPushRecords(const Model::ListPushRecordsRequest &request)const;
			void listPushRecordsAsync(const Model::ListPushRecordsRequest& request, const ListPushRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPushRecordsOutcomeCallable listPushRecordsCallable(const Model::ListPushRecordsRequest& request) const;
			QueryDevicesByAliasOutcome queryDevicesByAlias(const Model::QueryDevicesByAliasRequest &request)const;
			void queryDevicesByAliasAsync(const Model::QueryDevicesByAliasRequest& request, const QueryDevicesByAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicesByAliasOutcomeCallable queryDevicesByAliasCallable(const Model::QueryDevicesByAliasRequest& request) const;
			PushOutcome push(const Model::PushRequest &request)const;
			void pushAsync(const Model::PushRequest& request, const PushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushOutcomeCallable pushCallable(const Model::PushRequest& request) const;
			QueryTagsOutcome queryTags(const Model::QueryTagsRequest &request)const;
			void queryTagsAsync(const Model::QueryTagsRequest& request, const QueryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTagsOutcomeCallable queryTagsCallable(const Model::QueryTagsRequest& request) const;
			UnbindAliasOutcome unbindAlias(const Model::UnbindAliasRequest &request)const;
			void unbindAliasAsync(const Model::UnbindAliasRequest& request, const UnbindAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindAliasOutcomeCallable unbindAliasCallable(const Model::UnbindAliasRequest& request) const;
			QueryDeviceInfoOutcome queryDeviceInfo(const Model::QueryDeviceInfoRequest &request)const;
			void queryDeviceInfoAsync(const Model::QueryDeviceInfoRequest& request, const QueryDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceInfoOutcomeCallable queryDeviceInfoCallable(const Model::QueryDeviceInfoRequest& request) const;
			QueryPushStatByMsgOutcome queryPushStatByMsg(const Model::QueryPushStatByMsgRequest &request)const;
			void queryPushStatByMsgAsync(const Model::QueryPushStatByMsgRequest& request, const QueryPushStatByMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPushStatByMsgOutcomeCallable queryPushStatByMsgCallable(const Model::QueryPushStatByMsgRequest& request) const;
			QueryAliasesOutcome queryAliases(const Model::QueryAliasesRequest &request)const;
			void queryAliasesAsync(const Model::QueryAliasesRequest& request, const QueryAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAliasesOutcomeCallable queryAliasesCallable(const Model::QueryAliasesRequest& request) const;
			QueryUniqueDeviceStatOutcome queryUniqueDeviceStat(const Model::QueryUniqueDeviceStatRequest &request)const;
			void queryUniqueDeviceStatAsync(const Model::QueryUniqueDeviceStatRequest& request, const QueryUniqueDeviceStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUniqueDeviceStatOutcomeCallable queryUniqueDeviceStatCallable(const Model::QueryUniqueDeviceStatRequest& request) const;
			ListSummaryAppsOutcome listSummaryApps(const Model::ListSummaryAppsRequest &request)const;
			void listSummaryAppsAsync(const Model::ListSummaryAppsRequest& request, const ListSummaryAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSummaryAppsOutcomeCallable listSummaryAppsCallable(const Model::ListSummaryAppsRequest& request) const;
			PushMessageToAndroidOutcome pushMessageToAndroid(const Model::PushMessageToAndroidRequest &request)const;
			void pushMessageToAndroidAsync(const Model::PushMessageToAndroidRequest& request, const PushMessageToAndroidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushMessageToAndroidOutcomeCallable pushMessageToAndroidCallable(const Model::PushMessageToAndroidRequest& request) const;
			QueryDevicesByAccountOutcome queryDevicesByAccount(const Model::QueryDevicesByAccountRequest &request)const;
			void queryDevicesByAccountAsync(const Model::QueryDevicesByAccountRequest& request, const QueryDevicesByAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicesByAccountOutcomeCallable queryDevicesByAccountCallable(const Model::QueryDevicesByAccountRequest& request) const;
			BindAliasOutcome bindAlias(const Model::BindAliasRequest &request)const;
			void bindAliasAsync(const Model::BindAliasRequest& request, const BindAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAliasOutcomeCallable bindAliasCallable(const Model::BindAliasRequest& request) const;
			UnbindPhoneOutcome unbindPhone(const Model::UnbindPhoneRequest &request)const;
			void unbindPhoneAsync(const Model::UnbindPhoneRequest& request, const UnbindPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindPhoneOutcomeCallable unbindPhoneCallable(const Model::UnbindPhoneRequest& request) const;
			PushNoticeToiOSOutcome pushNoticeToiOS(const Model::PushNoticeToiOSRequest &request)const;
			void pushNoticeToiOSAsync(const Model::PushNoticeToiOSRequest& request, const PushNoticeToiOSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushNoticeToiOSOutcomeCallable pushNoticeToiOSCallable(const Model::PushNoticeToiOSRequest& request) const;
			CheckDevicesOutcome checkDevices(const Model::CheckDevicesRequest &request)const;
			void checkDevicesAsync(const Model::CheckDevicesRequest& request, const CheckDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDevicesOutcomeCallable checkDevicesCallable(const Model::CheckDevicesRequest& request) const;
			CancelPushOutcome cancelPush(const Model::CancelPushRequest &request)const;
			void cancelPushAsync(const Model::CancelPushRequest& request, const CancelPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPushOutcomeCallable cancelPushCallable(const Model::CancelPushRequest& request) const;
			RemoveTagOutcome removeTag(const Model::RemoveTagRequest &request)const;
			void removeTagAsync(const Model::RemoveTagRequest& request, const RemoveTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTagOutcomeCallable removeTagCallable(const Model::RemoveTagRequest& request) const;
			ListTagsOutcome listTags(const Model::ListTagsRequest &request)const;
			void listTagsAsync(const Model::ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsOutcomeCallable listTagsCallable(const Model::ListTagsRequest& request) const;
			BindTagOutcome bindTag(const Model::BindTagRequest &request)const;
			void bindTagAsync(const Model::BindTagRequest& request, const BindTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindTagOutcomeCallable bindTagCallable(const Model::BindTagRequest& request) const;
			PushMessageToiOSOutcome pushMessageToiOS(const Model::PushMessageToiOSRequest &request)const;
			void pushMessageToiOSAsync(const Model::PushMessageToiOSRequest& request, const PushMessageToiOSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushMessageToiOSOutcomeCallable pushMessageToiOSCallable(const Model::PushMessageToiOSRequest& request) const;
			BindPhoneOutcome bindPhone(const Model::BindPhoneRequest &request)const;
			void bindPhoneAsync(const Model::BindPhoneRequest& request, const BindPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindPhoneOutcomeCallable bindPhoneCallable(const Model::BindPhoneRequest& request) const;
			PushNoticeToAndroidOutcome pushNoticeToAndroid(const Model::PushNoticeToAndroidRequest &request)const;
			void pushNoticeToAndroidAsync(const Model::PushNoticeToAndroidRequest& request, const PushNoticeToAndroidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushNoticeToAndroidOutcomeCallable pushNoticeToAndroidCallable(const Model::PushNoticeToAndroidRequest& request) const;
			QueryPushListOutcome queryPushList(const Model::QueryPushListRequest &request)const;
			void queryPushListAsync(const Model::QueryPushListRequest& request, const QueryPushListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPushListOutcomeCallable queryPushListCallable(const Model::QueryPushListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_PUSH_PUSHCLIENT_H_
