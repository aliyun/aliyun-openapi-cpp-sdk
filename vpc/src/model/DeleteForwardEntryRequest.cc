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

#include <alibabacloud/vpc/model/DeleteForwardEntryRequest.h>

using AlibabaCloud::Vpc::Model::DeleteForwardEntryRequest;

DeleteForwardEntryRequest::DeleteForwardEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteForwardEntry")
{}

DeleteForwardEntryRequest::~DeleteForwardEntryRequest()
{}

long DeleteForwardEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteForwardEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteForwardEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteForwardEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteForwardEntryRequest::getRegionId()const
{
	return regionId_;
}

void DeleteForwardEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteForwardEntryRequest::getForwardEntryId()const
{
	return forwardEntryId_;
}

void DeleteForwardEntryRequest::setForwardEntryId(const std::string& forwardEntryId)
{
	forwardEntryId_ = forwardEntryId;
	setCoreParameter("ForwardEntryId", std::to_string(forwardEntryId));
}

std::string DeleteForwardEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteForwardEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DeleteForwardEntryRequest::getForwardTableId()const
{
	return forwardTableId_;
}

void DeleteForwardEntryRequest::setForwardTableId(const std::string& forwardTableId)
{
	forwardTableId_ = forwardTableId;
	setCoreParameter("ForwardTableId", std::to_string(forwardTableId));
}

long DeleteForwardEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteForwardEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

