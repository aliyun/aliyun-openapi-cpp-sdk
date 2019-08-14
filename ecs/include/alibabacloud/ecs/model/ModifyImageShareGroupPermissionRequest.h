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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREGROUPPERMISSIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREGROUPPERMISSIONREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyImageShareGroupPermissionRequest : public RpcServiceRequest
			{

			public:
				ModifyImageShareGroupPermissionRequest();
				~ModifyImageShareGroupPermissionRequest();

				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getAddGroup1()const;
				void setAddGroup1(const std::string& addGroup1);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getRemoveGroup1()const;
				void setRemoveGroup1(const std::string& removeGroup1);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string sourceRegionId_;
				long resourceOwnerId_;
				std::string imageId_;
				std::string addGroup1_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				std::string removeGroup1_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREGROUPPERMISSIONREQUEST_H_