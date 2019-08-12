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

#include <alibabacloud/ecs/model/DescribeZonesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeZonesRequest;

DescribeZonesRequest::DescribeZonesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeZones")
{}

DescribeZonesRequest::~DescribeZonesRequest()
{}

std::string DescribeZonesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeZonesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeZonesRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void DescribeZonesRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

long DescribeZonesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeZonesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeZonesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeZonesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeZonesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeZonesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeZonesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeZonesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeZonesRequest::getAcceptLanguage()const
{
	return acceptLanguage_;
}

void DescribeZonesRequest::setAcceptLanguage(const std::string& acceptLanguage)
{
	acceptLanguage_ = acceptLanguage;
	setCoreParameter("AcceptLanguage", acceptLanguage);
}

long DescribeZonesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeZonesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeZonesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeZonesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

bool DescribeZonesRequest::getVerbose()const
{
	return verbose_;
}

void DescribeZonesRequest::setVerbose(bool verbose)
{
	verbose_ = verbose;
	setCoreParameter("Verbose", verbose ? "true" : "false");
}

