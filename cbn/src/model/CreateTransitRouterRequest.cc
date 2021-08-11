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

#include <alibabacloud/cbn/model/CreateTransitRouterRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterRequest;

CreateTransitRouterRequest::CreateTransitRouterRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouter")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterRequest::~CreateTransitRouterRequest()
{}

std::string CreateTransitRouterRequest::getTransitRouterName()const
{
	return transitRouterName_;
}

void CreateTransitRouterRequest::setTransitRouterName(const std::string& transitRouterName)
{
	transitRouterName_ = transitRouterName;
	setParameter("TransitRouterName", transitRouterName);
}

long CreateTransitRouterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTransitRouterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateTransitRouterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateTransitRouterRequest::getCenId()const
{
	return cenId_;
}

void CreateTransitRouterRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string CreateTransitRouterRequest::getType()const
{
	return type_;
}

void CreateTransitRouterRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateTransitRouterRequest::getRegionId()const
{
	return regionId_;
}

void CreateTransitRouterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateTransitRouterRequest::getDryRun()const
{
	return dryRun_;
}

void CreateTransitRouterRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string CreateTransitRouterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateTransitRouterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateTransitRouterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateTransitRouterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateTransitRouterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTransitRouterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTransitRouterRequest::getTransitRouterDescription()const
{
	return transitRouterDescription_;
}

void CreateTransitRouterRequest::setTransitRouterDescription(const std::string& transitRouterDescription)
{
	transitRouterDescription_ = transitRouterDescription;
	setParameter("TransitRouterDescription", transitRouterDescription);
}

