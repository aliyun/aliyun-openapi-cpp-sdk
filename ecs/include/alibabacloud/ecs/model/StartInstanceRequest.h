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

#ifndef ALIBABACLOUD_ECS_MODEL_STARTINSTANCEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_STARTINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT StartInstanceRequest : public RpcServiceRequest
			{

			public:
				StartInstanceRequest();
				~StartInstanceRequest();

				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				bool getInitLocalDisk()const;
				void setInitLocalDisk(bool initLocalDisk);
				bool getResourceOwnerId()const;
				void setResourceOwnerId(bool resourceOwnerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				bool getOwnerId()const;
				void setOwnerId(bool ownerId);

            private:
				std::string sourceRegionId_;
				bool initLocalDisk_;
				bool resourceOwnerId_;
				std::string instanceId_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				bool ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_STARTINSTANCEREQUEST_H_