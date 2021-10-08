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

#include <alibabacloud/ecs/model/DisableActivationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DisableActivationResult::DisableActivationResult() :
	ServiceResult()
{}

DisableActivationResult::DisableActivationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DisableActivationResult::~DisableActivationResult()
{}

void DisableActivationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto activationNode = value["Activation"];
	if(!activationNode["CreationTime"].isNull())
		activation_.creationTime = activationNode["CreationTime"].asString();
	if(!activationNode["DeregisteredCount"].isNull())
		activation_.deregisteredCount = std::stoi(activationNode["DeregisteredCount"].asString());
	if(!activationNode["InstanceCount"].isNull())
		activation_.instanceCount = std::stoi(activationNode["InstanceCount"].asString());
	if(!activationNode["Description"].isNull())
		activation_.description = activationNode["Description"].asString();
	if(!activationNode["RegisteredCount"].isNull())
		activation_.registeredCount = std::stoi(activationNode["RegisteredCount"].asString());
	if(!activationNode["InstanceName"].isNull())
		activation_.instanceName = activationNode["InstanceName"].asString();
	if(!activationNode["Disabled"].isNull())
		activation_.disabled = activationNode["Disabled"].asString() == "true";
	if(!activationNode["IpAddressRange"].isNull())
		activation_.ipAddressRange = activationNode["IpAddressRange"].asString();
	if(!activationNode["TimeToLiveInHours"].isNull())
		activation_.timeToLiveInHours = std::stol(activationNode["TimeToLiveInHours"].asString());
	if(!activationNode["ActivationId"].isNull())
		activation_.activationId = activationNode["ActivationId"].asString();

}

DisableActivationResult::Activation DisableActivationResult::getActivation()const
{
	return activation_;
}

