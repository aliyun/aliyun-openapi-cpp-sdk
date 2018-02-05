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

#include <alibabacloud/ecs/model/DescribeRecycleBinRequest.h>

using AlibabaCloud::Ecs::Model::DescribeRecycleBinRequest;

DescribeRecycleBinRequest::DescribeRecycleBinRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeRecycleBin")
{}

DescribeRecycleBinRequest::~DescribeRecycleBinRequest()
{}

long DescribeRecycleBinRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRecycleBinRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRecycleBinRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeRecycleBinRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string DescribeRecycleBinRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRecycleBinRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRecycleBinRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRecycleBinRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeRecycleBinRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRecycleBinRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeRecycleBinRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRecycleBinRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeRecycleBinRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecycleBinRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeRecycleBinRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRecycleBinRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRecycleBinRequest::getStatus()const
{
	return status_;
}

void DescribeRecycleBinRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

