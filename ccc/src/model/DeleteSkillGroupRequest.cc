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

#include <alibabacloud/ccc/model/DeleteSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::DeleteSkillGroupRequest;

DeleteSkillGroupRequest::DeleteSkillGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "DeleteSkillGroup")
{}

DeleteSkillGroupRequest::~DeleteSkillGroupRequest()
{}

std::string DeleteSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DeleteSkillGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void DeleteSkillGroupRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", skillGroupId);
}

std::string DeleteSkillGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteSkillGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

