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

#include <alibabacloud/rds/model/DescribeDBInstanceByTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceByTagsResult::DescribeDBInstanceByTagsResult() :
	ServiceResult()
{}

DescribeDBInstanceByTagsResult::DescribeDBInstanceByTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceByTagsResult::~DescribeDBInstanceByTagsResult()
{}

void DescribeDBInstanceByTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["DBInstanceTag"];
	for (auto value : allItems)
	{
		DBInstanceTag itemsObject;
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DBInstanceTag::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeDBInstanceByTagsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBInstanceByTagsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDBInstanceByTagsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstanceByTagsResult::DBInstanceTag> DescribeDBInstanceByTagsResult::getItems()const
{
	return items_;
}

