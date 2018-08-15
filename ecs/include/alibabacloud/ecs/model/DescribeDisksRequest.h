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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDisksRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				DescribeDisksRequest();
				~DescribeDisksRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getFilter2Value()const;
				void setFilter2Value(const std::string& filter2Value);
				std::string getAutoSnapshotPolicyId()const;
				void setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getDiskName()const;
				void setDiskName(const std::string& diskName);
				bool getDeleteAutoSnapshot()const;
				void setDeleteAutoSnapshot(bool deleteAutoSnapshot);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getDiskChargeType()const;
				void setDiskChargeType(const std::string& diskChargeType);
				std::string getLockReason()const;
				void setLockReason(const std::string& lockReason);
				std::string getFilter1Key()const;
				void setFilter1Key(const std::string& filter1Key);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDiskIds()const;
				void setDiskIds(const std::string& diskIds);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				bool getDeleteWithInstance()const;
				void setDeleteWithInstance(bool deleteWithInstance);
				bool getEnableAutoSnapshot()const;
				void setEnableAutoSnapshot(bool enableAutoSnapshot);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getFilter1Value()const;
				void setFilter1Value(const std::string& filter1Value);
				bool getPortable()const;
				void setPortable(bool portable);
				bool getEnableAutomatedSnapshotPolicy()const;
				void setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy);
				std::string getFilter2Key()const;
				void setFilter2Key(const std::string& filter2Key);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDiskType()const;
				void setDiskType(const std::string& diskType);
				std::vector<std::string> getAdditionalAttributes()const;
				void setAdditionalAttributes(const std::vector<std::string>& additionalAttributes);
				bool getEnableShared()const;
				void setEnableShared(bool enableShared);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				bool getEncrypted()const;
				void setEncrypted(bool encrypted);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string filter2Value_;
				std::string autoSnapshotPolicyId_;
				int pageNumber_;
				std::string diskName_;
				bool deleteAutoSnapshot_;
				std::string resourceGroupId_;
				std::string diskChargeType_;
				std::string lockReason_;
				std::string filter1Key_;
				std::string regionId_;
				int pageSize_;
				std::string diskIds_;
				std::vector<Tag> tag_;
				bool deleteWithInstance_;
				bool enableAutoSnapshot_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string filter1Value_;
				bool portable_;
				bool enableAutomatedSnapshotPolicy_;
				std::string filter2Key_;
				long ownerId_;
				std::string diskType_;
				std::vector<std::string> additionalAttributes_;
				bool enableShared_;
				std::string instanceId_;
				bool encrypted_;
				std::string zoneId_;
				std::string category_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSREQUEST_H_