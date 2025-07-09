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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASSQLHISTORYLISTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASSQLHISTORYLISTRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeOasSQLHistoryListResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					long executions;
					double avgRowCacheHit;
					std::string server;
					double maxApplicationWaitTime;
					double maxAffectedRows;
					double maxUserIoWaitTime;
					double avgUserIoWaitTime;
					long retryCount;
					long retCode6002Count;
					long missPlans;
					double avgLogicalReads;
					long retCode5167Count;
					double avgBlockCacheHit;
					double execPs;
					double tableScanPercentage;
					long retCode5217Count;
					double avgUsedWorkerCount;
					double maxElapsedTime;
					double localPlanPercentage;
					double avgGetPlanTime;
					double avgNetTime;
					double remotePlanPercentage;
					double avgAffectedRows;
					double avgApplicationWaitTime;
					double avgSsstoreReadRows;
					double avgMemstoreReadRows;
					double avgQueueTime;
					double maxCpuTime;
					double avgDiskReads;
					long retCode5001Count;
					double avgCpuTime;
					long retCode5024Count;
					double sumLogicalReads;
					double sumDbTime;
					double strongConsistencyPercentage;
					long retCode4013Count;
					double avgConcurrencyWaitTime;
					std::string timestamp;
					double avgBlockIndexCacheHit;
					double avgBloomFilterCacheHit;
					double sumElapsedTime;
					double avgReturnRows;
					long failCount;
					double avgPartitionCount;
					std::string dbName;
					double avgWaitTime;
					double weakConsistencyPercentage;
					double avgDecodeTime;
					std::string sQLId;
					double avgRpcCount;
					double avgNetWaitTime;
					double maxDiskReads;
					double avgDbTime;
					double avgExpectedWorkerCount;
					double distPlanPercentage;
					long remotePlans;
					double avgWaitCount;
					std::string userName;
					double avgExecuteTime;
					double maxWaitTime;
					double avgExecutorRpcCount;
					double avgScheduleTime;
					double maxConcurrencyWaitTime;
					double missPlanPercentage;
					std::string waitEvent;
					long retCode4012Count;
					double avgElapsedTime;
					double failPercentage;
					double maxReturnRows;
					double sumWaitTime;
				};


				DescribeOasSQLHistoryListResult();
				explicit DescribeOasSQLHistoryListResult(const std::string &payload);
				~DescribeOasSQLHistoryListResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASSQLHISTORYLISTRESULT_H_