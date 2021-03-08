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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGRECORDSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGRECORDSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeSQLLogRecordsResult : public ServiceResult
			{
			public:
				struct SQLLogRecord
				{
					std::string executeTime;
					std::string insName;
					std::string hostAddress;
					long updateRows;
					std::string sQLText;
					std::string originTime;
					long consume;
					long scanRows;
					int threadID;
					std::string state;
					std::string dBName;
					std::string sqlType;
					std::string vip;
					std::string accountName;
				};


				DescribeSQLLogRecordsResult();
				explicit DescribeSQLLogRecordsResult(const std::string &payload);
				~DescribeSQLLogRecordsResult();
				int getMaxRecordsPerPage()const;
				int getItemsNumbers()const;
				std::string getEndTime()const;
				std::string getDBInstanceID()const;
				std::string getStartTime()const;
				int getTotalRecords()const;
				std::vector<SQLLogRecord> getItems()const;
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
				std::string dBInstanceID_;
				std::string startTime_;
				int totalRecords_;
				std::vector<SQLLogRecord> items_;
				std::string finish_;
				int pageNumbers_;
				std::string jobId_;
				std::string pagingID_;
				std::string dBInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGRECORDSRESULT_H_