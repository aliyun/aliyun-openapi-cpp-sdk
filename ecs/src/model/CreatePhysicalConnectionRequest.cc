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

#include <alibabacloud/ecs/model/CreatePhysicalConnectionRequest.h>

using AlibabaCloud::Ecs::Model::CreatePhysicalConnectionRequest;

CreatePhysicalConnectionRequest::CreatePhysicalConnectionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreatePhysicalConnection")
{}

CreatePhysicalConnectionRequest::~CreatePhysicalConnectionRequest()
{}

std::string CreatePhysicalConnectionRequest::getAccessPointId()const
{
	return accessPointId_;
}

void CreatePhysicalConnectionRequest::setAccessPointId(const std::string& accessPointId)
{
	accessPointId_ = accessPointId;
	setCoreParameter("AccessPointId", accessPointId);
}

std::string CreatePhysicalConnectionRequest::getRedundantPhysicalConnectionId()const
{
	return redundantPhysicalConnectionId_;
}

void CreatePhysicalConnectionRequest::setRedundantPhysicalConnectionId(const std::string& redundantPhysicalConnectionId)
{
	redundantPhysicalConnectionId_ = redundantPhysicalConnectionId;
	setCoreParameter("RedundantPhysicalConnectionId", redundantPhysicalConnectionId);
}

std::string CreatePhysicalConnectionRequest::getPeerLocation()const
{
	return peerLocation_;
}

void CreatePhysicalConnectionRequest::setPeerLocation(const std::string& peerLocation)
{
	peerLocation_ = peerLocation;
	setCoreParameter("PeerLocation", peerLocation);
}

bool CreatePhysicalConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreatePhysicalConnectionRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string CreatePhysicalConnectionRequest::getPortType()const
{
	return portType_;
}

void CreatePhysicalConnectionRequest::setPortType(const std::string& portType)
{
	portType_ = portType;
	setCoreParameter("PortType", portType);
}

std::string CreatePhysicalConnectionRequest::getCircuitCode()const
{
	return circuitCode_;
}

void CreatePhysicalConnectionRequest::setCircuitCode(const std::string& circuitCode)
{
	circuitCode_ = circuitCode;
	setCoreParameter("CircuitCode", circuitCode);
}

int CreatePhysicalConnectionRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreatePhysicalConnectionRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreatePhysicalConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void CreatePhysicalConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreatePhysicalConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreatePhysicalConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreatePhysicalConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreatePhysicalConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreatePhysicalConnectionRequest::getDescription()const
{
	return description_;
}

void CreatePhysicalConnectionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreatePhysicalConnectionRequest::getType()const
{
	return type_;
}

void CreatePhysicalConnectionRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

bool CreatePhysicalConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreatePhysicalConnectionRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

std::string CreatePhysicalConnectionRequest::getLineOperator()const
{
	return lineOperator_;
}

void CreatePhysicalConnectionRequest::setLineOperator(const std::string& lineOperator)
{
	lineOperator_ = lineOperator;
	setCoreParameter("LineOperator", lineOperator);
}

std::string CreatePhysicalConnectionRequest::getRegionId()const
{
	return regionId_;
}

void CreatePhysicalConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreatePhysicalConnectionRequest::getName()const
{
	return name_;
}

void CreatePhysicalConnectionRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreatePhysicalConnectionRequest::getUserCidr()const
{
	return userCidr_;
}

void CreatePhysicalConnectionRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setCoreParameter("UserCidr", userCidr);
}

