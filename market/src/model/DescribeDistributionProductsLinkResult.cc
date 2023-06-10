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

#include <alibabacloud/market/model/DescribeDistributionProductsLinkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeDistributionProductsLinkResult::DescribeDistributionProductsLinkResult() :
	ServiceResult()
{}

DescribeDistributionProductsLinkResult::DescribeDistributionProductsLinkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDistributionProductsLinkResult::~DescribeDistributionProductsLinkResult()
{}

void DescribeDistributionProductsLinkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["item"];
	for (auto valueResultitem : allResultNode)
	{
		Item resultObject;
		if(!valueResultitem["Url"].isNull())
			resultObject.url = valueResultitem["Url"].asString();
		if(!valueResultitem["Code"].isNull())
			resultObject.code = valueResultitem["Code"].asString();
		if(!valueResultitem["Name"].isNull())
			resultObject.name = valueResultitem["Name"].asString();
		result_.push_back(resultObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long DescribeDistributionProductsLinkResult::getTotalCount()const
{
	return totalCount_;
}

bool DescribeDistributionProductsLinkResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeDistributionProductsLinkResult::Item> DescribeDistributionProductsLinkResult::getResult()const
{
	return result_;
}

