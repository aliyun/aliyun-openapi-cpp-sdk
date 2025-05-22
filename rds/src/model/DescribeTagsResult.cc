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
	auto allItemsNode = value["Items"]["TagInfos"];
	for (auto valueItemsTagInfos : allItemsNode)
	{
		TagInfos itemsObject;
		if(!valueItemsTagInfos["TagKey"].isNull())
			itemsObject.tagKey = valueItemsTagInfos["TagKey"].asString();
		if(!valueItemsTagInfos["TagValue"].isNull())
			itemsObject.tagValue = valueItemsTagInfos["TagValue"].asString();
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

