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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBESNAPSHOTSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBESNAPSHOTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeSnapshotsResult : public ServiceResult
			{
			public:
				struct Snapshot
				{
					std::string status;
					std::string progress;
					std::string description;
					std::string desktopName;
					std::string deletionTime;
					std::string desktopId;
					bool volumeEncryptionEnabled;
					std::string creator;
					std::string snapshotName;
					std::string desktopStatus;
					std::string snapshotId;
					std::string sourceDiskSize;
					std::string protocolType;
					std::string volumeEncryptionKey;
					std::string creationTime;
					std::string snapshotType;
					int remainTime;
					std::string sourceDiskType;
				};


				DescribeSnapshotsResult();
				explicit DescribeSnapshotsResult(const std::string &payload);
				~DescribeSnapshotsResult();
				std::string getNextToken()const;
				std::vector<Snapshot> getSnapshots()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Snapshot> snapshots_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBESNAPSHOTSRESULT_H_