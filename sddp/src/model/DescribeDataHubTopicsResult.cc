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

#include <alibabacloud/sddp/model/DescribeDataHubTopicsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Topic"];
	for (auto value : allItems)
	{
		Topic itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			itemsObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(value["CreationTime"].asString());
		if(!value["RecordType"].isNull())
			itemsObject.recordType = value["RecordType"].asString();
		if(!value["LifeCycle"].isNull())
			itemsObject.lifeCycle = std::stoi(value["LifeCycle"].asString());
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

