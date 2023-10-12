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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLLISTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLLISTRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeSlowSQLListResult : public ServiceResult
			{
			public:
				struct Data
				{
					long rPCCount;
					long executions;
					float concurrencyWaitTime;
					float executeTime;
					float getPlanTime;
					float elapsedTime;
					std::string nodeIp;
					long returnRows;
					float cpuTime;
					std::string clientIp;
					std::string sQLText;
					long ssstoreReadRowCount;
					long retryCount;
					float execPerSecond;
					long logicalRead;
					long blockCacheHit;
					std::string dbName;
					long missPlans;
					float queueTime;
					float netWaitTime;
					long blockIndexCacheHit;
					float appWaitTime;
					std::string sQLId;
					float iOWaitTime;
					long remotePlans;
					std::string userName;
					float maxElapsedTime;
					long rowCacheHit;
					long affectedRows;
					long memstoreReadRowCount;
					float scheduleTime;
					float totalWaitTime;
					long diskRead;
					std::string event;
					float maxCpuTime;
					long bloomFilterCacheHit;
					long failTimes;
					long sQLType;
					long key;
					float decodeTime;
				};


				DescribeSlowSQLListResult();
				explicit DescribeSlowSQLListResult(const std::string &payload);
				~DescribeSlowSQLListResult();
				std::vector<Data> getSlowSQLList()const;
				long getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> slowSQLList_;
				long totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESLOWSQLLISTRESULT_H_