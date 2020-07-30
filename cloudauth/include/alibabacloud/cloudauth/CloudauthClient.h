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
#include "model/CompareFaceVerifyRequest.h"
#include "model/CompareFaceVerifyResult.h"
#include "model/CompareFacesRequest.h"
#include "model/CompareFacesResult.h"
#include "model/ContrastFaceVerifyRequest.h"
#include "model/ContrastFaceVerifyResult.h"
#include "model/CreateAuthKeyRequest.h"
#include "model/CreateAuthKeyResult.h"
#include "model/CreateRPSDKRequest.h"
#include "model/CreateRPSDKResult.h"
#include "model/CreateVerifySDKRequest.h"
#include "model/CreateVerifySDKResult.h"
#include "model/CreateVerifySettingRequest.h"
#include "model/CreateVerifySettingResult.h"
#include "model/DescribeAppInfoRequest.h"
#include "model/DescribeAppInfoResult.h"
#include "model/DescribeDeviceInfoRequest.h"
#include "model/DescribeDeviceInfoResult.h"
#include "model/DescribeFaceUsageRequest.h"
#include "model/DescribeFaceUsageResult.h"
#include "model/DescribeFaceVerifyRequest.h"
#include "model/DescribeFaceVerifyResult.h"
#include "model/DescribeOssUploadTokenRequest.h"
#include "model/DescribeOssUploadTokenResult.h"
#include "model/DescribeRPSDKRequest.h"
#include "model/DescribeRPSDKResult.h"
#include "model/DescribeSdkUrlRequest.h"
#include "model/DescribeSdkUrlResult.h"
#include "model/DescribeSmartVerifyRequest.h"
#include "model/DescribeSmartVerifyResult.h"
#include "model/DescribeUpdatePackageResultRequest.h"
#include "model/DescribeUpdatePackageResultResult.h"
#include "model/DescribeUploadInfoRequest.h"
#include "model/DescribeUploadInfoResult.h"
#include "model/DescribeUserStatusRequest.h"
#include "model/DescribeUserStatusResult.h"
#include "model/DescribeVerifyRecordsRequest.h"
#include "model/DescribeVerifyRecordsResult.h"
#include "model/DescribeVerifyResultRequest.h"
#include "model/DescribeVerifyResultResult.h"
#include "model/DescribeVerifySDKRequest.h"
#include "model/DescribeVerifySDKResult.h"
#include "model/DescribeVerifySettingRequest.h"
#include "model/DescribeVerifySettingResult.h"
#include "model/DescribeVerifyTokenRequest.h"
#include "model/DescribeVerifyTokenResult.h"
#include "model/DescribeVerifyUsageRequest.h"
#include "model/DescribeVerifyUsageResult.h"
#include "model/DetectFaceAttributesRequest.h"
#include "model/DetectFaceAttributesResult.h"
#include "model/GetMaterialsRequest.h"
#include "model/GetMaterialsResult.h"
#include "model/GetStatusRequest.h"
#include "model/GetStatusResult.h"
#include "model/GetVerifyTokenRequest.h"
#include "model/GetVerifyTokenResult.h"
#include "model/InitDeviceRequest.h"
#include "model/InitDeviceResult.h"
#include "model/InitFaceVerifyRequest.h"
#include "model/InitFaceVerifyResult.h"
#include "model/InitSmartVerifyRequest.h"
#include "model/InitSmartVerifyResult.h"
#include "model/ModifyDeviceInfoRequest.h"
#include "model/ModifyDeviceInfoResult.h"
#include "model/SubmitMaterialsRequest.h"
#include "model/SubmitMaterialsResult.h"
#include "model/SubmitVerificationRequest.h"
#include "model/SubmitVerificationResult.h"
#include "model/UpdateAppPackageRequest.h"
#include "model/UpdateAppPackageResult.h"
#include "model/UpdateVerifySettingRequest.h"
#include "model/UpdateVerifySettingResult.h"
#include "model/VerifyDeviceRequest.h"
#include "model/VerifyDeviceResult.h"
#include "model/VerifyMaterialRequest.h"
#include "model/VerifyMaterialResult.h"


