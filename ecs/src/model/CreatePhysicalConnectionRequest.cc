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
{
	setMethod(HttpRequest::Method::Post);
}

CreatePhysicalConnectionRequest::~CreatePhysicalConnectionRequest()
{}

std::string CreatePhysicalConnectionRequest::getAccessPointId()const
{
	return accessPointId_;
}

void CreatePhysicalConnectionRequest::setAccessPointId(const std::string& accessPointId)
{
	accessPointId_ = accessPointId;
	setParameter("AccessPointId", accessPointId);
}

long CreatePhysicalConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreatePhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreatePhysicalConnectionRequest::getPortType()const
{
	return portType_;
}

void CreatePhysicalConnectionRequest::setPortType(const std::string& portType)
{
	portType_ = portType;
	setParameter("PortType", portType);
}

std::string CreatePhysicalConnectionRequest::getCircuitCode()const
{
	return circuitCode_;
}

void CreatePhysicalConnectionRequest::setCircuitCode(const std::string& circuitCode)
{
	circuitCode_ = circuitCode;
	setParameter("CircuitCode", circuitCode);
}

std::string CreatePhysicalConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void CreatePhysicalConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreatePhysicalConnectionRequest::getDescription()const
{
	return description_;
}

void CreatePhysicalConnectionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreatePhysicalConnectionRequest::getType()const
{
	return type_;
}

void CreatePhysicalConnectionRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreatePhysicalConnectionRequest::getRegionId()const
{
	return regionId_;
}

void CreatePhysicalConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreatePhysicalConnectionRequest::getUserCidr()const
{
	return userCidr_;
}

void CreatePhysicalConnectionRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setParameter("UserCidr", userCidr);
}

std::string CreatePhysicalConnectionRequest::getRedundantPhysicalConnectionId()const
{
	return redundantPhysicalConnectionId_;
}

void CreatePhysicalConnectionRequest::setRedundantPhysicalConnectionId(const std::string& redundantPhysicalConnectionId)
{
	redundantPhysicalConnectionId_ = redundantPhysicalConnectionId;
	setParameter("RedundantPhysicalConnectionId", redundantPhysicalConnectionId);
}

std::string CreatePhysicalConnectionRequest::getPeerLocation()const
{
	return peerLocation_;
}

void CreatePhysicalConnectionRequest::setPeerLocation(const std::string& peerLocation)
{
	peerLocation_ = peerLocation;
	setParameter("PeerLocation", peerLocation);
}

int CreatePhysicalConnectionRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreatePhysicalConnectionRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreatePhysicalConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreatePhysicalConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreatePhysicalConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreatePhysicalConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreatePhysicalConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreatePhysicalConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreatePhysicalConnectionRequest::getLineOperator()const
{
	return lineOperator_;
}

void CreatePhysicalConnectionRequest::setLineOperator(const std::string& lineOperator)
{
	lineOperator_ = lineOperator;
	setParameter("LineOperator", lineOperator);
}

std::string CreatePhysicalConnectionRequest::getName()const
{
	return name_;
}

void CreatePhysicalConnectionRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

