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

#include <alibabacloud/devops/model/ListApplicationMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListApplicationMembersResult::ListApplicationMembersResult() :
	ServiceResult()
{}

ListApplicationMembersResult::ListApplicationMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationMembersResult::~ListApplicationMembersResult()
{}

void ListApplicationMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allrecordsNode = value["records"]["recordsItem"];
	for (auto valuerecordsrecordsItem : allrecordsNode)
	{
		RecordsItem recordsObject;
		if(!valuerecordsrecordsItem["id"].isNull())
			recordsObject.id = valuerecordsrecordsItem["id"].asString();
		if(!valuerecordsrecordsItem["type"].isNull())
			recordsObject.type = valuerecordsrecordsItem["type"].asString();
		if(!valuerecordsrecordsItem["displayName"].isNull())
			recordsObject.displayName = valuerecordsrecordsItem["displayName"].asString();
		if(!valuerecordsrecordsItem["description"].isNull())
			recordsObject.description = valuerecordsrecordsItem["description"].asString();
		if(!valuerecordsrecordsItem["avatar"].isNull())
			recordsObject.avatar = valuerecordsrecordsItem["avatar"].asString();
		auto allroleListNode = valuerecordsrecordsItem["roleList"]["roleListItem"];
		for (auto valuerecordsrecordsItemroleListroleListItem : allroleListNode)
		{
			RecordsItem::RoleListItem roleListObject;
			if(!valuerecordsrecordsItemroleListroleListItem["name"].isNull())
				roleListObject.name = valuerecordsrecordsItemroleListroleListItem["name"].asString();
			if(!valuerecordsrecordsItemroleListroleListItem["displayName"].isNull())
				roleListObject.displayName = valuerecordsrecordsItemroleListroleListItem["displayName"].asString();
			recordsObject.roleList.push_back(roleListObject);
		}
		records_.push_back(recordsObject);
	}
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());
	if(!value["current"].isNull())
		current_ = std::stol(value["current"].asString());
	if(!value["pageSize"].isNull())
		pageSize_ = std::stol(value["pageSize"].asString());
	if(!value["pages"].isNull())
		pages_ = std::stol(value["pages"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

long ListApplicationMembersResult::getPages()const
{
	return pages_;
}

long ListApplicationMembersResult::getPageSize()const
{
	return pageSize_;
}

std::string ListApplicationMembersResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListApplicationMembersResult::RecordsItem> ListApplicationMembersResult::getrecords()const
{
	return records_;
}

long ListApplicationMembersResult::getTotal()const
{
	return total_;
}

long ListApplicationMembersResult::getCurrent()const
{
	return current_;
}

