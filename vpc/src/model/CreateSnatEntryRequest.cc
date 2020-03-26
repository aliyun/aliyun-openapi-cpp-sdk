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

#include <alibabacloud/vpc/model/CreateSnatEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateSnatEntryRequest;

CreateSnatEntryRequest::CreateSnatEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateSnatEntry")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSnatEntryRequest::~CreateSnatEntryRequest()
{}

long CreateSnatEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSnatEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSnatEntryRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSnatEntryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSnatEntryRequest::getSourceCIDR()const
{
	return sourceCIDR_;
}

void CreateSnatEntryRequest::setSourceCIDR(const std::string& sourceCIDR)
{
	sourceCIDR_ = sourceCIDR;
	setParameter("SourceCIDR", sourceCIDR);
}

std::string CreateSnatEntryRequest::getSnatIp()const
{
	return snatIp_;
}

void CreateSnatEntryRequest::setSnatIp(const std::string& snatIp)
{
	snatIp_ = snatIp;
	setParameter("SnatIp", snatIp);
}

std::string CreateSnatEntryRequest::getSourceVSwitchId()const
{
	return sourceVSwitchId_;
}

void CreateSnatEntryRequest::setSourceVSwitchId(const std::string& sourceVSwitchId)
{
	sourceVSwitchId_ = sourceVSwitchId;
	setParameter("SourceVSwitchId", sourceVSwitchId);
}

std::string CreateSnatEntryRequest::getRegionId()const
{
	return regionId_;
}

void CreateSnatEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSnatEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSnatEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSnatEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSnatEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateSnatEntryRequest::getSnatTableId()const
{
	return snatTableId_;
}

void CreateSnatEntryRequest::setSnatTableId(const std::string& snatTableId)
{
	snatTableId_ = snatTableId;
	setParameter("SnatTableId", snatTableId);
}

long CreateSnatEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSnatEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateSnatEntryRequest::getSnatEntryName()const
{
	return snatEntryName_;
}

void CreateSnatEntryRequest::setSnatEntryName(const std::string& snatEntryName)
{
	snatEntryName_ = snatEntryName;
	setParameter("SnatEntryName", snatEntryName);
}

