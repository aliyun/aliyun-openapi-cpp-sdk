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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATESNAPSHOTGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATESNAPSHOTGROUPREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT CreateSnapshotGroupRequest : public RpcServiceRequest
			{

			public:
				CreateSnapshotGroupRequest();
				~CreateSnapshotGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getInstantAccess()const;
				void setInstantAccess(bool instantAccess);
				std::vector<std::string> getExcludeDiskId()const;
				void setExcludeDiskId(const std::vector<std::string>& excludeDiskId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getInstantAccessRetentionDays()const;
				void setInstantAccessRetentionDays(int instantAccessRetentionDays);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				bool instantAccess_;
				std::vector<std::string> excludeDiskId_;
				std::string description_;
				int instantAccessRetentionDays_;
				std::string regionId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string instanceId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATESNAPSHOTGROUPREQUEST_H_