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

#include <alibabacloud/edas/model/ListServiceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListServiceGroupsResult::ListServiceGroupsResult() :
	ServiceResult()
{}

ListServiceGroupsResult::ListServiceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceGroupsResult::~ListServiceGroupsResult()
{}

void ListServiceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceGroupsListNode = value["ServiceGroupsList"]["ListServiceGroups"];
	for (auto valueServiceGroupsListListServiceGroups : allServiceGroupsListNode)
	{
		ListServiceGroups serviceGroupsListObject;
		if(!valueServiceGroupsListListServiceGroups["CreateTime"].isNull())
			serviceGroupsListObject.createTime = valueServiceGroupsListListServiceGroups["CreateTime"].asString();
		if(!valueServiceGroupsListListServiceGroups["GroupId"].isNull())
			serviceGroupsListObject.groupId = valueServiceGroupsListListServiceGroups["GroupId"].asString();
		if(!valueServiceGroupsListListServiceGroups["GroupName"].isNull())
			serviceGroupsListObject.groupName = valueServiceGroupsListListServiceGroups["GroupName"].asString();
		serviceGroupsList_.push_back(serviceGroupsListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<ListServiceGroupsResult::ListServiceGroups> ListServiceGroupsResult::getServiceGroupsList()const
{
	return serviceGroupsList_;
}

std::string ListServiceGroupsResult::getMessage()const
{
	return message_;
}

int ListServiceGroupsResult::getCode()const
{
	return code_;
}

