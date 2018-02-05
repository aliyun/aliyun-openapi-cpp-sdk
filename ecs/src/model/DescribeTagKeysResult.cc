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

#include <alibabacloud/ecs/model/DescribeTagKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeTagKeysResult::DescribeTagKeysResult() :
	ServiceResult()
{}

DescribeTagKeysResult::DescribeTagKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTagKeysResult::~DescribeTagKeysResult()
{}

void DescribeTagKeysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTagKeys = value["TagKeys"]["TagKey"];
	for (const auto &item : allTagKeys)
		tagKeys_.push_back(item.asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTagKeysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTagKeysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTagKeysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<std::string> DescribeTagKeysResult::getTagKeys()const
{
	return tagKeys_;
}

