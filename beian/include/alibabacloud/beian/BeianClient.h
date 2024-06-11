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

#ifndef ALIBABACLOUD_BEIAN_BEIANCLIENT_H_
#define ALIBABACLOUD_BEIAN_BEIANCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "BeianExport.h"
#include "model/DeleteUnbeianIpCheckTypeRequest.h"
#include "model/DeleteUnbeianIpCheckTypeResult.h"
#include "model/GetMainDomainRequest.h"
#include "model/GetMainDomainResult.h"
#include "model/InsertUnbeianIpCheckTypeRequest.h"
#include "model/InsertUnbeianIpCheckTypeResult.h"
#include "model/ListUnbeianIpCheckTypeRequest.h"
#include "model/ListUnbeianIpCheckTypeResult.h"
#include "model/ManageAccessorDomainRequest.h"
#include "model/ManageAccessorDomainResult.h"
#include "model/ManageAccessorDomainWhiteListRequest.h"
#include "model/ManageAccessorDomainWhiteListResult.h"
#include "model/ManageAccessorIpRequest.h"
#include "model/ManageAccessorIpResult.h"
#include "model/QueryAccessorDomainRequest.h"
#include "model/QueryAccessorDomainResult.h"
#include "model/QueryAccessorDomainListRequest.h"
#include "model/QueryAccessorDomainListResult.h"
#include "model/QueryAccessorDomainStatusRequest.h"
#include "model/QueryAccessorDomainStatusResult.h"
#include "model/QueryAccessorDomainWhiteListRequest.h"
#include "model/QueryAccessorDomainWhiteListResult.h"
#include "model/QueryAccessorDomainsStatusRequest.h"
#include "model/QueryAccessorDomainsStatusResult.h"
#include "model/QueryAccessorIpRequest.h"
#include "model/QueryAccessorIpResult.h"
#include "model/SubmitAccessorFullDomainsOssListRequest.h"
#include "model/SubmitAccessorFullDomainsOssListResult.h"


