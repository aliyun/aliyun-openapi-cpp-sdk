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

#include <alibabacloud/aegis/model/DescribeRisksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeRisksResult::DescribeRisksResult() :
	ServiceResult()
{}

DescribeRisksResult::DescribeRisksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRisksResult::~DescribeRisksResult()
{}

void DescribeRisksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRisksNode = value["Risks"]["Risk"];
	for (auto valueRisksRisk : allRisksNode)
	{
		Risk risksObject;
		if(!valueRisksRisk["RiskId"].isNull())
			risksObject.riskId = std::stol(valueRisksRisk["RiskId"].asString());
		if(!valueRisksRisk["RiskName"].isNull())
			risksObject.riskName = valueRisksRisk["RiskName"].asString();
		if(!valueRisksRisk["RiskDetail"].isNull())
			risksObject.riskDetail = valueRisksRisk["RiskDetail"].asString();
		if(!valueRisksRisk["RiskType"].isNull())
			risksObject.riskType = valueRisksRisk["RiskType"].asString();
		if(!valueRisksRisk["TypeAlias"].isNull())
			risksObject.typeAlias = valueRisksRisk["TypeAlias"].asString();
		if(!valueRisksRisk["SubRiskType"].isNull())
			risksObject.subRiskType = valueRisksRisk["SubRiskType"].asString();
		if(!valueRisksRisk["SubTypeAlias"].isNull())
			risksObject.subTypeAlias = valueRisksRisk["SubTypeAlias"].asString();
		risks_.push_back(risksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeRisksResult::Risk> DescribeRisksResult::getRisks()const
{
	return risks_;
}

int DescribeRisksResult::getTotalCount()const
{
	return totalCount_;
}

