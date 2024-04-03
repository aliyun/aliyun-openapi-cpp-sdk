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
#include "model/AIGCFaceVerifyRequest.h"
#include "model/AIGCFaceVerifyResult.h"
#include "model/CompareFaceVerifyRequest.h"
#include "model/CompareFaceVerifyResult.h"
#include "model/CompareFacesRequest.h"
#include "model/CompareFacesResult.h"
#include "model/ContrastFaceVerifyRequest.h"
#include "model/ContrastFaceVerifyResult.h"
#include "model/CreateAuthKeyRequest.h"
#include "model/CreateAuthKeyResult.h"
#include "model/CreateVerifySettingRequest.h"
#include "model/CreateVerifySettingResult.h"
#include "model/DescribeDeviceInfoRequest.h"
#include "model/DescribeDeviceInfoResult.h"
#include "model/DescribeFaceVerifyRequest.h"
#include "model/DescribeFaceVerifyResult.h"
#include "model/DescribeOssUploadTokenRequest.h"
#include "model/DescribeOssUploadTokenResult.h"
#include "model/DescribePageFaceVerifyDataRequest.h"
#include "model/DescribePageFaceVerifyDataResult.h"
#include "model/DescribeSmartStatisticsPageListRequest.h"
#include "model/DescribeSmartStatisticsPageListResult.h"
#include "model/DescribeVerifyResultRequest.h"
#include "model/DescribeVerifyResultResult.h"
#include "model/DescribeVerifySDKRequest.h"
#include "model/DescribeVerifySDKResult.h"
#include "model/DescribeVerifyTokenRequest.h"
#include "model/DescribeVerifyTokenResult.h"
#include "model/DetectFaceAttributesRequest.h"
#include "model/DetectFaceAttributesResult.h"
#include "model/Id2MetaVerifyRequest.h"
#include "model/Id2MetaVerifyResult.h"
#include "model/InitFaceVerifyRequest.h"
#include "model/InitFaceVerifyResult.h"
#include "model/LivenessFaceVerifyRequest.h"
#include "model/LivenessFaceVerifyResult.h"
#include "model/Mobile3MetaDetailVerifyRequest.h"
#include "model/Mobile3MetaDetailVerifyResult.h"
#include "model/Mobile3MetaSimpleVerifyRequest.h"
#include "model/Mobile3MetaSimpleVerifyResult.h"
#include "model/ModifyDeviceInfoRequest.h"
#include "model/ModifyDeviceInfoResult.h"
#include "model/VerifyMaterialRequest.h"
#include "model/VerifyMaterialResult.h"


namespace AlibabaCloud
{
	namespace Cloudauth
	{
		class ALIBABACLOUD_CLOUDAUTH_EXPORT CloudauthClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AIGCFaceVerifyResult> AIGCFaceVerifyOutcome;
			typedef std::future<AIGCFaceVerifyOutcome> AIGCFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::AIGCFaceVerifyRequest&, const AIGCFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AIGCFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::CompareFaceVerifyResult> CompareFaceVerifyOutcome;
			typedef std::future<CompareFaceVerifyOutcome> CompareFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CompareFaceVerifyRequest&, const CompareFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::CompareFacesResult> CompareFacesOutcome;
			typedef std::future<CompareFacesOutcome> CompareFacesOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CompareFacesRequest&, const CompareFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareFacesAsyncHandler;
			typedef Outcome<Error, Model::ContrastFaceVerifyResult> ContrastFaceVerifyOutcome;
			typedef std::future<ContrastFaceVerifyOutcome> ContrastFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::ContrastFaceVerifyRequest&, const ContrastFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContrastFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::CreateAuthKeyResult> CreateAuthKeyOutcome;
			typedef std::future<CreateAuthKeyOutcome> CreateAuthKeyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateAuthKeyRequest&, const CreateAuthKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateVerifySettingResult> CreateVerifySettingOutcome;
			typedef std::future<CreateVerifySettingOutcome> CreateVerifySettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateVerifySettingRequest&, const CreateVerifySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifySettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceInfoResult> DescribeDeviceInfoOutcome;
			typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeDeviceInfoRequest&, const DescribeDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeFaceVerifyResult> DescribeFaceVerifyOutcome;
			typedef std::future<DescribeFaceVerifyOutcome> DescribeFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeFaceVerifyRequest&, const DescribeFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssUploadTokenResult> DescribeOssUploadTokenOutcome;
			typedef std::future<DescribeOssUploadTokenOutcome> DescribeOssUploadTokenOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeOssUploadTokenRequest&, const DescribeOssUploadTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssUploadTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribePageFaceVerifyDataResult> DescribePageFaceVerifyDataOutcome;
			typedef std::future<DescribePageFaceVerifyDataOutcome> DescribePageFaceVerifyDataOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribePageFaceVerifyDataRequest&, const DescribePageFaceVerifyDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePageFaceVerifyDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartStatisticsPageListResult> DescribeSmartStatisticsPageListOutcome;
			typedef std::future<DescribeSmartStatisticsPageListOutcome> DescribeSmartStatisticsPageListOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeSmartStatisticsPageListRequest&, const DescribeSmartStatisticsPageListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartStatisticsPageListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyResultResult> DescribeVerifyResultOutcome;
			typedef std::future<DescribeVerifyResultOutcome> DescribeVerifyResultOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyResultRequest&, const DescribeVerifyResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifySDKResult> DescribeVerifySDKOutcome;
			typedef std::future<DescribeVerifySDKOutcome> DescribeVerifySDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifySDKRequest&, const DescribeVerifySDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifySDKAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyTokenResult> DescribeVerifyTokenOutcome;
			typedef std::future<DescribeVerifyTokenOutcome> DescribeVerifyTokenOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyTokenRequest&, const DescribeVerifyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyTokenAsyncHandler;
			typedef Outcome<Error, Model::DetectFaceAttributesResult> DetectFaceAttributesOutcome;
			typedef std::future<DetectFaceAttributesOutcome> DetectFaceAttributesOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DetectFaceAttributesRequest&, const DetectFaceAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAttributesAsyncHandler;
			typedef Outcome<Error, Model::Id2MetaVerifyResult> Id2MetaVerifyOutcome;
			typedef std::future<Id2MetaVerifyOutcome> Id2MetaVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Id2MetaVerifyRequest&, const Id2MetaVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Id2MetaVerifyAsyncHandler;
			typedef Outcome<Error, Model::InitFaceVerifyResult> InitFaceVerifyOutcome;
			typedef std::future<InitFaceVerifyOutcome> InitFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::InitFaceVerifyRequest&, const InitFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::LivenessFaceVerifyResult> LivenessFaceVerifyOutcome;
			typedef std::future<LivenessFaceVerifyOutcome> LivenessFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::LivenessFaceVerifyRequest&, const LivenessFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LivenessFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::Mobile3MetaDetailVerifyResult> Mobile3MetaDetailVerifyOutcome;
			typedef std::future<Mobile3MetaDetailVerifyOutcome> Mobile3MetaDetailVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Mobile3MetaDetailVerifyRequest&, const Mobile3MetaDetailVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Mobile3MetaDetailVerifyAsyncHandler;
			typedef Outcome<Error, Model::Mobile3MetaSimpleVerifyResult> Mobile3MetaSimpleVerifyOutcome;
			typedef std::future<Mobile3MetaSimpleVerifyOutcome> Mobile3MetaSimpleVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Mobile3MetaSimpleVerifyRequest&, const Mobile3MetaSimpleVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Mobile3MetaSimpleVerifyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceInfoResult> ModifyDeviceInfoOutcome;
			typedef std::future<ModifyDeviceInfoOutcome> ModifyDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::ModifyDeviceInfoRequest&, const ModifyDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::VerifyMaterialResult> VerifyMaterialOutcome;
			typedef std::future<VerifyMaterialOutcome> VerifyMaterialOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VerifyMaterialRequest&, const VerifyMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyMaterialAsyncHandler;

			CloudauthClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudauthClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudauthClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudauthClient();
			AIGCFaceVerifyOutcome aIGCFaceVerify(const Model::AIGCFaceVerifyRequest &request)const;
			void aIGCFaceVerifyAsync(const Model::AIGCFaceVerifyRequest& request, const AIGCFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AIGCFaceVerifyOutcomeCallable aIGCFaceVerifyCallable(const Model::AIGCFaceVerifyRequest& request) const;
			CompareFaceVerifyOutcome compareFaceVerify(const Model::CompareFaceVerifyRequest &request)const;
			void compareFaceVerifyAsync(const Model::CompareFaceVerifyRequest& request, const CompareFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareFaceVerifyOutcomeCallable compareFaceVerifyCallable(const Model::CompareFaceVerifyRequest& request) const;
			CompareFacesOutcome compareFaces(const Model::CompareFacesRequest &request)const;
			void compareFacesAsync(const Model::CompareFacesRequest& request, const CompareFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareFacesOutcomeCallable compareFacesCallable(const Model::CompareFacesRequest& request) const;
			ContrastFaceVerifyOutcome contrastFaceVerify(const Model::ContrastFaceVerifyRequest &request)const;
			void contrastFaceVerifyAsync(const Model::ContrastFaceVerifyRequest& request, const ContrastFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContrastFaceVerifyOutcomeCallable contrastFaceVerifyCallable(const Model::ContrastFaceVerifyRequest& request) const;
			CreateAuthKeyOutcome createAuthKey(const Model::CreateAuthKeyRequest &request)const;
			void createAuthKeyAsync(const Model::CreateAuthKeyRequest& request, const CreateAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuthKeyOutcomeCallable createAuthKeyCallable(const Model::CreateAuthKeyRequest& request) const;
			CreateVerifySettingOutcome createVerifySetting(const Model::CreateVerifySettingRequest &request)const;
			void createVerifySettingAsync(const Model::CreateVerifySettingRequest& request, const CreateVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerifySettingOutcomeCallable createVerifySettingCallable(const Model::CreateVerifySettingRequest& request) const;
			DescribeDeviceInfoOutcome describeDeviceInfo(const Model::DescribeDeviceInfoRequest &request)const;
			void describeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceInfoOutcomeCallable describeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request) const;
			DescribeFaceVerifyOutcome describeFaceVerify(const Model::DescribeFaceVerifyRequest &request)const;
			void describeFaceVerifyAsync(const Model::DescribeFaceVerifyRequest& request, const DescribeFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFaceVerifyOutcomeCallable describeFaceVerifyCallable(const Model::DescribeFaceVerifyRequest& request) const;
			DescribeOssUploadTokenOutcome describeOssUploadToken(const Model::DescribeOssUploadTokenRequest &request)const;
			void describeOssUploadTokenAsync(const Model::DescribeOssUploadTokenRequest& request, const DescribeOssUploadTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssUploadTokenOutcomeCallable describeOssUploadTokenCallable(const Model::DescribeOssUploadTokenRequest& request) const;
			DescribePageFaceVerifyDataOutcome describePageFaceVerifyData(const Model::DescribePageFaceVerifyDataRequest &request)const;
			void describePageFaceVerifyDataAsync(const Model::DescribePageFaceVerifyDataRequest& request, const DescribePageFaceVerifyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePageFaceVerifyDataOutcomeCallable describePageFaceVerifyDataCallable(const Model::DescribePageFaceVerifyDataRequest& request) const;
			DescribeSmartStatisticsPageListOutcome describeSmartStatisticsPageList(const Model::DescribeSmartStatisticsPageListRequest &request)const;
			void describeSmartStatisticsPageListAsync(const Model::DescribeSmartStatisticsPageListRequest& request, const DescribeSmartStatisticsPageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartStatisticsPageListOutcomeCallable describeSmartStatisticsPageListCallable(const Model::DescribeSmartStatisticsPageListRequest& request) const;
			DescribeVerifyResultOutcome describeVerifyResult(const Model::DescribeVerifyResultRequest &request)const;
			void describeVerifyResultAsync(const Model::DescribeVerifyResultRequest& request, const DescribeVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyResultOutcomeCallable describeVerifyResultCallable(const Model::DescribeVerifyResultRequest& request) const;
			DescribeVerifySDKOutcome describeVerifySDK(const Model::DescribeVerifySDKRequest &request)const;
			void describeVerifySDKAsync(const Model::DescribeVerifySDKRequest& request, const DescribeVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifySDKOutcomeCallable describeVerifySDKCallable(const Model::DescribeVerifySDKRequest& request) const;
			DescribeVerifyTokenOutcome describeVerifyToken(const Model::DescribeVerifyTokenRequest &request)const;
			void describeVerifyTokenAsync(const Model::DescribeVerifyTokenRequest& request, const DescribeVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyTokenOutcomeCallable describeVerifyTokenCallable(const Model::DescribeVerifyTokenRequest& request) const;
			DetectFaceAttributesOutcome detectFaceAttributes(const Model::DetectFaceAttributesRequest &request)const;
			void detectFaceAttributesAsync(const Model::DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectFaceAttributesOutcomeCallable detectFaceAttributesCallable(const Model::DetectFaceAttributesRequest& request) const;
			Id2MetaVerifyOutcome id2MetaVerify(const Model::Id2MetaVerifyRequest &request)const;
			void id2MetaVerifyAsync(const Model::Id2MetaVerifyRequest& request, const Id2MetaVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Id2MetaVerifyOutcomeCallable id2MetaVerifyCallable(const Model::Id2MetaVerifyRequest& request) const;
			InitFaceVerifyOutcome initFaceVerify(const Model::InitFaceVerifyRequest &request)const;
			void initFaceVerifyAsync(const Model::InitFaceVerifyRequest& request, const InitFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitFaceVerifyOutcomeCallable initFaceVerifyCallable(const Model::InitFaceVerifyRequest& request) const;
			LivenessFaceVerifyOutcome livenessFaceVerify(const Model::LivenessFaceVerifyRequest &request)const;
			void livenessFaceVerifyAsync(const Model::LivenessFaceVerifyRequest& request, const LivenessFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LivenessFaceVerifyOutcomeCallable livenessFaceVerifyCallable(const Model::LivenessFaceVerifyRequest& request) const;
			Mobile3MetaDetailVerifyOutcome mobile3MetaDetailVerify(const Model::Mobile3MetaDetailVerifyRequest &request)const;
			void mobile3MetaDetailVerifyAsync(const Model::Mobile3MetaDetailVerifyRequest& request, const Mobile3MetaDetailVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Mobile3MetaDetailVerifyOutcomeCallable mobile3MetaDetailVerifyCallable(const Model::Mobile3MetaDetailVerifyRequest& request) const;
			Mobile3MetaSimpleVerifyOutcome mobile3MetaSimpleVerify(const Model::Mobile3MetaSimpleVerifyRequest &request)const;
			void mobile3MetaSimpleVerifyAsync(const Model::Mobile3MetaSimpleVerifyRequest& request, const Mobile3MetaSimpleVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Mobile3MetaSimpleVerifyOutcomeCallable mobile3MetaSimpleVerifyCallable(const Model::Mobile3MetaSimpleVerifyRequest& request) const;
			ModifyDeviceInfoOutcome modifyDeviceInfo(const Model::ModifyDeviceInfoRequest &request)const;
			void modifyDeviceInfoAsync(const Model::ModifyDeviceInfoRequest& request, const ModifyDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceInfoOutcomeCallable modifyDeviceInfoCallable(const Model::ModifyDeviceInfoRequest& request) const;
			VerifyMaterialOutcome verifyMaterial(const Model::VerifyMaterialRequest &request)const;
			void verifyMaterialAsync(const Model::VerifyMaterialRequest& request, const VerifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyMaterialOutcomeCallable verifyMaterialCallable(const Model::VerifyMaterialRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_
