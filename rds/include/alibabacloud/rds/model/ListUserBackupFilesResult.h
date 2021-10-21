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

#ifndef ALIBABACLOUD_RDS_MODEL_LISTUSERBACKUPFILESRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_LISTUSERBACKUPFILESRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT ListUserBackupFilesResult : public ServiceResult
			{
			public:
				struct RecordsItem
				{
					std::string status;
					std::string comment;
					std::string engineVersion;
					std::string zoneId;
					std::string ossBucket;
					std::string backupId;
					std::string modificationTime;
					int retention;
					std::string reason;
					std::string binlogInfo;
					std::string ossFileMetaData;
					std::string finishTime;
					std::string dBInstanceId;
					std::string creationTime;
					std::string ossUrl;
					std::string ossFileName;
					std::string restoreSize;
					long ossFileSize;
					std::string engine;
					std::string ossFilePath;
				};


				ListUserBackupFilesResult();
				explicit ListUserBackupFilesResult(const std::string &payload);
				~ListUserBackupFilesResult();
				std::vector<RecordsItem> getRecords()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<RecordsItem> records_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_LISTUSERBACKUPFILESRESULT_H_