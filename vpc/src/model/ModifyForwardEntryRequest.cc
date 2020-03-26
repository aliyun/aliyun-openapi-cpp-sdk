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

#include <alibabacloud/vpc/model/ModifyForwardEntryRequest.h>

using AlibabaCloud::Vpc::Model::ModifyForwardEntryRequest;

ModifyForwardEntryRequest::ModifyForwardEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyForwardEntry")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyForwardEntryRequest::~ModifyForwardEntryRequest()
{}

long ModifyForwardEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyForwardEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyForwardEntryRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyForwardEntryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyForwardEntryRequest::getForwardTableId()const
{
	return forwardTableId_;
}

void ModifyForwardEntryRequest::setForwardTableId(const std::string& forwardTableId)
{
	forwardTableId_ = forwardTableId;
	setParameter("ForwardTableId", forwardTableId);
}

std::string ModifyForwardEntryRequest::getInternalIp()const
{
	return internalIp_;
}

void ModifyForwardEntryRequest::setInternalIp(const std::string& internalIp)
{
	internalIp_ = internalIp;
	setParameter("InternalIp", internalIp);
}

std::string ModifyForwardEntryRequest::getRegionId()const
{
	return regionId_;
}

void ModifyForwardEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyForwardEntryRequest::getForwardEntryId()const
{
	return forwardEntryId_;
}

void ModifyForwardEntryRequest::setForwardEntryId(const std::string& forwardEntryId)
{
	forwardEntryId_ = forwardEntryId;
	setParameter("ForwardEntryId", forwardEntryId);
}

std::string ModifyForwardEntryRequest::getExternalIp()const
{
	return externalIp_;
}

void ModifyForwardEntryRequest::setExternalIp(const std::string& externalIp)
{
	externalIp_ = externalIp;
	setParameter("ExternalIp", externalIp);
}

std::string ModifyForwardEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyForwardEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyForwardEntryRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifyForwardEntryRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string ModifyForwardEntryRequest::getForwardEntryName()const
{
	return forwardEntryName_;
}

void ModifyForwardEntryRequest::setForwardEntryName(const std::string& forwardEntryName)
{
	forwardEntryName_ = forwardEntryName;
	setParameter("ForwardEntryName", forwardEntryName);
}

std::string ModifyForwardEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyForwardEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyForwardEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyForwardEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyForwardEntryRequest::getInternalPort()const
{
	return internalPort_;
}

void ModifyForwardEntryRequest::setInternalPort(const std::string& internalPort)
{
	internalPort_ = internalPort;
	setParameter("InternalPort", internalPort);
}

std::string ModifyForwardEntryRequest::getExternalPort()const
{
	return externalPort_;
}

void ModifyForwardEntryRequest::setExternalPort(const std::string& externalPort)
{
	externalPort_ = externalPort;
	setParameter("ExternalPort", externalPort);
}

