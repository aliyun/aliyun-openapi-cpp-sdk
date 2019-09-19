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

#include <alibabacloud/yundun-ds/model/DescribeDataHubTopicsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDataHubTopicsResult::DescribeDataHubTopicsResult() :
	ServiceResult()
{}

DescribeDataHubTopicsResult::DescribeDataHubTopicsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataHubTopicsResult::~DescribeDataHubTopicsResult()
{}

void DescribeDataHubTopicsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Topic"];
	for (auto valueItemsTopic : allItemsNode)
	{
		Topic itemsObject;
		if(!valueItemsTopic["Id"].isNull())
			itemsObject.id = std::stol(valueItemsTopic["Id"].asString());
		if(!valueItemsTopic["Name"].isNull())
			itemsObject.name = valueItemsTopic["Name"].asString();
		if(!valueItemsTopic["Description"].isNull())
			itemsObject.description = valueItemsTopic["Description"].asString();
		if(!valueItemsTopic["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsTopic["CreationTime"].asString());
		if(!valueItemsTopic["RecordType"].isNull())
			itemsObject.recordType = valueItemsTopic["RecordType"].asString();
		if(!valueItemsTopic["LifeCycle"].isNull())
			itemsObject.lifeCycle = std::stoi(valueItemsTopic["LifeCycle"].asString());
		if(!valueItemsTopic["UserId"].isNull())
			itemsObject.userId = std::stol(valueItemsTopic["UserId"].asString());
		if(!valueItemsTopic["LoginName"].isNull())
			itemsObject.loginName = valueItemsTopic["LoginName"].asString();
		if(!valueItemsTopic["DisplayName"].isNull())
			itemsObject.displayName = valueItemsTopic["DisplayName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataHubTopicsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataHubTopicsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataHubTopicsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataHubTopicsResult::Topic> DescribeDataHubTopicsResult::getItems()const
{
	return items_;
}

