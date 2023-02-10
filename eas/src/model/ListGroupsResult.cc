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

#include <alibabacloud/eas/model/ListGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

ListGroupsResult::ListGroupsResult() :
	ServiceResult()
{}

ListGroupsResult::ListGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupsResult::~ListGroupsResult()
{}

void ListGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupsNode = value["Groups"]["服务组列表"];
	for (auto valueGroups服务组列表 : allGroupsNode)
	{
		服务组列表 groupsObject;
		if(!valueGroups服务组列表["Name"].isNull())
			groupsObject.name = valueGroups服务组列表["Name"].asString();
		if(!valueGroups服务组列表["ClusterId"].isNull())
			groupsObject.clusterId = valueGroups服务组列表["ClusterId"].asString();
		if(!valueGroups服务组列表["CreateTime"].isNull())
			groupsObject.createTime = valueGroups服务组列表["CreateTime"].asString();
		if(!valueGroups服务组列表["UpdateTime"].isNull())
			groupsObject.updateTime = valueGroups服务组列表["UpdateTime"].asString();
		if(!valueGroups服务组列表["QueueService"].isNull())
			groupsObject.queueService = valueGroups服务组列表["QueueService"].asString();
		if(!valueGroups服务组列表["InternetEndpoint"].isNull())
			groupsObject.internetEndpoint = valueGroups服务组列表["InternetEndpoint"].asString();
		if(!valueGroups服务组列表["IntranetEndpoint"].isNull())
			groupsObject.intranetEndpoint = valueGroups服务组列表["IntranetEndpoint"].asString();
		if(!valueGroups服务组列表["AccessToken"].isNull())
			groupsObject.accessToken = valueGroups服务组列表["AccessToken"].asString();
		groups_.push_back(groupsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListGroupsResult::getTotalCount()const
{
	return totalCount_;
}

long ListGroupsResult::getPageSize()const
{
	return pageSize_;
}

long ListGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListGroupsResult::服务组列表> ListGroupsResult::getGroups()const
{
	return groups_;
}

