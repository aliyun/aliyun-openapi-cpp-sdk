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

#include <alibabacloud/ecs/model/DeleteForwardEntryRequest.h>

using AlibabaCloud::Ecs::Model::DeleteForwardEntryRequest;

DeleteForwardEntryRequest::DeleteForwardEntryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteForwardEntry")
{}

DeleteForwardEntryRequest::~DeleteForwardEntryRequest()
{}

bool DeleteForwardEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteForwardEntryRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string DeleteForwardEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteForwardEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteForwardEntryRequest::getRegionId()const
{
	return regionId_;
}

void DeleteForwardEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteForwardEntryRequest::getForwardEntryId()const
{
	return forwardEntryId_;
}

void DeleteForwardEntryRequest::setForwardEntryId(const std::string& forwardEntryId)
{
	forwardEntryId_ = forwardEntryId;
	setCoreParameter("ForwardEntryId", forwardEntryId);
}

std::string DeleteForwardEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteForwardEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteForwardEntryRequest::getForwardTableId()const
{
	return forwardTableId_;
}

void DeleteForwardEntryRequest::setForwardTableId(const std::string& forwardTableId)
{
	forwardTableId_ = forwardTableId;
	setCoreParameter("ForwardTableId", forwardTableId);
}

bool DeleteForwardEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteForwardEntryRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

