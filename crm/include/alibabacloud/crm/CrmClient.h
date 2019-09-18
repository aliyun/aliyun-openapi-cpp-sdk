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

#ifndef ALIBABACLOUD_CRM_CRMCLIENT_H_
#define ALIBABACLOUD_CRM_CRMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CrmExport.h"
#include "model/AddIdentityCertifiedForBidUserRequest.h"
#include "model/AddIdentityCertifiedForBidUserResult.h"
#include "model/AddLabelRequest.h"
#include "model/AddLabelResult.h"
#include "model/AddLabelForBidRequest.h"
#include "model/AddLabelForBidResult.h"
#include "model/BatchGetAliyunIdByAliyunPkRequest.h"
#include "model/BatchGetAliyunIdByAliyunPkResult.h"
#include "model/CheckLabelRequest.h"
#include "model/CheckLabelResult.h"
#include "model/CheckLabelForBidRequest.h"
#include "model/CheckLabelForBidResult.h"
#include "model/DeleteLabelRequest.h"
#include "model/DeleteLabelResult.h"
#include "model/DeleteLabelForBidRequest.h"
#include "model/DeleteLabelForBidResult.h"
#include "model/GetAliyunPkByAliyunIdRequest.h"
#include "model/GetAliyunPkByAliyunIdResult.h"
#include "model/QueryBidUserCertifiedInfoRequest.h"
#include "model/QueryBidUserCertifiedInfoResult.h"
#include "model/QueryCustomerLabelRequest.h"
#include "model/QueryCustomerLabelResult.h"
#include "model/RemoveIdentityCertifiedForBidUserRequest.h"
#include "model/RemoveIdentityCertifiedForBidUserResult.h"


