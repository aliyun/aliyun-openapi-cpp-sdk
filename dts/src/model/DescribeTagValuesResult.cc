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

#include <alibabacloud/dts/model/DescribeTagValuesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeTagValuesResult::DescribeTagValuesResult() :
	ServiceResult()
{}

DescribeTagValuesResult::DescribeTagValuesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTagValuesResult::~DescribeTagValuesResult()
{}

void DescribeTagValuesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagValues = value["TagValues"]["TagValue"];
	for (const auto &item : allTagValues)
		tagValues_.push_back(item.asString());
	if(!value["Category"].isNull())
		category_ = value["Category"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTagValuesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeTagValuesResult::getCategory()const
{
	return category_;
}

int DescribeTagValuesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTagValuesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<std::string> DescribeTagValuesResult::getTagValues()const
{
	return tagValues_;
}

