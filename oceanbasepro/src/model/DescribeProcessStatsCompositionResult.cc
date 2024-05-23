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

#include <alibabacloud/oceanbasepro/model/DescribeProcessStatsCompositionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeProcessStatsCompositionResult::DescribeProcessStatsCompositionResult() :
	ServiceResult()
{}

DescribeProcessStatsCompositionResult::DescribeProcessStatsCompositionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProcessStatsCompositionResult::~DescribeProcessStatsCompositionResult()
{}

void DescribeProcessStatsCompositionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["TotalSessionCount"].isNull())
			dataObject.totalSessionCount = std::stoi(valueDataDataItem["TotalSessionCount"].asString());
		if(!valueDataDataItem["ActiveSessionCount"].isNull())
			dataObject.activeSessionCount = std::stoi(valueDataDataItem["ActiveSessionCount"].asString());
		if(!valueDataDataItem["IdleSessionCount"].isNull())
			dataObject.idleSessionCount = std::stoi(valueDataDataItem["IdleSessionCount"].asString());
		if(!valueDataDataItem["ObVersion"].isNull())
			dataObject.obVersion = valueDataDataItem["ObVersion"].asString();
		auto allAllProcessListNode = valueDataDataItem["AllProcessList"]["AllProcessListItem"];
		for (auto valueDataDataItemAllProcessListAllProcessListItem : allAllProcessListNode)
		{
			DataItem::AllProcessListItem allProcessListObject;
			if(!valueDataDataItemAllProcessListAllProcessListItem["SqlText"].isNull())
				allProcessListObject.sqlText = valueDataDataItemAllProcessListAllProcessListItem["SqlText"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["TenantId"].isNull())
				allProcessListObject.tenantId = valueDataDataItemAllProcessListAllProcessListItem["TenantId"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["Database"].isNull())
				allProcessListObject.database = valueDataDataItemAllProcessListAllProcessListItem["Database"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["User"].isNull())
				allProcessListObject.user = valueDataDataItemAllProcessListAllProcessListItem["User"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["ExecuteTime"].isNull())
				allProcessListObject.executeTime = std::stol(valueDataDataItemAllProcessListAllProcessListItem["ExecuteTime"].asString());
			if(!valueDataDataItemAllProcessListAllProcessListItem["CpuTime"].isNull())
				allProcessListObject.cpuTime = std::stol(valueDataDataItemAllProcessListAllProcessListItem["CpuTime"].asString());
			if(!valueDataDataItemAllProcessListAllProcessListItem["ServerIp"].isNull())
				allProcessListObject.serverIp = valueDataDataItemAllProcessListAllProcessListItem["ServerIp"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["ClientIp"].isNull())
				allProcessListObject.clientIp = valueDataDataItemAllProcessListAllProcessListItem["ClientIp"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["SessionId"].isNull())
				allProcessListObject.sessionId = std::stol(valueDataDataItemAllProcessListAllProcessListItem["SessionId"].asString());
			if(!valueDataDataItemAllProcessListAllProcessListItem["ProxySessId"].isNull())
				allProcessListObject.proxySessId = valueDataDataItemAllProcessListAllProcessListItem["ProxySessId"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["Command"].isNull())
				allProcessListObject.command = valueDataDataItemAllProcessListAllProcessListItem["Command"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["Status"].isNull())
				allProcessListObject.status = valueDataDataItemAllProcessListAllProcessListItem["Status"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["SqlId"].isNull())
				allProcessListObject.sqlId = valueDataDataItemAllProcessListAllProcessListItem["SqlId"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["TraceId"].isNull())
				allProcessListObject.traceId = valueDataDataItemAllProcessListAllProcessListItem["TraceId"].asString();
			if(!valueDataDataItemAllProcessListAllProcessListItem["PlanId"].isNull())
				allProcessListObject.planId = valueDataDataItemAllProcessListAllProcessListItem["PlanId"].asString();
			dataObject.allProcessList.push_back(allProcessListObject);
		}
		auto sessionStatisticsNode = value["SessionStatistics"];
		auto allUserStatisticsNode = sessionStatisticsNode["UserStatistics"]["UserStatisticsItem"];
		for (auto sessionStatisticsNodeUserStatisticsUserStatisticsItem : allUserStatisticsNode)
		{
			DataItem::SessionStatistics::UserStatisticsItem userStatisticsItemObject;
			if(!sessionStatisticsNodeUserStatisticsUserStatisticsItem["MetricValue"].isNull())
				userStatisticsItemObject.metricValue = sessionStatisticsNodeUserStatisticsUserStatisticsItem["MetricValue"].asString();
			if(!sessionStatisticsNodeUserStatisticsUserStatisticsItem["ActiveCount"].isNull())
				userStatisticsItemObject.activeCount = std::stol(sessionStatisticsNodeUserStatisticsUserStatisticsItem["ActiveCount"].asString());
			if(!sessionStatisticsNodeUserStatisticsUserStatisticsItem["TotalCount"].isNull())
				userStatisticsItemObject.totalCount = std::stol(sessionStatisticsNodeUserStatisticsUserStatisticsItem["TotalCount"].asString());
			if(!sessionStatisticsNodeUserStatisticsUserStatisticsItem["Type"].isNull())
				userStatisticsItemObject.type = sessionStatisticsNodeUserStatisticsUserStatisticsItem["Type"].asString();
			dataObject.sessionStatistics.userStatistics.push_back(userStatisticsItemObject);
		}
		auto allSourceStatisticsNode = sessionStatisticsNode["SourceStatistics"]["SourceStatisticsItem"];
		for (auto sessionStatisticsNodeSourceStatisticsSourceStatisticsItem : allSourceStatisticsNode)
		{
			DataItem::SessionStatistics::SourceStatisticsItem sourceStatisticsItemObject;
			if(!sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["MetricValue"].isNull())
				sourceStatisticsItemObject.metricValue = sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["MetricValue"].asString();
			if(!sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["ActiveCount"].isNull())
				sourceStatisticsItemObject.activeCount = std::stol(sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["ActiveCount"].asString());
			if(!sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["TotalCount"].isNull())
				sourceStatisticsItemObject.totalCount = std::stol(sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["TotalCount"].asString());
			if(!sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["Type"].isNull())
				sourceStatisticsItemObject.type = sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["Type"].asString();
			dataObject.sessionStatistics.sourceStatistics.push_back(sourceStatisticsItemObject);
		}
		auto allDataBaseStatisticsNode = sessionStatisticsNode["DataBaseStatistics"]["DataBaseStatisticsItem"];
		for (auto sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem : allDataBaseStatisticsNode)
		{
			DataItem::SessionStatistics::DataBaseStatisticsItem dataBaseStatisticsItemObject;
			if(!sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["MetricValue"].isNull())
				dataBaseStatisticsItemObject.metricValue = sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["MetricValue"].asString();
			if(!sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["ActiveCount"].isNull())
				dataBaseStatisticsItemObject.activeCount = std::stol(sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["ActiveCount"].asString());
			if(!sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["TotalCount"].isNull())
				dataBaseStatisticsItemObject.totalCount = std::stol(sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["TotalCount"].asString());
			if(!sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["Type"].isNull())
				dataBaseStatisticsItemObject.type = sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["Type"].asString();
			dataObject.sessionStatistics.dataBaseStatistics.push_back(dataBaseStatisticsItemObject);
		}
		data_.push_back(dataObject);
	}

}

std::vector<DescribeProcessStatsCompositionResult::DataItem> DescribeProcessStatsCompositionResult::getData()const
{
	return data_;
}

