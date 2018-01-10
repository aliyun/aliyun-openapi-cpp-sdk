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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSETSFORSECURITYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSETSFORSECURITYRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeBackupSetsForSecurityResult : public ServiceResult
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


				DescribeBackupSetsForSecurityResult();
				explicit DescribeBackupSetsForSecurityResult(const std::string &payload);
				~DescribeBackupSetsForSecurityResult();
				std::string getTotalRecordCount()const;
				void setTotalRecordCount(const std::string& totalRecordCount);
				std::string getPageRecordCount()const;
				void setPageRecordCount(const std::string& pageRecordCount);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::vector<Backup> getItems()const;
				void setItems(const std::vector<Backup>& items);
				long getTotalBackupSize()const;
				void setTotalBackupSize(long totalBackupSize);

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
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSETSFORSECURITYRESULT_H_