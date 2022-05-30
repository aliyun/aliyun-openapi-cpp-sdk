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

#include <alibabacloud/dataworks-public/model/ListDataServiceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDataServiceGroupsResult::ListDataServiceGroupsResult() :
	ServiceResult()
{}

ListDataServiceGroupsResult::ListDataServiceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataServiceGroupsResult::~ListDataServiceGroupsResult()
{}

void ListDataServiceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto groupPagingResultNode = value["GroupPagingResult"];
	if(!groupPagingResultNode["PageNumber"].isNull())
		groupPagingResult_.pageNumber = std::stoi(groupPagingResultNode["PageNumber"].asString());
	if(!groupPagingResultNode["PageSize"].isNull())
		groupPagingResult_.pageSize = std::stoi(groupPagingResultNode["PageSize"].asString());
	if(!groupPagingResultNode["TotalCount"].isNull())
		groupPagingResult_.totalCount = std::stoi(groupPagingResultNode["TotalCount"].asString());
	auto allGroupsNode = groupPagingResultNode["Groups"]["Group"];
	for (auto groupPagingResultNodeGroupsGroup : allGroupsNode)
	{
		GroupPagingResult::Group groupObject;
		if(!groupPagingResultNodeGroupsGroup["ModifiedTime"].isNull())
			groupObject.modifiedTime = groupPagingResultNodeGroupsGroup["ModifiedTime"].asString();
		if(!groupPagingResultNodeGroupsGroup["Description"].isNull())
			groupObject.description = groupPagingResultNodeGroupsGroup["Description"].asString();
		if(!groupPagingResultNodeGroupsGroup["GroupName"].isNull())
			groupObject.groupName = groupPagingResultNodeGroupsGroup["GroupName"].asString();
		if(!groupPagingResultNodeGroupsGroup["GroupId"].isNull())
			groupObject.groupId = groupPagingResultNodeGroupsGroup["GroupId"].asString();
		if(!groupPagingResultNodeGroupsGroup["ProjectId"].isNull())
			groupObject.projectId = std::stol(groupPagingResultNodeGroupsGroup["ProjectId"].asString());
		if(!groupPagingResultNodeGroupsGroup["ApiGatewayGroupId"].isNull())
			groupObject.apiGatewayGroupId = groupPagingResultNodeGroupsGroup["ApiGatewayGroupId"].asString();
		if(!groupPagingResultNodeGroupsGroup["CreatorId"].isNull())
			groupObject.creatorId = groupPagingResultNodeGroupsGroup["CreatorId"].asString();
		if(!groupPagingResultNodeGroupsGroup["CreatedTime"].isNull())
			groupObject.createdTime = groupPagingResultNodeGroupsGroup["CreatedTime"].asString();
		if(!groupPagingResultNodeGroupsGroup["TenantId"].isNull())
			groupObject.tenantId = std::stol(groupPagingResultNodeGroupsGroup["TenantId"].asString());
		groupPagingResult_.groups.push_back(groupObject);
	}

}

ListDataServiceGroupsResult::GroupPagingResult ListDataServiceGroupsResult::getGroupPagingResult()const
{
	return groupPagingResult_;
}

