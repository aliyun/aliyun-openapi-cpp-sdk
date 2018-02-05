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

#ifndef ALIBABACLOUD_ECS_MODEL_REPLACESYSTEMDISKREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_REPLACESYSTEMDISKREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ReplaceSystemDiskRequest : public RpcServiceRequest
			{

			public:
				ReplaceSystemDiskRequest();
				~ReplaceSystemDiskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getSecurityEnhancementStrategy()const;
				void setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPlatform()const;
				void setPlatform(const std::string& platform);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getDiskId()const;
				void setDiskId(const std::string& diskId);
				bool getUseAdditionalService()const;
				void setUseAdditionalService(bool useAdditionalService);
				std::string getArchitecture()const;
				void setArchitecture(const std::string& architecture);

            private:
				long resourceOwnerId_;
				std::string imageId_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string securityEnhancementStrategy_;
				std::string keyPairName_;
				long ownerId_;
				std::string platform_;
				std::string password_;
				std::string instanceId_;
				int systemDiskSize_;
				std::string diskId_;
				bool useAdditionalService_;
				std::string architecture_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_REPLACESYSTEMDISKREQUEST_H_