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

#include <alibabacloud/ccc/model/ListSkillGroupsOfUserRequest.h>

using AlibabaCloud::CCC::Model::ListSkillGroupsOfUserRequest;

ListSkillGroupsOfUserRequest::ListSkillGroupsOfUserRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListSkillGroupsOfUser")
{}

ListSkillGroupsOfUserRequest::~ListSkillGroupsOfUserRequest()
{}

std::string ListSkillGroupsOfUserRequest::getInstanceId()const
{
	return instanceId_;
}

void ListSkillGroupsOfUserRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListSkillGroupsOfUserRequest::getUserId()const
{
	return userId_;
}

void ListSkillGroupsOfUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string ListSkillGroupsOfUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListSkillGroupsOfUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

