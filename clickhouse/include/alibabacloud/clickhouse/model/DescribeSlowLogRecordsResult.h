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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/clickhouse/ClickhouseExport.h>

namespace AlibabaCloud
{
	namespace Clickhouse
	{
		namespace Model
		{
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeSlowLogRecordsResult : public ServiceResult
			{
			public:
				struct SlowLogRecords
				{
					struct Statistics
					{
						float elapsedTime;
						int bytesRead;
						int rowsRead;
					};
					struct ResultSet
					{
						std::string type;
						std::string name;
					};
					struct ResultSet1
					{
						std::string initialUser;
						std::string type;
						std::string query;
						std::string initialAddress;
						std::string initialQueryId;
						std::string queryDurationMs;
						std::string readBytes;
						std::string readRows;
						std::string queryStartTime;
						std::string memoryUsage;
						std::string resultBytes;
					};
					std::string rowsBeforeLimitAtLeast;
					std::vector<ResultSet> tableSchema;
					std::vector<ResultSet1> data;
					Statistics statistics;
					std::string rows;
				};


				DescribeSlowLogRecordsResult();
				explicit DescribeSlowLogRecordsResult(const std::string &payload);
				~DescribeSlowLogRecordsResult();
				SlowLogRecords getSlowLogRecords()const;

			protected:
				void parse(const std::string &payload);
			private:
				SlowLogRecords slowLogRecords_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_