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

#include <alibabacloud/ecs/model/CreateRouteEntryRequest.h>

using AlibabaCloud::Ecs::Model::CreateRouteEntryRequest;

CreateRouteEntryRequest::CreateRouteEntryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateRouteEntry")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRouteEntryRequest::~CreateRouteEntryRequest()
{}

long CreateRouteEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRouteEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateRouteEntryRequest::getClientToken()const
{
	return clientToken_;
}

void CreateRouteEntryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateRouteEntryRequest::getRegionId()const
{
	return regionId_;
}

void CreateRouteEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateRouteEntryRequest::getNextHopId()const
{
	return nextHopId_;
}

void CreateRouteEntryRequest::setNextHopId(const std::string& nextHopId)
{
	nextHopId_ = nextHopId;
	setCoreParameter("NextHopId", nextHopId);
}

std::string CreateRouteEntryRequest::getNextHopType()const
{
	return nextHopType_;
}

void CreateRouteEntryRequest::setNextHopType(const std::string& nextHopType)
{
	nextHopType_ = nextHopType;
	setCoreParameter("NextHopType", nextHopType);
}

std::string CreateRouteEntryRequest::getRouteTableId()const
{
	return routeTableId_;
}

void CreateRouteEntryRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setCoreParameter("RouteTableId", routeTableId);
}

std::string CreateRouteEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateRouteEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateRouteEntryRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void CreateRouteEntryRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setCoreParameter("DestinationCidrBlock", destinationCidrBlock);
}

std::string CreateRouteEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateRouteEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateRouteEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRouteEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<CreateRouteEntryRequest::NextHopList> CreateRouteEntryRequest::getNextHopList()const
{
	return nextHopList_;
}

void CreateRouteEntryRequest::setNextHopList(const std::vector<NextHopList>& nextHopList)
{
	nextHopList_ = nextHopList;
	for(int dep1 = 0; dep1!= nextHopList.size(); dep1++) {
		auto nextHopListObj = nextHopList.at(dep1);
		std::string nextHopListObjStr = "NextHopList." + std::to_string(dep1);
		setCoreParameter(nextHopListObjStr + ".NextHopId", nextHopListObj.nextHopId);
		setCoreParameter(nextHopListObjStr + ".NextHopType", nextHopListObj.nextHopType);
	}
}

