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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeBackupsResult : public ServiceResult
			{
			public:
				struct Backup
				{
					struct BackupDownloadLinkByDBItem
					{
						std::string downloadLink;
						std::string intranetDownloadLink;
						std::string dataBase;
					};
					std::string resourceGroupId;
					std::string backupMode;
					std::string backupId;
					std::string encryption;
					std::string backupDBNames;
					std::string dBInstanceId;
					std::string checksum;
					std::string backupType;
					std::string engine;
					long totalBackupSize;
					std::string backupMethod;
					std::string backupExtractionStatus;
					std::string engineVersion;
					std::string backupInitiator;
					std::string backupIntranetDownloadURL;
					std::string storageClass;
					long backupSize;
					int isAvail;
					std::string slaveStatus;
					std::string hostInstanceID;
					std::string expectExpireTime;
					std::vector<Backup::BackupDownloadLinkByDBItem> backupDownloadLinkByDB;
					std::string storeStatus;
					std::string backupDownloadURL;
					std::string backupEndTime;
					std::string copyOnlyBackup;
					std::string backupStartTime;
					long consistentTime;
					std::string metaStatus;
					std::string backupScale;
					std::string backupLocation;
					std::string backupStatus;
				};


				DescribeBackupsResult();
				explicit DescribeBackupsResult(const std::string &payload);
				~DescribeBackupsResult();
				std::string getTotalRecordCount()const;
				std::string getPageRecordCount()const;
				long getTotalEcsSnapshotSize()const;
				std::string getPageNumber()const;
				std::vector<Backup> getItems()const;
				long getTotalBackupSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalRecordCount_;
				std::string pageRecordCount_;
				long totalEcsSnapshotSize_;
				std::string pageNumber_;
				std::vector<Backup> items_;
				long totalBackupSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSRESULT_H_