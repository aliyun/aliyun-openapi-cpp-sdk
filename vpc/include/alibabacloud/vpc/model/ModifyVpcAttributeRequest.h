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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/vpc/VpcRequest.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ModifyVpcAttributeRequest : public VpcRequest
			{

			public:
				ModifyVpcAttributeRequest();
				~ModifyVpcAttributeRequest();

				std::string getVpcName()const;
				void setVpcName(const std::string& vpcName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getUserCidr()const;
				void setUserCidr(const std::string& userCidr);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string vpcName_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string vpcId_;
				std::string ownerAccount_;
				std::string description_;
				std::string userCidr_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_