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

#ifndef ALIBABACLOUD_RAM_MODEL_CREATEPOLICYREQUEST_H_
#define ALIBABACLOUD_RAM_MODEL_CREATEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ram/RamExport.h>

namespace AlibabaCloud
{
	namespace Ram
	{
		namespace Model
		{
			class ALIBABACLOUD_RAM_EXPORT CreatePolicyRequest : public RpcServiceRequest
			{

			public:
				CreatePolicyRequest();
				~CreatePolicyRequest();

				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getPolicyName()const;
				void setPolicyName(const std::string& policyName);
				std::string getPolicyDocument()const;
				void setPolicyDocument(const std::string& policyDocument);

            private:
				std::string description_;
				std::string policyName_;
				std::string policyDocument_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RAM_MODEL_CREATEPOLICYREQUEST_H_