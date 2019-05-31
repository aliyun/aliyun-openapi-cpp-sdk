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
#include "model/DescribeDeviceInfoRequest.h"
#include "model/DescribeDeviceInfoResult.h"
#include "model/GetMaterialsRequest.h"
#include "model/GetMaterialsResult.h"
#include "model/GetVerifyTokenRequest.h"
#include "model/GetVerifyTokenResult.h"
#include "model/DetectFaceAttributesRequest.h"
#include "model/DetectFaceAttributesResult.h"
#include "model/CompareFacesRequest.h"
#include "model/CompareFacesResult.h"
#include "model/CreateAuthKeyRequest.h"
#include "model/CreateAuthKeyResult.h"
#include "model/SubmitMaterialsRequest.h"
#include "model/SubmitMaterialsResult.h"
#include "model/SubmitVerificationRequest.h"
#include "model/SubmitVerificationResult.h"
#include "model/CreateVerifySDKRequest.h"
#include "model/CreateVerifySDKResult.h"
#include "model/ModifyDeviceInfoRequest.h"
#include "model/ModifyDeviceInfoResult.h"
#include "model/DescribeVerifySDKRequest.h"
#include "model/DescribeVerifySDKResult.h"
#include "model/GetStatusRequest.h"
#include "model/GetStatusResult.h"


namespace AlibabaCloud
{
	namespace Cloudauth
	{
		class ALIBABACLOUD_CLOUDAUTH_EXPORT CloudauthClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeDeviceInfoResult> DescribeDeviceInfoOutcome;
			typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeDeviceInfoRequest&, const DescribeDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
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
			typedef Outcome<Error, Model::CreateAuthKeyResult> CreateAuthKeyOutcome;
			typedef std::future<CreateAuthKeyOutcome> CreateAuthKeyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateAuthKeyRequest&, const CreateAuthKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthKeyAsyncHandler;
			typedef Outcome<Error, Model::SubmitMaterialsResult> SubmitMaterialsOutcome;
			typedef std::future<SubmitMaterialsOutcome> SubmitMaterialsOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::SubmitMaterialsRequest&, const SubmitMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMaterialsAsyncHandler;
			typedef Outcome<Error, Model::SubmitVerificationResult> SubmitVerificationOutcome;
			typedef std::future<SubmitVerificationOutcome> SubmitVerificationOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::SubmitVerificationRequest&, const SubmitVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVerificationAsyncHandler;
			typedef Outcome<Error, Model::CreateVerifySDKResult> CreateVerifySDKOutcome;
			typedef std::future<CreateVerifySDKOutcome> CreateVerifySDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateVerifySDKRequest&, const CreateVerifySDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifySDKAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceInfoResult> ModifyDeviceInfoOutcome;
			typedef std::future<ModifyDeviceInfoOutcome> ModifyDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::ModifyDeviceInfoRequest&, const ModifyDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifySDKResult> DescribeVerifySDKOutcome;
			typedef std::future<DescribeVerifySDKOutcome> DescribeVerifySDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifySDKRequest&, const DescribeVerifySDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifySDKAsyncHandler;
			typedef Outcome<Error, Model::GetStatusResult> GetStatusOutcome;
			typedef std::future<GetStatusOutcome> GetStatusOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::GetStatusRequest&, const GetStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStatusAsyncHandler;

			CloudauthClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudauthClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudauthClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudauthClient();
			DescribeDeviceInfoOutcome describeDeviceInfo(const Model::DescribeDeviceInfoRequest &request)const;
			void describeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceInfoOutcomeCallable describeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request) const;
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
			CreateAuthKeyOutcome createAuthKey(const Model::CreateAuthKeyRequest &request)const;
			void createAuthKeyAsync(const Model::CreateAuthKeyRequest& request, const CreateAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuthKeyOutcomeCallable createAuthKeyCallable(const Model::CreateAuthKeyRequest& request) const;
			SubmitMaterialsOutcome submitMaterials(const Model::SubmitMaterialsRequest &request)const;
			void submitMaterialsAsync(const Model::SubmitMaterialsRequest& request, const SubmitMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMaterialsOutcomeCallable submitMaterialsCallable(const Model::SubmitMaterialsRequest& request) const;
			SubmitVerificationOutcome submitVerification(const Model::SubmitVerificationRequest &request)const;
			void submitVerificationAsync(const Model::SubmitVerificationRequest& request, const SubmitVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitVerificationOutcomeCallable submitVerificationCallable(const Model::SubmitVerificationRequest& request) const;
			CreateVerifySDKOutcome createVerifySDK(const Model::CreateVerifySDKRequest &request)const;
			void createVerifySDKAsync(const Model::CreateVerifySDKRequest& request, const CreateVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerifySDKOutcomeCallable createVerifySDKCallable(const Model::CreateVerifySDKRequest& request) const;
			ModifyDeviceInfoOutcome modifyDeviceInfo(const Model::ModifyDeviceInfoRequest &request)const;
			void modifyDeviceInfoAsync(const Model::ModifyDeviceInfoRequest& request, const ModifyDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceInfoOutcomeCallable modifyDeviceInfoCallable(const Model::ModifyDeviceInfoRequest& request) const;
			DescribeVerifySDKOutcome describeVerifySDK(const Model::DescribeVerifySDKRequest &request)const;
			void describeVerifySDKAsync(const Model::DescribeVerifySDKRequest& request, const DescribeVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifySDKOutcomeCallable describeVerifySDKCallable(const Model::DescribeVerifySDKRequest& request) const;
			GetStatusOutcome getStatus(const Model::GetStatusRequest &request)const;
			void getStatusAsync(const Model::GetStatusRequest& request, const GetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStatusOutcomeCallable getStatusCallable(const Model::GetStatusRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_
