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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBESLOWLOGSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBESLOWLOGSRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeSlowLogsResult : public ServiceResult
			{
			public:
				struct SQLSlowLog
				{
					long minLogicalReadCounts;
					long avgLastRowsAffectedCounts;
					long totalPhysicalReadCounts;
					long totalLockTimes;
					long avgExecutionTime;
					long maxLogicalReadCounts;
					long parseMaxRowCount;
					std::string sQLText;
					long avgIOWriteCounts;
					long minPhysicalReadCounts;
					std::string sQLHASH;
					long sQLServerMaxCpuTime;
					long minRowsAffectedCounts;
					long maxIOWriteCounts;
					long minIOWriteCounts;
					long sQLServerTotalExecutionCounts;
					long maxExecutionTimeMS;
					long sQLServerAvgExecutionTime;
					long totalIOWriteCounts;
					long sQLServerAvgCpuTime;
					long mySQLTotalExecutionTimes;
					long totalLastRowsAffectedCounts;
					long maxLockTimeMS;
					long maxRowsAffectedCounts;
					long maxLockTime;
					long sQLServerMinExecutionTime;
					long sQLServerTotalCpuTime;
					std::string createTime;
					long maxLastRowsAffectedCounts;
					long slowLogId;
					long totalLogicalReadCounts;
					long returnMaxRowCount;
					long maxExecutionTime;
					long minLastRowsAffectedCounts;
					std::string reportTime;
					long avgLogicalReadCounts;
					long sQLServerTotalExecutionTimes;
					long avgPhysicalReadCounts;
					long returnTotalRowCounts;
					std::string sQLIdStr;
					long totalRowsAffectedCounts;
					long mySQLTotalExecutionCounts;
					long parseTotalRowCounts;
					long avgRowsAffectedCounts;
					std::string dBName;
					long sQLServerMinCpuTime;
					long maxPhysicalReadCounts;
				};


				DescribeSlowLogsResult();
				explicit DescribeSlowLogsResult(const std::string &payload);
				~DescribeSlowLogsResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::string getEndTime()const;
				std::string getDBInstanceId()const;
				int getPageNumber()const;
				std::string getStartTime()const;
				std::vector<SQLSlowLog> getItems()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string endTime_;
				std::string dBInstanceId_;
				int pageNumber_;
				std::string startTime_;
				std::vector<SQLSlowLog> items_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBESLOWLOGSRESULT_H_