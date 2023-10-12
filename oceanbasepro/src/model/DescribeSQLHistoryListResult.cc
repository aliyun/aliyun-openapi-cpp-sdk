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

#include <alibabacloud/oceanbasepro/model/DescribeSQLHistoryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSQLHistoryListResult::DescribeSQLHistoryListResult() :
	ServiceResult()
{}

DescribeSQLHistoryListResult::DescribeSQLHistoryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLHistoryListResult::~DescribeSQLHistoryListResult()
{}

void DescribeSQLHistoryListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto sQLHistoryListNode = value["SQLHistoryList"];
	if(!sQLHistoryListNode["Count"].isNull())
		sQLHistoryList_.count = std::stol(sQLHistoryListNode["Count"].asString());
	auto allListNode = sQLHistoryListNode["List"]["ListItem"];
	for (auto sQLHistoryListNodeListListItem : allListNode)
	{
		SQLHistoryList::ListItem listItemObject;
		if(!sQLHistoryListNodeListListItem["ExecPerSecond"].isNull())
			listItemObject.execPerSecond = std::stol(sQLHistoryListNodeListListItem["ExecPerSecond"].asString());
		if(!sQLHistoryListNodeListListItem["MaxCpuTime"].isNull())
			listItemObject.maxCpuTime = std::stof(sQLHistoryListNodeListListItem["MaxCpuTime"].asString());
		if(!sQLHistoryListNodeListListItem["BlockCacheHit"].isNull())
			listItemObject.blockCacheHit = std::stol(sQLHistoryListNodeListListItem["BlockCacheHit"].asString());
		if(!sQLHistoryListNodeListListItem["DecodeTime"].isNull())
			listItemObject.decodeTime = std::stof(sQLHistoryListNodeListListItem["DecodeTime"].asString());
		if(!sQLHistoryListNodeListListItem["RemotePlans"].isNull())
			listItemObject.remotePlans = std::stol(sQLHistoryListNodeListListItem["RemotePlans"].asString());
		if(!sQLHistoryListNodeListListItem["RPCCount"].isNull())
			listItemObject.rPCCount = std::stol(sQLHistoryListNodeListListItem["RPCCount"].asString());
		if(!sQLHistoryListNodeListListItem["NetWaitTime"].isNull())
			listItemObject.netWaitTime = std::stof(sQLHistoryListNodeListListItem["NetWaitTime"].asString());
		if(!sQLHistoryListNodeListListItem["DiskRead"].isNull())
			listItemObject.diskRead = std::stol(sQLHistoryListNodeListListItem["DiskRead"].asString());
		if(!sQLHistoryListNodeListListItem["NodeIp"].isNull())
			listItemObject.nodeIp = sQLHistoryListNodeListListItem["NodeIp"].asString();
		if(!sQLHistoryListNodeListListItem["ConcurrencyWaitTime"].isNull())
			listItemObject.concurrencyWaitTime = std::stof(sQLHistoryListNodeListListItem["ConcurrencyWaitTime"].asString());
		if(!sQLHistoryListNodeListListItem["DbName"].isNull())
			listItemObject.dbName = sQLHistoryListNodeListListItem["DbName"].asString();
		if(!sQLHistoryListNodeListListItem["MemstoreReadRowCount"].isNull())
			listItemObject.memstoreReadRowCount = std::stol(sQLHistoryListNodeListListItem["MemstoreReadRowCount"].asString());
		if(!sQLHistoryListNodeListListItem["AppWaitTime"].isNull())
			listItemObject.appWaitTime = std::stof(sQLHistoryListNodeListListItem["AppWaitTime"].asString());
		if(!sQLHistoryListNodeListListItem["ElapsedTime"].isNull())
			listItemObject.elapsedTime = std::stof(sQLHistoryListNodeListListItem["ElapsedTime"].asString());
		if(!sQLHistoryListNodeListListItem["MissPlans"].isNull())
			listItemObject.missPlans = std::stol(sQLHistoryListNodeListListItem["MissPlans"].asString());
		if(!sQLHistoryListNodeListListItem["AffectedRows"].isNull())
			listItemObject.affectedRows = std::stol(sQLHistoryListNodeListListItem["AffectedRows"].asString());
		if(!sQLHistoryListNodeListListItem["ScheduleTime"].isNull())
			listItemObject.scheduleTime = std::stof(sQLHistoryListNodeListListItem["ScheduleTime"].asString());
		if(!sQLHistoryListNodeListListItem["Event"].isNull())
			listItemObject.event = sQLHistoryListNodeListListItem["Event"].asString();
		if(!sQLHistoryListNodeListListItem["TotalWaitTime"].isNull())
			listItemObject.totalWaitTime = std::stof(sQLHistoryListNodeListListItem["TotalWaitTime"].asString());
		if(!sQLHistoryListNodeListListItem["ReturnRows"].isNull())
			listItemObject.returnRows = std::stol(sQLHistoryListNodeListListItem["ReturnRows"].asString());
		if(!sQLHistoryListNodeListListItem["ExecuteTime"].isNull())
			listItemObject.executeTime = std::stof(sQLHistoryListNodeListListItem["ExecuteTime"].asString());
		if(!sQLHistoryListNodeListListItem["UserName"].isNull())
			listItemObject.userName = sQLHistoryListNodeListListItem["UserName"].asString();
		if(!sQLHistoryListNodeListListItem["Executions"].isNull())
			listItemObject.executions = std::stol(sQLHistoryListNodeListListItem["Executions"].asString());
		if(!sQLHistoryListNodeListListItem["GetPlanTime"].isNull())
			listItemObject.getPlanTime = std::stof(sQLHistoryListNodeListListItem["GetPlanTime"].asString());
		if(!sQLHistoryListNodeListListItem["CpuTime"].isNull())
			listItemObject.cpuTime = std::stof(sQLHistoryListNodeListListItem["CpuTime"].asString());
		if(!sQLHistoryListNodeListListItem["MaxElapsedTime"].isNull())
			listItemObject.maxElapsedTime = std::stof(sQLHistoryListNodeListListItem["MaxElapsedTime"].asString());
		if(!sQLHistoryListNodeListListItem["BlockIndexCacheHit"].isNull())
			listItemObject.blockIndexCacheHit = std::stol(sQLHistoryListNodeListListItem["BlockIndexCacheHit"].asString());
		if(!sQLHistoryListNodeListListItem["EndTimeUTCString"].isNull())
			listItemObject.endTimeUTCString = sQLHistoryListNodeListListItem["EndTimeUTCString"].asString();
		if(!sQLHistoryListNodeListListItem["EndTime"].isNull())
			listItemObject.endTime = std::stol(sQLHistoryListNodeListListItem["EndTime"].asString());
		if(!sQLHistoryListNodeListListItem["RetryCount"].isNull())
			listItemObject.retryCount = std::stol(sQLHistoryListNodeListListItem["RetryCount"].asString());
		if(!sQLHistoryListNodeListListItem["ClientIp"].isNull())
			listItemObject.clientIp = sQLHistoryListNodeListListItem["ClientIp"].asString();
		if(!sQLHistoryListNodeListListItem["BloomFilterCacheHit"].isNull())
			listItemObject.bloomFilterCacheHit = std::stol(sQLHistoryListNodeListListItem["BloomFilterCacheHit"].asString());
		if(!sQLHistoryListNodeListListItem["IOWaitTime"].isNull())
			listItemObject.iOWaitTime = std::stof(sQLHistoryListNodeListListItem["IOWaitTime"].asString());
		if(!sQLHistoryListNodeListListItem["FailTimes"].isNull())
			listItemObject.failTimes = std::stol(sQLHistoryListNodeListListItem["FailTimes"].asString());
		if(!sQLHistoryListNodeListListItem["QueueTime"].isNull())
			listItemObject.queueTime = std::stof(sQLHistoryListNodeListListItem["QueueTime"].asString());
		if(!sQLHistoryListNodeListListItem["RowCacheHit"].isNull())
			listItemObject.rowCacheHit = std::stol(sQLHistoryListNodeListListItem["RowCacheHit"].asString());
		if(!sQLHistoryListNodeListListItem["LogicalRead"].isNull())
			listItemObject.logicalRead = std::stol(sQLHistoryListNodeListListItem["LogicalRead"].asString());
		if(!sQLHistoryListNodeListListItem["SsstoreReadRowCount"].isNull())
			listItemObject.ssstoreReadRowCount = std::stol(sQLHistoryListNodeListListItem["SsstoreReadRowCount"].asString());
		sQLHistoryList_.list.push_back(listItemObject);
	}

}

DescribeSQLHistoryListResult::SQLHistoryList DescribeSQLHistoryListResult::getSQLHistoryList()const
{
	return sQLHistoryList_;
}

