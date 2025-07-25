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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEPROCESSLISTRESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEPROCESSLISTRESULT_H_

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
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeProcessListResult : public ServiceResult
			{
			public:
				struct ProcessList
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
						std::string query;
						std::string initialAddress;
						std::string initialQueryId;
						std::string queryDurationMs;
						std::string queryStartTime;
					};
					std::string rowsBeforeLimitAtLeast;
					std::vector<ResultSet> tableSchema;
					std::vector<ResultSet1> data;
					Statistics statistics;
					std::string rows;
				};


				DescribeProcessListResult();
				explicit DescribeProcessListResult(const std::string &payload);
				~DescribeProcessListResult();
				ProcessList getProcessList()const;

			protected:
				void parse(const std::string &payload);
			private:
				ProcessList processList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEPROCESSLISTRESULT_H_