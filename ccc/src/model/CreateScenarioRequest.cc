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
{
	setMethod(HttpRequest::Method::Post);
}

CreateScenarioRequest::~CreateScenarioRequest()
{}

std::vector<std::string> CreateScenarioRequest::getSurveysJson()const
{
	return surveysJson_;
}

void CreateScenarioRequest::setSurveysJson(const std::vector<std::string>& surveysJson)
{
	surveysJson_ = surveysJson;
	for(int dep1 = 0; dep1!= surveysJson.size(); dep1++) {
		setParameter("SurveysJson."+ std::to_string(dep1), surveysJson.at(dep1));
	}
}

std::string CreateScenarioRequest::getDescription()const
{
	return description_;
}

void CreateScenarioRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateScenarioRequest::getType()const
{
	return type_;
}

void CreateScenarioRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateScenarioRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateScenarioRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateScenarioRequest::getStrategyJson()const
{
	return strategyJson_;
}

void CreateScenarioRequest::setStrategyJson(const std::string& strategyJson)
{
	strategyJson_ = strategyJson;
	setParameter("StrategyJson", strategyJson);
}

std::string CreateScenarioRequest::getName()const
{
	return name_;
}

void CreateScenarioRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

