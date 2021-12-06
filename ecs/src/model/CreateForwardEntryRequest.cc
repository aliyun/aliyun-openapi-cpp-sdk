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

#include <alibabacloud/ecs/model/CreateForwardEntryRequest.h>

using AlibabaCloud::Ecs::Model::CreateForwardEntryRequest;

CreateForwardEntryRequest::CreateForwardEntryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateForwardEntry")
{
	setMethod(HttpRequest::Method::Post);
}

CreateForwardEntryRequest::~CreateForwardEntryRequest()
{}

long CreateForwardEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateForwardEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateForwardEntryRequest::getForwardTableId()const
{
	return forwardTableId_;
}

void CreateForwardEntryRequest::setForwardTableId(const std::string& forwardTableId)
{
	forwardTableId_ = forwardTableId;
	setParameter("ForwardTableId", forwardTableId);
}

std::string CreateForwardEntryRequest::getInternalIp()const
{
	return internalIp_;
}

void CreateForwardEntryRequest::setInternalIp(const std::string& internalIp)
{
	internalIp_ = internalIp;
	setParameter("InternalIp", internalIp);
}

std::string CreateForwardEntryRequest::getRegionId()const
{
	return regionId_;
}

void CreateForwardEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateForwardEntryRequest::getExternalIp()const
{
	return externalIp_;
}

void CreateForwardEntryRequest::setExternalIp(const std::string& externalIp)
{
	externalIp_ = externalIp;
	setParameter("ExternalIp", externalIp);
}

std::string CreateForwardEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateForwardEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateForwardEntryRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void CreateForwardEntryRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string CreateForwardEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateForwardEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateForwardEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateForwardEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateForwardEntryRequest::getInternalPort()const
{
	return internalPort_;
}

void CreateForwardEntryRequest::setInternalPort(const std::string& internalPort)
{
	internalPort_ = internalPort;
	setParameter("InternalPort", internalPort);
}

std::string CreateForwardEntryRequest::getExternalPort()const
{
	return externalPort_;
}

void CreateForwardEntryRequest::setExternalPort(const std::string& externalPort)
{
	externalPort_ = externalPort;
	setParameter("ExternalPort", externalPort);
}

