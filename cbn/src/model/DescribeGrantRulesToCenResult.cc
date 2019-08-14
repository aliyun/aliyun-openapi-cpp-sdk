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

#include <alibabacloud/cbn/model/DescribeGrantRulesToCenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeGrantRulesToCenResult::DescribeGrantRulesToCenResult() :
	ServiceResult()
{}

DescribeGrantRulesToCenResult::DescribeGrantRulesToCenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGrantRulesToCenResult::~DescribeGrantRulesToCenResult()
{}

void DescribeGrantRulesToCenResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allGrantRules = value["GrantRules"]["GrantRule"];
	for (auto value : allGrantRules)
	{
		GrantRule grantRulesObject;
		if(!value["CenId"].isNull())
			grantRulesObject.cenId = value["CenId"].asString();
		if(!value["ChildInstanceRegionId"].isNull())
			grantRulesObject.childInstanceRegionId = value["ChildInstanceRegionId"].asString();
		if(!value["ChildInstanceType"].isNull())
			grantRulesObject.childInstanceType = value["ChildInstanceType"].asString();
		if(!value["ChildInstanceId"].isNull())
			grantRulesObject.childInstanceId = value["ChildInstanceId"].asString();
		if(!value["ChildInstanceOwnerId"].isNull())
			grantRulesObject.childInstanceOwnerId = std::stol(value["ChildInstanceOwnerId"].asString());
		grantRules_.push_back(grantRulesObject);
	}

}

std::vector<DescribeGrantRulesToCenResult::GrantRule> DescribeGrantRulesToCenResult::getGrantRules()const
{
	return grantRules_;
}

