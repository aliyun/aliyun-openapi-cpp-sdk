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
{
	setMethod(HttpRequest::Method::Post);
}

CreateSkillGroupRequest::~CreateSkillGroupRequest()
{}

bool CreateSkillGroupRequest::getAllowPrivateOutboundNumber()const
{
	return allowPrivateOutboundNumber_;
}

void CreateSkillGroupRequest::setAllowPrivateOutboundNumber(bool allowPrivateOutboundNumber)
{
	allowPrivateOutboundNumber_ = allowPrivateOutboundNumber;
	setParameter("AllowPrivateOutboundNumber", allowPrivateOutboundNumber ? "true" : "false");
}

std::string CreateSkillGroupRequest::getDescription()const
{
	return description_;
}

void CreateSkillGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateSkillGroupRequest::getRoutingStrategy()const
{
	return routingStrategy_;
}

void CreateSkillGroupRequest::setRoutingStrategy(const std::string& routingStrategy)
{
	routingStrategy_ = routingStrategy;
	setParameter("RoutingStrategy", routingStrategy);
}

std::vector<std::string> CreateSkillGroupRequest::getUserId()const
{
	return userId_;
}

void CreateSkillGroupRequest::setUserId(const std::vector<std::string>& userId)
{
	userId_ = userId;
	for(int dep1 = 0; dep1!= userId.size(); dep1++) {
		setParameter("UserId."+ std::to_string(dep1), userId.at(dep1));
	}
}

std::string CreateSkillGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSkillGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<int> CreateSkillGroupRequest::getSkillLevel()const
{
	return skillLevel_;
}

void CreateSkillGroupRequest::setSkillLevel(const std::vector<int>& skillLevel)
{
	skillLevel_ = skillLevel;
	for(int dep1 = 0; dep1!= skillLevel.size(); dep1++) {
		setParameter("SkillLevel."+ std::to_string(dep1), std::to_string(skillLevel.at(dep1)));
	}
}

std::string CreateSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> CreateSkillGroupRequest::getOutboundPhoneNumberId()const
{
	return outboundPhoneNumberId_;
}

void CreateSkillGroupRequest::setOutboundPhoneNumberId(const std::vector<std::string>& outboundPhoneNumberId)
{
	outboundPhoneNumberId_ = outboundPhoneNumberId;
	for(int dep1 = 0; dep1!= outboundPhoneNumberId.size(); dep1++) {
		setParameter("OutboundPhoneNumberId."+ std::to_string(dep1), outboundPhoneNumberId.at(dep1));
	}
}

std::string CreateSkillGroupRequest::getName()const
{
	return name_;
}

void CreateSkillGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

