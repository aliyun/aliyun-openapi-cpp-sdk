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

#include <alibabacloud/ecs/model/DescribeActivationsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeActivationsRequest;

DescribeActivationsRequest::DescribeActivationsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeActivations")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeActivationsRequest::~DescribeActivationsRequest()
{}

long DescribeActivationsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeActivationsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeActivationsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeActivationsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeActivationsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeActivationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long DescribeActivationsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeActivationsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeActivationsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeActivationsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeActivationsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeActivationsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeActivationsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeActivationsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeActivationsRequest::getInstanceName()const
{
	return instanceName_;
}

void DescribeActivationsRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string DescribeActivationsRequest::getActivationId()const
{
	return activationId_;
}

void DescribeActivationsRequest::setActivationId(const std::string& activationId)
{
	activationId_ = activationId;
	setParameter("ActivationId", activationId);
}

