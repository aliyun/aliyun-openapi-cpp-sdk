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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLSAMPLESRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLSAMPLESRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeSQLSamplesResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string server;
					std::string clientPort;
					std::string clientIp;
					double cpuTime;
					bool inner;
					std::string consistencyLevel;
					double retryCount;
					std::string transHash;
					double retCode;
					std::string planType;
					double obDbId;
					std::string sqlType;
					double queueTime;
					double blockIndexCacheHit;
					bool tableScan;
					double waitCount;
					std::string requestId;
					std::string requestTime;
					double ssstoreReadRows;
					double scheduleTime;
					double obUserId;
					std::string traceId;
					double bloomFilterCacheHit;
					double obServerId;
					double expectedWorkerCount;
					double decodeTime;
					double concurrencyWaitTime;
					double executeTime;
					double memstoreReadRows;
					double getPlanTime;
					double elapsedTime;
					bool hitPlan;
					double returnRows;
					bool executorRpc;
					double blockCacheHit;
					std::string dbName;
					double netWaitTime;
					double diskReads;
					std::string userName;
					double netTime;
					double rpcCount;
					std::string fullSqlText;
					std::string statement;
					double planId;
					double rowCacheHit;
					double affectedRows;
					double usedWorkerCount;
					double applicationWaitTime;
					std::string waitEvent;
					double userIoWaitTime;
					double waitTime;
					double partitionCount;
				};


				DescribeSQLSamplesResult();
				explicit DescribeSQLSamplesResult(const std::string &payload);
				~DescribeSQLSamplesResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLSAMPLESRESULT_H_