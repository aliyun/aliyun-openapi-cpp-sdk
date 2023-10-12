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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLHISTORYLISTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLHISTORYLISTRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeSlowSQLHistoryListResult : public ServiceResult
			{
			public:
				struct SlowSQLHistoryList
				{
					struct ListItem
					{
						double executions;
						double rPCCount;
						double concurrencyWaitTime;
						double executeTime;
						double getPlanTime;
						double elapsedTime;
						std::string endTimeUTCString;
						std::string nodeIp;
						std::string clientIp;
						double returnRows;
						double cpuTime;
						double ssstoreReadRowCount;
						double retryCount;
						double logicalRead;
						double execPerSecond;
						double blockCacheHit;
						std::string sqlType;
						std::string dbName;
						double missPlans;
						double queueTime;
						double netWaitTime;
						double blockIndexCacheHit;
						double appWaitTime;
						double iOWaitTime;
						double remotePlans;
						std::string userName;
						double maxElapsedTime;
						std::string tenantName;
						double rowCacheHit;
						double affectedRows;
						double memstoreReadRowCount;
						std::string sqlId;
						double totalWaitTime;
						double scheduleTime;
						double diskRead;
						std::string event;
						double bloomFilterCacheHit;
						double failTimes;
						double maxCpuTime;
						double decodeTime;
					};
					std::vector<ListItem> list;
					long count;
				};


				DescribeSlowSQLHistoryListResult();
				explicit DescribeSlowSQLHistoryListResult(const std::string &payload);
				~DescribeSlowSQLHistoryListResult();
				SlowSQLHistoryList getSlowSQLHistoryList()const;

			protected:
				void parse(const std::string &payload);
			private:
				SlowSQLHistoryList slowSQLHistoryList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLHISTORYLISTRESULT_H_