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

#include <alibabacloud/smartag/model/DescribeGrantSagVbrRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeGrantSagVbrRulesResult::DescribeGrantSagVbrRulesResult() :
	ServiceResult()
{}

DescribeGrantSagVbrRulesResult::DescribeGrantSagVbrRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGrantSagVbrRulesResult::~DescribeGrantSagVbrRulesResult()
{}

void DescribeGrantSagVbrRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGrantRulesNode = value["GrantRules"]["GrantRule"];
	for (auto valueGrantRulesGrantRule : allGrantRulesNode)
	{
		GrantRule grantRulesObject;
		if(!valueGrantRulesGrantRule["VbrInstanceId"].isNull())
			grantRulesObject.vbrInstanceId = valueGrantRulesGrantRule["VbrInstanceId"].asString();
		if(!valueGrantRulesGrantRule["VbrUid"].isNull())
			grantRulesObject.vbrUid = std::stol(valueGrantRulesGrantRule["VbrUid"].asString());
		if(!valueGrantRulesGrantRule["VbrRegionId"].isNull())
			grantRulesObject.vbrRegionId = valueGrantRulesGrantRule["VbrRegionId"].asString();
		if(!valueGrantRulesGrantRule["CreateTime"].isNull())
			grantRulesObject.createTime = std::stol(valueGrantRulesGrantRule["CreateTime"].asString());
		if(!valueGrantRulesGrantRule["SmartAGId"].isNull())
			grantRulesObject.smartAGId = valueGrantRulesGrantRule["SmartAGId"].asString();
		if(!valueGrantRulesGrantRule["Bound"].isNull())
			grantRulesObject.bound = valueGrantRulesGrantRule["Bound"].asString() == "true";
		if(!valueGrantRulesGrantRule["InstanceId"].isNull())
			grantRulesObject.instanceId = valueGrantRulesGrantRule["InstanceId"].asString();
		if(!valueGrantRulesGrantRule["SmartAGUid"].isNull())
			grantRulesObject.smartAGUid = std::stol(valueGrantRulesGrantRule["SmartAGUid"].asString());
		grantRules_.push_back(grantRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeGrantSagVbrRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeGrantSagVbrRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGrantSagVbrRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGrantSagVbrRulesResult::GrantRule> DescribeGrantSagVbrRulesResult::getGrantRules()const
{
	return grantRules_;
}

