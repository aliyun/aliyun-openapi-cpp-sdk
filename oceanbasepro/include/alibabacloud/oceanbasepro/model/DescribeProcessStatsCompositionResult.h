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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROCESSSTATSCOMPOSITIONRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROCESSSTATSCOMPOSITIONRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeProcessStatsCompositionResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct SessionStatistics
					{
						struct UserStatisticsItem
						{
							std::string metricValue;
							long totalCount;
							std::string type;
							long activeCount;
						};
						struct SourceStatisticsItem
						{
							std::string metricValue;
							long totalCount;
							std::string type;
							long activeCount;
						};
						struct DataBaseStatisticsItem
						{
							std::string metricValue;
							long totalCount;
							std::string type;
							long activeCount;
						};
						std::vector<UserStatisticsItem> userStatistics;
						std::vector<DataBaseStatisticsItem> dataBaseStatistics;
						std::vector<SourceStatisticsItem> sourceStatistics;
					};
					struct AllProcessListItem
					{
						struct ProcessSqlListsItem
						{
							struct ProcessSqlListItem
							{
								std::string status;
								bool dynamicSql;
								std::string user;
								long executeTime;
								std::string proxySessId;
								std::string serverIp;
								long planId;
								std::string sqlText;
								long cpuTime;
								std::string clientIp;
								std::string sqlId;
								std::string tenantId;
								std::string command;
								std::string database;
								std::string traceId;
								long sessionId;
							};
							std::string status;
							bool dynamicSql;
							std::string user;
							long executeTime;
							std::string proxySessId;
							std::string serverIp;
							long planId;
							std::string sqlText;
							long cpuTime;
							std::string clientIp;
							std::string sqlId;
							std::vector<ProcessSqlListsItem::ProcessSqlListItem> processSqlList;
							std::string tenantId;
							std::string command;
							std::string database;
							std::string traceId;
							long sessionId;
						};
						std::string status;
						bool dynamicSql;
						std::string user;
						long executeTime;
						std::string proxySessId;
						std::string serverIp;
						long planId;
						std::string sqlText;
						std::vector<AllProcessListItem::ProcessSqlListsItem> processSqlLists;
						long cpuTime;
						std::string clientIp;
						std::string sqlId;
						std::string tenantId;
						std::string serverSn;
						std::string command;
						std::string database;
						std::string traceId;
						long sessionId;
					};
					SessionStatistics sessionStatistics;
					long totalSessionCount;
					long activeSessionCount;
					long idleSessionCount;
					std::string obVersion;
					std::vector<AllProcessListItem> allProcessList;
				};


				DescribeProcessStatsCompositionResult();
				explicit DescribeProcessStatsCompositionResult(const std::string &payload);
				~DescribeProcessStatsCompositionResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROCESSSTATSCOMPOSITIONRESULT_H_