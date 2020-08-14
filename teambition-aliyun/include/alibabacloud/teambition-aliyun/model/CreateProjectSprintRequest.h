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

#ifndef ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTSPRINTREQUEST_H_
#define ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTSPRINTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/teambition-aliyun/Teambition_aliyunExport.h>

namespace AlibabaCloud
{
	namespace Teambition_aliyun
	{
		namespace Model
		{
			class ALIBABACLOUD_TEAMBITION_ALIYUN_EXPORT CreateProjectSprintRequest : public RpcServiceRequest
			{

			public:
				CreateProjectSprintRequest();
				~CreateProjectSprintRequest();

				std::string getExecutorId()const;
				void setExecutorId(const std::string& executorId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);
				std::string getDueDate()const;
				void setDueDate(const std::string& dueDate);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::string executorId_;
				std::string description_;
				std::string startDate_;
				std::string orgId_;
				std::string dueDate_;
				std::string name_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTSPRINTREQUEST_H_