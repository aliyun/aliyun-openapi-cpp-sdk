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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCSNAPSHOTSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCSNAPSHOTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeRCSnapshotsResult : public ServiceResult
			{
			public:
				struct Snapshot
				{
					struct TagItem
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					bool instantAccess;
					std::string progress;
					std::string usage;
					std::string category;
					std::string description;
					std::string resourceGroupId;
					bool encrypted;
					std::string snapshotName;
					std::string sourceDiskId;
					std::string sourceStorageType;
					std::string snapshotId;
					long sourceDiskSize;
					std::string creationTime;
					bool available;
					std::vector<Snapshot::TagItem> tag;
					std::string regionId;
					std::string snapshotType;
					std::string sourceDiskType;
				};


				DescribeRCSnapshotsResult();
				explicit DescribeRCSnapshotsResult(const std::string &payload);
				~DescribeRCSnapshotsResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<Snapshot> getSnapshots()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<Snapshot> snapshots_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCSNAPSHOTSRESULT_H_