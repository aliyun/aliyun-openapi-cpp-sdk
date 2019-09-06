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

#include <alibabacloud/vpc/model/DeleteSnatEntryRequest.h>

using AlibabaCloud::Vpc::Model::DeleteSnatEntryRequest;

DeleteSnatEntryRequest::DeleteSnatEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteSnatEntry")
{}

DeleteSnatEntryRequest::~DeleteSnatEntryRequest()
{}

long DeleteSnatEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteSnatEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteSnatEntryRequest::getRegionId()const
{
	return regionId_;
}

void DeleteSnatEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteSnatEntryRequest::getSnatEntryId()const
{
	return snatEntryId_;
}

void DeleteSnatEntryRequest::setSnatEntryId(const std::string& snatEntryId)
{
	snatEntryId_ = snatEntryId;
	setCoreParameter("SnatEntryId", snatEntryId);
}

std::string DeleteSnatEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteSnatEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteSnatEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteSnatEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteSnatEntryRequest::getSnatTableId()const
{
	return snatTableId_;
}

void DeleteSnatEntryRequest::setSnatTableId(const std::string& snatTableId)
{
	snatTableId_ = snatTableId;
	setCoreParameter("SnatTableId", snatTableId);
}

long DeleteSnatEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSnatEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

