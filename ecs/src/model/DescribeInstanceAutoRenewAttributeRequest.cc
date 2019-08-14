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

#include <alibabacloud/ecs/model/DescribeInstanceAutoRenewAttributeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceAutoRenewAttributeRequest;

DescribeInstanceAutoRenewAttributeRequest::DescribeInstanceAutoRenewAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceAutoRenewAttribute")
{}

DescribeInstanceAutoRenewAttributeRequest::~DescribeInstanceAutoRenewAttributeRequest()
{}

std::string DescribeInstanceAutoRenewAttributeRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeInstanceAutoRenewAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceAutoRenewAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceAutoRenewAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getRenewalStatus()const
{
	return renewalStatus_;
}

void DescribeInstanceAutoRenewAttributeRequest::setRenewalStatus(const std::string& renewalStatus)
{
	renewalStatus_ = renewalStatus;
	setCoreParameter("RenewalStatus", renewalStatus);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceAutoRenewAttributeRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeInstanceAutoRenewAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstanceAutoRenewAttributeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceAutoRenewAttributeRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

