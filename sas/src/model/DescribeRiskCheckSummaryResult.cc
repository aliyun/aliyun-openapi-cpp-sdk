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
	if(!riskCheckSummaryNode["RiskCount"].isNull())
		riskCheckSummary_.riskCount = std::stoi(riskCheckSummaryNode["RiskCount"].asString());
	if(!riskCheckSummaryNode["PreviousCount"].isNull())
		riskCheckSummary_.previousCount = std::stoi(riskCheckSummaryNode["PreviousCount"].asString());
	if(!riskCheckSummaryNode["ItemCount"].isNull())
		riskCheckSummary_.itemCount = std::stoi(riskCheckSummaryNode["ItemCount"].asString());
	if(!riskCheckSummaryNode["RiskRate"].isNull())
		riskCheckSummary_.riskRate = std::stof(riskCheckSummaryNode["RiskRate"].asString());
	if(!riskCheckSummaryNode["AffectedAssetCount"].isNull())
		riskCheckSummary_.affectedAssetCount = std::stoi(riskCheckSummaryNode["AffectedAssetCount"].asString());
	if(!riskCheckSummaryNode["PreviousTime"].isNull())
		riskCheckSummary_.previousTime = std::stol(riskCheckSummaryNode["PreviousTime"].asString());
	if(!riskCheckSummaryNode["EnabledRiskCount"].isNull())
		riskCheckSummary_.enabledRiskCount = std::stoi(riskCheckSummaryNode["EnabledRiskCount"].asString());
	if(!riskCheckSummaryNode["DisabledRiskCount"].isNull())
		riskCheckSummary_.disabledRiskCount = std::stoi(riskCheckSummaryNode["DisabledRiskCount"].asString());
	auto allRiskLevelCount = value["RiskLevelCount"]["levelCount"];
	for (auto value : allRiskLevelCount)
	{
		RiskCheckSummary::LevelCount levelCountObject;
		if(!value["Key"].isNull())
			levelCountObject.key = value["Key"].asString();
		if(!value["Count"].isNull())
			levelCountObject.count = std::stoi(value["Count"].asString());
		riskCheckSummary_.riskLevelCount.push_back(levelCountObject);
	}
	auto allGroups = value["Groups"]["group"];
	for (auto value : allGroups)
	{
		RiskCheckSummary::Group groupObject;
		if(!value["Id"].isNull())
			groupObject.id = std::stol(value["Id"].asString());
		if(!value["Title"].isNull())
			groupObject.title = value["Title"].asString();
		if(!value["Status"].isNull())
			groupObject.status = value["Status"].asString();
		if(!value["RemainingTime"].isNull())
			groupObject.remainingTime = std::stoi(value["RemainingTime"].asString());
		if(!value["Sort"].isNull())
			groupObject.sort = std::stoi(value["Sort"].asString());
		auto allCountByStatus = value["CountByStatus"]["statusCount"];
		for (auto value : allCountByStatus)
		{
			RiskCheckSummary::Group::StatusCount countByStatusObject;
			if(!value["Status"].isNull())
				countByStatusObject.status = value["Status"].asString();
			if(!value["Count"].isNull())
				countByStatusObject.count = std::stoi(value["Count"].asString());
			groupObject.countByStatus.push_back(countByStatusObject);
		}
		riskCheckSummary_.groups.push_back(groupObject);
	}

}

DescribeRiskCheckSummaryResult::RiskCheckSummary DescribeRiskCheckSummaryResult::getRiskCheckSummary()const
{
	return riskCheckSummary_;
}

