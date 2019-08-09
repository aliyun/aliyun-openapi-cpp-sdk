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

#include <alibabacloud/smartag/model/DescribeGrantSagRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeGrantSagRulesResult::DescribeGrantSagRulesResult() :
	ServiceResult()
{}

DescribeGrantSagRulesResult::DescribeGrantSagRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGrantSagRulesResult::~DescribeGrantSagRulesResult()
{}

void DescribeGrantSagRulesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allGrantRules = value["GrantRules"]["GrantRule"];
	for (auto value : allGrantRules)
	{
		GrantRule grantRulesObject;
		if(!value["InstanceId"].isNull())
			grantRulesObject.instanceId = value["InstanceId"].asString();
		if(!value["SmartAGId"].isNull())
			grantRulesObject.smartAGId = value["SmartAGId"].asString();
		if(!value["CreateTime"].isNull())
			grantRulesObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["CcnUid"].isNull())
			grantRulesObject.ccnUid = std::stol(value["CcnUid"].asString());
		if(!value["CcnInstanceId"].isNull())
			grantRulesObject.ccnInstanceId = value["CcnInstanceId"].asString();
		grantRules_.push_back(grantRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGrantSagRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeGrantSagRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGrantSagRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGrantSagRulesResult::GrantRule> DescribeGrantSagRulesResult::getGrantRules()const
{
	return grantRules_;
}

