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

#include <alibabacloud/ecs/model/DeregisterManagedInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DeregisterManagedInstanceResult::DeregisterManagedInstanceResult() :
	ServiceResult()
{}

DeregisterManagedInstanceResult::DeregisterManagedInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeregisterManagedInstanceResult::~DeregisterManagedInstanceResult()
{}

void DeregisterManagedInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["LastInvokedTime"].isNull())
		instance_.lastInvokedTime = instanceNode["LastInvokedTime"].asString();
	if(!instanceNode["InternetIp"].isNull())
		instance_.internetIp = instanceNode["InternetIp"].asString();
	if(!instanceNode["Hostname"].isNull())
		instance_.hostname = instanceNode["Hostname"].asString();
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["ActivationId"].isNull())
		instance_.activationId = instanceNode["ActivationId"].asString();
	if(!instanceNode["IntranetIp"].isNull())
		instance_.intranetIp = instanceNode["IntranetIp"].asString();
	if(!instanceNode["AgentVersion"].isNull())
		instance_.agentVersion = instanceNode["AgentVersion"].asString();
	if(!instanceNode["RegistrationTime"].isNull())
		instance_.registrationTime = instanceNode["RegistrationTime"].asString();
	if(!instanceNode["InstanceName"].isNull())
		instance_.instanceName = instanceNode["InstanceName"].asString();
	if(!instanceNode["OsType"].isNull())
		instance_.osType = instanceNode["OsType"].asString();
	if(!instanceNode["OsVersion"].isNull())
		instance_.osVersion = instanceNode["OsVersion"].asString();
	if(!instanceNode["InvocationCount"].isNull())
		instance_.invocationCount = std::stol(instanceNode["InvocationCount"].asString());
	if(!instanceNode["MachineId"].isNull())
		instance_.machineId = instanceNode["MachineId"].asString();
	if(!instanceNode["ResourceGroupId"].isNull())
		instance_.resourceGroupId = instanceNode["ResourceGroupId"].asString();

}

DeregisterManagedInstanceResult::Instance DeregisterManagedInstanceResult::getInstance()const
{
	return instance_;
}

