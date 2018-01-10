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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT ModifyInstanceAttributeRequest : public EcsRequest
			{

			public:
				ModifyInstanceAttributeRequest();
				~ModifyInstanceAttributeRequest();

				std::string getUserData()const;
				void setUserData(const std::string& userData);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				bool getRecyclable()const;
				void setRecyclable(bool recyclable);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string userData_;
				long resourceOwnerId_;
				std::string password_;
				std::string hostName_;
				std::string instanceId_;
				std::string instanceName_;
				std::string resourceOwnerAccount_;
				bool recyclable_;
				std::string ownerAccount_;
				std::string description_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_