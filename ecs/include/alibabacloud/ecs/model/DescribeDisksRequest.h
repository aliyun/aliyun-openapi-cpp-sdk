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

			public:
				DescribeDisksRequest();
				~DescribeDisksRequest();

				std::string getTag4Value()const;
				void setTag4Value(const std::string& tag4Value);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getTag2Key()const;
				void setTag2Key(const std::string& tag2Key);
				std::string getFilter2Value()const;
				void setFilter2Value(const std::string& filter2Value);
				std::string getAutoSnapshotPolicyId()const;
				void setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId);
				std::string getTag3Key()const;
				void setTag3Key(const std::string& tag3Key);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getDiskName()const;
				void setDiskName(const std::string& diskName);
				std::string getTag1Value()const;
				void setTag1Value(const std::string& tag1Value);
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
				bool getDeleteWithInstance()const;
				void setDeleteWithInstance(bool deleteWithInstance);
				std::string getTag3Value()const;
				void setTag3Value(const std::string& tag3Value);
				bool getEnableAutoSnapshot()const;
				void setEnableAutoSnapshot(bool enableAutoSnapshot);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getTag5Key()const;
				void setTag5Key(const std::string& tag5Key);
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
				std::string getTag5Value()const;
				void setTag5Value(const std::string& tag5Value);
				std::string getTag1Key()const;
				void setTag1Key(const std::string& tag1Key);
				std::vector<std::string> getAdditionalAttributes()const;
				void setAdditionalAttributes(const std::vector<std::string>& additionalAttributes);
				bool getEnableShared()const;
				void setEnableShared(bool enableShared);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				bool getEncrypted()const;
				void setEncrypted(bool encrypted);
				std::string getTag2Value()const;
				void setTag2Value(const std::string& tag2Value);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getTag4Key()const;
				void setTag4Key(const std::string& tag4Key);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string tag4Value_;
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string tag2Key_;
				std::string filter2Value_;
				std::string autoSnapshotPolicyId_;
				std::string tag3Key_;
				int pageNumber_;
				std::string diskName_;
				std::string tag1Value_;
				bool deleteAutoSnapshot_;
				std::string resourceGroupId_;
				std::string diskChargeType_;
				std::string lockReason_;
				std::string filter1Key_;
				std::string regionId_;
				int pageSize_;
				std::string diskIds_;
				bool deleteWithInstance_;
				std::string tag3Value_;
				bool enableAutoSnapshot_;
				bool dryRun_;
				std::string tag5Key_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string filter1Value_;
				bool portable_;
				bool enableAutomatedSnapshotPolicy_;
				std::string filter2Key_;
				long ownerId_;
				std::string diskType_;
				std::string tag5Value_;
				std::string tag1Key_;
				std::vector<std::string> additionalAttributes_;
				bool enableShared_;
				std::string instanceId_;
				bool encrypted_;
				std::string tag2Value_;
				std::string zoneId_;
				std::string tag4Key_;
				std::string category_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSREQUEST_H_