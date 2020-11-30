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

#include <alibabacloud/ecs/model/DescribeElasticityAssurancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeElasticityAssurancesRequest;

DescribeElasticityAssurancesRequest::DescribeElasticityAssurancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeElasticityAssurances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeElasticityAssurancesRequest::~DescribeElasticityAssurancesRequest()
{}

long DescribeElasticityAssurancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeElasticityAssurancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeElasticityAssurancesRequest::getPlatform()const
{
	return platform_;
}

void DescribeElasticityAssurancesRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

std::string DescribeElasticityAssurancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeElasticityAssurancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeElasticityAssurancesRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeElasticityAssurancesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string DescribeElasticityAssurancesRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeElasticityAssurancesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribeElasticityAssurancesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeElasticityAssurancesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeElasticityAssurancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeElasticityAssurancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeElasticityAssurancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeElasticityAssurancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeElasticityAssurancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeElasticityAssurancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeElasticityAssurancesRequest::getPrivatePoolOptionsIds()const
{
	return privatePoolOptionsIds_;
}

void DescribeElasticityAssurancesRequest::setPrivatePoolOptionsIds(const std::string& privatePoolOptionsIds)
{
	privatePoolOptionsIds_ = privatePoolOptionsIds;
	setParameter("PrivatePoolOptionsIds", privatePoolOptionsIds);
}

int DescribeElasticityAssurancesRequest::getMaxResults()const
{
	return maxResults_;
}

void DescribeElasticityAssurancesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string DescribeElasticityAssurancesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeElasticityAssurancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeElasticityAssurancesRequest::getPackageType()const
{
	return packageType_;
}

void DescribeElasticityAssurancesRequest::setPackageType(const std::string& packageType)
{
	packageType_ = packageType;
	setParameter("PackageType", packageType);
}

std::string DescribeElasticityAssurancesRequest::getStatus()const
{
	return status_;
}

void DescribeElasticityAssurancesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

