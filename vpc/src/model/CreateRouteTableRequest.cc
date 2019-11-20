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

#include <alibabacloud/vpc/model/CreateRouteTableRequest.h>

using AlibabaCloud::Vpc::Model::CreateRouteTableRequest;

CreateRouteTableRequest::CreateRouteTableRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateRouteTable")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRouteTableRequest::~CreateRouteTableRequest()
{}

long CreateRouteTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRouteTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateRouteTableRequest::getClientToken()const
{
	return clientToken_;
}

void CreateRouteTableRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateRouteTableRequest::getDescription()const
{
	return description_;
}

void CreateRouteTableRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateRouteTableRequest::getRouteTableName()const
{
	return routeTableName_;
}

void CreateRouteTableRequest::setRouteTableName(const std::string& routeTableName)
{
	routeTableName_ = routeTableName;
	setCoreParameter("RouteTableName", routeTableName);
}

std::string CreateRouteTableRequest::getRegionId()const
{
	return regionId_;
}

void CreateRouteTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateRouteTableRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateRouteTableRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateRouteTableRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateRouteTableRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateRouteTableRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRouteTableRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateRouteTableRequest::getVpcId()const
{
	return vpcId_;
}

void CreateRouteTableRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

