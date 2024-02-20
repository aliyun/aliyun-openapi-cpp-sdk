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

#ifndef ALIBABACLOUD_AIGEN_AIGENCLIENT_H_
#define ALIBABACLOUD_AIGEN_AIGENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AigenExport.h"
#include "model/GenerateCosplayImageRequest.h"
#include "model/GenerateCosplayImageResult.h"
#include "model/GenerateTextDeformationRequest.h"
#include "model/GenerateTextDeformationResult.h"
#include "model/GenerateTextTextureRequest.h"
#include "model/GenerateTextTextureResult.h"
#include "model/InteractiveFullSegmentationRequest.h"
#include "model/InteractiveFullSegmentationResult.h"
#include "model/InteractiveScribbleSegmentationRequest.h"
#include "model/InteractiveScribbleSegmentationResult.h"


namespace AlibabaCloud
{
	namespace Aigen
	{
		class ALIBABACLOUD_AIGEN_EXPORT AigenClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GenerateCosplayImageResult> GenerateCosplayImageOutcome;
			typedef std::future<GenerateCosplayImageOutcome> GenerateCosplayImageOutcomeCallable;
			typedef std::function<void(const AigenClient*, const Model::GenerateCosplayImageRequest&, const GenerateCosplayImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCosplayImageAsyncHandler;
			typedef Outcome<Error, Model::GenerateTextDeformationResult> GenerateTextDeformationOutcome;
			typedef std::future<GenerateTextDeformationOutcome> GenerateTextDeformationOutcomeCallable;
			typedef std::function<void(const AigenClient*, const Model::GenerateTextDeformationRequest&, const GenerateTextDeformationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateTextDeformationAsyncHandler;
			typedef Outcome<Error, Model::GenerateTextTextureResult> GenerateTextTextureOutcome;
			typedef std::future<GenerateTextTextureOutcome> GenerateTextTextureOutcomeCallable;
			typedef std::function<void(const AigenClient*, const Model::GenerateTextTextureRequest&, const GenerateTextTextureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateTextTextureAsyncHandler;
			typedef Outcome<Error, Model::InteractiveFullSegmentationResult> InteractiveFullSegmentationOutcome;
			typedef std::future<InteractiveFullSegmentationOutcome> InteractiveFullSegmentationOutcomeCallable;
			typedef std::function<void(const AigenClient*, const Model::InteractiveFullSegmentationRequest&, const InteractiveFullSegmentationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InteractiveFullSegmentationAsyncHandler;
			typedef Outcome<Error, Model::InteractiveScribbleSegmentationResult> InteractiveScribbleSegmentationOutcome;
			typedef std::future<InteractiveScribbleSegmentationOutcome> InteractiveScribbleSegmentationOutcomeCallable;
			typedef std::function<void(const AigenClient*, const Model::InteractiveScribbleSegmentationRequest&, const InteractiveScribbleSegmentationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InteractiveScribbleSegmentationAsyncHandler;

			AigenClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AigenClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AigenClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AigenClient();
			GenerateCosplayImageOutcome generateCosplayImage(const Model::GenerateCosplayImageRequest &request)const;
			void generateCosplayImageAsync(const Model::GenerateCosplayImageRequest& request, const GenerateCosplayImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateCosplayImageOutcomeCallable generateCosplayImageCallable(const Model::GenerateCosplayImageRequest& request) const;
			GenerateTextDeformationOutcome generateTextDeformation(const Model::GenerateTextDeformationRequest &request)const;
			void generateTextDeformationAsync(const Model::GenerateTextDeformationRequest& request, const GenerateTextDeformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateTextDeformationOutcomeCallable generateTextDeformationCallable(const Model::GenerateTextDeformationRequest& request) const;
			GenerateTextTextureOutcome generateTextTexture(const Model::GenerateTextTextureRequest &request)const;
			void generateTextTextureAsync(const Model::GenerateTextTextureRequest& request, const GenerateTextTextureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateTextTextureOutcomeCallable generateTextTextureCallable(const Model::GenerateTextTextureRequest& request) const;
			InteractiveFullSegmentationOutcome interactiveFullSegmentation(const Model::InteractiveFullSegmentationRequest &request)const;
			void interactiveFullSegmentationAsync(const Model::InteractiveFullSegmentationRequest& request, const InteractiveFullSegmentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InteractiveFullSegmentationOutcomeCallable interactiveFullSegmentationCallable(const Model::InteractiveFullSegmentationRequest& request) const;
			InteractiveScribbleSegmentationOutcome interactiveScribbleSegmentation(const Model::InteractiveScribbleSegmentationRequest &request)const;
			void interactiveScribbleSegmentationAsync(const Model::InteractiveScribbleSegmentationRequest& request, const InteractiveScribbleSegmentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InteractiveScribbleSegmentationOutcomeCallable interactiveScribbleSegmentationCallable(const Model::InteractiveScribbleSegmentationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AIGEN_AIGENCLIENT_H_
