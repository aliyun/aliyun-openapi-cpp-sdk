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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBECLUSTERBACKUPSRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBECLUSTERBACKUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeClusterBackupsResult : public ServiceResult
			{
			public:
				struct ClusterBackup
				{
					struct ExtraInfo
					{
						std::string registryFromHistory;
					};
					struct Backup
					{
						struct ExtraInfo1
						{
							std::string nodeType;
							std::string nodeId;
							std::string storageSize;
							std::string instanceClass;
						};
						std::string instanceName;
						std::string backupDownloadURL;
						std::string backupIntranetDownloadURL;
						std::string backupEndTime;
						std::string backupSize;
						std::string backupStartTime;
						std::string backupId;
						std::string isAvail;
						ExtraInfo1 extraInfo1;
						std::string backupStatus;
						std::string backupName;
					};
					std::string clusterBackupId;
					std::string clusterBackupStartTime;
					std::string progress;
					std::string attachLogStatus;
					std::string engineVersion;
					std::string clusterBackupSize;
					std::string clusterBackupMode;
					ExtraInfo extraInfo;
					int isAvail;
					std::string clusterBackupStatus;
					std::vector<ClusterBackup::Backup> backups;
					std::string backupExpireTime;
					std::string clusterBackupEndTime;
				};


				DescribeClusterBackupsResult();
				explicit DescribeClusterBackupsResult(const std::string &payload);
				~DescribeClusterBackupsResult();
				std::vector<ClusterBackup> getClusterBackups()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ClusterBackup> clusterBackups_;
				int pageSize_;
				int pageNumber_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBECLUSTERBACKUPSRESULT_H_