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

#include <alibabacloud/vpc/model/ModifyIPv6TranslatorEntryRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIPv6TranslatorEntryRequest;

ModifyIPv6TranslatorEntryRequest::ModifyIPv6TranslatorEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIPv6TranslatorEntry")
{}

ModifyIPv6TranslatorEntryRequest::~ModifyIPv6TranslatorEntryRequest()
{}

int ModifyIPv6TranslatorEntryRequest::getBackendIpv4Port()const
{
	return backendIpv4Port_;
}

void ModifyIPv6TranslatorEntryRequest::setBackendIpv4Port(int backendIpv4Port)
{
	backendIpv4Port_ = backendIpv4Port;
	setCoreParameter("BackendIpv4Port", std::to_string(backendIpv4Port));
}

std::string ModifyIPv6TranslatorEntryRequest::getAclId()const
{
	return aclId_;
}

void ModifyIPv6TranslatorEntryRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

long ModifyIPv6TranslatorEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIPv6TranslatorEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyIPv6TranslatorEntryRequest::getIpv6TranslatorEntryId()const
{
	return ipv6TranslatorEntryId_;
}

void ModifyIPv6TranslatorEntryRequest::setIpv6TranslatorEntryId(const std::string& ipv6TranslatorEntryId)
{
	ipv6TranslatorEntryId_ = ipv6TranslatorEntryId;
	setCoreParameter("Ipv6TranslatorEntryId", ipv6TranslatorEntryId);
}

std::string ModifyIPv6TranslatorEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIPv6TranslatorEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyIPv6TranslatorEntryRequest::getEntryName()const
{
	return entryName_;
}

void ModifyIPv6TranslatorEntryRequest::setEntryName(const std::string& entryName)
{
	entryName_ = entryName;
	setCoreParameter("EntryName", entryName);
}

std::string ModifyIPv6TranslatorEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIPv6TranslatorEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyIPv6TranslatorEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIPv6TranslatorEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyIPv6TranslatorEntryRequest::getAclStatus()const
{
	return aclStatus_;
}

void ModifyIPv6TranslatorEntryRequest::setAclStatus(const std::string& aclStatus)
{
	aclStatus_ = aclStatus;
	setCoreParameter("AclStatus", aclStatus);
}

int ModifyIPv6TranslatorEntryRequest::getEntryBandwidth()const
{
	return entryBandwidth_;
}

void ModifyIPv6TranslatorEntryRequest::setEntryBandwidth(int entryBandwidth)
{
	entryBandwidth_ = entryBandwidth;
	setCoreParameter("EntryBandwidth", std::to_string(entryBandwidth));
}

std::string ModifyIPv6TranslatorEntryRequest::getAclType()const
{
	return aclType_;
}

void ModifyIPv6TranslatorEntryRequest::setAclType(const std::string& aclType)
{
	aclType_ = aclType;
	setCoreParameter("AclType", aclType);
}

int ModifyIPv6TranslatorEntryRequest::getAllocateIpv6Port()const
{
	return allocateIpv6Port_;
}

void ModifyIPv6TranslatorEntryRequest::setAllocateIpv6Port(int allocateIpv6Port)
{
	allocateIpv6Port_ = allocateIpv6Port;
	setCoreParameter("AllocateIpv6Port", std::to_string(allocateIpv6Port));
}

std::string ModifyIPv6TranslatorEntryRequest::getEntryDescription()const
{
	return entryDescription_;
}

void ModifyIPv6TranslatorEntryRequest::setEntryDescription(const std::string& entryDescription)
{
	entryDescription_ = entryDescription;
	setCoreParameter("EntryDescription", entryDescription);
}

std::string ModifyIPv6TranslatorEntryRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIPv6TranslatorEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyIPv6TranslatorEntryRequest::getBackendIpv4Addr()const
{
	return backendIpv4Addr_;
}

void ModifyIPv6TranslatorEntryRequest::setBackendIpv4Addr(const std::string& backendIpv4Addr)
{
	backendIpv4Addr_ = backendIpv4Addr;
	setCoreParameter("BackendIpv4Addr", backendIpv4Addr);
}

std::string ModifyIPv6TranslatorEntryRequest::getTransProtocol()const
{
	return transProtocol_;
}

void ModifyIPv6TranslatorEntryRequest::setTransProtocol(const std::string& transProtocol)
{
	transProtocol_ = transProtocol;
	setCoreParameter("TransProtocol", transProtocol);
}

