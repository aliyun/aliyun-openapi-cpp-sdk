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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATESECURITYGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT CreateSecurityGroupRequest : public RpcServiceRequest
			{

			public:
				CreateSecurityGroupRequest();
				~CreateSecurityGroupRequest();

				std::string getTag4Value()const;
				void setTag4Value(const std::string& tag4Value);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTag2Key()const;
				void setTag2Key(const std::string& tag2Key);
				std::string getTag5Key()const;
				void setTag5Key(const std::string& tag5Key);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getTag3Key()const;
				void setTag3Key(const std::string& tag3Key);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSecurityGroupName()const;
				void setSecurityGroupName(const std::string& securityGroupName);
				std::string getTag5Value()const;
				void setTag5Value(const std::string& tag5Value);
				std::string getTag1Key()const;
				void setTag1Key(const std::string& tag1Key);
				std::string getTag1Value()const;
				void setTag1Value(const std::string& tag1Value);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getTag2Value()const;
				void setTag2Value(const std::string& tag2Value);
				std::string getTag4Key()const;
				void setTag4Key(const std::string& tag4Key);
				std::string getTag3Value()const;
				void setTag3Value(const std::string& tag3Value);

            private:
				std::string tag4Value_;
				long resourceOwnerId_;
				std::string tag2Key_;
				std::string tag5Key_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string description_;
				std::string tag3Key_;
				long ownerId_;
				std::string securityGroupName_;
				std::string tag5Value_;
				std::string tag1Key_;
				std::string tag1Value_;
				std::string regionId_;
				std::string vpcId_;
				std::string tag2Value_;
				std::string tag4Key_;
				std::string tag3Value_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATESECURITYGROUPREQUEST_H_