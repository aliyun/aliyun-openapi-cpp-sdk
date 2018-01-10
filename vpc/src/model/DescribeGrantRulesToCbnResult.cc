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

#include <alibabacloud/vpc/model/DescribeGrantRulesToCbnResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeGrantRulesToCbnResult::DescribeGrantRulesToCbnResult() :
	ServiceResult()
{}

DescribeGrantRulesToCbnResult::DescribeGrantRulesToCbnResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGrantRulesToCbnResult::~DescribeGrantRulesToCbnResult()
{}

void DescribeGrantRulesToCbnResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCbnGrantRules = value["CbnGrantRules"]["CbnGrantRule"];
	for (auto value : allCbnGrantRules)
	{
		CbnGrantRule cbnGrantRuleObject;
		cbnGrantRuleObject.cbnInstanceId = value["CbnInstanceId"].asString();
		cbnGrantRuleObject.cbnOwnerId = std::stol(value["CbnOwnerId"].asString());
		cbnGrantRuleObject.creationTime = value["CreationTime"].asString();
		cbnGrantRules_.push_back(cbnGrantRuleObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGrantRulesToCbnResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeGrantRulesToCbnResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeGrantRulesToCbnResult::getPageSize()const
{
	return pageSize_;
}

void DescribeGrantRulesToCbnResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeGrantRulesToCbnResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeGrantRulesToCbnResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

