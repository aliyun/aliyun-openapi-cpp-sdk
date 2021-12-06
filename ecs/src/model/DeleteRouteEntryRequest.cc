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

#include <alibabacloud/ecs/model/DeleteRouteEntryRequest.h>

using AlibabaCloud::Ecs::Model::DeleteRouteEntryRequest;

DeleteRouteEntryRequest::DeleteRouteEntryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteRouteEntry")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteRouteEntryRequest::~DeleteRouteEntryRequest()
{}

long DeleteRouteEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteRouteEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteRouteEntryRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRouteEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteRouteEntryRequest::getNextHopId()const
{
	return nextHopId_;
}

void DeleteRouteEntryRequest::setNextHopId(const std::string& nextHopId)
{
	nextHopId_ = nextHopId;
	setParameter("NextHopId", nextHopId);
}

std::string DeleteRouteEntryRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DeleteRouteEntryRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setParameter("RouteTableId", routeTableId);
}

std::string DeleteRouteEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteRouteEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteRouteEntryRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void DeleteRouteEntryRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setParameter("DestinationCidrBlock", destinationCidrBlock);
}

std::string DeleteRouteEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteRouteEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteRouteEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRouteEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<DeleteRouteEntryRequest::NextHopList> DeleteRouteEntryRequest::getNextHopList()const
{
	return nextHopList_;
}

void DeleteRouteEntryRequest::setNextHopList(const std::vector<NextHopList>& nextHopList)
{
	nextHopList_ = nextHopList;
	for(int dep1 = 0; dep1!= nextHopList.size(); dep1++) {
		auto nextHopListObj = nextHopList.at(dep1);
		std::string nextHopListObjStr = "NextHopList." + std::to_string(dep1 + 1);
		setParameter(nextHopListObjStr + ".NextHopId", nextHopListObj.nextHopId);
		setParameter(nextHopListObjStr + ".NextHopType", nextHopListObj.nextHopType);
	}
}

