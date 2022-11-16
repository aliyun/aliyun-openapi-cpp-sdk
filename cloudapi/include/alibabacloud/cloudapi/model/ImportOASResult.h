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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_IMPORTOASRESULT_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_IMPORTOASRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT ImportOASResult : public ServiceResult
			{
			public:
				struct SuccessApi
				{
					std::string path;
					std::string apiOperation;
					std::string apiId;
					std::string httpMethod;
				};
				struct FailedApi
				{
					std::string path;
					std::string errorMsg;
					std::string httpMethod;
				};
				struct FailedModel
				{
					std::string modelName;
					std::string errorMsg;
					std::string groupId;
				};
				struct SuccessModel
				{
					std::string modelUid;
					std::string modelName;
					std::string modelOperation;
					std::string groupId;
				};


				ImportOASResult();
				explicit ImportOASResult(const std::string &payload);
				~ImportOASResult();
				std::vector<std::string> getErrorMessages()const;
				std::vector<SuccessApi> getSuccessApis()const;
				std::vector<std::string> getWarningMessages()const;
				std::string getOperationId()const;
				std::vector<FailedModel> getFailedModels()const;
				std::vector<SuccessModel> getSuccessModels()const;
				std::vector<FailedApi> getFailedApis()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> errorMessages_;
				std::vector<SuccessApi> successApis_;
				std::vector<std::string> warningMessages_;
				std::string operationId_;
				std::vector<FailedModel> failedModels_;
				std::vector<SuccessModel> successModels_;
				std::vector<FailedApi> failedApis_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_IMPORTOASRESULT_H_