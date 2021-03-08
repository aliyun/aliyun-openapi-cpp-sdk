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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGTEMPLATESRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGTEMPLATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeSQLLogTemplatesResult : public ServiceResult
			{
			public:
				struct _Template
				{
					float avgScanRows;
					std::string templateHash;
					float avgConsume;
					std::string _template;
					long totalScanRows;
					long totalUpdateRows;
					long totalCounts;
					std::string sqlType;
					float avgUpdateRows;
					int itemID;
					long totalConsume;
				};


				DescribeSQLLogTemplatesResult();
				explicit DescribeSQLLogTemplatesResult(const std::string &payload);
				~DescribeSQLLogTemplatesResult();
				int getMaxRecordsPerPage()const;
				int getItemsNumbers()const;
				std::string getEndTime()const;
				int getDBInstanceID()const;
				std::string getStartTime()const;
				int getTotalRecords()const;
				std::vector<_Template> getItems()const;
				std::string getFinish()const;
				int getPageNumbers()const;
				std::string getJobId()const;
				std::string getPagingID()const;
				std::string getDBInstanceName()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxRecordsPerPage_;
				int itemsNumbers_;
				std::string endTime_;
				int dBInstanceID_;
				std::string startTime_;
				int totalRecords_;
				std::vector<_Template> items_;
				std::string finish_;
				int pageNumbers_;
				std::string jobId_;
				std::string pagingID_;
				std::string dBInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGTEMPLATESRESULT_H_