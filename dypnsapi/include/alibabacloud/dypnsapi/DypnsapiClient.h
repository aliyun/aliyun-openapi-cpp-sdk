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

#ifndef ALIBABACLOUD_DYPNSAPI_DYPNSAPICLIENT_H_
#define ALIBABACLOUD_DYPNSAPI_DYPNSAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DypnsapiExport.h"
#include "model/CreateVerifySchemeRequest.h"
#include "model/CreateVerifySchemeResult.h"
#include "model/DeleteVerifySchemeRequest.h"
#include "model/DeleteVerifySchemeResult.h"
#include "model/DescribeVerifySchemeRequest.h"
#include "model/DescribeVerifySchemeResult.h"
#include "model/GetMobileRequest.h"
#include "model/GetMobileResult.h"
#include "model/TwiceTelVerifyRequest.h"
#include "model/TwiceTelVerifyResult.h"
#include "model/VerifyMobileRequest.h"
#include "model/VerifyMobileResult.h"


namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		class ALIBABACLOUD_DYPNSAPI_EXPORT DypnsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateVerifySchemeResult> CreateVerifySchemeOutcome;
			typedef std::future<CreateVerifySchemeOutcome> CreateVerifySchemeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::CreateVerifySchemeRequest&, const CreateVerifySchemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifySchemeAsyncHandler;
			typedef Outcome<Error, Model::DeleteVerifySchemeResult> DeleteVerifySchemeOutcome;
			typedef std::future<DeleteVerifySchemeOutcome> DeleteVerifySchemeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::DeleteVerifySchemeRequest&, const DeleteVerifySchemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVerifySchemeAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifySchemeResult> DescribeVerifySchemeOutcome;
			typedef std::future<DescribeVerifySchemeOutcome> DescribeVerifySchemeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::DescribeVerifySchemeRequest&, const DescribeVerifySchemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifySchemeAsyncHandler;
			typedef Outcome<Error, Model::GetMobileResult> GetMobileOutcome;
			typedef std::future<GetMobileOutcome> GetMobileOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetMobileRequest&, const GetMobileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMobileAsyncHandler;
			typedef Outcome<Error, Model::TwiceTelVerifyResult> TwiceTelVerifyOutcome;
			typedef std::future<TwiceTelVerifyOutcome> TwiceTelVerifyOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::TwiceTelVerifyRequest&, const TwiceTelVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TwiceTelVerifyAsyncHandler;
			typedef Outcome<Error, Model::VerifyMobileResult> VerifyMobileOutcome;
			typedef std::future<VerifyMobileOutcome> VerifyMobileOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::VerifyMobileRequest&, const VerifyMobileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyMobileAsyncHandler;

			DypnsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DypnsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DypnsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DypnsapiClient();
			CreateVerifySchemeOutcome createVerifyScheme(const Model::CreateVerifySchemeRequest &request)const;
			void createVerifySchemeAsync(const Model::CreateVerifySchemeRequest& request, const CreateVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerifySchemeOutcomeCallable createVerifySchemeCallable(const Model::CreateVerifySchemeRequest& request) const;
			DeleteVerifySchemeOutcome deleteVerifyScheme(const Model::DeleteVerifySchemeRequest &request)const;
			void deleteVerifySchemeAsync(const Model::DeleteVerifySchemeRequest& request, const DeleteVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVerifySchemeOutcomeCallable deleteVerifySchemeCallable(const Model::DeleteVerifySchemeRequest& request) const;
			DescribeVerifySchemeOutcome describeVerifyScheme(const Model::DescribeVerifySchemeRequest &request)const;
			void describeVerifySchemeAsync(const Model::DescribeVerifySchemeRequest& request, const DescribeVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifySchemeOutcomeCallable describeVerifySchemeCallable(const Model::DescribeVerifySchemeRequest& request) const;
			GetMobileOutcome getMobile(const Model::GetMobileRequest &request)const;
			void getMobileAsync(const Model::GetMobileRequest& request, const GetMobileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMobileOutcomeCallable getMobileCallable(const Model::GetMobileRequest& request) const;
			TwiceTelVerifyOutcome twiceTelVerify(const Model::TwiceTelVerifyRequest &request)const;
			void twiceTelVerifyAsync(const Model::TwiceTelVerifyRequest& request, const TwiceTelVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TwiceTelVerifyOutcomeCallable twiceTelVerifyCallable(const Model::TwiceTelVerifyRequest& request) const;
			VerifyMobileOutcome verifyMobile(const Model::VerifyMobileRequest &request)const;
			void verifyMobileAsync(const Model::VerifyMobileRequest& request, const VerifyMobileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyMobileOutcomeCallable verifyMobileCallable(const Model::VerifyMobileRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYPNSAPI_DYPNSAPICLIENT_H_
