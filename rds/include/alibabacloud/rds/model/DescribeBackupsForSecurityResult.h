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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSFORSECURITYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSFORSECURITYRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeBackupsForSecurityResult : public ServiceResult
			{
			public:
				struct Backup
				{
					std::string backupMethod;
					std::string backupExtractionStatus;
					std::string backupIntranetDownloadURL;
					std::string backupMode;
					long backupSize;
					std::string backupId;
					std::string hostInstanceID;
					std::string backupDBNames;
					std::string storeStatus;
					std::string dBInstanceId;
					std::string backupDownloadURL;
					std::string backupEndTime;
					std::string backupStartTime;
					std::string backupType;
					std::string backupScale;
					std::string backupStatus;
					std::string backupLocation;
					long totalBackupSize;
				};


				DescribeBackupsForSecurityResult();
				explicit DescribeBackupsForSecurityResult(const std::string &payload);
				~DescribeBackupsForSecurityResult();
				std::string getTotalRecordCount()const;
				std::string getPageRecordCount()const;
				std::string getPageNumber()const;
				std::vector<Backup> getItems()const;
				long getTotalBackupSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalRecordCount_;
				std::string pageRecordCount_;
				std::string pageNumber_;
				std::vector<Backup> items_;
				long totalBackupSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSFORSECURITYRESULT_H_