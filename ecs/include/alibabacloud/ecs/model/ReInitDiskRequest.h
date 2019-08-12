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

#ifndef ALIBABACLOUD_ECS_MODEL_REINITDISKREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_REINITDISKREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ReInitDiskRequest : public RpcServiceRequest
			{

			public:
				ReInitDiskRequest();
				~ReInitDiskRequest();

				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				bool getResourceOwnerId()const;
				void setResourceOwnerId(bool resourceOwnerId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				bool getAutoStartInstance()const;
				void setAutoStartInstance(bool autoStartInstance);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDiskId()const;
				void setDiskId(const std::string& diskId);
				std::string getSecurityEnhancementStrategy()const;
				void setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				bool getOwnerId()const;
				void setOwnerId(bool ownerId);

            private:
				std::string sourceRegionId_;
				bool resourceOwnerId_;
				std::string password_;
				std::string resourceOwnerAccount_;
				bool autoStartInstance_;
				std::string ownerAccount_;
				std::string diskId_;
				std::string securityEnhancementStrategy_;
				std::string keyPairName_;
				bool ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_REINITDISKREQUEST_H_