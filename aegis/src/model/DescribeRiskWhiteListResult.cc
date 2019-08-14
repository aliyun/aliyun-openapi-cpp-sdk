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

#include <alibabacloud/aegis/model/DescribeRiskWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeRiskWhiteListResult::DescribeRiskWhiteListResult() :
	ServiceResult()
{}

DescribeRiskWhiteListResult::DescribeRiskWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskWhiteListResult::~DescribeRiskWhiteListResult()
{}

void DescribeRiskWhiteListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allWhiteLists = value["WhiteLists"]["WhiteList"];
	for (auto value : allWhiteLists)
	{
		WhiteList whiteListsObject;
		if(!value["riskId"].isNull())
			whiteListsObject.riskId = std::stol(value["riskId"].asString());
		if(!value["riskName"].isNull())
			whiteListsObject.riskName = value["riskName"].asString();
		if(!value["reason"].isNull())
			whiteListsObject.reason = value["reason"].asString();
		whiteLists_.push_back(whiteListsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeRiskWhiteListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRiskWhiteListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRiskWhiteListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeRiskWhiteListResult::WhiteList> DescribeRiskWhiteListResult::getWhiteLists()const
{
	return whiteLists_;
}

int DescribeRiskWhiteListResult::getCount()const
{
	return count_;
}

