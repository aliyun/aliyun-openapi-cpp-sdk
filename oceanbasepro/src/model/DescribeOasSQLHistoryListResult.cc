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

#include <alibabacloud/oceanbasepro/model/DescribeOasSQLHistoryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeOasSQLHistoryListResult::DescribeOasSQLHistoryListResult() :
	ServiceResult()
{}

DescribeOasSQLHistoryListResult::DescribeOasSQLHistoryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOasSQLHistoryListResult::~DescribeOasSQLHistoryListResult()
{}

void DescribeOasSQLHistoryListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SQLId"].isNull())
			dataObject.sQLId = valueDataDataItem["SQLId"].asString();
		if(!valueDataDataItem["DbName"].isNull())
			dataObject.dbName = valueDataDataItem["DbName"].asString();
		if(!valueDataDataItem["AvgAffectedRows"].isNull())
			dataObject.avgAffectedRows = valueDataDataItem["AvgAffectedRows"].asString();
		if(!valueDataDataItem["AvgBlockCacheHit"].isNull())
			dataObject.avgBlockCacheHit = valueDataDataItem["AvgBlockCacheHit"].asString();
		if(!valueDataDataItem["AvgBlockIndexCacheHit"].isNull())
			dataObject.avgBlockIndexCacheHit = valueDataDataItem["AvgBlockIndexCacheHit"].asString();
		if(!valueDataDataItem["AvgBloomFilterCacheHit"].isNull())
			dataObject.avgBloomFilterCacheHit = valueDataDataItem["AvgBloomFilterCacheHit"].asString();
		if(!valueDataDataItem["Executions"].isNull())
			dataObject.executions = std::stol(valueDataDataItem["Executions"].asString());
		if(!valueDataDataItem["FailCount"].isNull())
			dataObject.failCount = std::stol(valueDataDataItem["FailCount"].asString());
		if(!valueDataDataItem["AvgRpcCount"].isNull())
			dataObject.avgRpcCount = valueDataDataItem["AvgRpcCount"].asString();
		if(!valueDataDataItem["RemotePlans"].isNull())
			dataObject.remotePlans = std::stol(valueDataDataItem["RemotePlans"].asString());
		if(!valueDataDataItem["MissPlans"].isNull())
			dataObject.missPlans = std::stol(valueDataDataItem["MissPlans"].asString());
		if(!valueDataDataItem["AvgReturnRows"].isNull())
			dataObject.avgReturnRows = valueDataDataItem["AvgReturnRows"].asString();
		if(!valueDataDataItem["AvgLogicalReads"].isNull())
			dataObject.avgLogicalReads = valueDataDataItem["AvgLogicalReads"].asString();
		if(!valueDataDataItem["RetryCount"].isNull())
			dataObject.retryCount = std::stol(valueDataDataItem["RetryCount"].asString());
		if(!valueDataDataItem["AvgRowCacheHit"].isNull())
			dataObject.avgRowCacheHit = valueDataDataItem["AvgRowCacheHit"].asString();
		if(!valueDataDataItem["AvgDiskReads"].isNull())
			dataObject.avgDiskReads = valueDataDataItem["AvgDiskReads"].asString();
		if(!valueDataDataItem["AvgMemstoreReadRows"].isNull())
			dataObject.avgMemstoreReadRows = valueDataDataItem["AvgMemstoreReadRows"].asString();
		if(!valueDataDataItem["AvgSsstoreReadRows"].isNull())
			dataObject.avgSsstoreReadRows = valueDataDataItem["AvgSsstoreReadRows"].asString();
		if(!valueDataDataItem["AvgApplicationWaitTime"].isNull())
			dataObject.avgApplicationWaitTime = valueDataDataItem["AvgApplicationWaitTime"].asString();
		if(!valueDataDataItem["AvgElapsedTime"].isNull())
			dataObject.avgElapsedTime = valueDataDataItem["AvgElapsedTime"].asString();
		if(!valueDataDataItem["AvgExecuteTime"].isNull())
			dataObject.avgExecuteTime = valueDataDataItem["AvgExecuteTime"].asString();
		if(!valueDataDataItem["AvgQueueTime"].isNull())
			dataObject.avgQueueTime = valueDataDataItem["AvgQueueTime"].asString();
		if(!valueDataDataItem["AvgConcurrencyWaitTime"].isNull())
			dataObject.avgConcurrencyWaitTime = valueDataDataItem["AvgConcurrencyWaitTime"].asString();
		if(!valueDataDataItem["AvgCpuTime"].isNull())
			dataObject.avgCpuTime = valueDataDataItem["AvgCpuTime"].asString();
		if(!valueDataDataItem["AvgDecodeTime"].isNull())
			dataObject.avgDecodeTime = valueDataDataItem["AvgDecodeTime"].asString();
		if(!valueDataDataItem["AvgNetWaitTime"].isNull())
			dataObject.avgNetWaitTime = valueDataDataItem["AvgNetWaitTime"].asString();
		if(!valueDataDataItem["AvgUserIoWaitTime"].isNull())
			dataObject.avgUserIoWaitTime = valueDataDataItem["AvgUserIoWaitTime"].asString();
		if(!valueDataDataItem["AvgGetPlanTime"].isNull())
			dataObject.avgGetPlanTime = valueDataDataItem["AvgGetPlanTime"].asString();
		if(!valueDataDataItem["MaxElapsedTime"].isNull())
			dataObject.maxElapsedTime = valueDataDataItem["MaxElapsedTime"].asString();
		if(!valueDataDataItem["SumWaitTime"].isNull())
			dataObject.sumWaitTime = valueDataDataItem["SumWaitTime"].asString();
		if(!valueDataDataItem["AvgScheduleTime"].isNull())
			dataObject.avgScheduleTime = valueDataDataItem["AvgScheduleTime"].asString();
		if(!valueDataDataItem["MaxCpuTime"].isNull())
			dataObject.maxCpuTime = valueDataDataItem["MaxCpuTime"].asString();
		if(!valueDataDataItem["SumElapsedTime"].isNull())
			dataObject.sumElapsedTime = valueDataDataItem["SumElapsedTime"].asString();
		if(!valueDataDataItem["Timestamp"].isNull())
			dataObject.timestamp = valueDataDataItem["Timestamp"].asString();
		if(!valueDataDataItem["Server"].isNull())
			dataObject.server = valueDataDataItem["Server"].asString();
		if(!valueDataDataItem["UserName"].isNull())
			dataObject.userName = valueDataDataItem["UserName"].asString();
		if(!valueDataDataItem["AvgPartitionCount"].isNull())
			dataObject.avgPartitionCount = valueDataDataItem["AvgPartitionCount"].asString();
		if(!valueDataDataItem["FailPercentage"].isNull())
			dataObject.failPercentage = valueDataDataItem["FailPercentage"].asString();
		if(!valueDataDataItem["RetCode4012Count"].isNull())
			dataObject.retCode4012Count = std::stol(valueDataDataItem["RetCode4012Count"].asString());
		if(!valueDataDataItem["RetCode4013Count"].isNull())
			dataObject.retCode4013Count = std::stol(valueDataDataItem["RetCode4013Count"].asString());
		if(!valueDataDataItem["RetCode5001Count"].isNull())
			dataObject.retCode5001Count = std::stol(valueDataDataItem["RetCode5001Count"].asString());
		if(!valueDataDataItem["RetCode5024Count"].isNull())
			dataObject.retCode5024Count = std::stol(valueDataDataItem["RetCode5024Count"].asString());
		if(!valueDataDataItem["RetCode5167Count"].isNull())
			dataObject.retCode5167Count = std::stol(valueDataDataItem["RetCode5167Count"].asString());
		if(!valueDataDataItem["RetCode5217Count"].isNull())
			dataObject.retCode5217Count = std::stol(valueDataDataItem["RetCode5217Count"].asString());
		if(!valueDataDataItem["RetCode6002Count"].isNull())
			dataObject.retCode6002Count = std::stol(valueDataDataItem["RetCode6002Count"].asString());
		if(!valueDataDataItem["AvgWaitTime"].isNull())
			dataObject.avgWaitTime = valueDataDataItem["AvgWaitTime"].asString();
		if(!valueDataDataItem["AvgWaitCount"].isNull())
			dataObject.avgWaitCount = valueDataDataItem["AvgWaitCount"].asString();
		if(!valueDataDataItem["LocalPlanPercentage"].isNull())
			dataObject.localPlanPercentage = valueDataDataItem["LocalPlanPercentage"].asString();
		if(!valueDataDataItem["RemotePlanPercentage"].isNull())
			dataObject.remotePlanPercentage = valueDataDataItem["RemotePlanPercentage"].asString();
		if(!valueDataDataItem["DistPlanPercentage"].isNull())
			dataObject.distPlanPercentage = valueDataDataItem["DistPlanPercentage"].asString();
		if(!valueDataDataItem["AvgNetTime"].isNull())
			dataObject.avgNetTime = valueDataDataItem["AvgNetTime"].asString();
		if(!valueDataDataItem["AvgExecutorRpcCount"].isNull())
			dataObject.avgExecutorRpcCount = valueDataDataItem["AvgExecutorRpcCount"].asString();
		if(!valueDataDataItem["MissPlanPercentage"].isNull())
			dataObject.missPlanPercentage = valueDataDataItem["MissPlanPercentage"].asString();
		if(!valueDataDataItem["TableScanPercentage"].isNull())
			dataObject.tableScanPercentage = valueDataDataItem["TableScanPercentage"].asString();
		if(!valueDataDataItem["StrongConsistencyPercentage"].isNull())
			dataObject.strongConsistencyPercentage = valueDataDataItem["StrongConsistencyPercentage"].asString();
		if(!valueDataDataItem["WeakConsistencyPercentage"].isNull())
			dataObject.weakConsistencyPercentage = valueDataDataItem["WeakConsistencyPercentage"].asString();
		if(!valueDataDataItem["MaxAffectedRows"].isNull())
			dataObject.maxAffectedRows = valueDataDataItem["MaxAffectedRows"].asString();
		if(!valueDataDataItem["MaxReturnRows"].isNull())
			dataObject.maxReturnRows = valueDataDataItem["MaxReturnRows"].asString();
		if(!valueDataDataItem["MaxWaitTime"].isNull())
			dataObject.maxWaitTime = valueDataDataItem["MaxWaitTime"].asString();
		if(!valueDataDataItem["MaxApplicationWaitTime"].isNull())
			dataObject.maxApplicationWaitTime = valueDataDataItem["MaxApplicationWaitTime"].asString();
		if(!valueDataDataItem["MaxConcurrencyWaitTime"].isNull())
			dataObject.maxConcurrencyWaitTime = valueDataDataItem["MaxConcurrencyWaitTime"].asString();
		if(!valueDataDataItem["MaxUserIoWaitTime"].isNull())
			dataObject.maxUserIoWaitTime = valueDataDataItem["MaxUserIoWaitTime"].asString();
		if(!valueDataDataItem["MaxDiskReads"].isNull())
			dataObject.maxDiskReads = valueDataDataItem["MaxDiskReads"].asString();
		if(!valueDataDataItem["AvgExpectedWorkerCount"].isNull())
			dataObject.avgExpectedWorkerCount = valueDataDataItem["AvgExpectedWorkerCount"].asString();
		if(!valueDataDataItem["AvgUsedWorkerCount"].isNull())
			dataObject.avgUsedWorkerCount = valueDataDataItem["AvgUsedWorkerCount"].asString();
		if(!valueDataDataItem["SumLogicalReads"].isNull())
			dataObject.sumLogicalReads = valueDataDataItem["SumLogicalReads"].asString();
		if(!valueDataDataItem["ExecPs"].isNull())
			dataObject.execPs = valueDataDataItem["ExecPs"].asString();
		if(!valueDataDataItem["AvgDbTime"].isNull())
			dataObject.avgDbTime = valueDataDataItem["AvgDbTime"].asString();
		if(!valueDataDataItem["SumDbTime"].isNull())
			dataObject.sumDbTime = valueDataDataItem["SumDbTime"].asString();
		if(!valueDataDataItem["WaitEvent"].isNull())
			dataObject.waitEvent = valueDataDataItem["WaitEvent"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeOasSQLHistoryListResult::DataItem> DescribeOasSQLHistoryListResult::getData()const
{
	return data_;
}

