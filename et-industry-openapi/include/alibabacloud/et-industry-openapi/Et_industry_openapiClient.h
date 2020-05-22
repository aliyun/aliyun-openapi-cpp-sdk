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

#ifndef ALIBABACLOUD_ET_INDUSTRY_OPENAPI_ET_INDUSTRY_OPENAPICLIENT_H_
#define ALIBABACLOUD_ET_INDUSTRY_OPENAPI_ET_INDUSTRY_OPENAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "Et_industry_openapiExport.h"
#include "model/UploadDeviceDataRequest.h"
#include "model/UploadDeviceDataResult.h"


namespace AlibabaCloud
{
	namespace Et_industry_openapi
	{
		class ALIBABACLOUD_ET_INDUSTRY_OPENAPI_EXPORT Et_industry_openapiClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::UploadDeviceDataResult> UploadDeviceDataOutcome;
			typedef std::future<UploadDeviceDataOutcome> UploadDeviceDataOutcomeCallable;
			typedef std::function<void(const Et_industry_openapiClient*, const Model::UploadDeviceDataRequest&, const UploadDeviceDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadDeviceDataAsyncHandler;

			Et_industry_openapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Et_industry_openapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Et_industry_openapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Et_industry_openapiClient();
			UploadDeviceDataOutcome uploadDeviceData(const Model::UploadDeviceDataRequest &request)const;
			void uploadDeviceDataAsync(const Model::UploadDeviceDataRequest& request, const UploadDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadDeviceDataOutcomeCallable uploadDeviceDataCallable(const Model::UploadDeviceDataRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ET_INDUSTRY_OPENAPI_ET_INDUSTRY_OPENAPICLIENT_H_
