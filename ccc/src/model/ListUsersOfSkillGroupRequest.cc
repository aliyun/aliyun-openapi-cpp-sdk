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

#include <alibabacloud/ccc/model/ListUsersOfSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::ListUsersOfSkillGroupRequest;

ListUsersOfSkillGroupRequest::ListUsersOfSkillGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListUsersOfSkillGroup")
{}

ListUsersOfSkillGroupRequest::~ListUsersOfSkillGroupRequest()
{}

std::string ListUsersOfSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void ListUsersOfSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListUsersOfSkillGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListUsersOfSkillGroupRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", skillGroupId);
}

int ListUsersOfSkillGroupRequest::getPageSize()const
{
	return pageSize_;
}

void ListUsersOfSkillGroupRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int ListUsersOfSkillGroupRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListUsersOfSkillGroupRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListUsersOfSkillGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUsersOfSkillGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

