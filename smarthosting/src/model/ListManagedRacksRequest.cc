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

#include <alibabacloud/smarthosting/model/ListManagedRacksRequest.h>

using AlibabaCloud::SmartHosting::Model::ListManagedRacksRequest;

ListManagedRacksRequest::ListManagedRacksRequest() :
	RpcServiceRequest("smarthosting", "2020-08-01", "ListManagedRacks")
{
	setMethod(HttpRequest::Method::Post);
}

ListManagedRacksRequest::~ListManagedRacksRequest()
{}

long ListManagedRacksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListManagedRacksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListManagedRacksRequest::getHostType()const
{
	return hostType_;
}

void ListManagedRacksRequest::setHostType(const std::string& hostType)
{
	hostType_ = hostType;
	setParameter("HostType", hostType);
}

std::string ListManagedRacksRequest::getRegionId()const
{
	return regionId_;
}

void ListManagedRacksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListManagedRacksRequest::getNextToken()const
{
	return nextToken_;
}

void ListManagedRacksRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::vector<std::string> ListManagedRacksRequest::getManagedRackId()const
{
	return managedRackId_;
}

void ListManagedRacksRequest::setManagedRackId(const std::vector<std::string>& managedRackId)
{
	managedRackId_ = managedRackId;
	for(int dep1 = 0; dep1!= managedRackId.size(); dep1++) {
		setParameter("ManagedRackId."+ std::to_string(dep1), managedRackId.at(dep1));
	}
}

std::string ListManagedRacksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListManagedRacksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListManagedRacksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListManagedRacksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListManagedRacksRequest::getOwnerId()const
{
	return ownerId_;
}

void ListManagedRacksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListManagedRacksRequest::getManagedPrivateSpaceId()const
{
	return managedPrivateSpaceId_;
}

void ListManagedRacksRequest::setManagedPrivateSpaceId(const std::string& managedPrivateSpaceId)
{
	managedPrivateSpaceId_ = managedPrivateSpaceId;
	setParameter("ManagedPrivateSpaceId", managedPrivateSpaceId);
}

std::string ListManagedRacksRequest::getZoneId()const
{
	return zoneId_;
}

void ListManagedRacksRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int ListManagedRacksRequest::getMaxResults()const
{
	return maxResults_;
}

void ListManagedRacksRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

