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

#include <alibabacloud/scsp/model/QuerySkillGroupsRequest.h>

using AlibabaCloud::Scsp::Model::QuerySkillGroupsRequest;

QuerySkillGroupsRequest::QuerySkillGroupsRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "QuerySkillGroups")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySkillGroupsRequest::~QuerySkillGroupsRequest()
{}

std::string QuerySkillGroupsRequest::getInstanceId()const
{
	return instanceId_;
}

void QuerySkillGroupsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int QuerySkillGroupsRequest::getGroupType()const
{
	return groupType_;
}

void QuerySkillGroupsRequest::setGroupType(int groupType)
{
	groupType_ = groupType;
	setParameter("GroupType", std::to_string(groupType));
}

std::string QuerySkillGroupsRequest::getClientToken()const
{
	return clientToken_;
}

void QuerySkillGroupsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int QuerySkillGroupsRequest::getPageNo()const
{
	return pageNo_;
}

void QuerySkillGroupsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

long QuerySkillGroupsRequest::getGroupId()const
{
	return groupId_;
}

void QuerySkillGroupsRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

int QuerySkillGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySkillGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySkillGroupsRequest::getGroupName()const
{
	return groupName_;
}

void QuerySkillGroupsRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

