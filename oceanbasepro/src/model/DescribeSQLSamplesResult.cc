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

#include <alibabacloud/oceanbasepro/model/DescribeSQLSamplesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSQLSamplesResult::DescribeSQLSamplesResult() :
	ServiceResult()
{}

DescribeSQLSamplesResult::DescribeSQLSamplesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLSamplesResult::~DescribeSQLSamplesResult()
{}

void DescribeSQLSamplesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["RequestId"].isNull())
			dataObject.requestId = std::stol(valueDataDataItem["RequestId"].asString());
		if(!valueDataDataItem["TraceId"].isNull())
			dataObject.traceId = valueDataDataItem["TraceId"].asString();
		if(!valueDataDataItem["RequestTime"].isNull())
			dataObject.requestTime = valueDataDataItem["RequestTime"].asString();
		if(!valueDataDataItem["Server"].isNull())
			dataObject.server = valueDataDataItem["Server"].asString();
		if(!valueDataDataItem["ClientIp"].isNull())
			dataObject.clientIp = valueDataDataItem["ClientIp"].asString();
		if(!valueDataDataItem["ClientPort"].isNull())
			dataObject.clientPort = std::stoi(valueDataDataItem["ClientPort"].asString());
		if(!valueDataDataItem["DbName"].isNull())
			dataObject.dbName = valueDataDataItem["DbName"].asString();
		if(!valueDataDataItem["UserName"].isNull())
			dataObject.userName = valueDataDataItem["UserName"].asString();
		if(!valueDataDataItem["SqlType"].isNull())
			dataObject.sqlType = valueDataDataItem["SqlType"].asString();
		if(!valueDataDataItem["PlanId"].isNull())
			dataObject.planId = std::stol(valueDataDataItem["PlanId"].asString());
		if(!valueDataDataItem["AffectedRows"].isNull())
			dataObject.affectedRows = std::stol(valueDataDataItem["AffectedRows"].asString());
		if(!valueDataDataItem["ReturnRows"].isNull())
			dataObject.returnRows = std::stol(valueDataDataItem["ReturnRows"].asString());
		if(!valueDataDataItem["PartitionCount"].isNull())
			dataObject.partitionCount = std::stol(valueDataDataItem["PartitionCount"].asString());
		if(!valueDataDataItem["RetCode"].isNull())
			dataObject.retCode = std::stoi(valueDataDataItem["RetCode"].asString());
		if(!valueDataDataItem["WaitEvent"].isNull())
			dataObject.waitEvent = valueDataDataItem["WaitEvent"].asString();
		if(!valueDataDataItem["WaitTime"].isNull())
			dataObject.waitTime = valueDataDataItem["WaitTime"].asString();
		if(!valueDataDataItem["WaitCount"].isNull())
			dataObject.waitCount = std::stol(valueDataDataItem["WaitCount"].asString());
		if(!valueDataDataItem["RpcCount"].isNull())
			dataObject.rpcCount = std::stol(valueDataDataItem["RpcCount"].asString());
		if(!valueDataDataItem["PlanType"].isNull())
			dataObject.planType = valueDataDataItem["PlanType"].asString();
		if(!valueDataDataItem["Inner"].isNull())
			dataObject.inner = valueDataDataItem["Inner"].asString() == "true";
		if(!valueDataDataItem["ExecutorRpc"].isNull())
			dataObject.executorRpc = valueDataDataItem["ExecutorRpc"].asString() == "true";
		if(!valueDataDataItem["HitPlan"].isNull())
			dataObject.hitPlan = valueDataDataItem["HitPlan"].asString() == "true";
		if(!valueDataDataItem["ElapsedTime"].isNull())
			dataObject.elapsedTime = valueDataDataItem["ElapsedTime"].asString();
		if(!valueDataDataItem["CpuTime"].isNull())
			dataObject.cpuTime = valueDataDataItem["CpuTime"].asString();
		if(!valueDataDataItem["NetTime"].isNull())
			dataObject.netTime = valueDataDataItem["NetTime"].asString();
		if(!valueDataDataItem["NetWaitTime"].isNull())
			dataObject.netWaitTime = valueDataDataItem["NetWaitTime"].asString();
		if(!valueDataDataItem["QueueTime"].isNull())
			dataObject.queueTime = valueDataDataItem["QueueTime"].asString();
		if(!valueDataDataItem["DecodeTime"].isNull())
			dataObject.decodeTime = valueDataDataItem["DecodeTime"].asString();
		if(!valueDataDataItem["GetPlanTime"].isNull())
			dataObject.getPlanTime = valueDataDataItem["GetPlanTime"].asString();
		if(!valueDataDataItem["ExecuteTime"].isNull())
			dataObject.executeTime = valueDataDataItem["ExecuteTime"].asString();
		if(!valueDataDataItem["ApplicationWaitTime"].isNull())
			dataObject.applicationWaitTime = valueDataDataItem["ApplicationWaitTime"].asString();
		if(!valueDataDataItem["ConcurrencyWaitTime"].isNull())
			dataObject.concurrencyWaitTime = valueDataDataItem["ConcurrencyWaitTime"].asString();
		if(!valueDataDataItem["UserIoWaitTime"].isNull())
			dataObject.userIoWaitTime = valueDataDataItem["UserIoWaitTime"].asString();
		if(!valueDataDataItem["ScheduleTime"].isNull())
			dataObject.scheduleTime = valueDataDataItem["ScheduleTime"].asString();
		if(!valueDataDataItem["RowCacheHit"].isNull())
			dataObject.rowCacheHit = valueDataDataItem["RowCacheHit"].asString();
		if(!valueDataDataItem["BloomFilterCacheHit"].isNull())
			dataObject.bloomFilterCacheHit = valueDataDataItem["BloomFilterCacheHit"].asString();
		if(!valueDataDataItem["BlockCacheHit"].isNull())
			dataObject.blockCacheHit = valueDataDataItem["BlockCacheHit"].asString();
		if(!valueDataDataItem["BlockIndexCacheHit"].isNull())
			dataObject.blockIndexCacheHit = valueDataDataItem["BlockIndexCacheHit"].asString();
		if(!valueDataDataItem["DiskReads"].isNull())
			dataObject.diskReads = valueDataDataItem["DiskReads"].asString();
		if(!valueDataDataItem["RetryCount"].isNull())
			dataObject.retryCount = std::stol(valueDataDataItem["RetryCount"].asString());
		if(!valueDataDataItem["TableScan"].isNull())
			dataObject.tableScan = valueDataDataItem["TableScan"].asString() == "true";
		if(!valueDataDataItem["ConsistencyLevel"].isNull())
			dataObject.consistencyLevel = valueDataDataItem["ConsistencyLevel"].asString();
		if(!valueDataDataItem["MemstoreReadRows"].isNull())
			dataObject.memstoreReadRows = std::stol(valueDataDataItem["MemstoreReadRows"].asString());
		if(!valueDataDataItem["ExpectedWorkerCount"].isNull())
			dataObject.expectedWorkerCount = std::stol(valueDataDataItem["ExpectedWorkerCount"].asString());
		if(!valueDataDataItem["UsedWorkerCount"].isNull())
			dataObject.usedWorkerCount = std::stol(valueDataDataItem["UsedWorkerCount"].asString());
		if(!valueDataDataItem["SsstoreReadRows"].isNull())
			dataObject.ssstoreReadRows = std::stol(valueDataDataItem["SsstoreReadRows"].asString());
		if(!valueDataDataItem["ObServerId"].isNull())
			dataObject.obServerId = std::stol(valueDataDataItem["ObServerId"].asString());
		if(!valueDataDataItem["ObUserId"].isNull())
			dataObject.obUserId = std::stol(valueDataDataItem["ObUserId"].asString());
		if(!valueDataDataItem["ObDbId"].isNull())
			dataObject.obDbId = std::stol(valueDataDataItem["ObDbId"].asString());
		if(!valueDataDataItem["Statement"].isNull())
			dataObject.statement = valueDataDataItem["Statement"].asString();
		if(!valueDataDataItem["TransHash"].isNull())
			dataObject.transHash = valueDataDataItem["TransHash"].asString();
		if(!valueDataDataItem["FullSqlText"].isNull())
			dataObject.fullSqlText = valueDataDataItem["FullSqlText"].asString();
		if(!valueDataDataItem["SqlText"].isNull())
			dataObject.sqlText = valueDataDataItem["SqlText"].asString();
		if(!valueDataDataItem["ParamsValue"].isNull())
			dataObject.paramsValue = valueDataDataItem["ParamsValue"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeSQLSamplesResult::DataItem> DescribeSQLSamplesResult::getData()const
{
	return data_;
}

