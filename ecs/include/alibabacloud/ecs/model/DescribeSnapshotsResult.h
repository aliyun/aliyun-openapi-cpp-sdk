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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeSnapshotsResult : public ServiceResult
			{
			public:
				struct Snapshot
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					bool instantAccess;
					std::string description;
					std::string category;
					std::string kMSKeyId;
					std::string resourceGroupId;
					bool encrypted;
					std::string snapshotLinkId;
					std::string snapshotName;
					int instantAccessRetentionDays;
					std::string sourceDiskId;
					std::string snapshotSN;
					std::string sourceRegionId;
					bool available;
					std::vector<Snapshot::Tag> tags;
					std::string status;
					std::string progress;
					std::string usage;
					std::string productCode;
					std::string sourceSnapshotId;
					int retentionDays;
					std::string sourceStorageType;
					std::string snapshotId;
					std::string sourceDiskSize;
					std::string creationTime;
					std::string lastModifiedTime;
					std::string snapshotType;
					std::string regionId;
					int remainTime;
					std::string sourceDiskType;
				};


				DescribeSnapshotsResult();
				explicit DescribeSnapshotsResult(const std::string &payload);
				~DescribeSnapshotsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Snapshot> getSnapshots()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int pageSize_;
				int pageNumber_;
				std::vector<Snapshot> snapshots_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTSRESULT_H_