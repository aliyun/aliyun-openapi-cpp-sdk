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
	auto allRiskTypes = value["RiskTypes"]["RiskType"];
	for (auto value : allRiskTypes)
	{
		RiskType riskTypesObject;
		if(!value["TypeName"].isNull())
			riskTypesObject.typeName = value["TypeName"].asString();
		if(!value["Alias"].isNull())
			riskTypesObject.alias = value["Alias"].asString();
		if(!value["WarnCount"].isNull())
			riskTypesObject.warnCount = value["WarnCount"].asString();
		auto allSubTypes = value["SubTypes"]["subType"];
		for (auto value : allSubTypes)
		{
			RiskType::SubType subTypesObject;
			if(!value["WarnCount"].isNull())
				subTypesObject.warnCount = value["WarnCount"].asString();
			if(!value["TypeName"].isNull())
				subTypesObject.typeName = value["TypeName"].asString();
			if(!value["Alias"].isNull())
				subTypesObject.alias = value["Alias"].asString();
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

