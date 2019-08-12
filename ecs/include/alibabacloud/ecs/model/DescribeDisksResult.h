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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeDisksResult : public ServiceResult
			{
			public:
				struct Disk
				{
					struct OperationLock
					{
						std::string lockReason;
					};
					struct MountInstance
					{
						std::string attachedTime;
						std::string instanceId;
						std::string device;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string detachedTime;
					std::string description;
					std::string category;
					std::string kMSKeyId;
					std::string resourceGroupId;
					int size;
					bool encrypted;
					bool deleteAutoSnapshot;
					std::string diskChargeType;
					int storageSetPartitionNumber;
					int iOPS;
					std::string expiredTime;
					std::string imageId;
					std::string storageSetId;
					std::vector<Disk::Tag> tags;
					std::string status;
					std::string attachedTime;
					int iOPSRead;
					int iOPSWrite;
					std::string zoneId;
					std::string sourceSnapshotId;
					std::string productCode;
					std::string instanceId;
					std::string device;
					std::string performanceLevel;
					bool deleteWithInstance;
					bool enableAutomatedSnapshotPolicy;
					bool enableAutoSnapshot;
					std::string autoSnapshotPolicyId;
					std::string diskName;
					std::vector<Disk::OperationLock> operationLocks;
					std::string bdfId;
					bool portable;
					std::string type;
					int mountInstanceNum;
					std::vector<Disk::MountInstance> mountInstances;
					std::string creationTime;
					std::string regionId;
					std::string diskId;
				};


				DescribeDisksResult();
				explicit DescribeDisksResult(const std::string &payload);
				~DescribeDisksResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Disk> getDisks()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Disk> disks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDISKSRESULT_H_