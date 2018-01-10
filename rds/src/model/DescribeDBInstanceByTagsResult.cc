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
		DBInstanceTag dBInstanceTagObject;
		dBInstanceTagObject.dBInstanceId = value["DBInstanceId"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DBInstanceTag::Tag tagObject;
			tagObject.tagKey = value["TagKey"].asString();
			tagObject.tagValue = value["TagValue"].asString();
			dBInstanceTagObject.tags.push_back(tagObject);
		}
		items_.push_back(dBInstanceTagObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeDBInstanceByTagsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeDBInstanceByTagsResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeDBInstanceByTagsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeDBInstanceByTagsResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeDBInstanceByTagsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDBInstanceByTagsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

