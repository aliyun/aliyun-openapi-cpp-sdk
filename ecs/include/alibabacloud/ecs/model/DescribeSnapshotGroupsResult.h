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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTGROUPSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTGROUPSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeSnapshotGroupsResult : public ServiceResult
			{
			public:
				struct SnapshotGroup
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct Snapshot
					{
						struct Tag2
						{
							std::string value;
							std::string key;
						};
						std::string snapshotId;
						bool instantAccess;
						std::string progress;
						std::vector<Snapshot::Tag2> tags1;
						bool available;
						std::string sourceDiskType;
						int instantAccessRetentionDays;
						std::string sourceDiskId;
					};
					std::string status;
					std::string progressStatus;
					std::string description;
					std::string resourceGroupId;
					std::string instanceId;
					std::string creationTime;
					std::string snapshotGroupId;
					std::vector<SnapshotGroup::Snapshot> snapshots;
					std::vector<SnapshotGroup::Tag> tags;
					std::string name;
				};


				DescribeSnapshotGroupsResult();
				explicit DescribeSnapshotGroupsResult(const std::string &payload);
				~DescribeSnapshotGroupsResult();
				std::string getNextToken()const;
				std::vector<SnapshotGroup> getSnapshotGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<SnapshotGroup> snapshotGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTGROUPSRESULT_H_