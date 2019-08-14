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

#ifndef ALIBABACLOUD_STS_STSCLIENT_H_
#define ALIBABACLOUD_STS_STSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "StsExport.h"
#include "model/GetCallerIdentityRequest.h"
#include "model/GetCallerIdentityResult.h"
#include "model/GenerateSessionAccessKeyRequest.h"
#include "model/GenerateSessionAccessKeyResult.h"
#include "model/AssumeRoleRequest.h"
#include "model/AssumeRoleResult.h"
#include "model/AssumeRoleWithSAMLRequest.h"
#include "model/AssumeRoleWithSAMLResult.h"


namespace AlibabaCloud
{
	namespace Sts
	{
		class ALIBABACLOUD_STS_EXPORT StsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetCallerIdentityResult> GetCallerIdentityOutcome;
			typedef std::future<GetCallerIdentityOutcome> GetCallerIdentityOutcomeCallable;
			typedef std::function<void(const StsClient*, const Model::GetCallerIdentityRequest&, const GetCallerIdentityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCallerIdentityAsyncHandler;
			typedef Outcome<Error, Model::GenerateSessionAccessKeyResult> GenerateSessionAccessKeyOutcome;
			typedef std::future<GenerateSessionAccessKeyOutcome> GenerateSessionAccessKeyOutcomeCallable;
			typedef std::function<void(const StsClient*, const Model::GenerateSessionAccessKeyRequest&, const GenerateSessionAccessKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateSessionAccessKeyAsyncHandler;
			typedef Outcome<Error, Model::AssumeRoleResult> AssumeRoleOutcome;
			typedef std::future<AssumeRoleOutcome> AssumeRoleOutcomeCallable;
			typedef std::function<void(const StsClient*, const Model::AssumeRoleRequest&, const AssumeRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssumeRoleAsyncHandler;
			typedef Outcome<Error, Model::AssumeRoleWithSAMLResult> AssumeRoleWithSAMLOutcome;
			typedef std::future<AssumeRoleWithSAMLOutcome> AssumeRoleWithSAMLOutcomeCallable;
			typedef std::function<void(const StsClient*, const Model::AssumeRoleWithSAMLRequest&, const AssumeRoleWithSAMLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssumeRoleWithSAMLAsyncHandler;

			StsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			StsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			StsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~StsClient();
			GetCallerIdentityOutcome getCallerIdentity(const Model::GetCallerIdentityRequest &request)const;
			void getCallerIdentityAsync(const Model::GetCallerIdentityRequest& request, const GetCallerIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCallerIdentityOutcomeCallable getCallerIdentityCallable(const Model::GetCallerIdentityRequest& request) const;
			GenerateSessionAccessKeyOutcome generateSessionAccessKey(const Model::GenerateSessionAccessKeyRequest &request)const;
			void generateSessionAccessKeyAsync(const Model::GenerateSessionAccessKeyRequest& request, const GenerateSessionAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateSessionAccessKeyOutcomeCallable generateSessionAccessKeyCallable(const Model::GenerateSessionAccessKeyRequest& request) const;
			AssumeRoleOutcome assumeRole(const Model::AssumeRoleRequest &request)const;
			void assumeRoleAsync(const Model::AssumeRoleRequest& request, const AssumeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssumeRoleOutcomeCallable assumeRoleCallable(const Model::AssumeRoleRequest& request) const;
			AssumeRoleWithSAMLOutcome assumeRoleWithSAML(const Model::AssumeRoleWithSAMLRequest &request)const;
			void assumeRoleWithSAMLAsync(const Model::AssumeRoleWithSAMLRequest& request, const AssumeRoleWithSAMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssumeRoleWithSAMLOutcomeCallable assumeRoleWithSAMLCallable(const Model::AssumeRoleWithSAMLRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_STS_STSCLIENT_H_
