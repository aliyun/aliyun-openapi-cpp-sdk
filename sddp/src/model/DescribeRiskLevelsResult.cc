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

#include <alibabacloud/sddp/model/DescribeRiskLevelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeRiskLevelsResult::DescribeRiskLevelsResult() :
	ServiceResult()
{}

DescribeRiskLevelsResult::DescribeRiskLevelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskLevelsResult::~DescribeRiskLevelsResult()
{}

void DescribeRiskLevelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRiskLevelListNode = value["RiskLevelList"]["RiskLevel"];
	for (auto valueRiskLevelListRiskLevel : allRiskLevelListNode)
	{
		RiskLevel riskLevelListObject;
		if(!valueRiskLevelListRiskLevel["Name"].isNull())
			riskLevelListObject.name = valueRiskLevelListRiskLevel["Name"].asString();
		if(!valueRiskLevelListRiskLevel["Description"].isNull())
			riskLevelListObject.description = valueRiskLevelListRiskLevel["Description"].asString();
		if(!valueRiskLevelListRiskLevel["Alias"].isNull())
			riskLevelListObject.alias = valueRiskLevelListRiskLevel["Alias"].asString();
		if(!valueRiskLevelListRiskLevel["Id"].isNull())
			riskLevelListObject.id = std::stol(valueRiskLevelListRiskLevel["Id"].asString());
		if(!valueRiskLevelListRiskLevel["ReferenceNum"].isNull())
			riskLevelListObject.referenceNum = std::stoi(valueRiskLevelListRiskLevel["ReferenceNum"].asString());
		riskLevelList_.push_back(riskLevelListObject);
	}

}

std::vector<DescribeRiskLevelsResult::RiskLevel> DescribeRiskLevelsResult::getRiskLevelList()const
{
	return riskLevelList_;
}

