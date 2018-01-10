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

#include <alibabacloud/vpc/model/CreatePhysicalConnectionNewRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreatePhysicalConnectionNewRequest::CreatePhysicalConnectionNewRequest() :
	VpcRequest("CreatePhysicalConnectionNew")
{}

CreatePhysicalConnectionNewRequest::~CreatePhysicalConnectionNewRequest()
{}

std::string CreatePhysicalConnectionNewRequest::getAccessPointId()const
{
	return accessPointId_;
}

void CreatePhysicalConnectionNewRequest::setAccessPointId(const std::string& accessPointId)
{
	accessPointId_ = accessPointId;
	setParameter("AccessPointId", accessPointId);
}

std::string CreatePhysicalConnectionNewRequest::getRedundantPhysicalConnectionId()const
{
	return redundantPhysicalConnectionId_;
}

void CreatePhysicalConnectionNewRequest::setRedundantPhysicalConnectionId(const std::string& redundantPhysicalConnectionId)
{
	redundantPhysicalConnectionId_ = redundantPhysicalConnectionId;
	setParameter("RedundantPhysicalConnectionId", redundantPhysicalConnectionId);
}

std::string CreatePhysicalConnectionNewRequest::getPeerLocation()const
{
	return peerLocation_;
}

void CreatePhysicalConnectionNewRequest::setPeerLocation(const std::string& peerLocation)
{
	peerLocation_ = peerLocation;
	setParameter("PeerLocation", peerLocation);
}

long CreatePhysicalConnectionNewRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreatePhysicalConnectionNewRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreatePhysicalConnectionNewRequest::getPortType()const
{
	return portType_;
}

void CreatePhysicalConnectionNewRequest::setPortType(const std::string& portType)
{
	portType_ = portType;
	setParameter("PortType", portType);
}

std::string CreatePhysicalConnectionNewRequest::getCircuitCode()const
{
	return circuitCode_;
}

void CreatePhysicalConnectionNewRequest::setCircuitCode(const std::string& circuitCode)
{
	circuitCode_ = circuitCode;
	setParameter("CircuitCode", circuitCode);
}

int CreatePhysicalConnectionNewRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreatePhysicalConnectionNewRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreatePhysicalConnectionNewRequest::getClientToken()const
{
	return clientToken_;
}

void CreatePhysicalConnectionNewRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreatePhysicalConnectionNewRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreatePhysicalConnectionNewRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreatePhysicalConnectionNewRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreatePhysicalConnectionNewRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreatePhysicalConnectionNewRequest::getDescription()const
{
	return description_;
}

void CreatePhysicalConnectionNewRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreatePhysicalConnectionNewRequest::getInterfaceName()const
{
	return interfaceName_;
}

void CreatePhysicalConnectionNewRequest::setInterfaceName(const std::string& interfaceName)
{
	interfaceName_ = interfaceName;
	setParameter("InterfaceName", interfaceName);
}

std::string CreatePhysicalConnectionNewRequest::getType()const
{
	return type_;
}

void CreatePhysicalConnectionNewRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long CreatePhysicalConnectionNewRequest::getOwnerId()const
{
	return ownerId_;
}

void CreatePhysicalConnectionNewRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreatePhysicalConnectionNewRequest::getLineOperator()const
{
	return lineOperator_;
}

void CreatePhysicalConnectionNewRequest::setLineOperator(const std::string& lineOperator)
{
	lineOperator_ = lineOperator;
	setParameter("LineOperator", lineOperator);
}

std::string CreatePhysicalConnectionNewRequest::getRegionId()const
{
	return regionId_;
}

void CreatePhysicalConnectionNewRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreatePhysicalConnectionNewRequest::getName()const
{
	return name_;
}

void CreatePhysicalConnectionNewRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreatePhysicalConnectionNewRequest::getDeviceName()const
{
	return deviceName_;
}

void CreatePhysicalConnectionNewRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

