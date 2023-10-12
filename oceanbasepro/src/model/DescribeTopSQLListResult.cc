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

#include <alibabacloud/oceanbasepro/model/DescribeTopSQLListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTopSQLListResult::DescribeTopSQLListResult() :
	ServiceResult()
{}

DescribeTopSQLListResult::DescribeTopSQLListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTopSQLListResult::~DescribeTopSQLListResult()
{}

void DescribeTopSQLListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopSQLListNode = value["TopSQLList"]["Data"];
	for (auto valueTopSQLListData : allTopSQLListNode)
	{
		Data topSQLListObject;
		if(!valueTopSQLListData["Key"].isNull())
			topSQLListObject.key = std::stol(valueTopSQLListData["Key"].asString());
		if(!valueTopSQLListData["ExecPerSecond"].isNull())
			topSQLListObject.execPerSecond = std::stof(valueTopSQLListData["ExecPerSecond"].asString());
		if(!valueTopSQLListData["SQLText"].isNull())
			topSQLListObject.sQLText = valueTopSQLListData["SQLText"].asString();
		if(!valueTopSQLListData["MaxCpuTime"].isNull())
			topSQLListObject.maxCpuTime = std::stof(valueTopSQLListData["MaxCpuTime"].asString());
		if(!valueTopSQLListData["BlockCacheHit"].isNull())
			topSQLListObject.blockCacheHit = std::stol(valueTopSQLListData["BlockCacheHit"].asString());
		if(!valueTopSQLListData["DecodeTime"].isNull())
			topSQLListObject.decodeTime = std::stof(valueTopSQLListData["DecodeTime"].asString());
		if(!valueTopSQLListData["RemotePlans"].isNull())
			topSQLListObject.remotePlans = std::stol(valueTopSQLListData["RemotePlans"].asString());
		if(!valueTopSQLListData["RPCCount"].isNull())
			topSQLListObject.rPCCount = std::stol(valueTopSQLListData["RPCCount"].asString());
		if(!valueTopSQLListData["NetWaitTime"].isNull())
			topSQLListObject.netWaitTime = std::stof(valueTopSQLListData["NetWaitTime"].asString());
		if(!valueTopSQLListData["DiskRead"].isNull())
			topSQLListObject.diskRead = std::stol(valueTopSQLListData["DiskRead"].asString());
		if(!valueTopSQLListData["NodeIp"].isNull())
			topSQLListObject.nodeIp = valueTopSQLListData["NodeIp"].asString();
		if(!valueTopSQLListData["ConcurrencyWaitTime"].isNull())
			topSQLListObject.concurrencyWaitTime = std::stof(valueTopSQLListData["ConcurrencyWaitTime"].asString());
		if(!valueTopSQLListData["MemstoreReadRowCount"].isNull())
			topSQLListObject.memstoreReadRowCount = std::stol(valueTopSQLListData["MemstoreReadRowCount"].asString());
		if(!valueTopSQLListData["DbName"].isNull())
			topSQLListObject.dbName = valueTopSQLListData["DbName"].asString();
		if(!valueTopSQLListData["AppWaitTime"].isNull())
			topSQLListObject.appWaitTime = std::stof(valueTopSQLListData["AppWaitTime"].asString());
		if(!valueTopSQLListData["ElapsedTime"].isNull())
			topSQLListObject.elapsedTime = std::stof(valueTopSQLListData["ElapsedTime"].asString());
		if(!valueTopSQLListData["MissPlans"].isNull())
			topSQLListObject.missPlans = std::stol(valueTopSQLListData["MissPlans"].asString());
		if(!valueTopSQLListData["AffectedRows"].isNull())
			topSQLListObject.affectedRows = std::stol(valueTopSQLListData["AffectedRows"].asString());
		if(!valueTopSQLListData["ScheduleTime"].isNull())
			topSQLListObject.scheduleTime = std::stof(valueTopSQLListData["ScheduleTime"].asString());
		if(!valueTopSQLListData["Event"].isNull())
			topSQLListObject.event = valueTopSQLListData["Event"].asString();
		if(!valueTopSQLListData["TotalWaitTime"].isNull())
			topSQLListObject.totalWaitTime = std::stof(valueTopSQLListData["TotalWaitTime"].asString());
		if(!valueTopSQLListData["ReturnRows"].isNull())
			topSQLListObject.returnRows = std::stol(valueTopSQLListData["ReturnRows"].asString());
		if(!valueTopSQLListData["ExecuteTime"].isNull())
			topSQLListObject.executeTime = std::stof(valueTopSQLListData["ExecuteTime"].asString());
		if(!valueTopSQLListData["UserName"].isNull())
			topSQLListObject.userName = valueTopSQLListData["UserName"].asString();
		if(!valueTopSQLListData["Executions"].isNull())
			topSQLListObject.executions = std::stol(valueTopSQLListData["Executions"].asString());
		if(!valueTopSQLListData["GetPlanTime"].isNull())
			topSQLListObject.getPlanTime = std::stof(valueTopSQLListData["GetPlanTime"].asString());
		if(!valueTopSQLListData["CpuTime"].isNull())
			topSQLListObject.cpuTime = std::stof(valueTopSQLListData["CpuTime"].asString());
		if(!valueTopSQLListData["MaxElapsedTime"].isNull())
			topSQLListObject.maxElapsedTime = std::stof(valueTopSQLListData["MaxElapsedTime"].asString());
		if(!valueTopSQLListData["SQLType"].isNull())
			topSQLListObject.sQLType = std::stol(valueTopSQLListData["SQLType"].asString());
		if(!valueTopSQLListData["BlockIndexCacheHit"].isNull())
			topSQLListObject.blockIndexCacheHit = std::stol(valueTopSQLListData["BlockIndexCacheHit"].asString());
		if(!valueTopSQLListData["RetryCount"].isNull())
			topSQLListObject.retryCount = std::stol(valueTopSQLListData["RetryCount"].asString());
		if(!valueTopSQLListData["SQLId"].isNull())
			topSQLListObject.sQLId = valueTopSQLListData["SQLId"].asString();
		if(!valueTopSQLListData["ClientIp"].isNull())
			topSQLListObject.clientIp = valueTopSQLListData["ClientIp"].asString();
		if(!valueTopSQLListData["BloomFilterCacheHit"].isNull())
			topSQLListObject.bloomFilterCacheHit = std::stol(valueTopSQLListData["BloomFilterCacheHit"].asString());
		if(!valueTopSQLListData["IOWaitTime"].isNull())
			topSQLListObject.iOWaitTime = std::stof(valueTopSQLListData["IOWaitTime"].asString());
		if(!valueTopSQLListData["FailTimes"].isNull())
			topSQLListObject.failTimes = std::stol(valueTopSQLListData["FailTimes"].asString());
		if(!valueTopSQLListData["QueueTime"].isNull())
			topSQLListObject.queueTime = std::stof(valueTopSQLListData["QueueTime"].asString());
		if(!valueTopSQLListData["RowCacheHit"].isNull())
			topSQLListObject.rowCacheHit = std::stol(valueTopSQLListData["RowCacheHit"].asString());
		if(!valueTopSQLListData["LogicalRead"].isNull())
			topSQLListObject.logicalRead = std::stol(valueTopSQLListData["LogicalRead"].asString());
		if(!valueTopSQLListData["SsstoreReadRowCount"].isNull())
			topSQLListObject.ssstoreReadRowCount = std::stol(valueTopSQLListData["SsstoreReadRowCount"].asString());
		topSQLList_.push_back(topSQLListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeTopSQLListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTopSQLListResult::Data> DescribeTopSQLListResult::getTopSQLList()const
{
	return topSQLList_;
}

