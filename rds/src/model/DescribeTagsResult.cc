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

#include <alibabacloud/rds/model/DescribeTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeTagsResult::DescribeTagsResult() :
	ServiceResult()
{}

DescribeTagsResult::DescribeTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTagsResult::~DescribeTagsResult()
{}

void DescribeTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["TagInfos"];
	for (auto value : allItems)
	{
		TagInfos itemsObject;
		if(!value["TagKey"].isNull())
			itemsObject.tagKey = value["TagKey"].asString();
		if(!value["TagValue"].isNull())
			itemsObject.tagValue = value["TagValue"].asString();
		auto allDBInstanceIds = value["DBInstanceIds"]["DBInstanceIds"];
		for (auto value : allDBInstanceIds)
			itemsObject.dBInstanceIds.push_back(value.asString());
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeTagsResult::TagInfos> DescribeTagsResult::getItems()const
{
	return items_;
}

