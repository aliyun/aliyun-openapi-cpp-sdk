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

#ifndef ALIBABACLOUD_IQA_MODEL_CREATEPROJECTREQUEST_H_
#define ALIBABACLOUD_IQA_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iqa/IqaExport.h>

namespace AlibabaCloud
{
	namespace Iqa
	{
		namespace Model
		{
			class ALIBABACLOUD_IQA_EXPORT CreateProjectRequest : public RpcServiceRequest
			{

			public:
				CreateProjectRequest();
				~CreateProjectRequest();

				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getModelId()const;
				void setModelId(const std::string& modelId);
				std::string getProjectType()const;
				void setProjectType(const std::string& projectType);

            private:
				std::string projectName_;
				std::string modelId_;
				std::string projectType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IQA_MODEL_CREATEPROJECTREQUEST_H_