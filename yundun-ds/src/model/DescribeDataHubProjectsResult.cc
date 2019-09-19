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

#include <alibabacloud/yundun-ds/model/DescribeDataHubProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDataHubProjectsResult::DescribeDataHubProjectsResult() :
	ServiceResult()
{}

DescribeDataHubProjectsResult::DescribeDataHubProjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataHubProjectsResult::~DescribeDataHubProjectsResult()
{}

void DescribeDataHubProjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Project"];
	for (auto valueItemsProject : allItemsNode)
	{
		Project itemsObject;
		if(!valueItemsProject["Id"].isNull())
			itemsObject.id = std::stol(valueItemsProject["Id"].asString());
		if(!valueItemsProject["Name"].isNull())
			itemsObject.name = valueItemsProject["Name"].asString();
		if(!valueItemsProject["Description"].isNull())
			itemsObject.description = valueItemsProject["Description"].asString();
		if(!valueItemsProject["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsProject["CreationTime"].asString());
		if(!valueItemsProject["TopicCount"].isNull())
			itemsObject.topicCount = valueItemsProject["TopicCount"].asString();
		if(!valueItemsProject["TopicTupleCount"].isNull())
			itemsObject.topicTupleCount = valueItemsProject["TopicTupleCount"].asString();
		if(!valueItemsProject["TopicBlobCount"].isNull())
			itemsObject.topicBlobCount = std::stol(valueItemsProject["TopicBlobCount"].asString());
		if(!valueItemsProject["UserId"].isNull())
			itemsObject.userId = std::stol(valueItemsProject["UserId"].asString());
		if(!valueItemsProject["LoginName"].isNull())
			itemsObject.loginName = valueItemsProject["LoginName"].asString();
		if(!valueItemsProject["DisplayName"].isNull())
			itemsObject.displayName = valueItemsProject["DisplayName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataHubProjectsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataHubProjectsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataHubProjectsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataHubProjectsResult::Project> DescribeDataHubProjectsResult::getItems()const
{
	return items_;
}

