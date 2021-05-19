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

#include <alibabacloud/scsp/model/UpdateSkillGroupRequest.h>

using AlibabaCloud::Scsp::Model::UpdateSkillGroupRequest;

UpdateSkillGroupRequest::UpdateSkillGroupRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "UpdateSkillGroup")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateSkillGroupRequest::~UpdateSkillGroupRequest()
{}

std::string UpdateSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateSkillGroupRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateSkillGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long UpdateSkillGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void UpdateSkillGroupRequest::setSkillGroupId(long skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", std::to_string(skillGroupId));
}

std::string UpdateSkillGroupRequest::getDisplayName()const
{
	return displayName_;
}

void UpdateSkillGroupRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setParameter("DisplayName", displayName);
}

long UpdateSkillGroupRequest::getChannelType()const
{
	return channelType_;
}

void UpdateSkillGroupRequest::setChannelType(long channelType)
{
	channelType_ = channelType;
	setParameter("ChannelType", std::to_string(channelType));
}

std::string UpdateSkillGroupRequest::getSkillGroupName()const
{
	return skillGroupName_;
}

void UpdateSkillGroupRequest::setSkillGroupName(const std::string& skillGroupName)
{
	skillGroupName_ = skillGroupName;
	setParameter("SkillGroupName", skillGroupName);
}

std::string UpdateSkillGroupRequest::getDescription()const
{
	return description_;
}

void UpdateSkillGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

