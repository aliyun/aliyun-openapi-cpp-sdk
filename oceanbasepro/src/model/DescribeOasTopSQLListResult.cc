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

#include <alibabacloud/oceanbasepro/model/DescribeOasTopSQLListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeOasTopSQLListResult::DescribeOasTopSQLListResult() :
	ServiceResult()
{}

DescribeOasTopSQLListResult::DescribeOasTopSQLListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOasTopSQLListResult::~DescribeOasTopSQLListResult()
{}

void DescribeOasTopSQLListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Executions"].isNull())
			dataObject.executions = std::stol(valueDataDataItem["Executions"].asString());
		if(!valueDataDataItem["RpcCount"].isNull())
			dataObject.rpcCount = valueDataDataItem["RpcCount"].asString();
		if(!valueDataDataItem["RemotePlans"].isNull())
			dataObject.remotePlans = std::stol(valueDataDataItem["RemotePlans"].asString());
		if(!valueDataDataItem["MissPlans"].isNull())
			dataObject.missPlans = std::stol(valueDataDataItem["MissPlans"].asString());
		if(!valueDataDataItem["MaxElapsedTime"].isNull())
			dataObject.maxElapsedTime = valueDataDataItem["MaxElapsedTime"].asString();
		if(!valueDataDataItem["TotalWaitTime"].isNull())
			dataObject.totalWaitTime = valueDataDataItem["TotalWaitTime"].asString();
		if(!valueDataDataItem["ExecPs"].isNull())
			dataObject.execPs = valueDataDataItem["ExecPs"].asString();
		if(!valueDataDataItem["MaxCpuTime"].isNull())
			dataObject.maxCpuTime = valueDataDataItem["MaxCpuTime"].asString();
		if(!valueDataDataItem["CpuPercentage"].isNull())
			dataObject.cpuPercentage = valueDataDataItem["CpuPercentage"].asString();
		if(!valueDataDataItem["ClientIp"].isNull())
			dataObject.clientIp = valueDataDataItem["ClientIp"].asString();
		if(!valueDataDataItem["UserName"].isNull())
			dataObject.userName = valueDataDataItem["UserName"].asString();
		if(!valueDataDataItem["DbName"].isNull())
			dataObject.dbName = valueDataDataItem["DbName"].asString();
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
		if(!valueDataDataItem["FailPercentage"].isNull())
			dataObject.failPercentage = valueDataDataItem["FailPercentage"].asString();
		if(!valueDataDataItem["SumWaitTime"].isNull())
			dataObject.sumWaitTime = valueDataDataItem["SumWaitTime"].asString();
		if(!valueDataDataItem["AvgWaitCount"].isNull())
			dataObject.avgWaitCount = valueDataDataItem["AvgWaitCount"].asString();
		if(!valueDataDataItem["AvgRpcCount"].isNull())
			dataObject.avgRpcCount = valueDataDataItem["AvgRpcCount"].asString();
		if(!valueDataDataItem["LocalPlanPercentage"].isNull())
			dataObject.localPlanPercentage = valueDataDataItem["LocalPlanPercentage"].asString();
		if(!valueDataDataItem["RemotePlanPercentage"].isNull())
			dataObject.remotePlanPercentage = valueDataDataItem["RemotePlanPercentage"].asString();
		if(!valueDataDataItem["DistPlanPercentage"].isNull())
			dataObject.distPlanPercentage = valueDataDataItem["DistPlanPercentage"].asString();
		if(!valueDataDataItem["SumElapsedTime"].isNull())
			dataObject.sumElapsedTime = valueDataDataItem["SumElapsedTime"].asString();
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
		if(!valueDataDataItem["Server"].isNull())
			dataObject.server = valueDataDataItem["Server"].asString();
		if(!valueDataDataItem["ServerIp"].isNull())
			dataObject.serverIp = valueDataDataItem["ServerIp"].asString();
		if(!valueDataDataItem["ServerPort"].isNull())
			dataObject.serverPort = std::stol(valueDataDataItem["ServerPort"].asString());
		if(!valueDataDataItem["SqlTextShort"].isNull())
			dataObject.sqlTextShort = valueDataDataItem["SqlTextShort"].asString();
		if(!valueDataDataItem["SqlType"].isNull())
			dataObject.sqlType = valueDataDataItem["SqlType"].asString();
		if(!valueDataDataItem["SqlId"].isNull())
			dataObject.sqlId = valueDataDataItem["SqlId"].asString();
		if(!valueDataDataItem["Inner"].isNull())
			dataObject.inner = valueDataDataItem["Inner"].asString() == "true";
		if(!valueDataDataItem["WaitEvent"].isNull())
			dataObject.waitEvent = valueDataDataItem["WaitEvent"].asString();
		if(!valueDataDataItem["AvgAffectedRows"].isNull())
			dataObject.avgAffectedRows = valueDataDataItem["AvgAffectedRows"].asString();
		if(!valueDataDataItem["AvgReturnRows"].isNull())
			dataObject.avgReturnRows = valueDataDataItem["AvgReturnRows"].asString();
		if(!valueDataDataItem["AvgPartitionCount"].isNull())
			dataObject.avgPartitionCount = valueDataDataItem["AvgPartitionCount"].asString();
		if(!valueDataDataItem["FailCount"].isNull())
			dataObject.failCount = std::stol(valueDataDataItem["FailCount"].asString());
		if(!valueDataDataItem["AvgWaitTime"].isNull())
			dataObject.avgWaitTime = valueDataDataItem["AvgWaitTime"].asString();
		if(!valueDataDataItem["AvgElapsedTime"].isNull())
			dataObject.avgElapsedTime = valueDataDataItem["AvgElapsedTime"].asString();
		if(!valueDataDataItem["AvgCpuTime"].isNull())
			dataObject.avgCpuTime = valueDataDataItem["AvgCpuTime"].asString();
		if(!valueDataDataItem["AvgNetWaitTime"].isNull())
			dataObject.avgNetWaitTime = valueDataDataItem["AvgNetWaitTime"].asString();
		if(!valueDataDataItem["AvgQueueTime"].isNull())
			dataObject.avgQueueTime = valueDataDataItem["AvgQueueTime"].asString();
		if(!valueDataDataItem["AvgDecodeTime"].isNull())
			dataObject.avgDecodeTime = valueDataDataItem["AvgDecodeTime"].asString();
		if(!valueDataDataItem["AvgGetPlanTime"].isNull())
			dataObject.avgGetPlanTime = valueDataDataItem["AvgGetPlanTime"].asString();
		if(!valueDataDataItem["AvgExecuteTime"].isNull())
			dataObject.avgExecuteTime = valueDataDataItem["AvgExecuteTime"].asString();
		if(!valueDataDataItem["AvgApplicationWaitTime"].isNull())
			dataObject.avgApplicationWaitTime = valueDataDataItem["AvgApplicationWaitTime"].asString();
		if(!valueDataDataItem["AvgConcurrencyWaitTime"].isNull())
			dataObject.avgConcurrencyWaitTime = valueDataDataItem["AvgConcurrencyWaitTime"].asString();
		if(!valueDataDataItem["AvgUserIoWaitTime"].isNull())
			dataObject.avgUserIoWaitTime = valueDataDataItem["AvgUserIoWaitTime"].asString();
		if(!valueDataDataItem["AvgScheduleTime"].isNull())
			dataObject.avgScheduleTime = valueDataDataItem["AvgScheduleTime"].asString();
		if(!valueDataDataItem["AvgRowCacheHit"].isNull())
			dataObject.avgRowCacheHit = valueDataDataItem["AvgRowCacheHit"].asString();
		if(!valueDataDataItem["AvgBloomFilterCacheHit"].isNull())
			dataObject.avgBloomFilterCacheHit = valueDataDataItem["AvgBloomFilterCacheHit"].asString();
		if(!valueDataDataItem["AvgBlockCacheHit"].isNull())
			dataObject.avgBlockCacheHit = valueDataDataItem["AvgBlockCacheHit"].asString();
		if(!valueDataDataItem["AvgBlockIndexCacheHit"].isNull())
			dataObject.avgBlockIndexCacheHit = valueDataDataItem["AvgBlockIndexCacheHit"].asString();
		if(!valueDataDataItem["AvgDiskReads"].isNull())
			dataObject.avgDiskReads = valueDataDataItem["AvgDiskReads"].asString();
		if(!valueDataDataItem["RetryCount"].isNull())
			dataObject.retryCount = std::stol(valueDataDataItem["RetryCount"].asString());
		if(!valueDataDataItem["AvgMemstoreReadRows"].isNull())
			dataObject.avgMemstoreReadRows = valueDataDataItem["AvgMemstoreReadRows"].asString();
		if(!valueDataDataItem["AvgSsstoreReadRows"].isNull())
			dataObject.avgSsstoreReadRows = valueDataDataItem["AvgSsstoreReadRows"].asString();
		if(!valueDataDataItem["AvgLogicalReads"].isNull())
			dataObject.avgLogicalReads = valueDataDataItem["AvgLogicalReads"].asString();
		if(!valueDataDataItem["DynamicSql"].isNull())
			dataObject.dynamicSql = valueDataDataItem["DynamicSql"].asString() == "true";
		if(!valueDataDataItem["LastFailCode"].isNull())
			dataObject.lastFailCode = std::stol(valueDataDataItem["LastFailCode"].asString());
		if(!valueDataDataItem["AvgDbTime"].isNull())
			dataObject.avgDbTime = valueDataDataItem["AvgDbTime"].asString();
		if(!valueDataDataItem["SumDbTime"].isNull())
			dataObject.sumDbTime = valueDataDataItem["SumDbTime"].asString();
		if(!valueDataDataItem["ObDbId"].isNull())
			dataObject.obDbId = std::stol(valueDataDataItem["ObDbId"].asString());
		auto allSqlListNode = valueDataDataItem["SqlList"]["SqlListItem"];
		for (auto valueDataDataItemSqlListSqlListItem : allSqlListNode)
		{
			DataItem::SqlListItem sqlListObject;
			if(!valueDataDataItemSqlListSqlListItem["Executions"].isNull())
				sqlListObject.executions = std::stol(valueDataDataItemSqlListSqlListItem["Executions"].asString());
			if(!valueDataDataItemSqlListSqlListItem["RpcCount"].isNull())
				sqlListObject.rpcCount = valueDataDataItemSqlListSqlListItem["RpcCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["RemotePlans"].isNull())
				sqlListObject.remotePlans = std::stol(valueDataDataItemSqlListSqlListItem["RemotePlans"].asString());
			if(!valueDataDataItemSqlListSqlListItem["MissPlans"].isNull())
				sqlListObject.missPlans = std::stol(valueDataDataItemSqlListSqlListItem["MissPlans"].asString());
			if(!valueDataDataItemSqlListSqlListItem["MaxElapsedTime"].isNull())
				sqlListObject.maxElapsedTime = valueDataDataItemSqlListSqlListItem["MaxElapsedTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["TotalWaitTime"].isNull())
				sqlListObject.totalWaitTime = valueDataDataItemSqlListSqlListItem["TotalWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["ExecPs"].isNull())
				sqlListObject.execPs = valueDataDataItemSqlListSqlListItem["ExecPs"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MaxCpuTime"].isNull())
				sqlListObject.maxCpuTime = valueDataDataItemSqlListSqlListItem["MaxCpuTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["CpuPercentage"].isNull())
				sqlListObject.cpuPercentage = valueDataDataItemSqlListSqlListItem["CpuPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["ClientIp"].isNull())
				sqlListObject.clientIp = valueDataDataItemSqlListSqlListItem["ClientIp"].asString();
			if(!valueDataDataItemSqlListSqlListItem["UserName"].isNull())
				sqlListObject.userName = valueDataDataItemSqlListSqlListItem["UserName"].asString();
			if(!valueDataDataItemSqlListSqlListItem["DbName"].isNull())
				sqlListObject.dbName = valueDataDataItemSqlListSqlListItem["DbName"].asString();
			if(!valueDataDataItemSqlListSqlListItem["RetCode4012Count"].isNull())
				sqlListObject.retCode4012Count = std::stol(valueDataDataItemSqlListSqlListItem["RetCode4012Count"].asString());
			if(!valueDataDataItemSqlListSqlListItem["RetCode4013Count"].isNull())
				sqlListObject.retCode4013Count = std::stol(valueDataDataItemSqlListSqlListItem["RetCode4013Count"].asString());
			if(!valueDataDataItemSqlListSqlListItem["RetCode5001Count"].isNull())
				sqlListObject.retCode5001Count = std::stol(valueDataDataItemSqlListSqlListItem["RetCode5001Count"].asString());
			if(!valueDataDataItemSqlListSqlListItem["RetCode5024Count"].isNull())
				sqlListObject.retCode5024Count = std::stol(valueDataDataItemSqlListSqlListItem["RetCode5024Count"].asString());
			if(!valueDataDataItemSqlListSqlListItem["RetCode5167Count"].isNull())
				sqlListObject.retCode5167Count = std::stol(valueDataDataItemSqlListSqlListItem["RetCode5167Count"].asString());
			if(!valueDataDataItemSqlListSqlListItem["RetCode5217Count"].isNull())
				sqlListObject.retCode5217Count = std::stol(valueDataDataItemSqlListSqlListItem["RetCode5217Count"].asString());
			if(!valueDataDataItemSqlListSqlListItem["RetCode6002Count"].isNull())
				sqlListObject.retCode6002Count = std::stol(valueDataDataItemSqlListSqlListItem["RetCode6002Count"].asString());
			if(!valueDataDataItemSqlListSqlListItem["FailPercentage"].isNull())
				sqlListObject.failPercentage = valueDataDataItemSqlListSqlListItem["FailPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SumWaitTime"].isNull())
				sqlListObject.sumWaitTime = valueDataDataItemSqlListSqlListItem["SumWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgWaitCount"].isNull())
				sqlListObject.avgWaitCount = valueDataDataItemSqlListSqlListItem["AvgWaitCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgRpcCount"].isNull())
				sqlListObject.avgRpcCount = valueDataDataItemSqlListSqlListItem["AvgRpcCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["LocalPlanPercentage"].isNull())
				sqlListObject.localPlanPercentage = valueDataDataItemSqlListSqlListItem["LocalPlanPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["RemotePlanPercentage"].isNull())
				sqlListObject.remotePlanPercentage = valueDataDataItemSqlListSqlListItem["RemotePlanPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["DistPlanPercentage"].isNull())
				sqlListObject.distPlanPercentage = valueDataDataItemSqlListSqlListItem["DistPlanPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SumElapsedTime"].isNull())
				sqlListObject.sumElapsedTime = valueDataDataItemSqlListSqlListItem["SumElapsedTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgNetTime"].isNull())
				sqlListObject.avgNetTime = valueDataDataItemSqlListSqlListItem["AvgNetTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgExecutorRpcCount"].isNull())
				sqlListObject.avgExecutorRpcCount = valueDataDataItemSqlListSqlListItem["AvgExecutorRpcCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MissPlanPercentage"].isNull())
				sqlListObject.missPlanPercentage = valueDataDataItemSqlListSqlListItem["MissPlanPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["TableScanPercentage"].isNull())
				sqlListObject.tableScanPercentage = valueDataDataItemSqlListSqlListItem["TableScanPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["StrongConsistencyPercentage"].isNull())
				sqlListObject.strongConsistencyPercentage = valueDataDataItemSqlListSqlListItem["StrongConsistencyPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["WeakConsistencyPercentage"].isNull())
				sqlListObject.weakConsistencyPercentage = valueDataDataItemSqlListSqlListItem["WeakConsistencyPercentage"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MaxAffectedRows"].isNull())
				sqlListObject.maxAffectedRows = valueDataDataItemSqlListSqlListItem["MaxAffectedRows"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MaxReturnRows"].isNull())
				sqlListObject.maxReturnRows = valueDataDataItemSqlListSqlListItem["MaxReturnRows"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MaxWaitTime"].isNull())
				sqlListObject.maxWaitTime = valueDataDataItemSqlListSqlListItem["MaxWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MaxApplicationWaitTime"].isNull())
				sqlListObject.maxApplicationWaitTime = valueDataDataItemSqlListSqlListItem["MaxApplicationWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MaxConcurrencyWaitTime"].isNull())
				sqlListObject.maxConcurrencyWaitTime = valueDataDataItemSqlListSqlListItem["MaxConcurrencyWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MaxUserIoWaitTime"].isNull())
				sqlListObject.maxUserIoWaitTime = valueDataDataItemSqlListSqlListItem["MaxUserIoWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["MaxDiskReads"].isNull())
				sqlListObject.maxDiskReads = valueDataDataItemSqlListSqlListItem["MaxDiskReads"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgExpectedWorkerCount"].isNull())
				sqlListObject.avgExpectedWorkerCount = valueDataDataItemSqlListSqlListItem["AvgExpectedWorkerCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgUsedWorkerCount"].isNull())
				sqlListObject.avgUsedWorkerCount = valueDataDataItemSqlListSqlListItem["AvgUsedWorkerCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SumLogicalReads"].isNull())
				sqlListObject.sumLogicalReads = valueDataDataItemSqlListSqlListItem["SumLogicalReads"].asString();
			if(!valueDataDataItemSqlListSqlListItem["Server"].isNull())
				sqlListObject.server = valueDataDataItemSqlListSqlListItem["Server"].asString();
			if(!valueDataDataItemSqlListSqlListItem["ServerIp"].isNull())
				sqlListObject.serverIp = valueDataDataItemSqlListSqlListItem["ServerIp"].asString();
			if(!valueDataDataItemSqlListSqlListItem["ServerPort"].isNull())
				sqlListObject.serverPort = std::stol(valueDataDataItemSqlListSqlListItem["ServerPort"].asString());
			if(!valueDataDataItemSqlListSqlListItem["SqlTextShort"].isNull())
				sqlListObject.sqlTextShort = valueDataDataItemSqlListSqlListItem["SqlTextShort"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SqlType"].isNull())
				sqlListObject.sqlType = valueDataDataItemSqlListSqlListItem["SqlType"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SqlId"].isNull())
				sqlListObject.sqlId = valueDataDataItemSqlListSqlListItem["SqlId"].asString();
			if(!valueDataDataItemSqlListSqlListItem["Inner"].isNull())
				sqlListObject.inner = valueDataDataItemSqlListSqlListItem["Inner"].asString() == "true";
			if(!valueDataDataItemSqlListSqlListItem["WaitEvent"].isNull())
				sqlListObject.waitEvent = valueDataDataItemSqlListSqlListItem["WaitEvent"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgAffectedRows"].isNull())
				sqlListObject.avgAffectedRows = valueDataDataItemSqlListSqlListItem["AvgAffectedRows"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgReturnRows"].isNull())
				sqlListObject.avgReturnRows = valueDataDataItemSqlListSqlListItem["AvgReturnRows"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgPartitionCount"].isNull())
				sqlListObject.avgPartitionCount = valueDataDataItemSqlListSqlListItem["AvgPartitionCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["FailCount"].isNull())
				sqlListObject.failCount = std::stol(valueDataDataItemSqlListSqlListItem["FailCount"].asString());
			if(!valueDataDataItemSqlListSqlListItem["AvgWaitTime"].isNull())
				sqlListObject.avgWaitTime = valueDataDataItemSqlListSqlListItem["AvgWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgElapsedTime"].isNull())
				sqlListObject.avgElapsedTime = valueDataDataItemSqlListSqlListItem["AvgElapsedTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgCpuTime"].isNull())
				sqlListObject.avgCpuTime = valueDataDataItemSqlListSqlListItem["AvgCpuTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgNetWaitTime"].isNull())
				sqlListObject.avgNetWaitTime = valueDataDataItemSqlListSqlListItem["AvgNetWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgQueueTime"].isNull())
				sqlListObject.avgQueueTime = valueDataDataItemSqlListSqlListItem["AvgQueueTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgDecodeTime"].isNull())
				sqlListObject.avgDecodeTime = valueDataDataItemSqlListSqlListItem["AvgDecodeTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgGetPlanTime"].isNull())
				sqlListObject.avgGetPlanTime = valueDataDataItemSqlListSqlListItem["AvgGetPlanTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgExecuteTime"].isNull())
				sqlListObject.avgExecuteTime = valueDataDataItemSqlListSqlListItem["AvgExecuteTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgApplicationWaitTime"].isNull())
				sqlListObject.avgApplicationWaitTime = valueDataDataItemSqlListSqlListItem["AvgApplicationWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgConcurrencyWaitTime"].isNull())
				sqlListObject.avgConcurrencyWaitTime = valueDataDataItemSqlListSqlListItem["AvgConcurrencyWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgUserIoWaitTime"].isNull())
				sqlListObject.avgUserIoWaitTime = valueDataDataItemSqlListSqlListItem["AvgUserIoWaitTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgScheduleTime"].isNull())
				sqlListObject.avgScheduleTime = valueDataDataItemSqlListSqlListItem["AvgScheduleTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgRowCacheHit"].isNull())
				sqlListObject.avgRowCacheHit = valueDataDataItemSqlListSqlListItem["AvgRowCacheHit"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgBloomFilterCacheHit"].isNull())
				sqlListObject.avgBloomFilterCacheHit = valueDataDataItemSqlListSqlListItem["AvgBloomFilterCacheHit"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgBlockCacheHit"].isNull())
				sqlListObject.avgBlockCacheHit = valueDataDataItemSqlListSqlListItem["AvgBlockCacheHit"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgBlockIndexCacheHit"].isNull())
				sqlListObject.avgBlockIndexCacheHit = valueDataDataItemSqlListSqlListItem["AvgBlockIndexCacheHit"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgDiskReads"].isNull())
				sqlListObject.avgDiskReads = valueDataDataItemSqlListSqlListItem["AvgDiskReads"].asString();
			if(!valueDataDataItemSqlListSqlListItem["RetryCount"].isNull())
				sqlListObject.retryCount = std::stol(valueDataDataItemSqlListSqlListItem["RetryCount"].asString());
			if(!valueDataDataItemSqlListSqlListItem["AvgMemstoreReadRows"].isNull())
				sqlListObject.avgMemstoreReadRows = valueDataDataItemSqlListSqlListItem["AvgMemstoreReadRows"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgSsstoreReadRows"].isNull())
				sqlListObject.avgSsstoreReadRows = valueDataDataItemSqlListSqlListItem["AvgSsstoreReadRows"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgLogicalReads"].isNull())
				sqlListObject.avgLogicalReads = valueDataDataItemSqlListSqlListItem["AvgLogicalReads"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgDbTime"].isNull())
				sqlListObject.avgDbTime = valueDataDataItemSqlListSqlListItem["AvgDbTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SumDbTime"].isNull())
				sqlListObject.sumDbTime = valueDataDataItemSqlListSqlListItem["SumDbTime"].asString();
			dataObject.sqlList.push_back(sqlListObject);
		}
		auto customColumnsNode = value["CustomColumns"];
		if(!customColumnsNode["Expression"].isNull())
			dataObject.customColumns.expression = customColumnsNode["Expression"].asString();
		if(!customColumnsNode["Value"].isNull())
			dataObject.customColumns.value = customColumnsNode["Value"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeOasTopSQLListResult::DataItem> DescribeOasTopSQLListResult::getData()const
{
	return data_;
}

