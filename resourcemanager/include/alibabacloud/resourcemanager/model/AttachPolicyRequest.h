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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_ATTACHPOLICYREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_ATTACHPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT AttachPolicyRequest : public RpcServiceRequest
			{

			public:
				AttachPolicyRequest();
				~AttachPolicyRequest();

				std::string getPolicyType()const;
				void setPolicyType(const std::string& policyType);
				std::string getPrincipalType()const;
				void setPrincipalType(const std::string& principalType);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getPolicyName()const;
				void setPolicyName(const std::string& policyName);
				std::string getPrincipalName()const;
				void setPrincipalName(const std::string& principalName);

            private:
				std::string policyType_;
				std::string principalType_;
				std::string resourceGroupId_;
				std::string policyName_;
				std::string principalName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_ATTACHPOLICYREQUEST_H_