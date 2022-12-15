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

#ifndef ALIBABACLOUD_OBJECTDET_OBJECTDETCLIENT_H_
#define ALIBABACLOUD_OBJECTDET_OBJECTDETCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ObjectdetExport.h"
#include "model/ClassifyVehicleInsuranceRequest.h"
#include "model/ClassifyVehicleInsuranceResult.h"
#include "model/DetectIPCObjectRequest.h"
#include "model/DetectIPCObjectResult.h"
#include "model/DetectKitchenAnimalsRequest.h"
#include "model/DetectKitchenAnimalsResult.h"
#include "model/DetectMainBodyRequest.h"
#include "model/DetectMainBodyResult.h"
#include "model/DetectObjectRequest.h"
#include "model/DetectObjectResult.h"
#include "model/DetectTransparentImageRequest.h"
#include "model/DetectTransparentImageResult.h"
#include "model/DetectVehicleRequest.h"
#include "model/DetectVehicleResult.h"
#include "model/DetectVehicleICongestionRequest.h"
#include "model/DetectVehicleICongestionResult.h"
#include "model/DetectVehicleIllegalParkingRequest.h"
#include "model/DetectVehicleIllegalParkingResult.h"
#include "model/DetectVideoIPCObjectRequest.h"
#include "model/DetectVideoIPCObjectResult.h"
#include "model/DetectWhiteBaseImageRequest.h"
#include "model/DetectWhiteBaseImageResult.h"
#include "model/DetectWorkwearRequest.h"
#include "model/DetectWorkwearResult.h"
#include "model/GetAsyncJobResultRequest.h"
#include "model/GetAsyncJobResultResult.h"
#include "model/RecognizeVehicleDamageRequest.h"
#include "model/RecognizeVehicleDamageResult.h"
#include "model/RecognizeVehicleDashboardRequest.h"
#include "model/RecognizeVehicleDashboardResult.h"
#include "model/RecognizeVehiclePartsRequest.h"
#include "model/RecognizeVehiclePartsResult.h"


namespace AlibabaCloud
{
	namespace Objectdet
	{
		class ALIBABACLOUD_OBJECTDET_EXPORT ObjectdetClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ClassifyVehicleInsuranceResult> ClassifyVehicleInsuranceOutcome;
			typedef std::future<ClassifyVehicleInsuranceOutcome> ClassifyVehicleInsuranceOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::ClassifyVehicleInsuranceRequest&, const ClassifyVehicleInsuranceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyVehicleInsuranceAsyncHandler;
			typedef Outcome<Error, Model::DetectIPCObjectResult> DetectIPCObjectOutcome;
			typedef std::future<DetectIPCObjectOutcome> DetectIPCObjectOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectIPCObjectRequest&, const DetectIPCObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectIPCObjectAsyncHandler;
			typedef Outcome<Error, Model::DetectKitchenAnimalsResult> DetectKitchenAnimalsOutcome;
			typedef std::future<DetectKitchenAnimalsOutcome> DetectKitchenAnimalsOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectKitchenAnimalsRequest&, const DetectKitchenAnimalsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectKitchenAnimalsAsyncHandler;
			typedef Outcome<Error, Model::DetectMainBodyResult> DetectMainBodyOutcome;
			typedef std::future<DetectMainBodyOutcome> DetectMainBodyOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectMainBodyRequest&, const DetectMainBodyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectMainBodyAsyncHandler;
			typedef Outcome<Error, Model::DetectObjectResult> DetectObjectOutcome;
			typedef std::future<DetectObjectOutcome> DetectObjectOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectObjectRequest&, const DetectObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectObjectAsyncHandler;
			typedef Outcome<Error, Model::DetectTransparentImageResult> DetectTransparentImageOutcome;
			typedef std::future<DetectTransparentImageOutcome> DetectTransparentImageOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectTransparentImageRequest&, const DetectTransparentImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectTransparentImageAsyncHandler;
			typedef Outcome<Error, Model::DetectVehicleResult> DetectVehicleOutcome;
			typedef std::future<DetectVehicleOutcome> DetectVehicleOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectVehicleRequest&, const DetectVehicleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectVehicleAsyncHandler;
			typedef Outcome<Error, Model::DetectVehicleICongestionResult> DetectVehicleICongestionOutcome;
			typedef std::future<DetectVehicleICongestionOutcome> DetectVehicleICongestionOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectVehicleICongestionRequest&, const DetectVehicleICongestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectVehicleICongestionAsyncHandler;
			typedef Outcome<Error, Model::DetectVehicleIllegalParkingResult> DetectVehicleIllegalParkingOutcome;
			typedef std::future<DetectVehicleIllegalParkingOutcome> DetectVehicleIllegalParkingOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectVehicleIllegalParkingRequest&, const DetectVehicleIllegalParkingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectVehicleIllegalParkingAsyncHandler;
			typedef Outcome<Error, Model::DetectVideoIPCObjectResult> DetectVideoIPCObjectOutcome;
			typedef std::future<DetectVideoIPCObjectOutcome> DetectVideoIPCObjectOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectVideoIPCObjectRequest&, const DetectVideoIPCObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectVideoIPCObjectAsyncHandler;
			typedef Outcome<Error, Model::DetectWhiteBaseImageResult> DetectWhiteBaseImageOutcome;
			typedef std::future<DetectWhiteBaseImageOutcome> DetectWhiteBaseImageOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectWhiteBaseImageRequest&, const DetectWhiteBaseImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectWhiteBaseImageAsyncHandler;
			typedef Outcome<Error, Model::DetectWorkwearResult> DetectWorkwearOutcome;
			typedef std::future<DetectWorkwearOutcome> DetectWorkwearOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::DetectWorkwearRequest&, const DetectWorkwearOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectWorkwearAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncJobResultResult> GetAsyncJobResultOutcome;
			typedef std::future<GetAsyncJobResultOutcome> GetAsyncJobResultOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::GetAsyncJobResultRequest&, const GetAsyncJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncJobResultAsyncHandler;
			typedef Outcome<Error, Model::RecognizeVehicleDamageResult> RecognizeVehicleDamageOutcome;
			typedef std::future<RecognizeVehicleDamageOutcome> RecognizeVehicleDamageOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::RecognizeVehicleDamageRequest&, const RecognizeVehicleDamageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeVehicleDamageAsyncHandler;
			typedef Outcome<Error, Model::RecognizeVehicleDashboardResult> RecognizeVehicleDashboardOutcome;
			typedef std::future<RecognizeVehicleDashboardOutcome> RecognizeVehicleDashboardOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::RecognizeVehicleDashboardRequest&, const RecognizeVehicleDashboardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeVehicleDashboardAsyncHandler;
			typedef Outcome<Error, Model::RecognizeVehiclePartsResult> RecognizeVehiclePartsOutcome;
			typedef std::future<RecognizeVehiclePartsOutcome> RecognizeVehiclePartsOutcomeCallable;
			typedef std::function<void(const ObjectdetClient*, const Model::RecognizeVehiclePartsRequest&, const RecognizeVehiclePartsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeVehiclePartsAsyncHandler;

			ObjectdetClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ObjectdetClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ObjectdetClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ObjectdetClient();
			ClassifyVehicleInsuranceOutcome classifyVehicleInsurance(const Model::ClassifyVehicleInsuranceRequest &request)const;
			void classifyVehicleInsuranceAsync(const Model::ClassifyVehicleInsuranceRequest& request, const ClassifyVehicleInsuranceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClassifyVehicleInsuranceOutcomeCallable classifyVehicleInsuranceCallable(const Model::ClassifyVehicleInsuranceRequest& request) const;
			DetectIPCObjectOutcome detectIPCObject(const Model::DetectIPCObjectRequest &request)const;
			void detectIPCObjectAsync(const Model::DetectIPCObjectRequest& request, const DetectIPCObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectIPCObjectOutcomeCallable detectIPCObjectCallable(const Model::DetectIPCObjectRequest& request) const;
			DetectKitchenAnimalsOutcome detectKitchenAnimals(const Model::DetectKitchenAnimalsRequest &request)const;
			void detectKitchenAnimalsAsync(const Model::DetectKitchenAnimalsRequest& request, const DetectKitchenAnimalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectKitchenAnimalsOutcomeCallable detectKitchenAnimalsCallable(const Model::DetectKitchenAnimalsRequest& request) const;
			DetectMainBodyOutcome detectMainBody(const Model::DetectMainBodyRequest &request)const;
			void detectMainBodyAsync(const Model::DetectMainBodyRequest& request, const DetectMainBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectMainBodyOutcomeCallable detectMainBodyCallable(const Model::DetectMainBodyRequest& request) const;
			DetectObjectOutcome detectObject(const Model::DetectObjectRequest &request)const;
			void detectObjectAsync(const Model::DetectObjectRequest& request, const DetectObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectObjectOutcomeCallable detectObjectCallable(const Model::DetectObjectRequest& request) const;
			DetectTransparentImageOutcome detectTransparentImage(const Model::DetectTransparentImageRequest &request)const;
			void detectTransparentImageAsync(const Model::DetectTransparentImageRequest& request, const DetectTransparentImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectTransparentImageOutcomeCallable detectTransparentImageCallable(const Model::DetectTransparentImageRequest& request) const;
			DetectVehicleOutcome detectVehicle(const Model::DetectVehicleRequest &request)const;
			void detectVehicleAsync(const Model::DetectVehicleRequest& request, const DetectVehicleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectVehicleOutcomeCallable detectVehicleCallable(const Model::DetectVehicleRequest& request) const;
			DetectVehicleICongestionOutcome detectVehicleICongestion(const Model::DetectVehicleICongestionRequest &request)const;
			void detectVehicleICongestionAsync(const Model::DetectVehicleICongestionRequest& request, const DetectVehicleICongestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectVehicleICongestionOutcomeCallable detectVehicleICongestionCallable(const Model::DetectVehicleICongestionRequest& request) const;
			DetectVehicleIllegalParkingOutcome detectVehicleIllegalParking(const Model::DetectVehicleIllegalParkingRequest &request)const;
			void detectVehicleIllegalParkingAsync(const Model::DetectVehicleIllegalParkingRequest& request, const DetectVehicleIllegalParkingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectVehicleIllegalParkingOutcomeCallable detectVehicleIllegalParkingCallable(const Model::DetectVehicleIllegalParkingRequest& request) const;
			DetectVideoIPCObjectOutcome detectVideoIPCObject(const Model::DetectVideoIPCObjectRequest &request)const;
			void detectVideoIPCObjectAsync(const Model::DetectVideoIPCObjectRequest& request, const DetectVideoIPCObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectVideoIPCObjectOutcomeCallable detectVideoIPCObjectCallable(const Model::DetectVideoIPCObjectRequest& request) const;
			DetectWhiteBaseImageOutcome detectWhiteBaseImage(const Model::DetectWhiteBaseImageRequest &request)const;
			void detectWhiteBaseImageAsync(const Model::DetectWhiteBaseImageRequest& request, const DetectWhiteBaseImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectWhiteBaseImageOutcomeCallable detectWhiteBaseImageCallable(const Model::DetectWhiteBaseImageRequest& request) const;
			DetectWorkwearOutcome detectWorkwear(const Model::DetectWorkwearRequest &request)const;
			void detectWorkwearAsync(const Model::DetectWorkwearRequest& request, const DetectWorkwearAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectWorkwearOutcomeCallable detectWorkwearCallable(const Model::DetectWorkwearRequest& request) const;
			GetAsyncJobResultOutcome getAsyncJobResult(const Model::GetAsyncJobResultRequest &request)const;
			void getAsyncJobResultAsync(const Model::GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncJobResultOutcomeCallable getAsyncJobResultCallable(const Model::GetAsyncJobResultRequest& request) const;
			RecognizeVehicleDamageOutcome recognizeVehicleDamage(const Model::RecognizeVehicleDamageRequest &request)const;
			void recognizeVehicleDamageAsync(const Model::RecognizeVehicleDamageRequest& request, const RecognizeVehicleDamageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeVehicleDamageOutcomeCallable recognizeVehicleDamageCallable(const Model::RecognizeVehicleDamageRequest& request) const;
			RecognizeVehicleDashboardOutcome recognizeVehicleDashboard(const Model::RecognizeVehicleDashboardRequest &request)const;
			void recognizeVehicleDashboardAsync(const Model::RecognizeVehicleDashboardRequest& request, const RecognizeVehicleDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeVehicleDashboardOutcomeCallable recognizeVehicleDashboardCallable(const Model::RecognizeVehicleDashboardRequest& request) const;
			RecognizeVehiclePartsOutcome recognizeVehicleParts(const Model::RecognizeVehiclePartsRequest &request)const;
			void recognizeVehiclePartsAsync(const Model::RecognizeVehiclePartsRequest& request, const RecognizeVehiclePartsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeVehiclePartsOutcomeCallable recognizeVehiclePartsCallable(const Model::RecognizeVehiclePartsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OBJECTDET_OBJECTDETCLIENT_H_
