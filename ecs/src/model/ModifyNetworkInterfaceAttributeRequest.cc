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

#include <alibabacloud/ecs/model/ModifyNetworkInterfaceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyNetworkInterfaceAttributeRequest;

ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyNetworkInterfaceAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyNetworkInterfaceAttributeRequest::~ModifyNetworkInterfaceAttributeRequest()
{}

int ModifyNetworkInterfaceAttributeRequest::getQueueNumber()const
{
	return queueNumber_;
}

void ModifyNetworkInterfaceAttributeRequest::setQueueNumber(int queueNumber)
{
	queueNumber_ = queueNumber;
	setParameter("QueueNumber", std::to_string(queueNumber));
}

long ModifyNetworkInterfaceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNetworkInterfaceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ModifyNetworkInterfaceAttributeRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyNetworkInterfaceAttributeRequest::setSecurityGroupId(const std::vector<std::string>& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	for(int dep1 = 0; dep1!= securityGroupId.size(); dep1++) {
		setParameter("SecurityGroupId."+ std::to_string(dep1), securityGroupId.at(dep1));
	}
}

std::string ModifyNetworkInterfaceAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyNetworkInterfaceAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyNetworkInterfaceAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNetworkInterfaceAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceName(const std::string& networkInterfaceName)
{
	networkInterfaceName_ = networkInterfaceName;
	setParameter("NetworkInterfaceName", networkInterfaceName);
}

std::string ModifyNetworkInterfaceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNetworkInterfaceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNetworkInterfaceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNetworkInterfaceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyNetworkInterfaceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNetworkInterfaceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setParameter("NetworkInterfaceId", networkInterfaceId);
}

