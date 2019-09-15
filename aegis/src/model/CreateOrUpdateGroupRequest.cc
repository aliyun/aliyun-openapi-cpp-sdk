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

#include <alibabacloud/aegis/model/CreateOrUpdateGroupRequest.h>

using AlibabaCloud::Aegis::Model::CreateOrUpdateGroupRequest;

CreateOrUpdateGroupRequest::CreateOrUpdateGroupRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateOrUpdateGroup")
{}

CreateOrUpdateGroupRequest::~CreateOrUpdateGroupRequest()
{}

std::string CreateOrUpdateGroupRequest::getDescription()const
{
	return description_;
}

void CreateOrUpdateGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateOrUpdateGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrUpdateGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long CreateOrUpdateGroupRequest::getId()const
{
	return id_;
}

void CreateOrUpdateGroupRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string CreateOrUpdateGroupRequest::getLang()const
{
	return lang_;
}

void CreateOrUpdateGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateOrUpdateGroupRequest::getGroupName()const
{
	return groupName_;
}

void CreateOrUpdateGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string CreateOrUpdateGroupRequest::getRuleIds()const
{
	return ruleIds_;
}

void CreateOrUpdateGroupRequest::setRuleIds(const std::string& ruleIds)
{
	ruleIds_ = ruleIds;
	setCoreParameter("RuleIds", ruleIds);
}

std::string CreateOrUpdateGroupRequest::getMachineGroupIds()const
{
	return machineGroupIds_;
}

void CreateOrUpdateGroupRequest::setMachineGroupIds(const std::string& machineGroupIds)
{
	machineGroupIds_ = machineGroupIds;
	setCoreParameter("MachineGroupIds", machineGroupIds);
}

