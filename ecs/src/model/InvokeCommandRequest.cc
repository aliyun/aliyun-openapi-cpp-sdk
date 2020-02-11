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

#include <alibabacloud/ecs/model/InvokeCommandRequest.h>

using AlibabaCloud::Ecs::Model::InvokeCommandRequest;

InvokeCommandRequest::InvokeCommandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "InvokeCommand")
{
	setMethod(HttpRequest::Method::Post);
}

InvokeCommandRequest::~InvokeCommandRequest()
{}

long InvokeCommandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void InvokeCommandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string InvokeCommandRequest::getCommandId()const
{
	return commandId_;
}

void InvokeCommandRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setParameter("CommandId", commandId);
}

std::string InvokeCommandRequest::getFrequency()const
{
	return frequency_;
}

void InvokeCommandRequest::setFrequency(const std::string& frequency)
{
	frequency_ = frequency;
	setParameter("Frequency", frequency);
}

std::string InvokeCommandRequest::getRegionId()const
{
	return regionId_;
}

void InvokeCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool InvokeCommandRequest::getTimed()const
{
	return timed_;
}

void InvokeCommandRequest::setTimed(bool timed)
{
	timed_ = timed;
	setParameter("Timed", timed ? "true" : "false");
}

std::string InvokeCommandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void InvokeCommandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string InvokeCommandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void InvokeCommandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long InvokeCommandRequest::getOwnerId()const
{
	return ownerId_;
}

void InvokeCommandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> InvokeCommandRequest::getInstanceId()const
{
	return instanceId_;
}

void InvokeCommandRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

std::map<std::string, std::string> InvokeCommandRequest::getParameters()const
{
	return parameters_;
}

void InvokeCommandRequest::setParameters(const std::map<std::string, std::string>& parameters)
{
	parameters_ = parameters;
	setJsonParameters("Parameters", parameters);
}

