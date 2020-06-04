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

#ifndef ALIBABACLOUD_ADDRESS_PURIFICATION_ADDRESS_PURIFICATIONCLIENT_H_
#define ALIBABACLOUD_ADDRESS_PURIFICATION_ADDRESS_PURIFICATIONCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Address_purificationExport.h"
#include "model/ClassifyPOIRequest.h"
#include "model/ClassifyPOIResult.h"
#include "model/CompleteAddressRequest.h"
#include "model/CompleteAddressResult.h"
#include "model/CorrectAddressRequest.h"
#include "model/CorrectAddressResult.h"
#include "model/ExtractAddressRequest.h"
#include "model/ExtractAddressResult.h"
#include "model/ExtractNameRequest.h"
#include "model/ExtractNameResult.h"
#include "model/ExtractPhoneRequest.h"
#include "model/ExtractPhoneResult.h"
#include "model/GetAddressDivisionCodeRequest.h"
#include "model/GetAddressDivisionCodeResult.h"
#include "model/GetAddressSimilarityRequest.h"
#include "model/GetAddressSimilarityResult.h"
#include "model/GetZipcodeRequest.h"
#include "model/GetZipcodeResult.h"
#include "model/StructureAddressRequest.h"
#include "model/StructureAddressResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"


namespace AlibabaCloud
{
	namespace Address_purification
	{
		class ALIBABACLOUD_ADDRESS_PURIFICATION_EXPORT Address_purificationClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ClassifyPOIResult> ClassifyPOIOutcome;
			typedef std::future<ClassifyPOIOutcome> ClassifyPOIOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::ClassifyPOIRequest&, const ClassifyPOIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyPOIAsyncHandler;
			typedef Outcome<Error, Model::CompleteAddressResult> CompleteAddressOutcome;
			typedef std::future<CompleteAddressOutcome> CompleteAddressOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::CompleteAddressRequest&, const CompleteAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompleteAddressAsyncHandler;
			typedef Outcome<Error, Model::CorrectAddressResult> CorrectAddressOutcome;
			typedef std::future<CorrectAddressOutcome> CorrectAddressOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::CorrectAddressRequest&, const CorrectAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CorrectAddressAsyncHandler;
			typedef Outcome<Error, Model::ExtractAddressResult> ExtractAddressOutcome;
			typedef std::future<ExtractAddressOutcome> ExtractAddressOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::ExtractAddressRequest&, const ExtractAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtractAddressAsyncHandler;
			typedef Outcome<Error, Model::ExtractNameResult> ExtractNameOutcome;
			typedef std::future<ExtractNameOutcome> ExtractNameOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::ExtractNameRequest&, const ExtractNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtractNameAsyncHandler;
			typedef Outcome<Error, Model::ExtractPhoneResult> ExtractPhoneOutcome;
			typedef std::future<ExtractPhoneOutcome> ExtractPhoneOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::ExtractPhoneRequest&, const ExtractPhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtractPhoneAsyncHandler;
			typedef Outcome<Error, Model::GetAddressDivisionCodeResult> GetAddressDivisionCodeOutcome;
			typedef std::future<GetAddressDivisionCodeOutcome> GetAddressDivisionCodeOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::GetAddressDivisionCodeRequest&, const GetAddressDivisionCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAddressDivisionCodeAsyncHandler;
			typedef Outcome<Error, Model::GetAddressSimilarityResult> GetAddressSimilarityOutcome;
			typedef std::future<GetAddressSimilarityOutcome> GetAddressSimilarityOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::GetAddressSimilarityRequest&, const GetAddressSimilarityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAddressSimilarityAsyncHandler;
			typedef Outcome<Error, Model::GetZipcodeResult> GetZipcodeOutcome;
			typedef std::future<GetZipcodeOutcome> GetZipcodeOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::GetZipcodeRequest&, const GetZipcodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetZipcodeAsyncHandler;
			typedef Outcome<Error, Model::StructureAddressResult> StructureAddressOutcome;
			typedef std::future<StructureAddressOutcome> StructureAddressOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::StructureAddressRequest&, const StructureAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StructureAddressAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;

			Address_purificationClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Address_purificationClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Address_purificationClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Address_purificationClient();
			ClassifyPOIOutcome classifyPOI(const Model::ClassifyPOIRequest &request)const;
			void classifyPOIAsync(const Model::ClassifyPOIRequest& request, const ClassifyPOIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClassifyPOIOutcomeCallable classifyPOICallable(const Model::ClassifyPOIRequest& request) const;
			CompleteAddressOutcome completeAddress(const Model::CompleteAddressRequest &request)const;
			void completeAddressAsync(const Model::CompleteAddressRequest& request, const CompleteAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompleteAddressOutcomeCallable completeAddressCallable(const Model::CompleteAddressRequest& request) const;
			CorrectAddressOutcome correctAddress(const Model::CorrectAddressRequest &request)const;
			void correctAddressAsync(const Model::CorrectAddressRequest& request, const CorrectAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CorrectAddressOutcomeCallable correctAddressCallable(const Model::CorrectAddressRequest& request) const;
			ExtractAddressOutcome extractAddress(const Model::ExtractAddressRequest &request)const;
			void extractAddressAsync(const Model::ExtractAddressRequest& request, const ExtractAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtractAddressOutcomeCallable extractAddressCallable(const Model::ExtractAddressRequest& request) const;
			ExtractNameOutcome extractName(const Model::ExtractNameRequest &request)const;
			void extractNameAsync(const Model::ExtractNameRequest& request, const ExtractNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtractNameOutcomeCallable extractNameCallable(const Model::ExtractNameRequest& request) const;
			ExtractPhoneOutcome extractPhone(const Model::ExtractPhoneRequest &request)const;
			void extractPhoneAsync(const Model::ExtractPhoneRequest& request, const ExtractPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtractPhoneOutcomeCallable extractPhoneCallable(const Model::ExtractPhoneRequest& request) const;
			GetAddressDivisionCodeOutcome getAddressDivisionCode(const Model::GetAddressDivisionCodeRequest &request)const;
			void getAddressDivisionCodeAsync(const Model::GetAddressDivisionCodeRequest& request, const GetAddressDivisionCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAddressDivisionCodeOutcomeCallable getAddressDivisionCodeCallable(const Model::GetAddressDivisionCodeRequest& request) const;
			GetAddressSimilarityOutcome getAddressSimilarity(const Model::GetAddressSimilarityRequest &request)const;
			void getAddressSimilarityAsync(const Model::GetAddressSimilarityRequest& request, const GetAddressSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAddressSimilarityOutcomeCallable getAddressSimilarityCallable(const Model::GetAddressSimilarityRequest& request) const;
			GetZipcodeOutcome getZipcode(const Model::GetZipcodeRequest &request)const;
			void getZipcodeAsync(const Model::GetZipcodeRequest& request, const GetZipcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetZipcodeOutcomeCallable getZipcodeCallable(const Model::GetZipcodeRequest& request) const;
			StructureAddressOutcome structureAddress(const Model::StructureAddressRequest &request)const;
			void structureAddressAsync(const Model::StructureAddressRequest& request, const StructureAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StructureAddressOutcomeCallable structureAddressCallable(const Model::StructureAddressRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ADDRESS_PURIFICATION_ADDRESS_PURIFICATIONCLIENT_H_
