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

#include <alibabacloud/ccc/model/ModifySkillGroupRequest.h>

using AlibabaCloud::CCC::Model::ModifySkillGroupRequest;

ModifySkillGroupRequest::ModifySkillGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifySkillGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySkillGroupRequest::~ModifySkillGroupRequest()
{}

bool ModifySkillGroupRequest::getAllowPrivateOutboundNumber()const
{
	return allowPrivateOutboundNumber_;
}

void ModifySkillGroupRequest::setAllowPrivateOutboundNumber(bool allowPrivateOutboundNumber)
{
	allowPrivateOutboundNumber_ = allowPrivateOutboundNumber;
	setCoreParameter("AllowPrivateOutboundNumber", allowPrivateOutboundNumber ? "true" : "false");
}

std::string ModifySkillGroupRequest::getDescription()const
{
	return description_;
}

void ModifySkillGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifySkillGroupRequest::getRoutingStrategy()const
{
	return routingStrategy_;
}

void ModifySkillGroupRequest::setRoutingStrategy(const std::string& routingStrategy)
{
	routingStrategy_ = routingStrategy;
	setCoreParameter("RoutingStrategy", routingStrategy);
}

std::vector<std::string> ModifySkillGroupRequest::getUserId()const
{
	return userId_;
}

void ModifySkillGroupRequest::setUserId(const std::vector<std::string>& userId)
{
	userId_ = userId;
	for(int dep1 = 0; dep1!= userId.size(); dep1++)
		setCoreParameter("UserId."+ std::to_string(dep1), userId.at(dep1));
}

std::string ModifySkillGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySkillGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<int> ModifySkillGroupRequest::getSkillLevel()const
{
	return skillLevel_;
}

void ModifySkillGroupRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int dep1 = 0; dep1!= skillLevel.size(); dep1++)
		setCoreParameter("SkillLevel."+ std::to_string(dep1), std::to_string(skillLevel.at(dep1)));
}

std::string ModifySkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifySkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> ModifySkillGroupRequest::getOutboundPhoneNumberId()const
{
	return outboundPhoneNumberId_;
}

void ModifySkillGroupRequest::setOutboundPhoneNumberId(const std::vector<std::string>& outboundPhoneNumberId)
{
	outboundPhoneNumberId_ = outboundPhoneNumberId;
	for(int dep1 = 0; dep1!= outboundPhoneNumberId.size(); dep1++)
		setCoreParameter("OutboundPhoneNumberId."+ std::to_string(dep1), outboundPhoneNumberId.at(dep1));
}

std::string ModifySkillGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ModifySkillGroupRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", skillGroupId);
}

std::string ModifySkillGroupRequest::getName()const
{
	return name_;
}

void ModifySkillGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

