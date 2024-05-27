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
	auto dataNode = value["Data"];
	if(!dataNode["TotalSessionCount"].isNull())
		data_.totalSessionCount = std::stoi(dataNode["TotalSessionCount"].asString());
	if(!dataNode["ActiveSessionCount"].isNull())
		data_.activeSessionCount = std::stoi(dataNode["ActiveSessionCount"].asString());
	if(!dataNode["IdleSessionCount"].isNull())
		data_.idleSessionCount = std::stoi(dataNode["IdleSessionCount"].asString());
	if(!dataNode["ObVersion"].isNull())
		data_.obVersion = dataNode["ObVersion"].asString();
	auto allAllProcessListNode = dataNode["AllProcessList"]["AllProcessListItem"];
	for (auto dataNodeAllProcessListAllProcessListItem : allAllProcessListNode)
	{
		Data::AllProcessListItem allProcessListItemObject;
		if(!dataNodeAllProcessListAllProcessListItem["SqlText"].isNull())
			allProcessListItemObject.sqlText = dataNodeAllProcessListAllProcessListItem["SqlText"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["TenantId"].isNull())
			allProcessListItemObject.tenantId = dataNodeAllProcessListAllProcessListItem["TenantId"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["Database"].isNull())
			allProcessListItemObject.database = dataNodeAllProcessListAllProcessListItem["Database"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["User"].isNull())
			allProcessListItemObject.user = dataNodeAllProcessListAllProcessListItem["User"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["ExecuteTime"].isNull())
			allProcessListItemObject.executeTime = std::stol(dataNodeAllProcessListAllProcessListItem["ExecuteTime"].asString());
		if(!dataNodeAllProcessListAllProcessListItem["CpuTime"].isNull())
			allProcessListItemObject.cpuTime = std::stol(dataNodeAllProcessListAllProcessListItem["CpuTime"].asString());
		if(!dataNodeAllProcessListAllProcessListItem["ServerIp"].isNull())
			allProcessListItemObject.serverIp = dataNodeAllProcessListAllProcessListItem["ServerIp"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["ClientIp"].isNull())
			allProcessListItemObject.clientIp = dataNodeAllProcessListAllProcessListItem["ClientIp"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["SessionId"].isNull())
			allProcessListItemObject.sessionId = std::stol(dataNodeAllProcessListAllProcessListItem["SessionId"].asString());
		if(!dataNodeAllProcessListAllProcessListItem["ProxySessId"].isNull())
			allProcessListItemObject.proxySessId = dataNodeAllProcessListAllProcessListItem["ProxySessId"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["Command"].isNull())
			allProcessListItemObject.command = dataNodeAllProcessListAllProcessListItem["Command"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["Status"].isNull())
			allProcessListItemObject.status = dataNodeAllProcessListAllProcessListItem["Status"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["SqlId"].isNull())
			allProcessListItemObject.sqlId = dataNodeAllProcessListAllProcessListItem["SqlId"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["TraceId"].isNull())
			allProcessListItemObject.traceId = dataNodeAllProcessListAllProcessListItem["TraceId"].asString();
		if(!dataNodeAllProcessListAllProcessListItem["PlanId"].isNull())
			allProcessListItemObject.planId = dataNodeAllProcessListAllProcessListItem["PlanId"].asString();
		data_.allProcessList.push_back(allProcessListItemObject);
	}
	auto sessionStatisticsNode = dataNode["SessionStatistics"];
	auto allUserStatisticsNode = sessionStatisticsNode["UserStatistics"]["UserStatisticsItem"];
	for (auto sessionStatisticsNodeUserStatisticsUserStatisticsItem : allUserStatisticsNode)
	{
		Data::SessionStatistics::UserStatisticsItem userStatisticsItemObject;
		if(!sessionStatisticsNodeUserStatisticsUserStatisticsItem["MetricValue"].isNull())
			userStatisticsItemObject.metricValue = sessionStatisticsNodeUserStatisticsUserStatisticsItem["MetricValue"].asString();
		if(!sessionStatisticsNodeUserStatisticsUserStatisticsItem["ActiveCount"].isNull())
			userStatisticsItemObject.activeCount = std::stol(sessionStatisticsNodeUserStatisticsUserStatisticsItem["ActiveCount"].asString());
		if(!sessionStatisticsNodeUserStatisticsUserStatisticsItem["TotalCount"].isNull())
			userStatisticsItemObject.totalCount = std::stol(sessionStatisticsNodeUserStatisticsUserStatisticsItem["TotalCount"].asString());
		if(!sessionStatisticsNodeUserStatisticsUserStatisticsItem["Type"].isNull())
			userStatisticsItemObject.type = sessionStatisticsNodeUserStatisticsUserStatisticsItem["Type"].asString();
		data_.sessionStatistics.userStatistics.push_back(userStatisticsItemObject);
	}
	auto allSourceStatisticsNode = sessionStatisticsNode["SourceStatistics"]["SourceStatisticsItem"];
	for (auto sessionStatisticsNodeSourceStatisticsSourceStatisticsItem : allSourceStatisticsNode)
	{
		Data::SessionStatistics::SourceStatisticsItem sourceStatisticsItemObject;
		if(!sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["MetricValue"].isNull())
			sourceStatisticsItemObject.metricValue = sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["MetricValue"].asString();
		if(!sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["ActiveCount"].isNull())
			sourceStatisticsItemObject.activeCount = std::stol(sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["ActiveCount"].asString());
		if(!sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["TotalCount"].isNull())
			sourceStatisticsItemObject.totalCount = std::stol(sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["TotalCount"].asString());
		if(!sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["Type"].isNull())
			sourceStatisticsItemObject.type = sessionStatisticsNodeSourceStatisticsSourceStatisticsItem["Type"].asString();
		data_.sessionStatistics.sourceStatistics.push_back(sourceStatisticsItemObject);
	}
	auto allDataBaseStatisticsNode = sessionStatisticsNode["DataBaseStatistics"]["DataBaseStatisticsItem"];
	for (auto sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem : allDataBaseStatisticsNode)
	{
		Data::SessionStatistics::DataBaseStatisticsItem dataBaseStatisticsItemObject;
		if(!sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["MetricValue"].isNull())
			dataBaseStatisticsItemObject.metricValue = sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["MetricValue"].asString();
		if(!sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["ActiveCount"].isNull())
			dataBaseStatisticsItemObject.activeCount = std::stol(sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["ActiveCount"].asString());
		if(!sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["TotalCount"].isNull())
			dataBaseStatisticsItemObject.totalCount = std::stol(sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["TotalCount"].asString());
		if(!sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["Type"].isNull())
			dataBaseStatisticsItemObject.type = sessionStatisticsNodeDataBaseStatisticsDataBaseStatisticsItem["Type"].asString();
		data_.sessionStatistics.dataBaseStatistics.push_back(dataBaseStatisticsItemObject);
	}

}

DescribeProcessStatsCompositionResult::Data DescribeProcessStatsCompositionResult::getData()const
{
	return data_;
}