namespace AlibabaCloud
{
	namespace Beian
	{
		class ALIBABACLOUD_BEIAN_EXPORT BeianClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DeleteUnbeianIpCheckTypeResult> DeleteUnbeianIpCheckTypeOutcome;
			typedef std::future<DeleteUnbeianIpCheckTypeOutcome> DeleteUnbeianIpCheckTypeOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::DeleteUnbeianIpCheckTypeRequest&, const DeleteUnbeianIpCheckTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUnbeianIpCheckTypeAsyncHandler;
			typedef Outcome<Error, Model::GetMainDomainResult> GetMainDomainOutcome;
			typedef std::future<GetMainDomainOutcome> GetMainDomainOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::GetMainDomainRequest&, const GetMainDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMainDomainAsyncHandler;
			typedef Outcome<Error, Model::InsertUnbeianIpCheckTypeResult> InsertUnbeianIpCheckTypeOutcome;
			typedef std::future<InsertUnbeianIpCheckTypeOutcome> InsertUnbeianIpCheckTypeOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::InsertUnbeianIpCheckTypeRequest&, const InsertUnbeianIpCheckTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertUnbeianIpCheckTypeAsyncHandler;
			typedef Outcome<Error, Model::ListUnbeianIpCheckTypeResult> ListUnbeianIpCheckTypeOutcome;
			typedef std::future<ListUnbeianIpCheckTypeOutcome> ListUnbeianIpCheckTypeOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::ListUnbeianIpCheckTypeRequest&, const ListUnbeianIpCheckTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUnbeianIpCheckTypeAsyncHandler;
			typedef Outcome<Error, Model::ManageAccessorDomainResult> ManageAccessorDomainOutcome;
			typedef std::future<ManageAccessorDomainOutcome> ManageAccessorDomainOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::ManageAccessorDomainRequest&, const ManageAccessorDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManageAccessorDomainAsyncHandler;
			typedef Outcome<Error, Model::ManageAccessorDomainWhiteListResult> ManageAccessorDomainWhiteListOutcome;
			typedef std::future<ManageAccessorDomainWhiteListOutcome> ManageAccessorDomainWhiteListOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::ManageAccessorDomainWhiteListRequest&, const ManageAccessorDomainWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManageAccessorDomainWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ManageAccessorIpResult> ManageAccessorIpOutcome;
			typedef std::future<ManageAccessorIpOutcome> ManageAccessorIpOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::ManageAccessorIpRequest&, const ManageAccessorIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManageAccessorIpAsyncHandler;
			typedef Outcome<Error, Model::QueryAccessorDomainResult> QueryAccessorDomainOutcome;
			typedef std::future<QueryAccessorDomainOutcome> QueryAccessorDomainOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::QueryAccessorDomainRequest&, const QueryAccessorDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccessorDomainAsyncHandler;
			typedef Outcome<Error, Model::QueryAccessorDomainListResult> QueryAccessorDomainListOutcome;
			typedef std::future<QueryAccessorDomainListOutcome> QueryAccessorDomainListOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::QueryAccessorDomainListRequest&, const QueryAccessorDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccessorDomainListAsyncHandler;
			typedef Outcome<Error, Model::QueryAccessorDomainStatusResult> QueryAccessorDomainStatusOutcome;
			typedef std::future<QueryAccessorDomainStatusOutcome> QueryAccessorDomainStatusOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::QueryAccessorDomainStatusRequest&, const QueryAccessorDomainStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccessorDomainStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryAccessorDomainWhiteListResult> QueryAccessorDomainWhiteListOutcome;
			typedef std::future<QueryAccessorDomainWhiteListOutcome> QueryAccessorDomainWhiteListOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::QueryAccessorDomainWhiteListRequest&, const QueryAccessorDomainWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccessorDomainWhiteListAsyncHandler;
			typedef Outcome<Error, Model::QueryAccessorDomainsStatusResult> QueryAccessorDomainsStatusOutcome;
			typedef std::future<QueryAccessorDomainsStatusOutcome> QueryAccessorDomainsStatusOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::QueryAccessorDomainsStatusRequest&, const QueryAccessorDomainsStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccessorDomainsStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryAccessorIpResult> QueryAccessorIpOutcome;
			typedef std::future<QueryAccessorIpOutcome> QueryAccessorIpOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::QueryAccessorIpRequest&, const QueryAccessorIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccessorIpAsyncHandler;
			typedef Outcome<Error, Model::SubmitAccessorFullDomainsOssListResult> SubmitAccessorFullDomainsOssListOutcome;
			typedef std::future<SubmitAccessorFullDomainsOssListOutcome> SubmitAccessorFullDomainsOssListOutcomeCallable;
			typedef std::function<void(const BeianClient*, const Model::SubmitAccessorFullDomainsOssListRequest&, const SubmitAccessorFullDomainsOssListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAccessorFullDomainsOssListAsyncHandler;

			BeianClient(const Credentials &credentials, const ClientConfiguration &configuration);
			BeianClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			BeianClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~BeianClient();
			DeleteUnbeianIpCheckTypeOutcome deleteUnbeianIpCheckType(const Model::DeleteUnbeianIpCheckTypeRequest &request)const;
			void deleteUnbeianIpCheckTypeAsync(const Model::DeleteUnbeianIpCheckTypeRequest& request, const DeleteUnbeianIpCheckTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUnbeianIpCheckTypeOutcomeCallable deleteUnbeianIpCheckTypeCallable(const Model::DeleteUnbeianIpCheckTypeRequest& request) const;
			GetMainDomainOutcome getMainDomain(const Model::GetMainDomainRequest &request)const;
			void getMainDomainAsync(const Model::GetMainDomainRequest& request, const GetMainDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMainDomainOutcomeCallable getMainDomainCallable(const Model::GetMainDomainRequest& request) const;
			InsertUnbeianIpCheckTypeOutcome insertUnbeianIpCheckType(const Model::InsertUnbeianIpCheckTypeRequest &request)const;
			void insertUnbeianIpCheckTypeAsync(const Model::InsertUnbeianIpCheckTypeRequest& request, const InsertUnbeianIpCheckTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertUnbeianIpCheckTypeOutcomeCallable insertUnbeianIpCheckTypeCallable(const Model::InsertUnbeianIpCheckTypeRequest& request) const;
			ListUnbeianIpCheckTypeOutcome listUnbeianIpCheckType(const Model::ListUnbeianIpCheckTypeRequest &request)const;
			void listUnbeianIpCheckTypeAsync(const Model::ListUnbeianIpCheckTypeRequest& request, const ListUnbeianIpCheckTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUnbeianIpCheckTypeOutcomeCallable listUnbeianIpCheckTypeCallable(const Model::ListUnbeianIpCheckTypeRequest& request) const;
			ManageAccessorDomainOutcome manageAccessorDomain(const Model::ManageAccessorDomainRequest &request)const;
			void manageAccessorDomainAsync(const Model::ManageAccessorDomainRequest& request, const ManageAccessorDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManageAccessorDomainOutcomeCallable manageAccessorDomainCallable(const Model::ManageAccessorDomainRequest& request) const;
			ManageAccessorDomainWhiteListOutcome manageAccessorDomainWhiteList(const Model::ManageAccessorDomainWhiteListRequest &request)const;
			void manageAccessorDomainWhiteListAsync(const Model::ManageAccessorDomainWhiteListRequest& request, const ManageAccessorDomainWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManageAccessorDomainWhiteListOutcomeCallable manageAccessorDomainWhiteListCallable(const Model::ManageAccessorDomainWhiteListRequest& request) const;
			ManageAccessorIpOutcome manageAccessorIp(const Model::ManageAccessorIpRequest &request)const;
			void manageAccessorIpAsync(const Model::ManageAccessorIpRequest& request, const ManageAccessorIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManageAccessorIpOutcomeCallable manageAccessorIpCallable(const Model::ManageAccessorIpRequest& request) const;
			QueryAccessorDomainOutcome queryAccessorDomain(const Model::QueryAccessorDomainRequest &request)const;
			void queryAccessorDomainAsync(const Model::QueryAccessorDomainRequest& request, const QueryAccessorDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccessorDomainOutcomeCallable queryAccessorDomainCallable(const Model::QueryAccessorDomainRequest& request) const;
			QueryAccessorDomainListOutcome queryAccessorDomainList(const Model::QueryAccessorDomainListRequest &request)const;
			void queryAccessorDomainListAsync(const Model::QueryAccessorDomainListRequest& request, const QueryAccessorDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccessorDomainListOutcomeCallable queryAccessorDomainListCallable(const Model::QueryAccessorDomainListRequest& request) const;
			QueryAccessorDomainStatusOutcome queryAccessorDomainStatus(const Model::QueryAccessorDomainStatusRequest &request)const;
			void queryAccessorDomainStatusAsync(const Model::QueryAccessorDomainStatusRequest& request, const QueryAccessorDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccessorDomainStatusOutcomeCallable queryAccessorDomainStatusCallable(const Model::QueryAccessorDomainStatusRequest& request) const;
			QueryAccessorDomainWhiteListOutcome queryAccessorDomainWhiteList(const Model::QueryAccessorDomainWhiteListRequest &request)const;
			void queryAccessorDomainWhiteListAsync(const Model::QueryAccessorDomainWhiteListRequest& request, const QueryAccessorDomainWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccessorDomainWhiteListOutcomeCallable queryAccessorDomainWhiteListCallable(const Model::QueryAccessorDomainWhiteListRequest& request) const;
			QueryAccessorDomainsStatusOutcome queryAccessorDomainsStatus(const Model::QueryAccessorDomainsStatusRequest &request)const;
			void queryAccessorDomainsStatusAsync(const Model::QueryAccessorDomainsStatusRequest& request, const QueryAccessorDomainsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccessorDomainsStatusOutcomeCallable queryAccessorDomainsStatusCallable(const Model::QueryAccessorDomainsStatusRequest& request) const;
			QueryAccessorIpOutcome queryAccessorIp(const Model::QueryAccessorIpRequest &request)const;
			void queryAccessorIpAsync(const Model::QueryAccessorIpRequest& request, const QueryAccessorIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccessorIpOutcomeCallable queryAccessorIpCallable(const Model::QueryAccessorIpRequest& request) const;
			SubmitAccessorFullDomainsOssListOutcome submitAccessorFullDomainsOssList(const Model::SubmitAccessorFullDomainsOssListRequest &request)const;
			void submitAccessorFullDomainsOssListAsync(const Model::SubmitAccessorFullDomainsOssListRequest& request, const SubmitAccessorFullDomainsOssListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAccessorFullDomainsOssListOutcomeCallable submitAccessorFullDomainsOssListCallable(const Model::SubmitAccessorFullDomainsOssListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_BEIAN_BEIANCLIENT_H_
