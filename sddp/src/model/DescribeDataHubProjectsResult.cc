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

#include <alibabacloud/sddp/model/DescribeDataHubProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

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
	auto allItems = value["Items"]["Project"];
	for (auto value : allItems)
	{
		Project itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			itemsObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(value["CreationTime"].asString());
		if(!value["TopicCount"].isNull())
			itemsObject.topicCount = value["TopicCount"].asString();
		if(!value["TopicTupleCount"].isNull())
			itemsObject.topicTupleCount = value["TopicTupleCount"].asString();
		if(!value["TopicBlobCount"].isNull())
			itemsObject.topicBlobCount = std::stol(value["TopicBlobCount"].asString());
		if(!value["UserId"].isNull())
			itemsObject.userId = std::stol(value["UserId"].asString());
		if(!value["LoginName"].isNull())
			itemsObject.loginName = value["LoginName"].asString();
		if(!value["DisplayName"].isNull())
			itemsObject.displayName = value["DisplayName"].asString();
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

