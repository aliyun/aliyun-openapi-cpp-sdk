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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPDBINSTANCERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPDBINSTANCERESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeCrossRegionBackupDBInstanceResult : public ServiceResult
			{
			public:
				struct Item
				{
					std::string logBackupEnabled;
					std::string backupEnabledTime;
					std::string engineVersion;
					std::string dBInstanceStatus;
					std::string logBackupEnabledTime;
					std::string crossBackupRegion;
					int retentType;
					std::string lockMode;
					std::string relServiceId;
					int retention;
					std::string backupEnabled;
					std::string crossBackupType;
					std::string dBInstanceId;
					std::string dBInstanceStatusDesc;
					std::string relService;
					std::string dBInstanceDescription;
					std::string engine;
				};


				DescribeCrossRegionBackupDBInstanceResult();
				explicit DescribeCrossRegionBackupDBInstanceResult(const std::string &payload);
				~DescribeCrossRegionBackupDBInstanceResult();
				int getItemsNumbers()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotalRecords()const;
				std::vector<Item> getItems()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int itemsNumbers_;
				int pageSize_;
				int pageNumber_;
				int totalRecords_;
				std::vector<Item> items_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSREGIONBACKUPDBINSTANCERESULT_H_