namespace AlibabaCloud
{
	namespace Cloudauth
	{
		class ALIBABACLOUD_CLOUDAUTH_EXPORT CloudauthClient : public RpcServiceClient
		{
		public:
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
			typedef Outcome<Error, Model::CreateRPSDKResult> CreateRPSDKOutcome;
			typedef std::future<CreateRPSDKOutcome> CreateRPSDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateRPSDKRequest&, const CreateRPSDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRPSDKAsyncHandler;
			typedef Outcome<Error, Model::CreateVerifySDKResult> CreateVerifySDKOutcome;
			typedef std::future<CreateVerifySDKOutcome> CreateVerifySDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateVerifySDKRequest&, const CreateVerifySDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifySDKAsyncHandler;
			typedef Outcome<Error, Model::CreateVerifySettingResult> CreateVerifySettingOutcome;
			typedef std::future<CreateVerifySettingOutcome> CreateVerifySettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateVerifySettingRequest&, const CreateVerifySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifySettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppInfoResult> DescribeAppInfoOutcome;
			typedef std::future<DescribeAppInfoOutcome> DescribeAppInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeAppInfoRequest&, const DescribeAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceInfoResult> DescribeDeviceInfoOutcome;
			typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeDeviceInfoRequest&, const DescribeDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeFaceUsageResult> DescribeFaceUsageOutcome;
			typedef std::future<DescribeFaceUsageOutcome> DescribeFaceUsageOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeFaceUsageRequest&, const DescribeFaceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeFaceVerifyResult> DescribeFaceVerifyOutcome;
			typedef std::future<DescribeFaceVerifyOutcome> DescribeFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeFaceVerifyRequest&, const DescribeFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssUploadTokenResult> DescribeOssUploadTokenOutcome;
			typedef std::future<DescribeOssUploadTokenOutcome> DescribeOssUploadTokenOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeOssUploadTokenRequest&, const DescribeOssUploadTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssUploadTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeRPSDKResult> DescribeRPSDKOutcome;
			typedef std::future<DescribeRPSDKOutcome> DescribeRPSDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeRPSDKRequest&, const DescribeRPSDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRPSDKAsyncHandler;
			typedef Outcome<Error, Model::DescribeSdkUrlResult> DescribeSdkUrlOutcome;
			typedef std::future<DescribeSdkUrlOutcome> DescribeSdkUrlOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeSdkUrlRequest&, const DescribeSdkUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSdkUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartVerifyResult> DescribeSmartVerifyOutcome;
			typedef std::future<DescribeSmartVerifyOutcome> DescribeSmartVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeSmartVerifyRequest&, const DescribeSmartVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartVerifyAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpdatePackageResultResult> DescribeUpdatePackageResultOutcome;
			typedef std::future<DescribeUpdatePackageResultOutcome> DescribeUpdatePackageResultOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeUpdatePackageResultRequest&, const DescribeUpdatePackageResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpdatePackageResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeUploadInfoResult> DescribeUploadInfoOutcome;
			typedef std::future<DescribeUploadInfoOutcome> DescribeUploadInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeUploadInfoRequest&, const DescribeUploadInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserStatusResult> DescribeUserStatusOutcome;
			typedef std::future<DescribeUserStatusOutcome> DescribeUserStatusOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeUserStatusRequest&, const DescribeUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyRecordsResult> DescribeVerifyRecordsOutcome;
			typedef std::future<DescribeVerifyRecordsOutcome> DescribeVerifyRecordsOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyRecordsRequest&, const DescribeVerifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyResultResult> DescribeVerifyResultOutcome;
			typedef std::future<DescribeVerifyResultOutcome> DescribeVerifyResultOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyResultRequest&, const DescribeVerifyResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifySDKResult> DescribeVerifySDKOutcome;
			typedef std::future<DescribeVerifySDKOutcome> DescribeVerifySDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifySDKRequest&, const DescribeVerifySDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifySDKAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifySettingResult> DescribeVerifySettingOutcome;
			typedef std::future<DescribeVerifySettingOutcome> DescribeVerifySettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifySettingRequest&, const DescribeVerifySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifySettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyTokenResult> DescribeVerifyTokenOutcome;
			typedef std::future<DescribeVerifyTokenOutcome> DescribeVerifyTokenOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyTokenRequest&, const DescribeVerifyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyUsageResult> DescribeVerifyUsageOutcome;
			typedef std::future<DescribeVerifyUsageOutcome> DescribeVerifyUsageOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyUsageRequest&, const DescribeVerifyUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyUsageAsyncHandler;
			typedef Outcome<Error, Model::DetectFaceAttributesResult> DetectFaceAttributesOutcome;
			typedef std::future<DetectFaceAttributesOutcome> DetectFaceAttributesOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DetectFaceAttributesRequest&, const DetectFaceAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAttributesAsyncHandler;
			typedef Outcome<Error, Model::GetMaterialsResult> GetMaterialsOutcome;
			typedef std::future<GetMaterialsOutcome> GetMaterialsOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::GetMaterialsRequest&, const GetMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMaterialsAsyncHandler;
			typedef Outcome<Error, Model::GetStatusResult> GetStatusOutcome;
			typedef std::future<GetStatusOutcome> GetStatusOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::GetStatusRequest&, const GetStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStatusAsyncHandler;
			typedef Outcome<Error, Model::GetVerifyTokenResult> GetVerifyTokenOutcome;
			typedef std::future<GetVerifyTokenOutcome> GetVerifyTokenOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::GetVerifyTokenRequest&, const GetVerifyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVerifyTokenAsyncHandler;
			typedef Outcome<Error, Model::InitDeviceResult> InitDeviceOutcome;
			typedef std::future<InitDeviceOutcome> InitDeviceOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::InitDeviceRequest&, const InitDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitDeviceAsyncHandler;
			typedef Outcome<Error, Model::InitFaceVerifyResult> InitFaceVerifyOutcome;
			typedef std::future<InitFaceVerifyOutcome> InitFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::InitFaceVerifyRequest&, const InitFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::InitSmartVerifyResult> InitSmartVerifyOutcome;
			typedef std::future<InitSmartVerifyOutcome> InitSmartVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::InitSmartVerifyRequest&, const InitSmartVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitSmartVerifyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceInfoResult> ModifyDeviceInfoOutcome;
			typedef std::future<ModifyDeviceInfoOutcome> ModifyDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::ModifyDeviceInfoRequest&, const ModifyDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::SubmitMaterialsResult> SubmitMaterialsOutcome;
			typedef std::future<SubmitMaterialsOutcome> SubmitMaterialsOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::SubmitMaterialsRequest&, const SubmitMaterialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMaterialsAsyncHandler;
			typedef Outcome<Error, Model::SubmitVerificationResult> SubmitVerificationOutcome;
			typedef std::future<SubmitVerificationOutcome> SubmitVerificationOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::SubmitVerificationRequest&, const SubmitVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVerificationAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppPackageResult> UpdateAppPackageOutcome;
			typedef std::future<UpdateAppPackageOutcome> UpdateAppPackageOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::UpdateAppPackageRequest&, const UpdateAppPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppPackageAsyncHandler;
			typedef Outcome<Error, Model::UpdateVerifySettingResult> UpdateVerifySettingOutcome;
			typedef std::future<UpdateVerifySettingOutcome> UpdateVerifySettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::UpdateVerifySettingRequest&, const UpdateVerifySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVerifySettingAsyncHandler;
			typedef Outcome<Error, Model::VerifyDeviceResult> VerifyDeviceOutcome;
			typedef std::future<VerifyDeviceOutcome> VerifyDeviceOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VerifyDeviceRequest&, const VerifyDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDeviceAsyncHandler;
			typedef Outcome<Error, Model::VerifyMaterialResult> VerifyMaterialOutcome;
			typedef std::future<VerifyMaterialOutcome> VerifyMaterialOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VerifyMaterialRequest&, const VerifyMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyMaterialAsyncHandler;

			CloudauthClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudauthClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudauthClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudauthClient();
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
			CreateRPSDKOutcome createRPSDK(const Model::CreateRPSDKRequest &request)const;
			void createRPSDKAsync(const Model::CreateRPSDKRequest& request, const CreateRPSDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRPSDKOutcomeCallable createRPSDKCallable(const Model::CreateRPSDKRequest& request) const;
			CreateVerifySDKOutcome createVerifySDK(const Model::CreateVerifySDKRequest &request)const;
			void createVerifySDKAsync(const Model::CreateVerifySDKRequest& request, const CreateVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerifySDKOutcomeCallable createVerifySDKCallable(const Model::CreateVerifySDKRequest& request) const;
			CreateVerifySettingOutcome createVerifySetting(const Model::CreateVerifySettingRequest &request)const;
			void createVerifySettingAsync(const Model::CreateVerifySettingRequest& request, const CreateVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerifySettingOutcomeCallable createVerifySettingCallable(const Model::CreateVerifySettingRequest& request) const;
			DescribeAppInfoOutcome describeAppInfo(const Model::DescribeAppInfoRequest &request)const;
			void describeAppInfoAsync(const Model::DescribeAppInfoRequest& request, const DescribeAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppInfoOutcomeCallable describeAppInfoCallable(const Model::DescribeAppInfoRequest& request) const;
			DescribeDeviceInfoOutcome describeDeviceInfo(const Model::DescribeDeviceInfoRequest &request)const;
			void describeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceInfoOutcomeCallable describeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request) const;
			DescribeFaceUsageOutcome describeFaceUsage(const Model::DescribeFaceUsageRequest &request)const;
			void describeFaceUsageAsync(const Model::DescribeFaceUsageRequest& request, const DescribeFaceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFaceUsageOutcomeCallable describeFaceUsageCallable(const Model::DescribeFaceUsageRequest& request) const;
			DescribeFaceVerifyOutcome describeFaceVerify(const Model::DescribeFaceVerifyRequest &request)const;
			void describeFaceVerifyAsync(const Model::DescribeFaceVerifyRequest& request, const DescribeFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFaceVerifyOutcomeCallable describeFaceVerifyCallable(const Model::DescribeFaceVerifyRequest& request) const;
			DescribeOssUploadTokenOutcome describeOssUploadToken(const Model::DescribeOssUploadTokenRequest &request)const;
			void describeOssUploadTokenAsync(const Model::DescribeOssUploadTokenRequest& request, const DescribeOssUploadTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssUploadTokenOutcomeCallable describeOssUploadTokenCallable(const Model::DescribeOssUploadTokenRequest& request) const;
			DescribeRPSDKOutcome describeRPSDK(const Model::DescribeRPSDKRequest &request)const;
			void describeRPSDKAsync(const Model::DescribeRPSDKRequest& request, const DescribeRPSDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRPSDKOutcomeCallable describeRPSDKCallable(const Model::DescribeRPSDKRequest& request) const;
			DescribeSdkUrlOutcome describeSdkUrl(const Model::DescribeSdkUrlRequest &request)const;
			void describeSdkUrlAsync(const Model::DescribeSdkUrlRequest& request, const DescribeSdkUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSdkUrlOutcomeCallable describeSdkUrlCallable(const Model::DescribeSdkUrlRequest& request) const;
			DescribeSmartVerifyOutcome describeSmartVerify(const Model::DescribeSmartVerifyRequest &request)const;
			void describeSmartVerifyAsync(const Model::DescribeSmartVerifyRequest& request, const DescribeSmartVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartVerifyOutcomeCallable describeSmartVerifyCallable(const Model::DescribeSmartVerifyRequest& request) const;
			DescribeUpdatePackageResultOutcome describeUpdatePackageResult(const Model::DescribeUpdatePackageResultRequest &request)const;
			void describeUpdatePackageResultAsync(const Model::DescribeUpdatePackageResultRequest& request, const DescribeUpdatePackageResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpdatePackageResultOutcomeCallable describeUpdatePackageResultCallable(const Model::DescribeUpdatePackageResultRequest& request) const;
			DescribeUploadInfoOutcome describeUploadInfo(const Model::DescribeUploadInfoRequest &request)const;
			void describeUploadInfoAsync(const Model::DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUploadInfoOutcomeCallable describeUploadInfoCallable(const Model::DescribeUploadInfoRequest& request) const;
			DescribeUserStatusOutcome describeUserStatus(const Model::DescribeUserStatusRequest &request)const;
			void describeUserStatusAsync(const Model::DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserStatusOutcomeCallable describeUserStatusCallable(const Model::DescribeUserStatusRequest& request) const;
			DescribeVerifyRecordsOutcome describeVerifyRecords(const Model::DescribeVerifyRecordsRequest &request)const;
			void describeVerifyRecordsAsync(const Model::DescribeVerifyRecordsRequest& request, const DescribeVerifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyRecordsOutcomeCallable describeVerifyRecordsCallable(const Model::DescribeVerifyRecordsRequest& request) const;
			DescribeVerifyResultOutcome describeVerifyResult(const Model::DescribeVerifyResultRequest &request)const;
			void describeVerifyResultAsync(const Model::DescribeVerifyResultRequest& request, const DescribeVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyResultOutcomeCallable describeVerifyResultCallable(const Model::DescribeVerifyResultRequest& request) const;
			DescribeVerifySDKOutcome describeVerifySDK(const Model::DescribeVerifySDKRequest &request)const;
			void describeVerifySDKAsync(const Model::DescribeVerifySDKRequest& request, const DescribeVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifySDKOutcomeCallable describeVerifySDKCallable(const Model::DescribeVerifySDKRequest& request) const;
			DescribeVerifySettingOutcome describeVerifySetting(const Model::DescribeVerifySettingRequest &request)const;
			void describeVerifySettingAsync(const Model::DescribeVerifySettingRequest& request, const DescribeVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifySettingOutcomeCallable describeVerifySettingCallable(const Model::DescribeVerifySettingRequest& request) const;
			DescribeVerifyTokenOutcome describeVerifyToken(const Model::DescribeVerifyTokenRequest &request)const;
			void describeVerifyTokenAsync(const Model::DescribeVerifyTokenRequest& request, const DescribeVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyTokenOutcomeCallable describeVerifyTokenCallable(const Model::DescribeVerifyTokenRequest& request) const;
			DescribeVerifyUsageOutcome describeVerifyUsage(const Model::DescribeVerifyUsageRequest &request)const;
			void describeVerifyUsageAsync(const Model::DescribeVerifyUsageRequest& request, const DescribeVerifyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyUsageOutcomeCallable describeVerifyUsageCallable(const Model::DescribeVerifyUsageRequest& request) const;
			DetectFaceAttributesOutcome detectFaceAttributes(const Model::DetectFaceAttributesRequest &request)const;
			void detectFaceAttributesAsync(const Model::DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectFaceAttributesOutcomeCallable detectFaceAttributesCallable(const Model::DetectFaceAttributesRequest& request) const;
			GetMaterialsOutcome getMaterials(const Model::GetMaterialsRequest &request)const;
			void getMaterialsAsync(const Model::GetMaterialsRequest& request, const GetMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMaterialsOutcomeCallable getMaterialsCallable(const Model::GetMaterialsRequest& request) const;
			GetStatusOutcome getStatus(const Model::GetStatusRequest &request)const;
			void getStatusAsync(const Model::GetStatusRequest& request, const GetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStatusOutcomeCallable getStatusCallable(const Model::GetStatusRequest& request) const;
			GetVerifyTokenOutcome getVerifyToken(const Model::GetVerifyTokenRequest &request)const;
			void getVerifyTokenAsync(const Model::GetVerifyTokenRequest& request, const GetVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVerifyTokenOutcomeCallable getVerifyTokenCallable(const Model::GetVerifyTokenRequest& request) const;
			InitDeviceOutcome initDevice(const Model::InitDeviceRequest &request)const;
			void initDeviceAsync(const Model::InitDeviceRequest& request, const InitDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitDeviceOutcomeCallable initDeviceCallable(const Model::InitDeviceRequest& request) const;
			InitFaceVerifyOutcome initFaceVerify(const Model::InitFaceVerifyRequest &request)const;
			void initFaceVerifyAsync(const Model::InitFaceVerifyRequest& request, const InitFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitFaceVerifyOutcomeCallable initFaceVerifyCallable(const Model::InitFaceVerifyRequest& request) const;
			InitSmartVerifyOutcome initSmartVerify(const Model::InitSmartVerifyRequest &request)const;
			void initSmartVerifyAsync(const Model::InitSmartVerifyRequest& request, const InitSmartVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitSmartVerifyOutcomeCallable initSmartVerifyCallable(const Model::InitSmartVerifyRequest& request) const;
			ModifyDeviceInfoOutcome modifyDeviceInfo(const Model::ModifyDeviceInfoRequest &request)const;
			void modifyDeviceInfoAsync(const Model::ModifyDeviceInfoRequest& request, const ModifyDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceInfoOutcomeCallable modifyDeviceInfoCallable(const Model::ModifyDeviceInfoRequest& request) const;
			SubmitMaterialsOutcome submitMaterials(const Model::SubmitMaterialsRequest &request)const;
			void submitMaterialsAsync(const Model::SubmitMaterialsRequest& request, const SubmitMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMaterialsOutcomeCallable submitMaterialsCallable(const Model::SubmitMaterialsRequest& request) const;
			SubmitVerificationOutcome submitVerification(const Model::SubmitVerificationRequest &request)const;
			void submitVerificationAsync(const Model::SubmitVerificationRequest& request, const SubmitVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitVerificationOutcomeCallable submitVerificationCallable(const Model::SubmitVerificationRequest& request) const;
			UpdateAppPackageOutcome updateAppPackage(const Model::UpdateAppPackageRequest &request)const;
			void updateAppPackageAsync(const Model::UpdateAppPackageRequest& request, const UpdateAppPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppPackageOutcomeCallable updateAppPackageCallable(const Model::UpdateAppPackageRequest& request) const;
			UpdateVerifySettingOutcome updateVerifySetting(const Model::UpdateVerifySettingRequest &request)const;
			void updateVerifySettingAsync(const Model::UpdateVerifySettingRequest& request, const UpdateVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVerifySettingOutcomeCallable updateVerifySettingCallable(const Model::UpdateVerifySettingRequest& request) const;
			VerifyDeviceOutcome verifyDevice(const Model::VerifyDeviceRequest &request)const;
			void verifyDeviceAsync(const Model::VerifyDeviceRequest& request, const VerifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyDeviceOutcomeCallable verifyDeviceCallable(const Model::VerifyDeviceRequest& request) const;
			VerifyMaterialOutcome verifyMaterial(const Model::VerifyMaterialRequest &request)const;
			void verifyMaterialAsync(const Model::VerifyMaterialRequest& request, const VerifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyMaterialOutcomeCallable verifyMaterialCallable(const Model::VerifyMaterialRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_
