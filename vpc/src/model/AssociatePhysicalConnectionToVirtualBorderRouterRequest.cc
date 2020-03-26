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

#include <alibabacloud/vpc/model/AssociatePhysicalConnectionToVirtualBorderRouterRequest.h>

using AlibabaCloud::Vpc::Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest;

AssociatePhysicalConnectionToVirtualBorderRouterRequest::AssociatePhysicalConnectionToVirtualBorderRouterRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AssociatePhysicalConnectionToVirtualBorderRouter")
{
	setMethod(HttpRequest::Method::Post);
}

AssociatePhysicalConnectionToVirtualBorderRouterRequest::~AssociatePhysicalConnectionToVirtualBorderRouterRequest()
{}

long AssociatePhysicalConnectionToVirtualBorderRouterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getCircuitCode()const
{
	return circuitCode_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setCircuitCode(const std::string& circuitCode)
{
	circuitCode_ = circuitCode;
	setParameter("CircuitCode", circuitCode);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getVlanId()const
{
	return vlanId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
	setParameter("VlanId", vlanId);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getClientToken()const
{
	return clientToken_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getVbrId()const
{
	return vbrId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
	setParameter("VbrId", vbrId);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getPeerGatewayIp()const
{
	return peerGatewayIp_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setPeerGatewayIp(const std::string& peerGatewayIp)
{
	peerGatewayIp_ = peerGatewayIp;
	setParameter("PeerGatewayIp", peerGatewayIp);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getPeeringSubnetMask()const
{
	return peeringSubnetMask_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setPeeringSubnetMask(const std::string& peeringSubnetMask)
{
	peeringSubnetMask_ = peeringSubnetMask;
	setParameter("PeeringSubnetMask", peeringSubnetMask);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getRegionId()const
{
	return regionId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getLocalGatewayIp()const
{
	return localGatewayIp_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setLocalGatewayIp(const std::string& localGatewayIp)
{
	localGatewayIp_ = localGatewayIp;
	setParameter("LocalGatewayIp", localGatewayIp);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AssociatePhysicalConnectionToVirtualBorderRouterRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AssociatePhysicalConnectionToVirtualBorderRouterRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void AssociatePhysicalConnectionToVirtualBorderRouterRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setParameter("PhysicalConnectionId", physicalConnectionId);
}

