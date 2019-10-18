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

#ifndef ALIBABACLOUD_DNSKNOCKER_DNSKNOCKERCLIENT_H_
#define ALIBABACLOUD_DNSKNOCKER_DNSKNOCKERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DnsKnockerExport.h"
#include "model/BatchCreateRrRequest.h"
#include "model/BatchCreateRrResult.h"
#include "model/BatchDeleteRrRequest.h"
#include "model/BatchDeleteRrResult.h"
#include "model/ChangeResourceRecordRequest.h"
#include "model/ChangeResourceRecordResult.h"
#include "model/ChangeResourceRecordsRequest.h"
#include "model/ChangeResourceRecordsResult.h"
#include "model/CreateResourceRecordRequest.h"
#include "model/CreateResourceRecordResult.h"
#include "model/DeleteDomainRequest.h"
#include "model/DeleteDomainResult.h"
#include "model/DeleteResourceRecordRequest.h"
#include "model/DeleteResourceRecordResult.h"
#include "model/DeleteResourceRecordsRequest.h"
#include "model/DeleteResourceRecordsResult.h"
#include "model/GetDomainRequest.h"
#include "model/GetDomainResult.h"
#include "model/GetResourceRecordsRequest.h"
#include "model/GetResourceRecordsResult.h"


namespace AlibabaCloud
{
	namespace DnsKnocker
	{
		class ALIBABACLOUD_DNSKNOCKER_EXPORT DnsKnockerClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchCreateRrResult> BatchCreateRrOutcome;
			typedef std::future<BatchCreateRrOutcome> BatchCreateRrOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::BatchCreateRrRequest&, const BatchCreateRrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateRrAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteRrResult> BatchDeleteRrOutcome;
			typedef std::future<BatchDeleteRrOutcome> BatchDeleteRrOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::BatchDeleteRrRequest&, const BatchDeleteRrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteRrAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceRecordResult> ChangeResourceRecordOutcome;
			typedef std::future<ChangeResourceRecordOutcome> ChangeResourceRecordOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::ChangeResourceRecordRequest&, const ChangeResourceRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceRecordAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceRecordsResult> ChangeResourceRecordsOutcome;
			typedef std::future<ChangeResourceRecordsOutcome> ChangeResourceRecordsOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::ChangeResourceRecordsRequest&, const ChangeResourceRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceRecordsAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceRecordResult> CreateResourceRecordOutcome;
			typedef std::future<CreateResourceRecordOutcome> CreateResourceRecordOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::CreateResourceRecordRequest&, const CreateResourceRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceRecordAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainResult> DeleteDomainOutcome;
			typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::DeleteDomainRequest&, const DeleteDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceRecordResult> DeleteResourceRecordOutcome;
			typedef std::future<DeleteResourceRecordOutcome> DeleteResourceRecordOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::DeleteResourceRecordRequest&, const DeleteResourceRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceRecordAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceRecordsResult> DeleteResourceRecordsOutcome;
			typedef std::future<DeleteResourceRecordsOutcome> DeleteResourceRecordsOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::DeleteResourceRecordsRequest&, const DeleteResourceRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceRecordsAsyncHandler;
			typedef Outcome<Error, Model::GetDomainResult> GetDomainOutcome;
			typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::GetDomainRequest&, const GetDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDomainAsyncHandler;
			typedef Outcome<Error, Model::GetResourceRecordsResult> GetResourceRecordsOutcome;
			typedef std::future<GetResourceRecordsOutcome> GetResourceRecordsOutcomeCallable;
			typedef std::function<void(const DnsKnockerClient*, const Model::GetResourceRecordsRequest&, const GetResourceRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceRecordsAsyncHandler;

			DnsKnockerClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DnsKnockerClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DnsKnockerClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DnsKnockerClient();
			BatchCreateRrOutcome batchCreateRr(const Model::BatchCreateRrRequest &request)const;
			void batchCreateRrAsync(const Model::BatchCreateRrRequest& request, const BatchCreateRrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchCreateRrOutcomeCallable batchCreateRrCallable(const Model::BatchCreateRrRequest& request) const;
			BatchDeleteRrOutcome batchDeleteRr(const Model::BatchDeleteRrRequest &request)const;
			void batchDeleteRrAsync(const Model::BatchDeleteRrRequest& request, const BatchDeleteRrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteRrOutcomeCallable batchDeleteRrCallable(const Model::BatchDeleteRrRequest& request) const;
			ChangeResourceRecordOutcome changeResourceRecord(const Model::ChangeResourceRecordRequest &request)const;
			void changeResourceRecordAsync(const Model::ChangeResourceRecordRequest& request, const ChangeResourceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceRecordOutcomeCallable changeResourceRecordCallable(const Model::ChangeResourceRecordRequest& request) const;
			ChangeResourceRecordsOutcome changeResourceRecords(const Model::ChangeResourceRecordsRequest &request)const;
			void changeResourceRecordsAsync(const Model::ChangeResourceRecordsRequest& request, const ChangeResourceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceRecordsOutcomeCallable changeResourceRecordsCallable(const Model::ChangeResourceRecordsRequest& request) const;
			CreateResourceRecordOutcome createResourceRecord(const Model::CreateResourceRecordRequest &request)const;
			void createResourceRecordAsync(const Model::CreateResourceRecordRequest& request, const CreateResourceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceRecordOutcomeCallable createResourceRecordCallable(const Model::CreateResourceRecordRequest& request) const;
			DeleteDomainOutcome deleteDomain(const Model::DeleteDomainRequest &request)const;
			void deleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainOutcomeCallable deleteDomainCallable(const Model::DeleteDomainRequest& request) const;
			DeleteResourceRecordOutcome deleteResourceRecord(const Model::DeleteResourceRecordRequest &request)const;
			void deleteResourceRecordAsync(const Model::DeleteResourceRecordRequest& request, const DeleteResourceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceRecordOutcomeCallable deleteResourceRecordCallable(const Model::DeleteResourceRecordRequest& request) const;
			DeleteResourceRecordsOutcome deleteResourceRecords(const Model::DeleteResourceRecordsRequest &request)const;
			void deleteResourceRecordsAsync(const Model::DeleteResourceRecordsRequest& request, const DeleteResourceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceRecordsOutcomeCallable deleteResourceRecordsCallable(const Model::DeleteResourceRecordsRequest& request) const;
			GetDomainOutcome getDomain(const Model::GetDomainRequest &request)const;
			void getDomainAsync(const Model::GetDomainRequest& request, const GetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDomainOutcomeCallable getDomainCallable(const Model::GetDomainRequest& request) const;
			GetResourceRecordsOutcome getResourceRecords(const Model::GetResourceRecordsRequest &request)const;
			void getResourceRecordsAsync(const Model::GetResourceRecordsRequest& request, const GetResourceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceRecordsOutcomeCallable getResourceRecordsCallable(const Model::GetResourceRecordsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DNSKNOCKER_DNSKNOCKERCLIENT_H_
