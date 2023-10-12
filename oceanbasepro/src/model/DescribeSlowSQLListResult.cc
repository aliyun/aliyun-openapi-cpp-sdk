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

#include <alibabacloud/oceanbasepro/model/DescribeSlowSQLListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSlowSQLListResult::DescribeSlowSQLListResult() :
	ServiceResult()
{}

DescribeSlowSQLListResult::DescribeSlowSQLListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlowSQLListResult::~DescribeSlowSQLListResult()
{}

void DescribeSlowSQLListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlowSQLListNode = value["SlowSQLList"]["Data"];
	for (auto valueSlowSQLListData : allSlowSQLListNode)
	{
		Data slowSQLListObject;
		if(!valueSlowSQLListData["Key"].isNull())
			slowSQLListObject.key = std::stol(valueSlowSQLListData["Key"].asString());
		if(!valueSlowSQLListData["ExecPerSecond"].isNull())
			slowSQLListObject.execPerSecond = std::stof(valueSlowSQLListData["ExecPerSecond"].asString());
		if(!valueSlowSQLListData["SQLText"].isNull())
			slowSQLListObject.sQLText = valueSlowSQLListData["SQLText"].asString();
		if(!valueSlowSQLListData["MaxCpuTime"].isNull())
			slowSQLListObject.maxCpuTime = std::stof(valueSlowSQLListData["MaxCpuTime"].asString());
		if(!valueSlowSQLListData["BlockCacheHit"].isNull())
			slowSQLListObject.blockCacheHit = std::stol(valueSlowSQLListData["BlockCacheHit"].asString());
		if(!valueSlowSQLListData["DecodeTime"].isNull())
			slowSQLListObject.decodeTime = std::stof(valueSlowSQLListData["DecodeTime"].asString());
		if(!valueSlowSQLListData["RemotePlans"].isNull())
			slowSQLListObject.remotePlans = std::stol(valueSlowSQLListData["RemotePlans"].asString());
		if(!valueSlowSQLListData["RPCCount"].isNull())
			slowSQLListObject.rPCCount = std::stol(valueSlowSQLListData["RPCCount"].asString());
		if(!valueSlowSQLListData["NetWaitTime"].isNull())
			slowSQLListObject.netWaitTime = std::stof(valueSlowSQLListData["NetWaitTime"].asString());
		if(!valueSlowSQLListData["DiskRead"].isNull())
			slowSQLListObject.diskRead = std::stol(valueSlowSQLListData["DiskRead"].asString());
		if(!valueSlowSQLListData["NodeIp"].isNull())
			slowSQLListObject.nodeIp = valueSlowSQLListData["NodeIp"].asString();
		if(!valueSlowSQLListData["ConcurrencyWaitTime"].isNull())
			slowSQLListObject.concurrencyWaitTime = std::stof(valueSlowSQLListData["ConcurrencyWaitTime"].asString());
		if(!valueSlowSQLListData["MemstoreReadRowCount"].isNull())
			slowSQLListObject.memstoreReadRowCount = std::stol(valueSlowSQLListData["MemstoreReadRowCount"].asString());
		if(!valueSlowSQLListData["DbName"].isNull())
			slowSQLListObject.dbName = valueSlowSQLListData["DbName"].asString();
		if(!valueSlowSQLListData["AppWaitTime"].isNull())
			slowSQLListObject.appWaitTime = std::stof(valueSlowSQLListData["AppWaitTime"].asString());
		if(!valueSlowSQLListData["ElapsedTime"].isNull())
			slowSQLListObject.elapsedTime = std::stof(valueSlowSQLListData["ElapsedTime"].asString());
		if(!valueSlowSQLListData["MissPlans"].isNull())
			slowSQLListObject.missPlans = std::stol(valueSlowSQLListData["MissPlans"].asString());
		if(!valueSlowSQLListData["AffectedRows"].isNull())
			slowSQLListObject.affectedRows = std::stol(valueSlowSQLListData["AffectedRows"].asString());
		if(!valueSlowSQLListData["ScheduleTime"].isNull())
			slowSQLListObject.scheduleTime = std::stof(valueSlowSQLListData["ScheduleTime"].asString());
		if(!valueSlowSQLListData["Event"].isNull())
			slowSQLListObject.event = valueSlowSQLListData["Event"].asString();
		if(!valueSlowSQLListData["TotalWaitTime"].isNull())
			slowSQLListObject.totalWaitTime = std::stof(valueSlowSQLListData["TotalWaitTime"].asString());
		if(!valueSlowSQLListData["ReturnRows"].isNull())
			slowSQLListObject.returnRows = std::stol(valueSlowSQLListData["ReturnRows"].asString());
		if(!valueSlowSQLListData["ExecuteTime"].isNull())
			slowSQLListObject.executeTime = std::stof(valueSlowSQLListData["ExecuteTime"].asString());
		if(!valueSlowSQLListData["UserName"].isNull())
			slowSQLListObject.userName = valueSlowSQLListData["UserName"].asString();
		if(!valueSlowSQLListData["Executions"].isNull())
			slowSQLListObject.executions = std::stol(valueSlowSQLListData["Executions"].asString());
		if(!valueSlowSQLListData["GetPlanTime"].isNull())
			slowSQLListObject.getPlanTime = std::stof(valueSlowSQLListData["GetPlanTime"].asString());
		if(!valueSlowSQLListData["CpuTime"].isNull())
			slowSQLListObject.cpuTime = std::stof(valueSlowSQLListData["CpuTime"].asString());
		if(!valueSlowSQLListData["MaxElapsedTime"].isNull())
			slowSQLListObject.maxElapsedTime = std::stof(valueSlowSQLListData["MaxElapsedTime"].asString());
		if(!valueSlowSQLListData["SQLType"].isNull())
			slowSQLListObject.sQLType = std::stol(valueSlowSQLListData["SQLType"].asString());
		if(!valueSlowSQLListData["BlockIndexCacheHit"].isNull())
			slowSQLListObject.blockIndexCacheHit = std::stol(valueSlowSQLListData["BlockIndexCacheHit"].asString());
		if(!valueSlowSQLListData["RetryCount"].isNull())
			slowSQLListObject.retryCount = std::stol(valueSlowSQLListData["RetryCount"].asString());
		if(!valueSlowSQLListData["SQLId"].isNull())
			slowSQLListObject.sQLId = valueSlowSQLListData["SQLId"].asString();
		if(!valueSlowSQLListData["ClientIp"].isNull())
			slowSQLListObject.clientIp = valueSlowSQLListData["ClientIp"].asString();
		if(!valueSlowSQLListData["BloomFilterCacheHit"].isNull())
			slowSQLListObject.bloomFilterCacheHit = std::stol(valueSlowSQLListData["BloomFilterCacheHit"].asString());
		if(!valueSlowSQLListData["IOWaitTime"].isNull())
			slowSQLListObject.iOWaitTime = std::stof(valueSlowSQLListData["IOWaitTime"].asString());
		if(!valueSlowSQLListData["FailTimes"].isNull())
			slowSQLListObject.failTimes = std::stol(valueSlowSQLListData["FailTimes"].asString());
		if(!valueSlowSQLListData["QueueTime"].isNull())
			slowSQLListObject.queueTime = std::stof(valueSlowSQLListData["QueueTime"].asString());
		if(!valueSlowSQLListData["RowCacheHit"].isNull())
			slowSQLListObject.rowCacheHit = std::stol(valueSlowSQLListData["RowCacheHit"].asString());
		if(!valueSlowSQLListData["LogicalRead"].isNull())
			slowSQLListObject.logicalRead = std::stol(valueSlowSQLListData["LogicalRead"].asString());
		if(!valueSlowSQLListData["SsstoreReadRowCount"].isNull())
			slowSQLListObject.ssstoreReadRowCount = std::stol(valueSlowSQLListData["SsstoreReadRowCount"].asString());
		slowSQLList_.push_back(slowSQLListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeSlowSQLListResult::Data> DescribeSlowSQLListResult::getSlowSQLList()const
{
	return slowSQLList_;
}

long DescribeSlowSQLListResult::getTotalCount()const
{
	return totalCount_;
}

