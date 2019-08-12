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

#include <alibabacloud/ccc/model/CreateScenarioRequest.h>

using AlibabaCloud::CCC::Model::CreateScenarioRequest;

CreateScenarioRequest::CreateScenarioRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateScenario")
{}

CreateScenarioRequest::~CreateScenarioRequest()
{}

std::string CreateScenarioRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateScenarioRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::vector<std::string> CreateScenarioRequest::getSurveysJson()const
{
	return surveysJson_;
}

void CreateScenarioRequest::setSurveysJson(const std::vector<std::string>& surveysJson)
{
	surveysJson_ = surveysJson;
	for(int i = 0; i!= surveysJson.size(); i++)
		setCoreParameter("SurveysJson."+ std::to_string(i), std::to_string(surveysJson.at(i)));
}

std::string CreateScenarioRequest::getStrategyJson()const
{
	return strategyJson_;
}

void CreateScenarioRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setCoreParameter("StrategyJson", std::to_string(strategyJson));
}

std::string CreateScenarioRequest::getName()const
{
	return name_;
}

void CreateScenarioRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateScenarioRequest::getDescription()const
{
	return description_;
}

void CreateScenarioRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateScenarioRequest::getType()const
{
	return type_;
}

void CreateScenarioRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

