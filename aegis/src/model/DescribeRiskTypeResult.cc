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

#include <alibabacloud/aegis/model/DescribeRiskTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeRiskTypeResult::DescribeRiskTypeResult() :
	ServiceResult()
{}

DescribeRiskTypeResult::DescribeRiskTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskTypeResult::~DescribeRiskTypeResult()
{}

void DescribeRiskTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRiskTypesNode = value["RiskTypes"]["RiskType"];
	for (auto valueRiskTypesRiskType : allRiskTypesNode)
	{
		RiskType riskTypesObject;
		if(!valueRiskTypesRiskType["TypeName"].isNull())
			riskTypesObject.typeName = valueRiskTypesRiskType["TypeName"].asString();
		if(!valueRiskTypesRiskType["Alias"].isNull())
			riskTypesObject.alias = valueRiskTypesRiskType["Alias"].asString();
		if(!valueRiskTypesRiskType["WarnCount"].isNull())
			riskTypesObject.warnCount = valueRiskTypesRiskType["WarnCount"].asString();
		auto allSubTypesNode = allRiskTypesNode["SubTypes"]["subType"];
		for (auto allRiskTypesNodeSubTypessubType : allSubTypesNode)
		{
			RiskType::SubType subTypesObject;
			if(!allRiskTypesNodeSubTypessubType["WarnCount"].isNull())
				subTypesObject.warnCount = allRiskTypesNodeSubTypessubType["WarnCount"].asString();
			if(!allRiskTypesNodeSubTypessubType["TypeName"].isNull())
				subTypesObject.typeName = allRiskTypesNodeSubTypessubType["TypeName"].asString();
			if(!allRiskTypesNodeSubTypessubType["Alias"].isNull())
				subTypesObject.alias = allRiskTypesNodeSubTypessubType["Alias"].asString();
			riskTypesObject.subTypes.push_back(subTypesObject);
		}
		riskTypes_.push_back(riskTypesObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<DescribeRiskTypeResult::RiskType> DescribeRiskTypeResult::getRiskTypes()const
{
	return riskTypes_;
}

int DescribeRiskTypeResult::getCount()const
{
	return count_;
}

