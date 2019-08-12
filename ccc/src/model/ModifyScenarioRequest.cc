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

#include <alibabacloud/ccc/model/ModifyScenarioRequest.h>

using AlibabaCloud::CCC::Model::ModifyScenarioRequest;

ModifyScenarioRequest::ModifyScenarioRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyScenario")
{}

ModifyScenarioRequest::~ModifyScenarioRequest()
{}

std::string ModifyScenarioRequest::getVariables()const
{
	return variables_;
}

void ModifyScenarioRequest::setVariables(const std::string& variables)
{
	variables_ = variables;
	setCoreParameter("Variables", variables);
}

std::string ModifyScenarioRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyScenarioRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyScenarioRequest::getName()const
{
	return name_;
}

void ModifyScenarioRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyScenarioRequest::getDescription()const
{
	return description_;
}

void ModifyScenarioRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyScenarioRequest::getScenarioId()const
{
	return scenarioId_;
}

void ModifyScenarioRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}

