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

#ifndef ALIBABACLOUD_COMPANYREG_COMPANYREGCLIENT_H_
#define ALIBABACLOUD_COMPANYREG_COMPANYREGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CompanyregExport.h"
#include "model/GenerateCompanyRegUploadPolicyRequest.h"
#include "model/GenerateCompanyRegUploadPolicyResult.h"
#include "model/GetCompanyRegOrderRequest.h"
#include "model/GetCompanyRegOrderResult.h"
#include "model/ListCompanyRegConsultationsRequest.h"
#include "model/ListCompanyRegConsultationsResult.h"
#include "model/ListCompanyRegOrdersRequest.h"
#include "model/ListCompanyRegOrdersResult.h"
#include "model/ProcessCompanyRegOrderRequest.h"
#include "model/ProcessCompanyRegOrderResult.h"
#include "model/SendVcodeRequest.h"
#include "model/SendVcodeResult.h"
#include "model/SubmitCommunicationNoteRequest.h"
#include "model/SubmitCommunicationNoteResult.h"
#include "model/SubmitConsultationRequest.h"
#include "model/SubmitConsultationResult.h"


namespace AlibabaCloud
{
	namespace Companyreg
	{
		class ALIBABACLOUD_COMPANYREG_EXPORT CompanyregClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GenerateCompanyRegUploadPolicyResult> GenerateCompanyRegUploadPolicyOutcome;
			typedef std::future<GenerateCompanyRegUploadPolicyOutcome> GenerateCompanyRegUploadPolicyOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GenerateCompanyRegUploadPolicyRequest&, const GenerateCompanyRegUploadPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCompanyRegUploadPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetCompanyRegOrderResult> GetCompanyRegOrderOutcome;
			typedef std::future<GetCompanyRegOrderOutcome> GetCompanyRegOrderOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetCompanyRegOrderRequest&, const GetCompanyRegOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompanyRegOrderAsyncHandler;
			typedef Outcome<Error, Model::ListCompanyRegConsultationsResult> ListCompanyRegConsultationsOutcome;
			typedef std::future<ListCompanyRegConsultationsOutcome> ListCompanyRegConsultationsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListCompanyRegConsultationsRequest&, const ListCompanyRegConsultationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCompanyRegConsultationsAsyncHandler;
			typedef Outcome<Error, Model::ListCompanyRegOrdersResult> ListCompanyRegOrdersOutcome;
			typedef std::future<ListCompanyRegOrdersOutcome> ListCompanyRegOrdersOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListCompanyRegOrdersRequest&, const ListCompanyRegOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCompanyRegOrdersAsyncHandler;
			typedef Outcome<Error, Model::ProcessCompanyRegOrderResult> ProcessCompanyRegOrderOutcome;
			typedef std::future<ProcessCompanyRegOrderOutcome> ProcessCompanyRegOrderOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ProcessCompanyRegOrderRequest&, const ProcessCompanyRegOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProcessCompanyRegOrderAsyncHandler;
			typedef Outcome<Error, Model::SendVcodeResult> SendVcodeOutcome;
			typedef std::future<SendVcodeOutcome> SendVcodeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SendVcodeRequest&, const SendVcodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVcodeAsyncHandler;
			typedef Outcome<Error, Model::SubmitCommunicationNoteResult> SubmitCommunicationNoteOutcome;
			typedef std::future<SubmitCommunicationNoteOutcome> SubmitCommunicationNoteOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SubmitCommunicationNoteRequest&, const SubmitCommunicationNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCommunicationNoteAsyncHandler;
			typedef Outcome<Error, Model::SubmitConsultationResult> SubmitConsultationOutcome;
			typedef std::future<SubmitConsultationOutcome> SubmitConsultationOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SubmitConsultationRequest&, const SubmitConsultationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitConsultationAsyncHandler;

			CompanyregClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CompanyregClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CompanyregClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CompanyregClient();
			GenerateCompanyRegUploadPolicyOutcome generateCompanyRegUploadPolicy(const Model::GenerateCompanyRegUploadPolicyRequest &request)const;
			void generateCompanyRegUploadPolicyAsync(const Model::GenerateCompanyRegUploadPolicyRequest& request, const GenerateCompanyRegUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateCompanyRegUploadPolicyOutcomeCallable generateCompanyRegUploadPolicyCallable(const Model::GenerateCompanyRegUploadPolicyRequest& request) const;
			GetCompanyRegOrderOutcome getCompanyRegOrder(const Model::GetCompanyRegOrderRequest &request)const;
			void getCompanyRegOrderAsync(const Model::GetCompanyRegOrderRequest& request, const GetCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompanyRegOrderOutcomeCallable getCompanyRegOrderCallable(const Model::GetCompanyRegOrderRequest& request) const;
			ListCompanyRegConsultationsOutcome listCompanyRegConsultations(const Model::ListCompanyRegConsultationsRequest &request)const;
			void listCompanyRegConsultationsAsync(const Model::ListCompanyRegConsultationsRequest& request, const ListCompanyRegConsultationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCompanyRegConsultationsOutcomeCallable listCompanyRegConsultationsCallable(const Model::ListCompanyRegConsultationsRequest& request) const;
			ListCompanyRegOrdersOutcome listCompanyRegOrders(const Model::ListCompanyRegOrdersRequest &request)const;
			void listCompanyRegOrdersAsync(const Model::ListCompanyRegOrdersRequest& request, const ListCompanyRegOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCompanyRegOrdersOutcomeCallable listCompanyRegOrdersCallable(const Model::ListCompanyRegOrdersRequest& request) const;
			ProcessCompanyRegOrderOutcome processCompanyRegOrder(const Model::ProcessCompanyRegOrderRequest &request)const;
			void processCompanyRegOrderAsync(const Model::ProcessCompanyRegOrderRequest& request, const ProcessCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProcessCompanyRegOrderOutcomeCallable processCompanyRegOrderCallable(const Model::ProcessCompanyRegOrderRequest& request) const;
			SendVcodeOutcome sendVcode(const Model::SendVcodeRequest &request)const;
			void sendVcodeAsync(const Model::SendVcodeRequest& request, const SendVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVcodeOutcomeCallable sendVcodeCallable(const Model::SendVcodeRequest& request) const;
			SubmitCommunicationNoteOutcome submitCommunicationNote(const Model::SubmitCommunicationNoteRequest &request)const;
			void submitCommunicationNoteAsync(const Model::SubmitCommunicationNoteRequest& request, const SubmitCommunicationNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCommunicationNoteOutcomeCallable submitCommunicationNoteCallable(const Model::SubmitCommunicationNoteRequest& request) const;
			SubmitConsultationOutcome submitConsultation(const Model::SubmitConsultationRequest &request)const;
			void submitConsultationAsync(const Model::SubmitConsultationRequest& request, const SubmitConsultationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitConsultationOutcomeCallable submitConsultationCallable(const Model::SubmitConsultationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_COMPANYREG_COMPANYREGCLIENT_H_
