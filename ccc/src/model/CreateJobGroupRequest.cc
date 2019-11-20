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

#include <alibabacloud/ccc/model/CreateJobGroupRequest.h>

using AlibabaCloud::CCC::Model::CreateJobGroupRequest;

CreateJobGroupRequest::CreateJobGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateJobGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateJobGroupRequest::~CreateJobGroupRequest()
{}

std::string CreateJobGroupRequest::getDescription()const
{
	return description_;
}

void CreateJobGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::vector<std::string> CreateJobGroupRequest::getCallingNumber()const
{
	return callingNumber_;
}

void CreateJobGroupRequest::setCallingNumber(const std::vector<std::string>& callingNumber)
{
	callingNumber_ = callingNumber;
	for(int dep1 = 0; dep1!= callingNumber.size(); dep1++)
		setCoreParameter("CallingNumber."+ std::to_string(dep1), callingNumber.at(dep1));
}

std::string CreateJobGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateJobGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateJobGroupRequest::getStrategyJson()const
{
	return strategyJson_;
}

void CreateJobGroupRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setCoreParameter("StrategyJson", strategyJson);
}

std::string CreateJobGroupRequest::getName()const
{
	return name_;
}

void CreateJobGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateJobGroupRequest::getScenarioId()const
{
	return scenarioId_;
}

void CreateJobGroupRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}

