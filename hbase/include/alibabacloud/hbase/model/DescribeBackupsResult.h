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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPSRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeBackupsResult : public ServiceResult
			{
			public:
				struct Backup
				{
					std::string backupMethod;
					std::string backupDownloadURL;
					std::string backupEndTime;
					std::string backupMode;
					std::string backupSize;
					std::string backupStartTime;
					std::string backupEndTimeUTC;
					int backupId;
					std::string backupType;
					std::string backupStartTimeUTC;
					std::string backupDBNames;
					std::string backupStatus;
				};


				DescribeBackupsResult();
				explicit DescribeBackupsResult(const std::string &payload);
				~DescribeBackupsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getEnableStatus()const;
				std::vector<Backup> getBackups()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::string enableStatus_;
				std::vector<Backup> backups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPSRESULT_H_