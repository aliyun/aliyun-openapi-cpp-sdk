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

#include <alibabacloud/vpc/model/DescribeGrantRulesToCenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCenGrantRules = value["CenGrantRules"]["CbnGrantRule"];
	for (auto value : allCenGrantRules)
	{
		CbnGrantRule cenGrantRulesObject;
		if(!value["CenInstanceId"].isNull())
			cenGrantRulesObject.cenInstanceId = value["CenInstanceId"].asString();
		if(!value["CenOwnerId"].isNull())
			cenGrantRulesObject.cenOwnerId = std::stol(value["CenOwnerId"].asString());
		if(!value["CreationTime"].isNull())
			cenGrantRulesObject.creationTime = value["CreationTime"].asString();
		cenGrantRules_.push_back(cenGrantRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGrantRulesToCenResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeGrantRulesToCenResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGrantRulesToCenResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGrantRulesToCenResult::CbnGrantRule> DescribeGrantRulesToCenResult::getCenGrantRules()const
{
	return cenGrantRules_;
}

