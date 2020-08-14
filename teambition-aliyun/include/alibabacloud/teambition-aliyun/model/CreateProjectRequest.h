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

#ifndef ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTREQUEST_H_
#define ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTREQUEST_H_

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
			class ALIBABACLOUD_TEAMBITION_ALIYUN_EXPORT CreateProjectRequest : public RpcServiceRequest
			{

			public:
				CreateProjectRequest();
				~CreateProjectRequest();

				std::string getName()const;
				void setName(const std::string& name);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);

            private:
				std::string name_;
				std::string description_;
				std::string orgId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTREQUEST_H_