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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAutoProvisioningGroupInstancesRequest;

DescribeAutoProvisioningGroupInstancesRequest::DescribeAutoProvisioningGroupInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeAutoProvisioningGroupInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAutoProvisioningGroupInstancesRequest::~DescribeAutoProvisioningGroupInstancesRequest()
{}

long DescribeAutoProvisioningGroupInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeAutoProvisioningGroupInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeAutoProvisioningGroupInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeAutoProvisioningGroupInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAutoProvisioningGroupInstancesRequest::getAutoProvisioningGroupId()const
{
	return autoProvisioningGroupId_;
}

void DescribeAutoProvisioningGroupInstancesRequest::setAutoProvisioningGroupId(const std::string& autoProvisioningGroupId)
{
	autoProvisioningGroupId_ = autoProvisioningGroupId;
	setParameter("AutoProvisioningGroupId", autoProvisioningGroupId);
}

