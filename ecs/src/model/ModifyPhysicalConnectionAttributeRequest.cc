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

#include <alibabacloud/ecs/model/ModifyPhysicalConnectionAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyPhysicalConnectionAttributeRequest;

ModifyPhysicalConnectionAttributeRequest::ModifyPhysicalConnectionAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyPhysicalConnectionAttribute")
{}

ModifyPhysicalConnectionAttributeRequest::~ModifyPhysicalConnectionAttributeRequest()
{}

std::string ModifyPhysicalConnectionAttributeRequest::getRedundantPhysicalConnectionId()const
{
	return redundantPhysicalConnectionId_;
}

void ModifyPhysicalConnectionAttributeRequest::setRedundantPhysicalConnectionId(const std::string& redundantPhysicalConnectionId)
{
	redundantPhysicalConnectionId_ = redundantPhysicalConnectionId;
	setCoreParameter("RedundantPhysicalConnectionId", redundantPhysicalConnectionId);
}

std::string ModifyPhysicalConnectionAttributeRequest::getPeerLocation()const
{
	return peerLocation_;
}

void ModifyPhysicalConnectionAttributeRequest::setPeerLocation(const std::string& peerLocation)
{
	peerLocation_ = peerLocation;
	setCoreParameter("PeerLocation", peerLocation);
}

long ModifyPhysicalConnectionAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyPhysicalConnectionAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyPhysicalConnectionAttributeRequest::getPortType()const
{
	return portType_;
}

void ModifyPhysicalConnectionAttributeRequest::setPortType(const std::string& portType)
{
	portType_ = portType;
	setCoreParameter("PortType", portType);
}

std::string ModifyPhysicalConnectionAttributeRequest::getCircuitCode()const
{
	return circuitCode_;
}

void ModifyPhysicalConnectionAttributeRequest::setCircuitCode(const std::string& circuitCode)
{
	circuitCode_ = circuitCode;
	setCoreParameter("CircuitCode", circuitCode);
}

int ModifyPhysicalConnectionAttributeRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyPhysicalConnectionAttributeRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string ModifyPhysicalConnectionAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyPhysicalConnectionAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyPhysicalConnectionAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyPhysicalConnectionAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyPhysicalConnectionAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyPhysicalConnectionAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyPhysicalConnectionAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyPhysicalConnectionAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long ModifyPhysicalConnectionAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyPhysicalConnectionAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyPhysicalConnectionAttributeRequest::getLineOperator()const
{
	return lineOperator_;
}

void ModifyPhysicalConnectionAttributeRequest::setLineOperator(const std::string& lineOperator)
{
	lineOperator_ = lineOperator;
	setCoreParameter("LineOperator", lineOperator);
}

std::string ModifyPhysicalConnectionAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyPhysicalConnectionAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyPhysicalConnectionAttributeRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void ModifyPhysicalConnectionAttributeRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setCoreParameter("PhysicalConnectionId", physicalConnectionId);
}

std::string ModifyPhysicalConnectionAttributeRequest::getName()const
{
	return name_;
}

void ModifyPhysicalConnectionAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyPhysicalConnectionAttributeRequest::getUserCidr()const
{
	return userCidr_;
}

void ModifyPhysicalConnectionAttributeRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setCoreParameter("UserCidr", userCidr);
}

