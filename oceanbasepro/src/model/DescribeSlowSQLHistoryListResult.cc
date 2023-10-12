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

#include <alibabacloud/oceanbasepro/model/DescribeSlowSQLHistoryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSlowSQLHistoryListResult::DescribeSlowSQLHistoryListResult() :
	ServiceResult()
{}

DescribeSlowSQLHistoryListResult::DescribeSlowSQLHistoryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlowSQLHistoryListResult::~DescribeSlowSQLHistoryListResult()
{}

void DescribeSlowSQLHistoryListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto slowSQLHistoryListNode = value["SlowSQLHistoryList"];
	if(!slowSQLHistoryListNode["Count"].isNull())
		slowSQLHistoryList_.count = std::stol(slowSQLHistoryListNode["Count"].asString());
	auto allListNode = slowSQLHistoryListNode["List"]["ListItem"];
	for (auto slowSQLHistoryListNodeListListItem : allListNode)
	{
		SlowSQLHistoryList::ListItem listItemObject;
		if(!slowSQLHistoryListNodeListListItem["SqlId"].isNull())
			listItemObject.sqlId = slowSQLHistoryListNodeListListItem["SqlId"].asString();
		if(!slowSQLHistoryListNodeListListItem["SqlType"].isNull())
			listItemObject.sqlType = slowSQLHistoryListNodeListListItem["SqlType"].asString();
		if(!slowSQLHistoryListNodeListListItem["TenantName"].isNull())
			listItemObject.tenantName = slowSQLHistoryListNodeListListItem["TenantName"].asString();
		if(!slowSQLHistoryListNodeListListItem["UserName"].isNull())
			listItemObject.userName = slowSQLHistoryListNodeListListItem["UserName"].asString();
		if(!slowSQLHistoryListNodeListListItem["ClientIp"].isNull())
			listItemObject.clientIp = slowSQLHistoryListNodeListListItem["ClientIp"].asString();
		if(!slowSQLHistoryListNodeListListItem["DbName"].isNull())
			listItemObject.dbName = slowSQLHistoryListNodeListListItem["DbName"].asString();
		if(!slowSQLHistoryListNodeListListItem["Event"].isNull())
			listItemObject.event = slowSQLHistoryListNodeListListItem["Event"].asString();
		if(!slowSQLHistoryListNodeListListItem["NodeIp"].isNull())
			listItemObject.nodeIp = slowSQLHistoryListNodeListListItem["NodeIp"].asString();
		if(!slowSQLHistoryListNodeListListItem["AffectedRows"].isNull())
			listItemObject.affectedRows = slowSQLHistoryListNodeListListItem["AffectedRows"].asString();
		if(!slowSQLHistoryListNodeListListItem["BlockCacheHit"].isNull())
			listItemObject.blockCacheHit = slowSQLHistoryListNodeListListItem["BlockCacheHit"].asString();
		if(!slowSQLHistoryListNodeListListItem["BlockIndexCacheHit"].isNull())
			listItemObject.blockIndexCacheHit = slowSQLHistoryListNodeListListItem["BlockIndexCacheHit"].asString();
		if(!slowSQLHistoryListNodeListListItem["BloomFilterCacheHit"].isNull())
			listItemObject.bloomFilterCacheHit = slowSQLHistoryListNodeListListItem["BloomFilterCacheHit"].asString();
		if(!slowSQLHistoryListNodeListListItem["Executions"].isNull())
			listItemObject.executions = slowSQLHistoryListNodeListListItem["Executions"].asString();
		if(!slowSQLHistoryListNodeListListItem["FailTimes"].isNull())
			listItemObject.failTimes = slowSQLHistoryListNodeListListItem["FailTimes"].asString();
		if(!slowSQLHistoryListNodeListListItem["RPCCount"].isNull())
			listItemObject.rPCCount = slowSQLHistoryListNodeListListItem["RPCCount"].asString();
		if(!slowSQLHistoryListNodeListListItem["RemotePlans"].isNull())
			listItemObject.remotePlans = slowSQLHistoryListNodeListListItem["RemotePlans"].asString();
		if(!slowSQLHistoryListNodeListListItem["MissPlans"].isNull())
			listItemObject.missPlans = slowSQLHistoryListNodeListListItem["MissPlans"].asString();
		if(!slowSQLHistoryListNodeListListItem["ReturnRows"].isNull())
			listItemObject.returnRows = slowSQLHistoryListNodeListListItem["ReturnRows"].asString();
		if(!slowSQLHistoryListNodeListListItem["LogicalRead"].isNull())
			listItemObject.logicalRead = slowSQLHistoryListNodeListListItem["LogicalRead"].asString();
		if(!slowSQLHistoryListNodeListListItem["RetryCount"].isNull())
			listItemObject.retryCount = slowSQLHistoryListNodeListListItem["RetryCount"].asString();
		if(!slowSQLHistoryListNodeListListItem["RowCacheHit"].isNull())
			listItemObject.rowCacheHit = slowSQLHistoryListNodeListListItem["RowCacheHit"].asString();
		if(!slowSQLHistoryListNodeListListItem["DiskRead"].isNull())
			listItemObject.diskRead = slowSQLHistoryListNodeListListItem["DiskRead"].asString();
		if(!slowSQLHistoryListNodeListListItem["MemstoreReadRowCount"].isNull())
			listItemObject.memstoreReadRowCount = slowSQLHistoryListNodeListListItem["MemstoreReadRowCount"].asString();
		if(!slowSQLHistoryListNodeListListItem["SsstoreReadRowCount"].isNull())
			listItemObject.ssstoreReadRowCount = slowSQLHistoryListNodeListListItem["SsstoreReadRowCount"].asString();
		if(!slowSQLHistoryListNodeListListItem["ExecPerSecond"].isNull())
			listItemObject.execPerSecond = slowSQLHistoryListNodeListListItem["ExecPerSecond"].asString();
		if(!slowSQLHistoryListNodeListListItem["AppWaitTime"].isNull())
			listItemObject.appWaitTime = slowSQLHistoryListNodeListListItem["AppWaitTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["ElapsedTime"].isNull())
			listItemObject.elapsedTime = slowSQLHistoryListNodeListListItem["ElapsedTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["ExecuteTime"].isNull())
			listItemObject.executeTime = slowSQLHistoryListNodeListListItem["ExecuteTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["QueueTime"].isNull())
			listItemObject.queueTime = slowSQLHistoryListNodeListListItem["QueueTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["ConcurrencyWaitTime"].isNull())
			listItemObject.concurrencyWaitTime = slowSQLHistoryListNodeListListItem["ConcurrencyWaitTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["CpuTime"].isNull())
			listItemObject.cpuTime = slowSQLHistoryListNodeListListItem["CpuTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["DecodeTime"].isNull())
			listItemObject.decodeTime = slowSQLHistoryListNodeListListItem["DecodeTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["NetWaitTime"].isNull())
			listItemObject.netWaitTime = slowSQLHistoryListNodeListListItem["NetWaitTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["IOWaitTime"].isNull())
			listItemObject.iOWaitTime = slowSQLHistoryListNodeListListItem["IOWaitTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["GetPlanTime"].isNull())
			listItemObject.getPlanTime = slowSQLHistoryListNodeListListItem["GetPlanTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["MaxElapsedTime"].isNull())
			listItemObject.maxElapsedTime = slowSQLHistoryListNodeListListItem["MaxElapsedTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["TotalWaitTime"].isNull())
			listItemObject.totalWaitTime = slowSQLHistoryListNodeListListItem["TotalWaitTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["ScheduleTime"].isNull())
			listItemObject.scheduleTime = slowSQLHistoryListNodeListListItem["ScheduleTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["MaxCpuTime"].isNull())
			listItemObject.maxCpuTime = slowSQLHistoryListNodeListListItem["MaxCpuTime"].asString();
		if(!slowSQLHistoryListNodeListListItem["EndTimeUTCString"].isNull())
			listItemObject.endTimeUTCString = slowSQLHistoryListNodeListListItem["EndTimeUTCString"].asString();
		slowSQLHistoryList_.list.push_back(listItemObject);
	}

}

DescribeSlowSQLHistoryListResult::SlowSQLHistoryList DescribeSlowSQLHistoryListResult::getSlowSQLHistoryList()const
{
	return slowSQLHistoryList_;
}

