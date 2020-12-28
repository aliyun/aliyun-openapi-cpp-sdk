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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_CREATEMODELREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_CREATEMODELREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/nlp-automl/Nlp_automlExport.h>

namespace AlibabaCloud
{
	namespace Nlp_automl
	{
		namespace Model
		{
			class ALIBABACLOUD_NLP_AUTOML_EXPORT CreateModelRequest : public RpcServiceRequest
			{

			public:
				CreateModelRequest();
				~CreateModelRequest();

				std::string getIsIncrementalTrain()const;
				void setIsIncrementalTrain(const std::string& isIncrementalTrain);
				std::string getModelName()const;
				void setModelName(const std::string& modelName);
				std::map<std::string, std::string> getDatasetIdList()const;
				void setDatasetIdList(const std::map<std::string, std::string>& datasetIdList);
				std::map<std::string, std::string> getTestDatasetIdList()const;
				void setTestDatasetIdList(const std::map<std::string, std::string>& testDatasetIdList);
				std::string getModelType()const;
				void setModelType(const std::string& modelType);
				long getProjectId()const;
				void setProjectId(long projectId);
				std::string getProduct()const;
				void setProduct(const std::string& product);
				long getModelId()const;
				void setModelId(long modelId);

            private:
				std::string isIncrementalTrain_;
				std::string modelName_;
				std::map<std::string, std::string> datasetIdList_;
				std::map<std::string, std::string> testDatasetIdList_;
				std::string modelType_;
				long projectId_;
				std::string product_;
				long modelId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_CREATEMODELREQUEST_H_