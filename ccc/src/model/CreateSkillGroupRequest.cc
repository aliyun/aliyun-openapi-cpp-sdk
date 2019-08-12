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

#include <alibabacloud/ccc/model/CreateSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::CreateSkillGroupRequest;

CreateSkillGroupRequest::CreateSkillGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateSkillGroup")
{}

CreateSkillGroupRequest::~CreateSkillGroupRequest()
{}

std::vector<int> CreateSkillGroupRequest::getSkillLevel()const
{
	return skillLevel_;
}

void CreateSkillGroupRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int i = 0; i!= skillLevel.size(); i++)
		setCoreParameter("SkillLevel."+ std::to_string(i), skillLevel.at(i));
}

std::string CreateSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

bool CreateSkillGroupRequest::getAllowPrivateOutboundNumber()const
{
	return allowPrivateOutboundNumber_;
}

void CreateSkillGroupRequest::setAllowPrivateOutboundNumber(bool allowPrivateOutboundNumber)
{
	allowPrivateOutboundNumber_ = allowPrivateOutboundNumber;
	setCoreParameter("AllowPrivateOutboundNumber", allowPrivateOutboundNumber ? "true" : "false");
}

std::vector<std::string> CreateSkillGroupRequest::getOutboundPhoneNumberId()const
{
	return outboundPhoneNumberId_;
}

void CreateSkillGroupRequest::setOutboundPhoneNumberId(const std::vector<std::string>& outboundPhoneNumberId)
{
	outboundPhoneNumberId_ = outboundPhoneNumberId;
	for(int i = 0; i!= outboundPhoneNumberId.size(); i++)
		setCoreParameter("OutboundPhoneNumberId."+ std::to_string(i), std::to_string(outboundPhoneNumberId.at(i)));
}

std::string CreateSkillGroupRequest::getName()const
{
	return name_;
}

void CreateSkillGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateSkillGroupRequest::getDescription()const
{
	return description_;
}

void CreateSkillGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateSkillGroupRequest::getRoutingStrategy()const
{
	return routingStrategy_;
}

void CreateSkillGroupRequest::setRoutingStrategy(const std::string& routingStrategy)
{
	routingStrategy_ = routingStrategy;
	setCoreParameter("RoutingStrategy", std::to_string(routingStrategy));
}

std::vector<std::string> CreateSkillGroupRequest::getUserId()const
{
	return userId_;
}

void CreateSkillGroupRequest::setUserId(const std::vector<std::string>& userId)
{
	userId_ = userId;
	for(int i = 0; i!= userId.size(); i++)
		setCoreParameter("UserId."+ std::to_string(i), std::to_string(userId.at(i)));
}

std::string CreateSkillGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSkillGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

