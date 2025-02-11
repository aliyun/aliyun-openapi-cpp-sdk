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
#include "model/BankMetaVerifyRequest.h"
#include "model/BankMetaVerifyResult.h"
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
#include "model/CredentialVerifyRequest.h"
#include "model/CredentialVerifyResult.h"
#include "model/DeepfakeDetectRequest.h"
#include "model/DeepfakeDetectResult.h"
#include "model/DeleteFaceVerifyResultRequest.h"
#include "model/DeleteFaceVerifyResultResult.h"
#include "model/DescribeDeviceInfoRequest.h"
#include "model/DescribeDeviceInfoResult.h"
#include "model/DescribeFaceGuardRiskRequest.h"
#include "model/DescribeFaceGuardRiskResult.h"
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
#include "model/Id2MetaPeriodVerifyRequest.h"
#include "model/Id2MetaPeriodVerifyResult.h"
#include "model/Id2MetaStandardVerifyRequest.h"
#include "model/Id2MetaStandardVerifyResult.h"
#include "model/Id2MetaVerifyRequest.h"
#include "model/Id2MetaVerifyResult.h"
#include "model/InitFaceVerifyRequest.h"
#include "model/InitFaceVerifyResult.h"
#include "model/InsertWhiteListSettingRequest.h"
#include "model/InsertWhiteListSettingResult.h"
#include "model/LivenessFaceVerifyRequest.h"
#include "model/LivenessFaceVerifyResult.h"
#include "model/Mobile3MetaDetailStandardVerifyRequest.h"
#include "model/Mobile3MetaDetailStandardVerifyResult.h"
#include "model/Mobile3MetaDetailVerifyRequest.h"
#include "model/Mobile3MetaDetailVerifyResult.h"
#include "model/Mobile3MetaSimpleStandardVerifyRequest.h"
#include "model/Mobile3MetaSimpleStandardVerifyResult.h"
#include "model/Mobile3MetaSimpleVerifyRequest.h"
#include "model/Mobile3MetaSimpleVerifyResult.h"
#include "model/MobileDetectRequest.h"
#include "model/MobileDetectResult.h"
#include "model/MobileOnlineStatusRequest.h"
#include "model/MobileOnlineStatusResult.h"
#include "model/MobileOnlineTimeRequest.h"
#include "model/MobileOnlineTimeResult.h"
#include "model/ModifyDeviceInfoRequest.h"
#include "model/ModifyDeviceInfoResult.h"
#include "model/PageQueryWhiteListSettingRequest.h"
#include "model/PageQueryWhiteListSettingResult.h"
#include "model/RemoveWhiteListSettingRequest.h"
#include "model/RemoveWhiteListSettingResult.h"
#include "model/Vehicle5ItemQueryRequest.h"
#include "model/Vehicle5ItemQueryResult.h"
#include "model/VehicleInsureQueryRequest.h"
#include "model/VehicleInsureQueryResult.h"
#include "model/VehicleMetaVerifyRequest.h"
#include "model/VehicleMetaVerifyResult.h"
#include "model/VehicleMetaVerifyV2Request.h"
#include "model/VehicleMetaVerifyV2Result.h"
#include "model/VehicleQueryRequest.h"
#include "model/VehicleQueryResult.h"
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
			typedef Outcome<Error, Model::BankMetaVerifyResult> BankMetaVerifyOutcome;
			typedef std::future<BankMetaVerifyOutcome> BankMetaVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::BankMetaVerifyRequest&, const BankMetaVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BankMetaVerifyAsyncHandler;
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
			typedef Outcome<Error, Model::CredentialVerifyResult> CredentialVerifyOutcome;
			typedef std::future<CredentialVerifyOutcome> CredentialVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CredentialVerifyRequest&, const CredentialVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CredentialVerifyAsyncHandler;
			typedef Outcome<Error, Model::DeepfakeDetectResult> DeepfakeDetectOutcome;
			typedef std::future<DeepfakeDetectOutcome> DeepfakeDetectOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DeepfakeDetectRequest&, const DeepfakeDetectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeepfakeDetectAsyncHandler;
			typedef Outcome<Error, Model::DeleteFaceVerifyResultResult> DeleteFaceVerifyResultOutcome;
			typedef std::future<DeleteFaceVerifyResultOutcome> DeleteFaceVerifyResultOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DeleteFaceVerifyResultRequest&, const DeleteFaceVerifyResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceVerifyResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceInfoResult> DescribeDeviceInfoOutcome;
			typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeDeviceInfoRequest&, const DescribeDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeFaceGuardRiskResult> DescribeFaceGuardRiskOutcome;
			typedef std::future<DescribeFaceGuardRiskOutcome> DescribeFaceGuardRiskOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeFaceGuardRiskRequest&, const DescribeFaceGuardRiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceGuardRiskAsyncHandler;
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
			typedef Outcome<Error, Model::Id2MetaPeriodVerifyResult> Id2MetaPeriodVerifyOutcome;
			typedef std::future<Id2MetaPeriodVerifyOutcome> Id2MetaPeriodVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Id2MetaPeriodVerifyRequest&, const Id2MetaPeriodVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Id2MetaPeriodVerifyAsyncHandler;
			typedef Outcome<Error, Model::Id2MetaStandardVerifyResult> Id2MetaStandardVerifyOutcome;
			typedef std::future<Id2MetaStandardVerifyOutcome> Id2MetaStandardVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Id2MetaStandardVerifyRequest&, const Id2MetaStandardVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Id2MetaStandardVerifyAsyncHandler;
			typedef Outcome<Error, Model::Id2MetaVerifyResult> Id2MetaVerifyOutcome;
			typedef std::future<Id2MetaVerifyOutcome> Id2MetaVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Id2MetaVerifyRequest&, const Id2MetaVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Id2MetaVerifyAsyncHandler;
			typedef Outcome<Error, Model::InitFaceVerifyResult> InitFaceVerifyOutcome;
			typedef std::future<InitFaceVerifyOutcome> InitFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::InitFaceVerifyRequest&, const InitFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::InsertWhiteListSettingResult> InsertWhiteListSettingOutcome;
			typedef std::future<InsertWhiteListSettingOutcome> InsertWhiteListSettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::InsertWhiteListSettingRequest&, const InsertWhiteListSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertWhiteListSettingAsyncHandler;
			typedef Outcome<Error, Model::LivenessFaceVerifyResult> LivenessFaceVerifyOutcome;
			typedef std::future<LivenessFaceVerifyOutcome> LivenessFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::LivenessFaceVerifyRequest&, const LivenessFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LivenessFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::Mobile3MetaDetailStandardVerifyResult> Mobile3MetaDetailStandardVerifyOutcome;
			typedef std::future<Mobile3MetaDetailStandardVerifyOutcome> Mobile3MetaDetailStandardVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Mobile3MetaDetailStandardVerifyRequest&, const Mobile3MetaDetailStandardVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Mobile3MetaDetailStandardVerifyAsyncHandler;
			typedef Outcome<Error, Model::Mobile3MetaDetailVerifyResult> Mobile3MetaDetailVerifyOutcome;
			typedef std::future<Mobile3MetaDetailVerifyOutcome> Mobile3MetaDetailVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Mobile3MetaDetailVerifyRequest&, const Mobile3MetaDetailVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Mobile3MetaDetailVerifyAsyncHandler;
			typedef Outcome<Error, Model::Mobile3MetaSimpleStandardVerifyResult> Mobile3MetaSimpleStandardVerifyOutcome;
			typedef std::future<Mobile3MetaSimpleStandardVerifyOutcome> Mobile3MetaSimpleStandardVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Mobile3MetaSimpleStandardVerifyRequest&, const Mobile3MetaSimpleStandardVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Mobile3MetaSimpleStandardVerifyAsyncHandler;
			typedef Outcome<Error, Model::Mobile3MetaSimpleVerifyResult> Mobile3MetaSimpleVerifyOutcome;
			typedef std::future<Mobile3MetaSimpleVerifyOutcome> Mobile3MetaSimpleVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Mobile3MetaSimpleVerifyRequest&, const Mobile3MetaSimpleVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Mobile3MetaSimpleVerifyAsyncHandler;
			typedef Outcome<Error, Model::MobileDetectResult> MobileDetectOutcome;
			typedef std::future<MobileDetectOutcome> MobileDetectOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::MobileDetectRequest&, const MobileDetectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MobileDetectAsyncHandler;
			typedef Outcome<Error, Model::MobileOnlineStatusResult> MobileOnlineStatusOutcome;
			typedef std::future<MobileOnlineStatusOutcome> MobileOnlineStatusOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::MobileOnlineStatusRequest&, const MobileOnlineStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MobileOnlineStatusAsyncHandler;
			typedef Outcome<Error, Model::MobileOnlineTimeResult> MobileOnlineTimeOutcome;
			typedef std::future<MobileOnlineTimeOutcome> MobileOnlineTimeOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::MobileOnlineTimeRequest&, const MobileOnlineTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MobileOnlineTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceInfoResult> ModifyDeviceInfoOutcome;
			typedef std::future<ModifyDeviceInfoOutcome> ModifyDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::ModifyDeviceInfoRequest&, const ModifyDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::PageQueryWhiteListSettingResult> PageQueryWhiteListSettingOutcome;
			typedef std::future<PageQueryWhiteListSettingOutcome> PageQueryWhiteListSettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::PageQueryWhiteListSettingRequest&, const PageQueryWhiteListSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageQueryWhiteListSettingAsyncHandler;
			typedef Outcome<Error, Model::RemoveWhiteListSettingResult> RemoveWhiteListSettingOutcome;
			typedef std::future<RemoveWhiteListSettingOutcome> RemoveWhiteListSettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::RemoveWhiteListSettingRequest&, const RemoveWhiteListSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWhiteListSettingAsyncHandler;
			typedef Outcome<Error, Model::Vehicle5ItemQueryResult> Vehicle5ItemQueryOutcome;
			typedef std::future<Vehicle5ItemQueryOutcome> Vehicle5ItemQueryOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::Vehicle5ItemQueryRequest&, const Vehicle5ItemQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Vehicle5ItemQueryAsyncHandler;
			typedef Outcome<Error, Model::VehicleInsureQueryResult> VehicleInsureQueryOutcome;
			typedef std::future<VehicleInsureQueryOutcome> VehicleInsureQueryOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VehicleInsureQueryRequest&, const VehicleInsureQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VehicleInsureQueryAsyncHandler;
			typedef Outcome<Error, Model::VehicleMetaVerifyResult> VehicleMetaVerifyOutcome;
			typedef std::future<VehicleMetaVerifyOutcome> VehicleMetaVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VehicleMetaVerifyRequest&, const VehicleMetaVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VehicleMetaVerifyAsyncHandler;
			typedef Outcome<Error, Model::VehicleMetaVerifyV2Result> VehicleMetaVerifyV2Outcome;
			typedef std::future<VehicleMetaVerifyV2Outcome> VehicleMetaVerifyV2OutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VehicleMetaVerifyV2Request&, const VehicleMetaVerifyV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> VehicleMetaVerifyV2AsyncHandler;
			typedef Outcome<Error, Model::VehicleQueryResult> VehicleQueryOutcome;
			typedef std::future<VehicleQueryOutcome> VehicleQueryOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VehicleQueryRequest&, const VehicleQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VehicleQueryAsyncHandler;
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
			BankMetaVerifyOutcome bankMetaVerify(const Model::BankMetaVerifyRequest &request)const;
			void bankMetaVerifyAsync(const Model::BankMetaVerifyRequest& request, const BankMetaVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BankMetaVerifyOutcomeCallable bankMetaVerifyCallable(const Model::BankMetaVerifyRequest& request) const;
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
			CredentialVerifyOutcome credentialVerify(const Model::CredentialVerifyRequest &request)const;
			void credentialVerifyAsync(const Model::CredentialVerifyRequest& request, const CredentialVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CredentialVerifyOutcomeCallable credentialVerifyCallable(const Model::CredentialVerifyRequest& request) const;
			DeepfakeDetectOutcome deepfakeDetect(const Model::DeepfakeDetectRequest &request)const;
			void deepfakeDetectAsync(const Model::DeepfakeDetectRequest& request, const DeepfakeDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeepfakeDetectOutcomeCallable deepfakeDetectCallable(const Model::DeepfakeDetectRequest& request) const;
			DeleteFaceVerifyResultOutcome deleteFaceVerifyResult(const Model::DeleteFaceVerifyResultRequest &request)const;
			void deleteFaceVerifyResultAsync(const Model::DeleteFaceVerifyResultRequest& request, const DeleteFaceVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFaceVerifyResultOutcomeCallable deleteFaceVerifyResultCallable(const Model::DeleteFaceVerifyResultRequest& request) const;
			DescribeDeviceInfoOutcome describeDeviceInfo(const Model::DescribeDeviceInfoRequest &request)const;
			void describeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceInfoOutcomeCallable describeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request) const;
			DescribeFaceGuardRiskOutcome describeFaceGuardRisk(const Model::DescribeFaceGuardRiskRequest &request)const;
			void describeFaceGuardRiskAsync(const Model::DescribeFaceGuardRiskRequest& request, const DescribeFaceGuardRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFaceGuardRiskOutcomeCallable describeFaceGuardRiskCallable(const Model::DescribeFaceGuardRiskRequest& request) const;
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
			Id2MetaPeriodVerifyOutcome id2MetaPeriodVerify(const Model::Id2MetaPeriodVerifyRequest &request)const;
			void id2MetaPeriodVerifyAsync(const Model::Id2MetaPeriodVerifyRequest& request, const Id2MetaPeriodVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Id2MetaPeriodVerifyOutcomeCallable id2MetaPeriodVerifyCallable(const Model::Id2MetaPeriodVerifyRequest& request) const;
			Id2MetaStandardVerifyOutcome id2MetaStandardVerify(const Model::Id2MetaStandardVerifyRequest &request)const;
			void id2MetaStandardVerifyAsync(const Model::Id2MetaStandardVerifyRequest& request, const Id2MetaStandardVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Id2MetaStandardVerifyOutcomeCallable id2MetaStandardVerifyCallable(const Model::Id2MetaStandardVerifyRequest& request) const;
			Id2MetaVerifyOutcome id2MetaVerify(const Model::Id2MetaVerifyRequest &request)const;
			void id2MetaVerifyAsync(const Model::Id2MetaVerifyRequest& request, const Id2MetaVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Id2MetaVerifyOutcomeCallable id2MetaVerifyCallable(const Model::Id2MetaVerifyRequest& request) const;
			InitFaceVerifyOutcome initFaceVerify(const Model::InitFaceVerifyRequest &request)const;
			void initFaceVerifyAsync(const Model::InitFaceVerifyRequest& request, const InitFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitFaceVerifyOutcomeCallable initFaceVerifyCallable(const Model::InitFaceVerifyRequest& request) const;
			InsertWhiteListSettingOutcome insertWhiteListSetting(const Model::InsertWhiteListSettingRequest &request)const;
			void insertWhiteListSettingAsync(const Model::InsertWhiteListSettingRequest& request, const InsertWhiteListSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertWhiteListSettingOutcomeCallable insertWhiteListSettingCallable(const Model::InsertWhiteListSettingRequest& request) const;
			LivenessFaceVerifyOutcome livenessFaceVerify(const Model::LivenessFaceVerifyRequest &request)const;
			void livenessFaceVerifyAsync(const Model::LivenessFaceVerifyRequest& request, const LivenessFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LivenessFaceVerifyOutcomeCallable livenessFaceVerifyCallable(const Model::LivenessFaceVerifyRequest& request) const;
			Mobile3MetaDetailStandardVerifyOutcome mobile3MetaDetailStandardVerify(const Model::Mobile3MetaDetailStandardVerifyRequest &request)const;
			void mobile3MetaDetailStandardVerifyAsync(const Model::Mobile3MetaDetailStandardVerifyRequest& request, const Mobile3MetaDetailStandardVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Mobile3MetaDetailStandardVerifyOutcomeCallable mobile3MetaDetailStandardVerifyCallable(const Model::Mobile3MetaDetailStandardVerifyRequest& request) const;
			Mobile3MetaDetailVerifyOutcome mobile3MetaDetailVerify(const Model::Mobile3MetaDetailVerifyRequest &request)const;
			void mobile3MetaDetailVerifyAsync(const Model::Mobile3MetaDetailVerifyRequest& request, const Mobile3MetaDetailVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Mobile3MetaDetailVerifyOutcomeCallable mobile3MetaDetailVerifyCallable(const Model::Mobile3MetaDetailVerifyRequest& request) const;
			Mobile3MetaSimpleStandardVerifyOutcome mobile3MetaSimpleStandardVerify(const Model::Mobile3MetaSimpleStandardVerifyRequest &request)const;
			void mobile3MetaSimpleStandardVerifyAsync(const Model::Mobile3MetaSimpleStandardVerifyRequest& request, const Mobile3MetaSimpleStandardVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Mobile3MetaSimpleStandardVerifyOutcomeCallable mobile3MetaSimpleStandardVerifyCallable(const Model::Mobile3MetaSimpleStandardVerifyRequest& request) const;
			Mobile3MetaSimpleVerifyOutcome mobile3MetaSimpleVerify(const Model::Mobile3MetaSimpleVerifyRequest &request)const;
			void mobile3MetaSimpleVerifyAsync(const Model::Mobile3MetaSimpleVerifyRequest& request, const Mobile3MetaSimpleVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Mobile3MetaSimpleVerifyOutcomeCallable mobile3MetaSimpleVerifyCallable(const Model::Mobile3MetaSimpleVerifyRequest& request) const;
			MobileDetectOutcome mobileDetect(const Model::MobileDetectRequest &request)const;
			void mobileDetectAsync(const Model::MobileDetectRequest& request, const MobileDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MobileDetectOutcomeCallable mobileDetectCallable(const Model::MobileDetectRequest& request) const;
			MobileOnlineStatusOutcome mobileOnlineStatus(const Model::MobileOnlineStatusRequest &request)const;
			void mobileOnlineStatusAsync(const Model::MobileOnlineStatusRequest& request, const MobileOnlineStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MobileOnlineStatusOutcomeCallable mobileOnlineStatusCallable(const Model::MobileOnlineStatusRequest& request) const;
			MobileOnlineTimeOutcome mobileOnlineTime(const Model::MobileOnlineTimeRequest &request)const;
			void mobileOnlineTimeAsync(const Model::MobileOnlineTimeRequest& request, const MobileOnlineTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MobileOnlineTimeOutcomeCallable mobileOnlineTimeCallable(const Model::MobileOnlineTimeRequest& request) const;
			ModifyDeviceInfoOutcome modifyDeviceInfo(const Model::ModifyDeviceInfoRequest &request)const;
			void modifyDeviceInfoAsync(const Model::ModifyDeviceInfoRequest& request, const ModifyDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceInfoOutcomeCallable modifyDeviceInfoCallable(const Model::ModifyDeviceInfoRequest& request) const;
			PageQueryWhiteListSettingOutcome pageQueryWhiteListSetting(const Model::PageQueryWhiteListSettingRequest &request)const;
			void pageQueryWhiteListSettingAsync(const Model::PageQueryWhiteListSettingRequest& request, const PageQueryWhiteListSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageQueryWhiteListSettingOutcomeCallable pageQueryWhiteListSettingCallable(const Model::PageQueryWhiteListSettingRequest& request) const;
			RemoveWhiteListSettingOutcome removeWhiteListSetting(const Model::RemoveWhiteListSettingRequest &request)const;
			void removeWhiteListSettingAsync(const Model::RemoveWhiteListSettingRequest& request, const RemoveWhiteListSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveWhiteListSettingOutcomeCallable removeWhiteListSettingCallable(const Model::RemoveWhiteListSettingRequest& request) const;
			Vehicle5ItemQueryOutcome vehicle5ItemQuery(const Model::Vehicle5ItemQueryRequest &request)const;
			void vehicle5ItemQueryAsync(const Model::Vehicle5ItemQueryRequest& request, const Vehicle5ItemQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Vehicle5ItemQueryOutcomeCallable vehicle5ItemQueryCallable(const Model::Vehicle5ItemQueryRequest& request) const;
			VehicleInsureQueryOutcome vehicleInsureQuery(const Model::VehicleInsureQueryRequest &request)const;
			void vehicleInsureQueryAsync(const Model::VehicleInsureQueryRequest& request, const VehicleInsureQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VehicleInsureQueryOutcomeCallable vehicleInsureQueryCallable(const Model::VehicleInsureQueryRequest& request) const;
			VehicleMetaVerifyOutcome vehicleMetaVerify(const Model::VehicleMetaVerifyRequest &request)const;
			void vehicleMetaVerifyAsync(const Model::VehicleMetaVerifyRequest& request, const VehicleMetaVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VehicleMetaVerifyOutcomeCallable vehicleMetaVerifyCallable(const Model::VehicleMetaVerifyRequest& request) const;
			VehicleMetaVerifyV2Outcome vehicleMetaVerifyV2(const Model::VehicleMetaVerifyV2Request &request)const;
			void vehicleMetaVerifyV2Async(const Model::VehicleMetaVerifyV2Request& request, const VehicleMetaVerifyV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VehicleMetaVerifyV2OutcomeCallable vehicleMetaVerifyV2Callable(const Model::VehicleMetaVerifyV2Request& request) const;
			VehicleQueryOutcome vehicleQuery(const Model::VehicleQueryRequest &request)const;
			void vehicleQueryAsync(const Model::VehicleQueryRequest& request, const VehicleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VehicleQueryOutcomeCallable vehicleQueryCallable(const Model::VehicleQueryRequest& request) const;
			VerifyMaterialOutcome verifyMaterial(const Model::VerifyMaterialRequest &request)const;
			void verifyMaterialAsync(const Model::VerifyMaterialRequest& request, const VerifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyMaterialOutcomeCallable verifyMaterialCallable(const Model::VerifyMaterialRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_
