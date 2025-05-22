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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeSlowLogRecordsResult : public ServiceResult
			{
			public:
				struct SQLSlowRecord
				{
					std::string applicationName;
					std::string userName;
					long writeIOCount;
					std::string executionStartTime;
					long lastRowsAffectedCount;
					long rowsAffectedCount;
					long parseRowCounts;
					long physicalIORead;
					std::string hostAddress;
					long cpuTime;
					long queryTimeMS;
					long logicalIORead;
					std::string sQLText;
					long queryTimes;
					std::string sQLHash;
					long returnRowCounts;
					long lockTimes;
					std::string clientHostName;
					std::string dBName;
				};


				DescribeSlowLogRecordsResult();
				explicit DescribeSlowLogRecordsResult(const std::string &payload);
				~DescribeSlowLogRecordsResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::string getUserName()const;
				long getLastRowsAffectedCount()const;
				long getRowsAffectedCount()const;
				long getPhysicalIORead()const;
				long getWritesIOCount()const;
				long getLogicalIORead()const;
				long getCPUTime()const;
				std::string getSQLHash()const;
				std::string getDBInstanceId()const;
				int getPageNumber()const;
				std::vector<SQLSlowRecord> getItems()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string userName_;
				long lastRowsAffectedCount_;
				long rowsAffectedCount_;
				long physicalIORead_;
				long writesIOCount_;
				long logicalIORead_;
				long cPUTime_;
				std::string sQLHash_;
				std::string dBInstanceId_;
				int pageNumber_;
				std::vector<SQLSlowRecord> items_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_