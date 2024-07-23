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

#include <alibabacloud/mts/model/ListCustomGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListCustomGroupsResult::ListCustomGroupsResult() :
	ServiceResult()
{}

ListCustomGroupsResult::ListCustomGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomGroupsResult::~ListCustomGroupsResult()
{}

void ListCustomGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomGroupsNode = value["CustomGroups"]["CustomGroup"];
	for (auto valueCustomGroupsCustomGroup : allCustomGroupsNode)
	{
		CustomGroup customGroupsObject;
		if(!valueCustomGroupsCustomGroup["CustomGroupId"].isNull())
			customGroupsObject.customGroupId = valueCustomGroupsCustomGroup["CustomGroupId"].asString();
		if(!valueCustomGroupsCustomGroup["CustomGroupName"].isNull())
			customGroupsObject.customGroupName = valueCustomGroupsCustomGroup["CustomGroupName"].asString();
		if(!valueCustomGroupsCustomGroup["CustomGroupDescription"].isNull())
			customGroupsObject.customGroupDescription = valueCustomGroupsCustomGroup["CustomGroupDescription"].asString();
		customGroups_.push_back(customGroupsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListCustomGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCustomGroupsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListCustomGroupsResult::CustomGroup> ListCustomGroupsResult::getCustomGroups()const
{
	return customGroups_;
}

int ListCustomGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

