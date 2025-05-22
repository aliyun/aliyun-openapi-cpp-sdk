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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPSRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeCrossRegionBackupsResult : public ServiceResult
			{
			public:
				struct Item
				{
					std::string backupMethod;
					std::string category;
					std::string engineVersion;
					int instanceId;
					std::string crossBackupDownloadLink;
					std::string crossBackupRegion;
					std::string crossBackupSetLocation;
					int backupSetStatus;
					std::string dBInstanceStorageType;
					int backupSetScale;
					std::string crossBackupSetFile;
					long crossBackupSetSize;
					std::string hasBackupTableMeta;
					std::vector<std::string> restoreRegions;
					std::string backupEndTime;
					std::string backupStartTime;
					std::string consistentTime;
					std::string backupType;
					int crossBackupId;
					std::string engine;
				};


				DescribeCrossRegionBackupsResult();
				explicit DescribeCrossRegionBackupsResult(const std::string &payload);
				~DescribeCrossRegionBackupsResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::string getEndTime()const;
				int getPageNumber()const;
				std::string getStartTime()const;
				std::vector<Item> getItems()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string endTime_;
				int pageNumber_;
				std::string startTime_;
				std::vector<Item> items_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPSRESULT_H_