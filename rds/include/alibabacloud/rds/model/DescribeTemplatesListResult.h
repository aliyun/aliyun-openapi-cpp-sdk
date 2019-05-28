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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBETEMPLATESLISTRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBETEMPLATESLISTRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeTemplatesListResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					float avgScanRows;
					std::string templateHash;
					std::string _template;
					float avgConsume;
					long totalScanRows;
					long totalUpdateRows;
					long totalCounts;
					std::string sqlType;
					float avgUpdateRows;
					long totalConsume;
				};


				DescribeTemplatesListResult();
				explicit DescribeTemplatesListResult(const std::string &payload);
				~DescribeTemplatesListResult();
				int getMaxRecordsPerPage()const;
				int getItemsNumbers()const;
				std::string getEndTime()const;
				int getDBInstanceID()const;
				std::string getStartTime()const;
				int getTotalRecords()const;
				std::vector<ItemsItem> getItems()const;
				int getPageNumbers()const;
				std::string getDBInstanceName()const;
				std::string getPagingID()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxRecordsPerPage_;
				int itemsNumbers_;
				std::string endTime_;
				int dBInstanceID_;
				std::string startTime_;
				int totalRecords_;
				std::vector<ItemsItem> items_;
				int pageNumbers_;
				std::string dBInstanceName_;
				std::string pagingID_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBETEMPLATESLISTRESULT_H_