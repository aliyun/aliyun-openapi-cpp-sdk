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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESNAPSHOTSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESNAPSHOTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeSnapshotsResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					std::string nextToken;
					int pageSize;
					int currentPage;
					int count;
				};
				struct BackupSnapshots
				{
					long createdTime;
					long size;
					std::string sourceType;
					std::string exitCode;
					std::string vaultId;
					long retention;
					long errorCount;
					std::string clientVersion;
					std::string snapshotName;
					std::string source;
					std::string parentHash;
					long bytesTotal;
					long actualItems;
					long itemsDone;
					std::string errorType;
					std::string errorFile;
					std::string clientId;
					long bytesDone;
					long actualBytes;
					std::vector<std::string> paths;
					std::string jobId;
					std::string status;
					std::string path;
					std::string instanceId;
					long itemsTotal;
					std::string planId;
					long duration;
					std::string snapshotHash;
					std::string snapshotId;
					std::string containerSnapshotId;
					std::string uuid;
					std::string parentSnapshotHash;
					std::string regionId;
					std::string snapshotType;
					std::string snapshotOption;
					std::string errorMessage;
				};


				DescribeSnapshotsResult();
				explicit DescribeSnapshotsResult(const std::string &payload);
				~DescribeSnapshotsResult();
				PageInfo getPageInfo()const;
				std::vector<BackupSnapshots> getSnapshots()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<BackupSnapshots> snapshots_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESNAPSHOTSRESULT_H_