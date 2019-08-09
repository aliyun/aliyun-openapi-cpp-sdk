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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allRisks = value["Risks"]["Risk"];
	for (auto value : allRisks)
	{
		Risk risksObject;
		if(!value["RiskId"].isNull())
			risksObject.riskId = std::stol(value["RiskId"].asString());
		if(!value["RiskName"].isNull())
			risksObject.riskName = value["RiskName"].asString();
		if(!value["RiskDetail"].isNull())
			risksObject.riskDetail = value["RiskDetail"].asString();
		if(!value["RiskType"].isNull())
			risksObject.riskType = value["RiskType"].asString();
		if(!value["TypeAlias"].isNull())
			risksObject.typeAlias = value["TypeAlias"].asString();
		if(!value["SubRiskType"].isNull())
			risksObject.subRiskType = value["SubRiskType"].asString();
		if(!value["SubTypeAlias"].isNull())
			risksObject.subTypeAlias = value["SubTypeAlias"].asString();
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

