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

#ifndef ALIBABACLOUD_DYSMSAPI_DYSMSAPICLIENT_H_
#define ALIBABACLOUD_DYSMSAPI_DYSMSAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DysmsapiExport.h"
#include "model/AddShortUrlRequest.h"
#include "model/AddShortUrlResult.h"
#include "model/AddSmsSignRequest.h"
#include "model/AddSmsSignResult.h"
#include "model/AddSmsTemplateRequest.h"
#include "model/AddSmsTemplateResult.h"
#include "model/DeleteShortUrlRequest.h"
#include "model/DeleteShortUrlResult.h"
#include "model/DeleteSmsSignRequest.h"
#include "model/DeleteSmsSignResult.h"
#include "model/DeleteSmsTemplateRequest.h"
#include "model/DeleteSmsTemplateResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifySmsSignRequest.h"
#include "model/ModifySmsSignResult.h"
#include "model/ModifySmsTemplateRequest.h"
#include "model/ModifySmsTemplateResult.h"
#include "model/QuerySendDetailsRequest.h"
#include "model/QuerySendDetailsResult.h"
#include "model/QuerySendStatisticsRequest.h"
#include "model/QuerySendStatisticsResult.h"
#include "model/QueryShortUrlRequest.h"
#include "model/QueryShortUrlResult.h"
#include "model/QuerySmsSignRequest.h"
#include "model/QuerySmsSignResult.h"
#include "model/QuerySmsSignListRequest.h"
#include "model/QuerySmsSignListResult.h"
#include "model/QuerySmsTemplateRequest.h"
#include "model/QuerySmsTemplateResult.h"
#include "model/QuerySmsTemplateListRequest.h"
#include "model/QuerySmsTemplateListResult.h"
#include "model/SendBatchSmsRequest.h"
#include "model/SendBatchSmsResult.h"
#include "model/SendSmsRequest.h"
#include "model/SendSmsResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		class ALIBABACLOUD_DYSMSAPI_EXPORT DysmsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddShortUrlResult> AddShortUrlOutcome;
			typedef std::future<AddShortUrlOutcome> AddShortUrlOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::AddShortUrlRequest&, const AddShortUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddShortUrlAsyncHandler;
			typedef Outcome<Error, Model::AddSmsSignResult> AddSmsSignOutcome;
			typedef std::future<AddSmsSignOutcome> AddSmsSignOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::AddSmsSignRequest&, const AddSmsSignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsSignAsyncHandler;
			typedef Outcome<Error, Model::AddSmsTemplateResult> AddSmsTemplateOutcome;
			typedef std::future<AddSmsTemplateOutcome> AddSmsTemplateOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::AddSmsTemplateRequest&, const AddSmsTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteShortUrlResult> DeleteShortUrlOutcome;
			typedef std::future<DeleteShortUrlOutcome> DeleteShortUrlOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::DeleteShortUrlRequest&, const DeleteShortUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShortUrlAsyncHandler;
			typedef Outcome<Error, Model::DeleteSmsSignResult> DeleteSmsSignOutcome;
			typedef std::future<DeleteSmsSignOutcome> DeleteSmsSignOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::DeleteSmsSignRequest&, const DeleteSmsSignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmsSignAsyncHandler;
			typedef Outcome<Error, Model::DeleteSmsTemplateResult> DeleteSmsTemplateOutcome;
			typedef std::future<DeleteSmsTemplateOutcome> DeleteSmsTemplateOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::DeleteSmsTemplateRequest&, const DeleteSmsTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmsTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifySmsSignResult> ModifySmsSignOutcome;
			typedef std::future<ModifySmsSignOutcome> ModifySmsSignOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::ModifySmsSignRequest&, const ModifySmsSignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsSignAsyncHandler;
			typedef Outcome<Error, Model::ModifySmsTemplateResult> ModifySmsTemplateOutcome;
			typedef std::future<ModifySmsTemplateOutcome> ModifySmsTemplateOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::ModifySmsTemplateRequest&, const ModifySmsTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsTemplateAsyncHandler;
			typedef Outcome<Error, Model::QuerySendDetailsResult> QuerySendDetailsOutcome;
			typedef std::future<QuerySendDetailsOutcome> QuerySendDetailsOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QuerySendDetailsRequest&, const QuerySendDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySendDetailsAsyncHandler;
			typedef Outcome<Error, Model::QuerySendStatisticsResult> QuerySendStatisticsOutcome;
			typedef std::future<QuerySendStatisticsOutcome> QuerySendStatisticsOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QuerySendStatisticsRequest&, const QuerySendStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySendStatisticsAsyncHandler;
			typedef Outcome<Error, Model::QueryShortUrlResult> QueryShortUrlOutcome;
			typedef std::future<QueryShortUrlOutcome> QueryShortUrlOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QueryShortUrlRequest&, const QueryShortUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryShortUrlAsyncHandler;
			typedef Outcome<Error, Model::QuerySmsSignResult> QuerySmsSignOutcome;
			typedef std::future<QuerySmsSignOutcome> QuerySmsSignOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QuerySmsSignRequest&, const QuerySmsSignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmsSignAsyncHandler;
			typedef Outcome<Error, Model::QuerySmsSignListResult> QuerySmsSignListOutcome;
			typedef std::future<QuerySmsSignListOutcome> QuerySmsSignListOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QuerySmsSignListRequest&, const QuerySmsSignListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmsSignListAsyncHandler;
			typedef Outcome<Error, Model::QuerySmsTemplateResult> QuerySmsTemplateOutcome;
			typedef std::future<QuerySmsTemplateOutcome> QuerySmsTemplateOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QuerySmsTemplateRequest&, const QuerySmsTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmsTemplateAsyncHandler;
			typedef Outcome<Error, Model::QuerySmsTemplateListResult> QuerySmsTemplateListOutcome;
			typedef std::future<QuerySmsTemplateListOutcome> QuerySmsTemplateListOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QuerySmsTemplateListRequest&, const QuerySmsTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmsTemplateListAsyncHandler;
			typedef Outcome<Error, Model::SendBatchSmsResult> SendBatchSmsOutcome;
			typedef std::future<SendBatchSmsOutcome> SendBatchSmsOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::SendBatchSmsRequest&, const SendBatchSmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendBatchSmsAsyncHandler;
			typedef Outcome<Error, Model::SendSmsResult> SendSmsOutcome;
			typedef std::future<SendSmsOutcome> SendSmsOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::SendSmsRequest&, const SendSmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			DysmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DysmsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DysmsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DysmsapiClient();
			AddShortUrlOutcome addShortUrl(const Model::AddShortUrlRequest &request)const;
			void addShortUrlAsync(const Model::AddShortUrlRequest& request, const AddShortUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddShortUrlOutcomeCallable addShortUrlCallable(const Model::AddShortUrlRequest& request) const;
			AddSmsSignOutcome addSmsSign(const Model::AddSmsSignRequest &request)const;
			void addSmsSignAsync(const Model::AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSmsSignOutcomeCallable addSmsSignCallable(const Model::AddSmsSignRequest& request) const;
			AddSmsTemplateOutcome addSmsTemplate(const Model::AddSmsTemplateRequest &request)const;
			void addSmsTemplateAsync(const Model::AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSmsTemplateOutcomeCallable addSmsTemplateCallable(const Model::AddSmsTemplateRequest& request) const;
			DeleteShortUrlOutcome deleteShortUrl(const Model::DeleteShortUrlRequest &request)const;
			void deleteShortUrlAsync(const Model::DeleteShortUrlRequest& request, const DeleteShortUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteShortUrlOutcomeCallable deleteShortUrlCallable(const Model::DeleteShortUrlRequest& request) const;
			DeleteSmsSignOutcome deleteSmsSign(const Model::DeleteSmsSignRequest &request)const;
			void deleteSmsSignAsync(const Model::DeleteSmsSignRequest& request, const DeleteSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSmsSignOutcomeCallable deleteSmsSignCallable(const Model::DeleteSmsSignRequest& request) const;
			DeleteSmsTemplateOutcome deleteSmsTemplate(const Model::DeleteSmsTemplateRequest &request)const;
			void deleteSmsTemplateAsync(const Model::DeleteSmsTemplateRequest& request, const DeleteSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSmsTemplateOutcomeCallable deleteSmsTemplateCallable(const Model::DeleteSmsTemplateRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifySmsSignOutcome modifySmsSign(const Model::ModifySmsSignRequest &request)const;
			void modifySmsSignAsync(const Model::ModifySmsSignRequest& request, const ModifySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmsSignOutcomeCallable modifySmsSignCallable(const Model::ModifySmsSignRequest& request) const;
			ModifySmsTemplateOutcome modifySmsTemplate(const Model::ModifySmsTemplateRequest &request)const;
			void modifySmsTemplateAsync(const Model::ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmsTemplateOutcomeCallable modifySmsTemplateCallable(const Model::ModifySmsTemplateRequest& request) const;
			QuerySendDetailsOutcome querySendDetails(const Model::QuerySendDetailsRequest &request)const;
			void querySendDetailsAsync(const Model::QuerySendDetailsRequest& request, const QuerySendDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySendDetailsOutcomeCallable querySendDetailsCallable(const Model::QuerySendDetailsRequest& request) const;
			QuerySendStatisticsOutcome querySendStatistics(const Model::QuerySendStatisticsRequest &request)const;
			void querySendStatisticsAsync(const Model::QuerySendStatisticsRequest& request, const QuerySendStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySendStatisticsOutcomeCallable querySendStatisticsCallable(const Model::QuerySendStatisticsRequest& request) const;
			QueryShortUrlOutcome queryShortUrl(const Model::QueryShortUrlRequest &request)const;
			void queryShortUrlAsync(const Model::QueryShortUrlRequest& request, const QueryShortUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryShortUrlOutcomeCallable queryShortUrlCallable(const Model::QueryShortUrlRequest& request) const;
			QuerySmsSignOutcome querySmsSign(const Model::QuerySmsSignRequest &request)const;
			void querySmsSignAsync(const Model::QuerySmsSignRequest& request, const QuerySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmsSignOutcomeCallable querySmsSignCallable(const Model::QuerySmsSignRequest& request) const;
			QuerySmsSignListOutcome querySmsSignList(const Model::QuerySmsSignListRequest &request)const;
			void querySmsSignListAsync(const Model::QuerySmsSignListRequest& request, const QuerySmsSignListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmsSignListOutcomeCallable querySmsSignListCallable(const Model::QuerySmsSignListRequest& request) const;
			QuerySmsTemplateOutcome querySmsTemplate(const Model::QuerySmsTemplateRequest &request)const;
			void querySmsTemplateAsync(const Model::QuerySmsTemplateRequest& request, const QuerySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmsTemplateOutcomeCallable querySmsTemplateCallable(const Model::QuerySmsTemplateRequest& request) const;
			QuerySmsTemplateListOutcome querySmsTemplateList(const Model::QuerySmsTemplateListRequest &request)const;
			void querySmsTemplateListAsync(const Model::QuerySmsTemplateListRequest& request, const QuerySmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmsTemplateListOutcomeCallable querySmsTemplateListCallable(const Model::QuerySmsTemplateListRequest& request) const;
			SendBatchSmsOutcome sendBatchSms(const Model::SendBatchSmsRequest &request)const;
			void sendBatchSmsAsync(const Model::SendBatchSmsRequest& request, const SendBatchSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendBatchSmsOutcomeCallable sendBatchSmsCallable(const Model::SendBatchSmsRequest& request) const;
			SendSmsOutcome sendSms(const Model::SendSmsRequest &request)const;
			void sendSmsAsync(const Model::SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendSmsOutcomeCallable sendSmsCallable(const Model::SendSmsRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYSMSAPI_DYSMSAPICLIENT_H_
