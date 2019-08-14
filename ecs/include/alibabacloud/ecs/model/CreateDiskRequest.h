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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT CreateDiskRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct Arn
				{
					std::string rolearn;
					std::string roleType;
					long assumeRoleFor;
				};

			public:
				CreateDiskRequest();
				~CreateDiskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getPerformanceLevel()const;
				void setPerformanceLevel(const std::string& performanceLevel);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getDiskName()const;
				void setDiskName(const std::string& diskName);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getStorageSetId()const;
				void setStorageSetId(const std::string& storageSetId);
				int getSize()const;
				void setSize(int size);
				bool getEncrypted()const;
				void setEncrypted(bool encrypted);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDiskCategory()const;
				void setDiskCategory(const std::string& diskCategory);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				int getStorageSetPartitionNumber()const;
				void setStorageSetPartitionNumber(int storageSetPartitionNumber);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::vector<Arn> getArn()const;
				void setArn(const std::vector<Arn>& arn);
				std::string getKMSKeyId()const;
				void setKMSKeyId(const std::string& kMSKeyId);
				std::string getAdvancedFeatures()const;
				void setAdvancedFeatures(const std::string& advancedFeatures);

            private:
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string performanceLevel_;
				std::string ownerAccount_;
				std::string description_;
				long ownerId_;
				std::string sourceRegionId_;
				std::string diskName_;
				std::string resourceGroupId_;
				std::string instanceId_;
				std::string storageSetId_;
				int size_;
				bool encrypted_;
				std::string regionId_;
				std::string diskCategory_;
				std::string zoneId_;
				int storageSetPartitionNumber_;
				std::vector<Tag> tag_;
				std::vector<Arn> arn_;
				std::string kMSKeyId_;
				std::string advancedFeatures_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_