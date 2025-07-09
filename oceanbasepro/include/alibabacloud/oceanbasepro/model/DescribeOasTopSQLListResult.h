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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASTOPSQLLISTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASTOPSQLLISTRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeOasTopSQLListResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct CustomColumns
					{
						std::string expression;
						std::string value;
					};
					struct SqlListItem
					{
						long executions;
						double avgRowCacheHit;
						double maxApplicationWaitTime;
						std::string server;
						double maxAffectedRows;
						double maxUserIoWaitTime;
						std::string clientIp;
						bool inner;
						double avgUserIoWaitTime;
						long retryCount;
						long retCode6002Count;
						long missPlans;
						long retCode5167Count;
						std::string sqlType;
						double avgLogicalReads;
						double execPs;
						double avgBlockCacheHit;
						double tableScanPercentage;
						long retCode5217Count;
						double avgUsedWorkerCount;
						double maxElapsedTime;
						double localPlanPercentage;
						double avgGetPlanTime;
						double cpuPercentage;
						double avgNetTime;
						double remotePlanPercentage;
						std::string sqlId;
						double avgAffectedRows;
						double avgApplicationWaitTime;
						std::string sqlTextShort;
						double avgSsstoreReadRows;
						double avgMemstoreReadRows;
						double avgQueueTime;
						double maxCpuTime;
						double avgDiskReads;
						long retCode5001Count;
						long retCode5024Count;
						double sumLogicalReads;
						double avgCpuTime;
						double sumDbTime;
						double strongConsistencyPercentage;
						long retCode4013Count;
						double avgConcurrencyWaitTime;
						double avgBlockIndexCacheHit;
						double sumElapsedTime;
						double avgBloomFilterCacheHit;
						double avgReturnRows;
						double avgPartitionCount;
						long failCount;
						std::string dbName;
						double avgWaitTime;
						double weakConsistencyPercentage;
						double avgDecodeTime;
						double avgRpcCount;
						double maxDiskReads;
						double avgNetWaitTime;
						double avgDbTime;
						double avgExpectedWorkerCount;
						double distPlanPercentage;
						long remotePlans;
						double avgWaitCount;
						std::string userName;
						double rpcCount;
						double avgExecuteTime;
						std::string serverIp;
						double maxWaitTime;
						double avgExecutorRpcCount;
						double avgScheduleTime;
						double maxConcurrencyWaitTime;
						double missPlanPercentage;
						std::string waitEvent;
						double totalWaitTime;
						long retCode4012Count;
						double avgElapsedTime;
						double failPercentage;
						double maxReturnRows;
						double sumWaitTime;
						long serverPort;
					};
					long executions;
					double avgRowCacheHit;
					double maxApplicationWaitTime;
					std::string server;
					double maxAffectedRows;
					double maxUserIoWaitTime;
					std::string clientIp;
					bool inner;
					double avgUserIoWaitTime;
					long retryCount;
					long retCode6002Count;
					long obDbId;
					long missPlans;
					long retCode5167Count;
					std::string sqlType;
					double avgLogicalReads;
					double execPs;
					double avgBlockCacheHit;
					double tableScanPercentage;
					long retCode5217Count;
					double avgUsedWorkerCount;
					double maxElapsedTime;
					double localPlanPercentage;
					double avgGetPlanTime;
					double cpuPercentage;
					double avgNetTime;
					double remotePlanPercentage;
					std::string sqlId;
					double avgAffectedRows;
					double avgApplicationWaitTime;
					std::string sqlTextShort;
					double avgSsstoreReadRows;
					double avgMemstoreReadRows;
					double avgQueueTime;
					double maxCpuTime;
					double avgDiskReads;
					long retCode5001Count;
					long retCode5024Count;
					double sumLogicalReads;
					double avgCpuTime;
					double sumDbTime;
					double strongConsistencyPercentage;
					long retCode4013Count;
					double avgConcurrencyWaitTime;
					double avgBlockIndexCacheHit;
					double sumElapsedTime;
					double avgBloomFilterCacheHit;
					CustomColumns customColumns;
					double avgReturnRows;
					double avgPartitionCount;
					long failCount;
					std::string dbName;
					double avgWaitTime;
					double weakConsistencyPercentage;
					double avgDecodeTime;
					double avgRpcCount;
					double maxDiskReads;
					double avgNetWaitTime;
					double avgDbTime;
					double avgExpectedWorkerCount;
					double distPlanPercentage;
					bool dynamicSql;
					std::vector<DataItem::SqlListItem> sqlList;
					long remotePlans;
					double avgWaitCount;
					std::string userName;
					double rpcCount;
					double avgExecuteTime;
					std::string serverIp;
					double maxWaitTime;
					double avgExecutorRpcCount;
					double avgScheduleTime;
					double maxConcurrencyWaitTime;
					double missPlanPercentage;
					std::string waitEvent;
					long lastFailCode;
					double totalWaitTime;
					long retCode4012Count;
					double avgElapsedTime;
					double failPercentage;
					double maxReturnRows;
					double sumWaitTime;
					long serverPort;
				};


				DescribeOasTopSQLListResult();
				explicit DescribeOasTopSQLListResult(const std::string &payload);
				~DescribeOasTopSQLListResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASTOPSQLLISTRESULT_H_