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

#include <alibabacloud/smartag/model/ModifyRouteDistributionStrategyRequest.h>

using AlibabaCloud::Smartag::Model::ModifyRouteDistributionStrategyRequest;

ModifyRouteDistributionStrategyRequest::ModifyRouteDistributionStrategyRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifyRouteDistributionStrategy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyRouteDistributionStrategyRequest::~ModifyRouteDistributionStrategyRequest()
{}

std::string ModifyRouteDistributionStrategyRequest::getRouteSource()const
{
	return routeSource_;
}

void ModifyRouteDistributionStrategyRequest::setRouteSource(const std::string& routeSource)
{
	routeSource_ = routeSource;
	setParameter("RouteSource", routeSource);
}

long ModifyRouteDistributionStrategyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyRouteDistributionStrategyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyRouteDistributionStrategyRequest::getHcInstanceId()const
{
	return hcInstanceId_;
}

void ModifyRouteDistributionStrategyRequest::setHcInstanceId(const std::string& hcInstanceId)
{
	hcInstanceId_ = hcInstanceId;
	setParameter("HcInstanceId", hcInstanceId);
}

std::string ModifyRouteDistributionStrategyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyRouteDistributionStrategyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyRouteDistributionStrategyRequest::getSourceType()const
{
	return sourceType_;
}

void ModifyRouteDistributionStrategyRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setParameter("SourceType", sourceType);
}

std::string ModifyRouteDistributionStrategyRequest::getDestCidrBlock()const
{
	return destCidrBlock_;
}

void ModifyRouteDistributionStrategyRequest::setDestCidrBlock(const std::string& destCidrBlock)
{
	destCidrBlock_ = destCidrBlock;
	setParameter("DestCidrBlock", destCidrBlock);
}

std::string ModifyRouteDistributionStrategyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyRouteDistributionStrategyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyRouteDistributionStrategyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyRouteDistributionStrategyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyRouteDistributionStrategyRequest::getRouteDistribution()const
{
	return routeDistribution_;
}

void ModifyRouteDistributionStrategyRequest::setRouteDistribution(const std::string& routeDistribution)
{
	routeDistribution_ = routeDistribution;
	setParameter("RouteDistribution", routeDistribution);
}

long ModifyRouteDistributionStrategyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyRouteDistributionStrategyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyRouteDistributionStrategyRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifyRouteDistributionStrategyRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