namespace AlibabaCloud
{
	namespace Crm
	{
		class ALIBABACLOUD_CRM_EXPORT CrmClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddIdentityCertifiedForBidUserResult> AddIdentityCertifiedForBidUserOutcome;
			typedef std::future<AddIdentityCertifiedForBidUserOutcome> AddIdentityCertifiedForBidUserOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::AddIdentityCertifiedForBidUserRequest&, const AddIdentityCertifiedForBidUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddIdentityCertifiedForBidUserAsyncHandler;
			typedef Outcome<Error, Model::AddLabelResult> AddLabelOutcome;
			typedef std::future<AddLabelOutcome> AddLabelOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::AddLabelRequest&, const AddLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLabelAsyncHandler;
			typedef Outcome<Error, Model::AddLabelForBidResult> AddLabelForBidOutcome;
			typedef std::future<AddLabelForBidOutcome> AddLabelForBidOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::AddLabelForBidRequest&, const AddLabelForBidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLabelForBidAsyncHandler;
			typedef Outcome<Error, Model::BatchGetAliyunIdByAliyunPkResult> BatchGetAliyunIdByAliyunPkOutcome;
			typedef std::future<BatchGetAliyunIdByAliyunPkOutcome> BatchGetAliyunIdByAliyunPkOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::BatchGetAliyunIdByAliyunPkRequest&, const BatchGetAliyunIdByAliyunPkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetAliyunIdByAliyunPkAsyncHandler;
			typedef Outcome<Error, Model::CheckLabelResult> CheckLabelOutcome;
			typedef std::future<CheckLabelOutcome> CheckLabelOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::CheckLabelRequest&, const CheckLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckLabelAsyncHandler;
			typedef Outcome<Error, Model::CheckLabelForBidResult> CheckLabelForBidOutcome;
			typedef std::future<CheckLabelForBidOutcome> CheckLabelForBidOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::CheckLabelForBidRequest&, const CheckLabelForBidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckLabelForBidAsyncHandler;
			typedef Outcome<Error, Model::DeleteLabelResult> DeleteLabelOutcome;
			typedef std::future<DeleteLabelOutcome> DeleteLabelOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::DeleteLabelRequest&, const DeleteLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLabelAsyncHandler;
			typedef Outcome<Error, Model::DeleteLabelForBidResult> DeleteLabelForBidOutcome;
			typedef std::future<DeleteLabelForBidOutcome> DeleteLabelForBidOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::DeleteLabelForBidRequest&, const DeleteLabelForBidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLabelForBidAsyncHandler;
			typedef Outcome<Error, Model::GetAliyunPkByAliyunIdResult> GetAliyunPkByAliyunIdOutcome;
			typedef std::future<GetAliyunPkByAliyunIdOutcome> GetAliyunPkByAliyunIdOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::GetAliyunPkByAliyunIdRequest&, const GetAliyunPkByAliyunIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAliyunPkByAliyunIdAsyncHandler;
			typedef Outcome<Error, Model::QueryBidUserCertifiedInfoResult> QueryBidUserCertifiedInfoOutcome;
			typedef std::future<QueryBidUserCertifiedInfoOutcome> QueryBidUserCertifiedInfoOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::QueryBidUserCertifiedInfoRequest&, const QueryBidUserCertifiedInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBidUserCertifiedInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomerLabelResult> QueryCustomerLabelOutcome;
			typedef std::future<QueryCustomerLabelOutcome> QueryCustomerLabelOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::QueryCustomerLabelRequest&, const QueryCustomerLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomerLabelAsyncHandler;
			typedef Outcome<Error, Model::RemoveIdentityCertifiedForBidUserResult> RemoveIdentityCertifiedForBidUserOutcome;
			typedef std::future<RemoveIdentityCertifiedForBidUserOutcome> RemoveIdentityCertifiedForBidUserOutcomeCallable;
			typedef std::function<void(const CrmClient*, const Model::RemoveIdentityCertifiedForBidUserRequest&, const RemoveIdentityCertifiedForBidUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveIdentityCertifiedForBidUserAsyncHandler;

			CrmClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CrmClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CrmClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CrmClient();
			AddIdentityCertifiedForBidUserOutcome addIdentityCertifiedForBidUser(const Model::AddIdentityCertifiedForBidUserRequest &request)const;
			void addIdentityCertifiedForBidUserAsync(const Model::AddIdentityCertifiedForBidUserRequest& request, const AddIdentityCertifiedForBidUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddIdentityCertifiedForBidUserOutcomeCallable addIdentityCertifiedForBidUserCallable(const Model::AddIdentityCertifiedForBidUserRequest& request) const;
			AddLabelOutcome addLabel(const Model::AddLabelRequest &request)const;
			void addLabelAsync(const Model::AddLabelRequest& request, const AddLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLabelOutcomeCallable addLabelCallable(const Model::AddLabelRequest& request) const;
			AddLabelForBidOutcome addLabelForBid(const Model::AddLabelForBidRequest &request)const;
			void addLabelForBidAsync(const Model::AddLabelForBidRequest& request, const AddLabelForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLabelForBidOutcomeCallable addLabelForBidCallable(const Model::AddLabelForBidRequest& request) const;
			BatchGetAliyunIdByAliyunPkOutcome batchGetAliyunIdByAliyunPk(const Model::BatchGetAliyunIdByAliyunPkRequest &request)const;
			void batchGetAliyunIdByAliyunPkAsync(const Model::BatchGetAliyunIdByAliyunPkRequest& request, const BatchGetAliyunIdByAliyunPkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetAliyunIdByAliyunPkOutcomeCallable batchGetAliyunIdByAliyunPkCallable(const Model::BatchGetAliyunIdByAliyunPkRequest& request) const;
			CheckLabelOutcome checkLabel(const Model::CheckLabelRequest &request)const;
			void checkLabelAsync(const Model::CheckLabelRequest& request, const CheckLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckLabelOutcomeCallable checkLabelCallable(const Model::CheckLabelRequest& request) const;
			CheckLabelForBidOutcome checkLabelForBid(const Model::CheckLabelForBidRequest &request)const;
			void checkLabelForBidAsync(const Model::CheckLabelForBidRequest& request, const CheckLabelForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckLabelForBidOutcomeCallable checkLabelForBidCallable(const Model::CheckLabelForBidRequest& request) const;
			DeleteLabelOutcome deleteLabel(const Model::DeleteLabelRequest &request)const;
			void deleteLabelAsync(const Model::DeleteLabelRequest& request, const DeleteLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLabelOutcomeCallable deleteLabelCallable(const Model::DeleteLabelRequest& request) const;
			DeleteLabelForBidOutcome deleteLabelForBid(const Model::DeleteLabelForBidRequest &request)const;
			void deleteLabelForBidAsync(const Model::DeleteLabelForBidRequest& request, const DeleteLabelForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLabelForBidOutcomeCallable deleteLabelForBidCallable(const Model::DeleteLabelForBidRequest& request) const;
			GetAliyunPkByAliyunIdOutcome getAliyunPkByAliyunId(const Model::GetAliyunPkByAliyunIdRequest &request)const;
			void getAliyunPkByAliyunIdAsync(const Model::GetAliyunPkByAliyunIdRequest& request, const GetAliyunPkByAliyunIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAliyunPkByAliyunIdOutcomeCallable getAliyunPkByAliyunIdCallable(const Model::GetAliyunPkByAliyunIdRequest& request) const;
			QueryBidUserCertifiedInfoOutcome queryBidUserCertifiedInfo(const Model::QueryBidUserCertifiedInfoRequest &request)const;
			void queryBidUserCertifiedInfoAsync(const Model::QueryBidUserCertifiedInfoRequest& request, const QueryBidUserCertifiedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBidUserCertifiedInfoOutcomeCallable queryBidUserCertifiedInfoCallable(const Model::QueryBidUserCertifiedInfoRequest& request) const;
			QueryCustomerLabelOutcome queryCustomerLabel(const Model::QueryCustomerLabelRequest &request)const;
			void queryCustomerLabelAsync(const Model::QueryCustomerLabelRequest& request, const QueryCustomerLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomerLabelOutcomeCallable queryCustomerLabelCallable(const Model::QueryCustomerLabelRequest& request) const;
			RemoveIdentityCertifiedForBidUserOutcome removeIdentityCertifiedForBidUser(const Model::RemoveIdentityCertifiedForBidUserRequest &request)const;
			void removeIdentityCertifiedForBidUserAsync(const Model::RemoveIdentityCertifiedForBidUserRequest& request, const RemoveIdentityCertifiedForBidUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveIdentityCertifiedForBidUserOutcomeCallable removeIdentityCertifiedForBidUserCallable(const Model::RemoveIdentityCertifiedForBidUserRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CRM_CRMCLIENT_H_
