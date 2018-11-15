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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeVolumesRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				DescribeVolumesRequest();
				~DescribeVolumesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getAutoSnapshotPolicyId()const;
				void setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				bool getEnableAutomatedSnapshotPolicy()const;
				void setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getLockReason()const;
				void setLockReason(const std::string& lockReason);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getVolumeIds()const;
				void setVolumeIds(const std::string& volumeIds);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string resourceOwnerAccount_;
				std::string autoSnapshotPolicyId_;
				std::string ownerAccount_;
				bool enableAutomatedSnapshotPolicy_;
				long ownerId_;
				int pageNumber_;
				std::string instanceId_;
				std::string lockReason_;
				std::string regionId_;
				int pageSize_;
				std::string zoneId_;
				std::string volumeIds_;
				std::vector<Tag> tag_;
				std::string category_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESREQUEST_H_