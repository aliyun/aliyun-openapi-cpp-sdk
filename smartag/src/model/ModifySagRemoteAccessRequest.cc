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

#include <alibabacloud/smartag/model/ModifySagRemoteAccessRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagRemoteAccessRequest;

ModifySagRemoteAccessRequest::ModifySagRemoteAccessRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifySagRemoteAccess")
{}

ModifySagRemoteAccessRequest::~ModifySagRemoteAccessRequest()
{}

long ModifySagRemoteAccessRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySagRemoteAccessRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifySagRemoteAccessRequest::getSerialNumber()const
{
	return serialNumber_;
}

void ModifySagRemoteAccessRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setCoreParameter("SerialNumber", serialNumber);
}

std::string ModifySagRemoteAccessRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySagRemoteAccessRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySagRemoteAccessRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySagRemoteAccessRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifySagRemoteAccessRequest::getRemoteAccessIp()const
{
	return remoteAccessIp_;
}

void ModifySagRemoteAccessRequest::setRemoteAccessIp(const std::string& remoteAccessIp)
{
	remoteAccessIp_ = remoteAccessIp;
	setCoreParameter("RemoteAccessIp", remoteAccessIp);
}

std::string ModifySagRemoteAccessRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifySagRemoteAccessRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long ModifySagRemoteAccessRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySagRemoteAccessRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

