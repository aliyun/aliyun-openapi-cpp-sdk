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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeVolumesResult : public ServiceResult
			{
			public:
				struct Volume
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
					std::string status;
					std::string volumeName;
					std::string description;
					std::string category;
					std::string zoneId;
					std::string sourceSnapshotId;
					std::string volumeChargeType;
					int size;
					bool encrypted;
					std::string snapshotLinkId;
					bool enableAutomatedSnapshotPolicy;
					std::string autoSnapshotPolicyId;
					std::vector<Volume::OperationLock> operationLocks;
					std::string volumeId;
					int mountInstanceNum;
					std::vector<Volume::MountInstance> mountInstances;
					std::string creationTime;
					std::string regionId;
					std::vector<Volume::Tag> tags;
				};


				DescribeVolumesResult();
				explicit DescribeVolumesResult(const std::string &payload);
				~DescribeVolumesResult();
				int getTotalCount()const;
				std::vector<Volume> getVolumes()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Volume> volumes_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESRESULT_H_