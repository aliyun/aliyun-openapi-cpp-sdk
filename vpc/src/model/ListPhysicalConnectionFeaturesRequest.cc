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

#include <alibabacloud/vpc/model/ListPhysicalConnectionFeaturesRequest.h>

using AlibabaCloud::Vpc::Model::ListPhysicalConnectionFeaturesRequest;

ListPhysicalConnectionFeaturesRequest::ListPhysicalConnectionFeaturesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ListPhysicalConnectionFeatures")
{
	setMethod(HttpRequest::Method::Post);
}

ListPhysicalConnectionFeaturesRequest::~ListPhysicalConnectionFeaturesRequest()
{}

long ListPhysicalConnectionFeaturesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListPhysicalConnectionFeaturesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListPhysicalConnectionFeaturesRequest::getClientToken()const
{
	return clientToken_;
}

void ListPhysicalConnectionFeaturesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListPhysicalConnectionFeaturesRequest::getRegionId()const
{
	return regionId_;
}

void ListPhysicalConnectionFeaturesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListPhysicalConnectionFeaturesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListPhysicalConnectionFeaturesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListPhysicalConnectionFeaturesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListPhysicalConnectionFeaturesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListPhysicalConnectionFeaturesRequest::getOwnerId()const
{
	return ownerId_;
}

void ListPhysicalConnectionFeaturesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListPhysicalConnectionFeaturesRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void ListPhysicalConnectionFeaturesRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setParameter("PhysicalConnectionId", physicalConnectionId);
}

