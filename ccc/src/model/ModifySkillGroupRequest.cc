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
{}

ModifySkillGroupRequest::~ModifySkillGroupRequest()
{}

std::vector<int> ModifySkillGroupRequest::getSkillLevel()const
{
	return skillLevel_;
}

void ModifySkillGroupRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int i = 0; i!= skillLevel.size(); i++)
		setCoreParameter("SkillLevel."+ std::to_string(i), skillLevel.at(i));
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

bool ModifySkillGroupRequest::getAllowPrivateOutboundNumber()const
{
	return allowPrivateOutboundNumber_;
}

void ModifySkillGroupRequest::setAllowPrivateOutboundNumber(bool allowPrivateOutboundNumber)
{
	allowPrivateOutboundNumber_ = allowPrivateOutboundNumber;
	setCoreParameter("AllowPrivateOutboundNumber", allowPrivateOutboundNumber);
}

std::vector<std::string> ModifySkillGroupRequest::getOutboundPhoneNumberId()const
{
	return outboundPhoneNumberId_;
}

void ModifySkillGroupRequest::setOutboundPhoneNumberId(const std::vector<std::string>& outboundPhoneNumberId)
{
	outboundPhoneNumberId_ = outboundPhoneNumberId;
	for(int i = 0; i!= outboundPhoneNumberId.size(); i++)
		setCoreParameter("OutboundPhoneNumberId."+ std::to_string(i), std::to_string(outboundPhoneNumberId.at(i)));
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
	for(int i = 0; i!= userId.size(); i++)
		setCoreParameter("UserId."+ std::to_string(i), std::to_string(userId.at(i)));
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

