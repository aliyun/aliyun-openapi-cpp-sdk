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

#ifndef ALIBABACLOUD_TDSR_MODEL_CREATEPROJECTREQUEST_H_
#define ALIBABACLOUD_TDSR_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/tdsr/TdsrExport.h>

namespace AlibabaCloud
{
	namespace Tdsr
	{
		namespace Model
		{
			class ALIBABACLOUD_TDSR_EXPORT CreateProjectRequest : public RpcServiceRequest
			{

			public:
				CreateProjectRequest();
				~CreateProjectRequest();

				std::string getBusinessUserIdList()const;
				void setBusinessUserIdList(const std::string& businessUserIdList);
				std::string getBuilderUserIdList()const;
				void setBuilderUserIdList(const std::string& builderUserIdList);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getBusinessId()const;
				void setBusinessId(const std::string& businessId);
				std::string getGatherUserIdList()const;
				void setGatherUserIdList(const std::string& gatherUserIdList);

            private:
				std::string businessUserIdList_;
				std::string builderUserIdList_;
				std::string name_;
				std::string businessId_;
				std::string gatherUserIdList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TDSR_MODEL_CREATEPROJECTREQUEST_H_