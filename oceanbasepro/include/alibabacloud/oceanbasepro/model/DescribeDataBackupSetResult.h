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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEDATABACKUPSETRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEDATABACKUPSETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeDataBackupSetResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct BackupObjectsItem
					{
						struct DatabaseTablesListItem
						{
							std::string database;
							std::vector<std::string> tables;
						};
						std::vector<BackupObjectsItem::DatabaseTablesListItem> databaseTablesList;
						std::string tenantName;
						std::string clusterName;
					};
					struct BackupResultsItem
					{
						struct TableBackupResultsItem
						{
							std::string status;
							std::string table;
							std::string message;
							std::string database;
						};
						std::string tenantName;
						std::string clusterName;
						std::vector<BackupResultsItem::TableBackupResultsItem> tableBackupResults;
					};
					std::string status;
					std::string policy;
					std::string downloadTaskStatus;
					std::string progress;
					std::vector<DataItem::BackupObjectsItem> backupObjects;
					std::string endTime;
					std::string storageClass;
					std::string startTime;
					std::string method;
					std::string validity;
					std::string type;
					std::string checkpoint;
					std::string backupObjectType;
					long downloadTaskId;
					int dataSize;
					int dataVersion;
					std::vector<DataItem::BackupResultsItem> backupResults;
					std::string setId;
				};


				DescribeDataBackupSetResult();
				explicit DescribeDataBackupSetResult(const std::string &payload);
				~DescribeDataBackupSetResult();
				int getTotalCount()const;
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEDATABACKUPSETRESULT_H_