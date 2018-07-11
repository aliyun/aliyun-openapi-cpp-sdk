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

#ifndef ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_
#define ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CloudauthExport.h"
#include "model/GetMaterialsRequest.h"
#include "model/GetMaterialsResult.h"
#include "model/GetVerifyTokenRequest.h"
#include "model/GetVerifyTokenResult.h"
#include "model/DetectFaceAttributesRequest.h"
#include "model/DetectFaceAttributesResult.h"
#include "model/CompareFacesRequest.h"
#include "model/CompareFacesResult.h"
#include "model/SubmitMaterialsRequest.h"
#include "model/SubmitMaterialsResult.h"
#include "model/GetStatusRequest.h"
#include "model/GetStatusResult.h"


namespace AlibabaCloud
{
	namespace Cloudauth
	{
		class ALIBABACLOUD_CLOUDAUTH_EXPORT CloudauthClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetMaterialsResult> GetMaterialsOutcome;
			typedef std::future<GetMaterialsOutcome> GetMaterialsOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::GetMaterialsRequest&, const GetMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMaterialsAsyncHandler;
			typedef Outcome<Error, Model::GetVerifyTokenResult> GetVerifyTokenOutcome;
			typedef std::future<GetVerifyTokenOutcome> GetVerifyTokenOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::GetVerifyTokenRequest&, const GetVerifyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVerifyTokenAsyncHandler;
			typedef Outcome<Error, Model::DetectFaceAttributesResult> DetectFaceAttributesOutcome;
			typedef std::future<DetectFaceAttributesOutcome> DetectFaceAttributesOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DetectFaceAttributesRequest&, const DetectFaceAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAttributesAsyncHandler;
			typedef Outcome<Error, Model::CompareFacesResult> CompareFacesOutcome;
			typedef std::future<CompareFacesOutcome> CompareFacesOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CompareFacesRequest&, const CompareFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareFacesAsyncHandler;
			typedef Outcome<Error, Model::SubmitMaterialsResult> SubmitMaterialsOutcome;
			typedef std::future<SubmitMaterialsOutcome> SubmitMaterialsOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::SubmitMaterialsRequest&, const SubmitMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMaterialsAsyncHandler;
			typedef Outcome<Error, Model::GetStatusResult> GetStatusOutcome;
			typedef std::future<GetStatusOutcome> GetStatusOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::GetStatusRequest&, const GetStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStatusAsyncHandler;

			CloudauthClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudauthClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudauthClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudauthClient();
			GetMaterialsOutcome getMaterials(const Model::GetMaterialsRequest &request)const;
			void getMaterialsAsync(const Model::GetMaterialsRequest& request, const GetMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMaterialsOutcomeCallable getMaterialsCallable(const Model::GetMaterialsRequest& request) const;
			GetVerifyTokenOutcome getVerifyToken(const Model::GetVerifyTokenRequest &request)const;
			void getVerifyTokenAsync(const Model::GetVerifyTokenRequest& request, const GetVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVerifyTokenOutcomeCallable getVerifyTokenCallable(const Model::GetVerifyTokenRequest& request) const;
			DetectFaceAttributesOutcome detectFaceAttributes(const Model::DetectFaceAttributesRequest &request)const;
			void detectFaceAttributesAsync(const Model::DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectFaceAttributesOutcomeCallable detectFaceAttributesCallable(const Model::DetectFaceAttributesRequest& request) const;
			CompareFacesOutcome compareFaces(const Model::CompareFacesRequest &request)const;
			void compareFacesAsync(const Model::CompareFacesRequest& request, const CompareFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareFacesOutcomeCallable compareFacesCallable(const Model::CompareFacesRequest& request) const;
			SubmitMaterialsOutcome submitMaterials(const Model::SubmitMaterialsRequest &request)const;
			void submitMaterialsAsync(const Model::SubmitMaterialsRequest& request, const SubmitMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMaterialsOutcomeCallable submitMaterialsCallable(const Model::SubmitMaterialsRequest& request) const;
			GetStatusOutcome getStatus(const Model::GetStatusRequest &request)const;
			void getStatusAsync(const Model::GetStatusRequest& request, const GetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStatusOutcomeCallable getStatusCallable(const Model::GetStatusRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_
