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

#include <alibabacloud/sas/model/DescribeRiskCheckSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeRiskCheckSummaryResult::DescribeRiskCheckSummaryResult() :
	ServiceResult()
{}

DescribeRiskCheckSummaryResult::DescribeRiskCheckSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskCheckSummaryResult::~DescribeRiskCheckSummaryResult()
{}

void DescribeRiskCheckSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto riskCheckSummaryNode = value["RiskCheckSummary"];
	if(!riskCheckSummaryNode["ItemCount"].isNull())
		riskCheckSummary_.itemCount = std::stoi(riskCheckSummaryNode["ItemCount"].asString());
	if(!riskCheckSummaryNode["AffectedAssetCount"].isNull())
		riskCheckSummary_.affectedAssetCount = std::stoi(riskCheckSummaryNode["AffectedAssetCount"].asString());
	if(!riskCheckSummaryNode["DisabledRiskCount"].isNull())
		riskCheckSummary_.disabledRiskCount = std::stoi(riskCheckSummaryNode["DisabledRiskCount"].asString());
	if(!riskCheckSummaryNode["RiskCount"].isNull())
		riskCheckSummary_.riskCount = std::stoi(riskCheckSummaryNode["RiskCount"].asString());
	if(!riskCheckSummaryNode["RiskRate"].isNull())
		riskCheckSummary_.riskRate = std::stof(riskCheckSummaryNode["RiskRate"].asString());
	if(!riskCheckSummaryNode["PreviousCount"].isNull())
		riskCheckSummary_.previousCount = std::stoi(riskCheckSummaryNode["PreviousCount"].asString());
	if(!riskCheckSummaryNode["PreviousTime"].isNull())
		riskCheckSummary_.previousTime = std::stol(riskCheckSummaryNode["PreviousTime"].asString());
	if(!riskCheckSummaryNode["EnabledRiskCount"].isNull())
		riskCheckSummary_.enabledRiskCount = std::stoi(riskCheckSummaryNode["EnabledRiskCount"].asString());
	auto allRiskLevelCountNode = riskCheckSummaryNode["RiskLevelCount"]["levelCount"];
	for (auto riskCheckSummaryNodeRiskLevelCountlevelCount : allRiskLevelCountNode)
	{
		RiskCheckSummary::LevelCount levelCountObject;
		if(!riskCheckSummaryNodeRiskLevelCountlevelCount["Key"].isNull())
			levelCountObject.key = riskCheckSummaryNodeRiskLevelCountlevelCount["Key"].asString();
		if(!riskCheckSummaryNodeRiskLevelCountlevelCount["Count"].isNull())
			levelCountObject.count = std::stoi(riskCheckSummaryNodeRiskLevelCountlevelCount["Count"].asString());
		riskCheckSummary_.riskLevelCount.push_back(levelCountObject);
	}
	auto allGroupsNode = riskCheckSummaryNode["Groups"]["group"];
	for (auto riskCheckSummaryNodeGroupsgroup : allGroupsNode)
	{
		RiskCheckSummary::Group groupObject;
		if(!riskCheckSummaryNodeGroupsgroup["RemainingTime"].isNull())
			groupObject.remainingTime = std::stoi(riskCheckSummaryNodeGroupsgroup["RemainingTime"].asString());
		if(!riskCheckSummaryNodeGroupsgroup["Status"].isNull())
			groupObject.status = riskCheckSummaryNodeGroupsgroup["Status"].asString();
		if(!riskCheckSummaryNodeGroupsgroup["Sort"].isNull())
			groupObject.sort = std::stoi(riskCheckSummaryNodeGroupsgroup["Sort"].asString());
		if(!riskCheckSummaryNodeGroupsgroup["Title"].isNull())
			groupObject.title = riskCheckSummaryNodeGroupsgroup["Title"].asString();
		if(!riskCheckSummaryNodeGroupsgroup["Id"].isNull())
			groupObject.id = std::stol(riskCheckSummaryNodeGroupsgroup["Id"].asString());
		auto allCountByStatusNode = riskCheckSummaryNodeGroupsgroup["CountByStatus"]["statusCount"];
		for (auto riskCheckSummaryNodeGroupsgroupCountByStatusstatusCount : allCountByStatusNode)
		{
			RiskCheckSummary::Group::StatusCount countByStatusObject;
			if(!riskCheckSummaryNodeGroupsgroupCountByStatusstatusCount["Status"].isNull())
				countByStatusObject.status = riskCheckSummaryNodeGroupsgroupCountByStatusstatusCount["Status"].asString();
			if(!riskCheckSummaryNodeGroupsgroupCountByStatusstatusCount["Count"].isNull())
				countByStatusObject.count = std::stoi(riskCheckSummaryNodeGroupsgroupCountByStatusstatusCount["Count"].asString());
			groupObject.countByStatus.push_back(countByStatusObject);
		}
		riskCheckSummary_.groups.push_back(groupObject);
	}

}

DescribeRiskCheckSummaryResult::RiskCheckSummary DescribeRiskCheckSummaryResult::getRiskCheckSummary()const
{
	return riskCheckSummary_;
}

