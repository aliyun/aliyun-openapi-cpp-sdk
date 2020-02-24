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

#include <alibabacloud/outboundbot/model/ModifyJobGroupRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyJobGroupRequest;

ModifyJobGroupRequest::ModifyJobGroupRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ModifyJobGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyJobGroupRequest::~ModifyJobGroupRequest()
{}

std::string ModifyJobGroupRequest::getDescription()const
{
	return description_;
}

void ModifyJobGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::vector<std::string> ModifyJobGroupRequest::getCallingNumber()const
{
	return callingNumber_;
}

void ModifyJobGroupRequest::setCallingNumber(const std::vector<std::string>& callingNumber)
{
	callingNumber_ = callingNumber;
	for(int dep1 = 0; dep1!= callingNumber.size(); dep1++) {
		setParameter("CallingNumber."+ std::to_string(dep1), callingNumber.at(dep1));
	}
}

std::string ModifyJobGroupRequest::getScriptId()const
{
	return scriptId_;
}

void ModifyJobGroupRequest::setScriptId(const std::string& scriptId)
{
	scriptId_ = scriptId;
	setParameter("ScriptId", scriptId);
}

std::string ModifyJobGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyJobGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyJobGroupRequest::getStrategyJson()const
{
	return strategyJson_;
}

void ModifyJobGroupRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setParameter("StrategyJson", strategyJson);
}

std::string ModifyJobGroupRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void ModifyJobGroupRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

std::string ModifyJobGroupRequest::getName()const
{
	return name_;
}

void ModifyJobGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyJobGroupRequest::getScenarioId()const
{
	return scenarioId_;
}

void ModifyJobGroupRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setParameter("ScenarioId", scenarioId);
}

