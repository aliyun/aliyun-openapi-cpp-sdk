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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBESNAPSHOTSRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBESNAPSHOTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT DescribeSnapshotsResult : public ServiceResult
			{
			public:
				struct Snapshot
				{
					std::string status;
					std::string progress;
					std::string description;
					std::string sourceFileSystemVersion;
					std::string createTime;
					std::string sourceFileSystemId;
					int retentionDays;
					std::string snapshotName;
					std::string snapshotId;
					long sourceFileSystemSize;
					int encryptType;
					std::string fileSystemType;
					std::string snapshotType;
					int remainTime;
				};


				DescribeSnapshotsResult();
				explicit DescribeSnapshotsResult(const std::string &payload);
				~DescribeSnapshotsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Snapshot> getSnapshots()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Snapshot> snapshots_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBESNAPSHOTSRESULT_H_