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

#include <alibabacloud/scsp/model/CreateSkillGroupRequest.h>

using AlibabaCloud::Scsp::Model::CreateSkillGroupRequest;

CreateSkillGroupRequest::CreateSkillGroupRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CreateSkillGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSkillGroupRequest::~CreateSkillGroupRequest()
{}

std::string CreateSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string CreateSkillGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSkillGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateSkillGroupRequest::getDisplayName()const
{
	return displayName_;
}

void CreateSkillGroupRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setBodyParameter("DisplayName", displayName);
}

int CreateSkillGroupRequest::getChannelType()const
{
	return channelType_;
}

void CreateSkillGroupRequest::setChannelType(int channelType)
{
	channelType_ = channelType;
	setBodyParameter("ChannelType", std::to_string(channelType));
}

std::string CreateSkillGroupRequest::getSkillGroupName()const
{
	return skillGroupName_;
}

void CreateSkillGroupRequest::setSkillGroupName(const std::string& skillGroupName)
{
	skillGroupName_ = skillGroupName;
	setBodyParameter("SkillGroupName", skillGroupName);
}

std::string CreateSkillGroupRequest::getDescription()const
{
	return description_;
}

void CreateSkillGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

