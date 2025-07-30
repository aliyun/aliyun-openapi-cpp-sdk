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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECLUSTERBACKUPLISTRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECLUSTERBACKUPLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeClusterBackupListResult : public ServiceResult
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
							std::string custinsName;
							int custinsId;
							std::string custinsDbVersion;
							int custinsLevelId;
						};
						std::string recoverConfigMode;
						std::string backupIntranetDownloadURL;
						std::string backupSize;
						std::string backupId;
						std::string isAvail;
						std::string backupName;
						std::string instanceName;
						std::string backupDownloadURL;
						std::string backupEndTime;
						std::string backupStartTime;
						std::string engine;
						ExtraInfo1 extraInfo1;
						std::string backupStatus;
					};
					std::string clusterBackupId;
					std::string clusterBackupStartTime;
					std::string progress;
					std::string clusterBackupStatus;
					std::string clusterBackupSize;
					std::vector<ClusterBackup::Backup> backups;
					std::string clusterBackupEndTime;
					std::string clusterBackupMode;
					ExtraInfo extraInfo;
					int isAvail;
					std::string expectExpireTime;
					int shardClassMemory;
				};


				DescribeClusterBackupListResult();
				explicit DescribeClusterBackupListResult(const std::string &payload);
				~DescribeClusterBackupListResult();
				std::vector<ClusterBackup> getClusterBackups()const;
				int getPageSize()const;
				int getPageNumber()const;
				long getFreeSize()const;
				int getMaxResults()const;
				long getFullStorageSize()const;
				long getLogStorageSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ClusterBackup> clusterBackups_;
				int pageSize_;
				int pageNumber_;
				long freeSize_;
				int maxResults_;
				long fullStorageSize_;
				long logStorageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECLUSTERBACKUPLISTRESULT_H_