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

#include <alibabacloud/vpc/model/ModifyVirtualBorderRouterAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVirtualBorderRouterAttributeRequest;

ModifyVirtualBorderRouterAttributeRequest::ModifyVirtualBorderRouterAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyVirtualBorderRouterAttribute")
{}

ModifyVirtualBorderRouterAttributeRequest::~ModifyVirtualBorderRouterAttributeRequest()
{}

long ModifyVirtualBorderRouterAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getCircuitCode()const
{
	return circuitCode_;
}

void ModifyVirtualBorderRouterAttributeRequest::setCircuitCode(const std::string& circuitCode)
{
	circuitCode_ = circuitCode;
	setCoreParameter("CircuitCode", std::to_string(circuitCode));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getAssociatedPhysicalConnections()const
{
	return associatedPhysicalConnections_;
}

void ModifyVirtualBorderRouterAttributeRequest::setAssociatedPhysicalConnections(const std::string& associatedPhysicalConnections)
{
	associatedPhysicalConnections_ = associatedPhysicalConnections;
	setCoreParameter("AssociatedPhysicalConnections", std::to_string(associatedPhysicalConnections));
}

int ModifyVirtualBorderRouterAttributeRequest::getVlanId()const
{
	return vlanId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setVlanId(int vlanId)
{
	vlanId_ = vlanId;
	setCoreParameter("VlanId", vlanId);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVirtualBorderRouterAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyVirtualBorderRouterAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVirtualBorderRouterAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyVirtualBorderRouterAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getVbrId()const
{
	return vbrId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
	setCoreParameter("VbrId", std::to_string(vbrId));
}

long ModifyVirtualBorderRouterAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long ModifyVirtualBorderRouterAttributeRequest::getMinRxInterval()const
{
	return minRxInterval_;
}

void ModifyVirtualBorderRouterAttributeRequest::setMinRxInterval(long minRxInterval)
{
	minRxInterval_ = minRxInterval;
	setCoreParameter("MinRxInterval", minRxInterval);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getPeerGatewayIp()const
{
	return peerGatewayIp_;
}

void ModifyVirtualBorderRouterAttributeRequest::setPeerGatewayIp(const std::string& peerGatewayIp)
{
	peerGatewayIp_ = peerGatewayIp;
	setCoreParameter("PeerGatewayIp", std::to_string(peerGatewayIp));
}

long ModifyVirtualBorderRouterAttributeRequest::getDetectMultiplier()const
{
	return detectMultiplier_;
}

void ModifyVirtualBorderRouterAttributeRequest::setDetectMultiplier(long detectMultiplier)
{
	detectMultiplier_ = detectMultiplier;
	setCoreParameter("DetectMultiplier", detectMultiplier);
}

std::string ModifyVirtualBorderRouterAttributeRequest::getPeeringSubnetMask()const
{
	return peeringSubnetMask_;
}

void ModifyVirtualBorderRouterAttributeRequest::setPeeringSubnetMask(const std::string& peeringSubnetMask)
{
	peeringSubnetMask_ = peeringSubnetMask;
	setCoreParameter("PeeringSubnetMask", std::to_string(peeringSubnetMask));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVirtualBorderRouterAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getName()const
{
	return name_;
}

void ModifyVirtualBorderRouterAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string ModifyVirtualBorderRouterAttributeRequest::getLocalGatewayIp()const
{
	return localGatewayIp_;
}

void ModifyVirtualBorderRouterAttributeRequest::setLocalGatewayIp(const std::string& localGatewayIp)
{
	localGatewayIp_ = localGatewayIp;
	setCoreParameter("LocalGatewayIp", std::to_string(localGatewayIp));
}

long ModifyVirtualBorderRouterAttributeRequest::getMinTxInterval()const
{
	return minTxInterval_;
}

void ModifyVirtualBorderRouterAttributeRequest::setMinTxInterval(long minTxInterval)
{
	minTxInterval_ = minTxInterval;
	setCoreParameter("MinTxInterval", minTxInterval);
}

