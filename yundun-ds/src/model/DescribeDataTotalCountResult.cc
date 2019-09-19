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

#include <alibabacloud/yundun-ds/model/DescribeDataTotalCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDataTotalCountResult::DescribeDataTotalCountResult() :
	ServiceResult()
{}

DescribeDataTotalCountResult::DescribeDataTotalCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataTotalCountResult::~DescribeDataTotalCountResult()
{}

void DescribeDataTotalCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataCountNode = value["DataCount"];
	auto instanceNode = dataCountNode["Instance"];
	if(!instanceNode["TotalCount"].isNull())
		dataCount_.instance.totalCount = std::stol(instanceNode["TotalCount"].asString());
	if(!instanceNode["Count"].isNull())
		dataCount_.instance.count = std::stol(instanceNode["Count"].asString());
	if(!instanceNode["SensitiveCount"].isNull())
		dataCount_.instance.sensitiveCount = std::stol(instanceNode["SensitiveCount"].asString());
	if(!instanceNode["LastCount"].isNull())
		dataCount_.instance.lastCount = std::stol(instanceNode["LastCount"].asString());
	if(!instanceNode["LastSensitiveCount"].isNull())
		dataCount_.instance.lastSensitiveCount = std::stol(instanceNode["LastSensitiveCount"].asString());
	auto allRiskCountListNode = instanceNode["RiskCountList"]["RiskCount"];
	for (auto instanceNodeRiskCountListRiskCount : allRiskCountListNode)
	{
		DataCount::Instance::RiskCount riskCountObject;
		if(!instanceNodeRiskCountListRiskCount["Id"].isNull())
			riskCountObject.id = std::stol(instanceNodeRiskCountListRiskCount["Id"].asString());
		if(!instanceNodeRiskCountListRiskCount["Name"].isNull())
			riskCountObject.name = instanceNodeRiskCountListRiskCount["Name"].asString();
		if(!instanceNodeRiskCountListRiskCount["Count"].isNull())
			riskCountObject.count = std::stol(instanceNodeRiskCountListRiskCount["Count"].asString());
		dataCount_.instance.riskCountList.push_back(riskCountObject);
	}
	auto tableNode = dataCountNode["Table"];
	if(!tableNode["TotalCount"].isNull())
		dataCount_.table.totalCount = std::stol(tableNode["TotalCount"].asString());
	if(!tableNode["Count"].isNull())
		dataCount_.table.count = std::stol(tableNode["Count"].asString());
	if(!tableNode["SensitiveCount"].isNull())
		dataCount_.table.sensitiveCount = std::stol(tableNode["SensitiveCount"].asString());
	if(!tableNode["LastCount"].isNull())
		dataCount_.table.lastCount = std::stol(tableNode["LastCount"].asString());
	if(!tableNode["LastSensitiveCount"].isNull())
		dataCount_.table.lastSensitiveCount = std::stol(tableNode["LastSensitiveCount"].asString());
	auto allRiskCountList1Node = tableNode["RiskCountList"]["RiskCount"];
	for (auto tableNodeRiskCountListRiskCount : allRiskCountList1Node)
	{
		DataCount::Table::RiskCount2 riskCount2Object;
		if(!tableNodeRiskCountListRiskCount["Id"].isNull())
			riskCount2Object.id = std::stol(tableNodeRiskCountListRiskCount["Id"].asString());
		if(!tableNodeRiskCountListRiskCount["Name"].isNull())
			riskCount2Object.name = tableNodeRiskCountListRiskCount["Name"].asString();
		if(!tableNodeRiskCountListRiskCount["Count"].isNull())
			riskCount2Object.count = std::stol(tableNodeRiskCountListRiskCount["Count"].asString());
		dataCount_.table.riskCountList1.push_back(riskCount2Object);
	}
	auto packageNode = dataCountNode["Package"];
	if(!packageNode["TotalCount"].isNull())
		dataCount_.package.totalCount = std::stol(packageNode["TotalCount"].asString());
	if(!packageNode["Count"].isNull())
		dataCount_.package.count = std::stol(packageNode["Count"].asString());
	if(!packageNode["SensitiveCount"].isNull())
		dataCount_.package.sensitiveCount = std::stol(packageNode["SensitiveCount"].asString());
	if(!packageNode["LastCount"].isNull())
		dataCount_.package.lastCount = std::stol(packageNode["LastCount"].asString());
	if(!packageNode["LastSensitiveCount"].isNull())
		dataCount_.package.lastSensitiveCount = std::stol(packageNode["LastSensitiveCount"].asString());
	auto allRiskCountList3Node = packageNode["RiskCountList"]["RiskCount"];
	for (auto packageNodeRiskCountListRiskCount : allRiskCountList3Node)
	{
		DataCount::Package::RiskCount4 riskCount4Object;
		if(!packageNodeRiskCountListRiskCount["Id"].isNull())
			riskCount4Object.id = std::stol(packageNodeRiskCountListRiskCount["Id"].asString());
		if(!packageNodeRiskCountListRiskCount["Name"].isNull())
			riskCount4Object.name = packageNodeRiskCountListRiskCount["Name"].asString();
		if(!packageNodeRiskCountListRiskCount["Count"].isNull())
			riskCount4Object.count = std::stol(packageNodeRiskCountListRiskCount["Count"].asString());
		dataCount_.package.riskCountList3.push_back(riskCount4Object);
	}
	auto columnNode = dataCountNode["Column"];
	if(!columnNode["TotalCount"].isNull())
		dataCount_.column.totalCount = std::stol(columnNode["TotalCount"].asString());
	if(!columnNode["Count"].isNull())
		dataCount_.column.count = std::stol(columnNode["Count"].asString());
	if(!columnNode["SensitiveCount"].isNull())
		dataCount_.column.sensitiveCount = std::stol(columnNode["SensitiveCount"].asString());
	if(!columnNode["LastCount"].isNull())
		dataCount_.column.lastCount = std::stol(columnNode["LastCount"].asString());
	if(!columnNode["LastSensitiveCount"].isNull())
		dataCount_.column.lastSensitiveCount = std::stol(columnNode["LastSensitiveCount"].asString());
	auto allRiskCountList5Node = columnNode["RiskCountList"]["RiskCount"];
	for (auto columnNodeRiskCountListRiskCount : allRiskCountList5Node)
	{
		DataCount::Column::RiskCount6 riskCount6Object;
		if(!columnNodeRiskCountListRiskCount["Id"].isNull())
			riskCount6Object.id = std::stol(columnNodeRiskCountListRiskCount["Id"].asString());
		if(!columnNodeRiskCountListRiskCount["Name"].isNull())
			riskCount6Object.name = columnNodeRiskCountListRiskCount["Name"].asString();
		if(!columnNodeRiskCountListRiskCount["Count"].isNull())
			riskCount6Object.count = std::stol(columnNodeRiskCountListRiskCount["Count"].asString());
		dataCount_.column.riskCountList5.push_back(riskCount6Object);
	}
	auto ossNode = dataCountNode["Oss"];
	if(!ossNode["TotalCount"].isNull())
		dataCount_.oss.totalCount = std::stol(ossNode["TotalCount"].asString());
	if(!ossNode["Count"].isNull())
		dataCount_.oss.count = std::stol(ossNode["Count"].asString());
	if(!ossNode["SensitiveCount"].isNull())
		dataCount_.oss.sensitiveCount = std::stol(ossNode["SensitiveCount"].asString());
	if(!ossNode["LastCount"].isNull())
		dataCount_.oss.lastCount = std::stol(ossNode["LastCount"].asString());
	if(!ossNode["LastSensitiveCount"].isNull())
		dataCount_.oss.lastSensitiveCount = std::stol(ossNode["LastSensitiveCount"].asString());
	auto allRiskCountList7Node = ossNode["RiskCountList"]["RiskCount"];
	for (auto ossNodeRiskCountListRiskCount : allRiskCountList7Node)
	{
		DataCount::Oss::RiskCount8 riskCount8Object;
		if(!ossNodeRiskCountListRiskCount["Id"].isNull())
			riskCount8Object.id = std::stol(ossNodeRiskCountListRiskCount["Id"].asString());
		if(!ossNodeRiskCountListRiskCount["Name"].isNull())
			riskCount8Object.name = ossNodeRiskCountListRiskCount["Name"].asString();
		if(!ossNodeRiskCountListRiskCount["Count"].isNull())
			riskCount8Object.count = std::stol(ossNodeRiskCountListRiskCount["Count"].asString());
		dataCount_.oss.riskCountList7.push_back(riskCount8Object);
	}

}

DescribeDataTotalCountResult::DataCount DescribeDataTotalCountResult::getDataCount()const
{
	return dataCount_;
}

