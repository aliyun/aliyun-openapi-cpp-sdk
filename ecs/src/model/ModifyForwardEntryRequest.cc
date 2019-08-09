<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/ModifyForwardEntryRequest.h>

using AlibabaCloud::Ecs::Model::ModifyForwardEntryRequest;

ModifyForwardEntryRequest::ModifyForwardEntryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyForwardEntry")
{}

ModifyForwardEntryRequest::~ModifyForwardEntryRequest()
{}

long ModifyForwardEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyForwardEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyForwardEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyForwardEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyForwardEntryRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifyForwardEntryRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", ipProtocol);
}

std::string ModifyForwardEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyForwardEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyForwardEntryRequest::getForwardTableId()const
{
	return forwardTableId_;
}

void ModifyForwardEntryRequest::setForwardTableId(const std::string& forwardTableId)
{
	forwardTableId_ = forwardTableId;
	setCoreParameter("ForwardTableId", forwardTableId);
}

long ModifyForwardEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyForwardEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyForwardEntryRequest::getInternalIp()const
{
	return internalIp_;
}

void ModifyForwardEntryRequest::setInternalIp(const std::string& internalIp)
{
	internalIp_ = internalIp;
	setCoreParameter("InternalIp", internalIp);
}

std::string ModifyForwardEntryRequest::getRegionId()const
{
	return regionId_;
}

void ModifyForwardEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyForwardEntryRequest::getForwardEntryId()const
{
	return forwardEntryId_;
}

void ModifyForwardEntryRequest::setForwardEntryId(const std::string& forwardEntryId)
{
	forwardEntryId_ = forwardEntryId;
	setCoreParameter("ForwardEntryId", forwardEntryId);
}

std::string ModifyForwardEntryRequest::getInternalPort()const
{
	return internalPort_;
}

void ModifyForwardEntryRequest::setInternalPort(const std::string& internalPort)
{
	internalPort_ = internalPort;
	setCoreParameter("InternalPort", internalPort);
}

std::string ModifyForwardEntryRequest::getExternalIp()const
{
	return externalIp_;
}

void ModifyForwardEntryRequest::setExternalIp(const std::string& externalIp)
{
	externalIp_ = externalIp;
	setCoreParameter("ExternalIp", externalIp);
}

std::string ModifyForwardEntryRequest::getExternalPort()const
{
	return externalPort_;
}

void ModifyForwardEntryRequest::setExternalPort(const std::string& externalPort)
{
	externalPort_ = externalPort;
	setCoreParameter("ExternalPort", externalPort);
}

=======
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

#include <alibabacloud/ecs/model/ModifyForwardEntryRequest.h>

using AlibabaCloud::Ecs::Model::ModifyForwardEntryRequest;

ModifyForwardEntryRequest::ModifyForwardEntryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyForwardEntry")
{}

ModifyForwardEntryRequest::~ModifyForwardEntryRequest()
{}

long ModifyForwardEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyForwardEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyForwardEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyForwardEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyForwardEntryRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifyForwardEntryRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", ipProtocol);
}

std::string ModifyForwardEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyForwardEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyForwardEntryRequest::getForwardTableId()const
{
	return forwardTableId_;
}

void ModifyForwardEntryRequest::setForwardTableId(const std::string& forwardTableId)
{
	forwardTableId_ = forwardTableId;
	setCoreParameter("ForwardTableId", forwardTableId);
}

long ModifyForwardEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyForwardEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyForwardEntryRequest::getInternalIp()const
{
	return internalIp_;
}

void ModifyForwardEntryRequest::setInternalIp(const std::string& internalIp)
{
	internalIp_ = internalIp;
	setCoreParameter("InternalIp", internalIp);
}

std::string ModifyForwardEntryRequest::getRegionId()const
{
	return regionId_;
}

void ModifyForwardEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyForwardEntryRequest::getForwardEntryId()const
{
	return forwardEntryId_;
}

void ModifyForwardEntryRequest::setForwardEntryId(const std::string& forwardEntryId)
{
	forwardEntryId_ = forwardEntryId;
	setCoreParameter("ForwardEntryId", forwardEntryId);
}

std::string ModifyForwardEntryRequest::getInternalPort()const
{
	return internalPort_;
}

void ModifyForwardEntryRequest::setInternalPort(const std::string& internalPort)
{
	internalPort_ = internalPort;
	setCoreParameter("InternalPort", internalPort);
}

std::string ModifyForwardEntryRequest::getExternalIp()const
{
	return externalIp_;
}

void ModifyForwardEntryRequest::setExternalIp(const std::string& externalIp)
{
	externalIp_ = externalIp;
	setCoreParameter("ExternalIp", externalIp);
}

std::string ModifyForwardEntryRequest::getExternalPort()const
{
	return externalPort_;
}

void ModifyForwardEntryRequest::setExternalPort(const std::string& externalPort)
{
	externalPort_ = externalPort;
	setCoreParameter("ExternalPort", externalPort);
}

>>>>>>> master
