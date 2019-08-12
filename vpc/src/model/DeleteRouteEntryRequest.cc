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

#include <alibabacloud/vpc/model/DeleteRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::DeleteRouteEntryRequest;

DeleteRouteEntryRequest::DeleteRouteEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteRouteEntry")
{}

DeleteRouteEntryRequest::~DeleteRouteEntryRequest()
{}

long DeleteRouteEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteRouteEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteRouteEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteRouteEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteRouteEntryRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRouteEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteRouteEntryRequest::getRouteEntryId()const
{
	return routeEntryId_;
}

void DeleteRouteEntryRequest::setRouteEntryId(const std::string& routeEntryId)
{
	routeEntryId_ = routeEntryId;
	setCoreParameter("RouteEntryId", routeEntryId);
}

std::string DeleteRouteEntryRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void DeleteRouteEntryRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setCoreParameter("DestinationCidrBlock", destinationCidrBlock);
}

std::string DeleteRouteEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteRouteEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteRouteEntryRequest::getNextHopId()const
{
	return nextHopId_;
}

void DeleteRouteEntryRequest::setNextHopId(const std::string& nextHopId)
{
	nextHopId_ = nextHopId;
	setCoreParameter("NextHopId", nextHopId);
}

long DeleteRouteEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRouteEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::vector<DeleteRouteEntryRequest::NextHopList> DeleteRouteEntryRequest::getNextHopList()const
{
	return nextHopList_;
}

void DeleteRouteEntryRequest::setNextHopList(const std::vector<NextHopList>& nextHopList)
{
	nextHopList_ = nextHopList;
	int i = 0;
	for(int i = 0; i!= nextHopList.size(); i++)	{
		auto obj = nextHopList.at(i);
		std::string str ="NextHopList."+ std::to_string(i);
		setCoreParameter(str + ".NextHopId", std::to_string(obj.nextHopId));
		setCoreParameter(str + ".NextHopType", std::to_string(obj.nextHopType));
	}
}

std::string DeleteRouteEntryRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DeleteRouteEntryRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setCoreParameter("RouteTableId", routeTableId);
}

