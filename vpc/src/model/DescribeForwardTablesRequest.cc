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

#include <alibabacloud/vpc/model/DescribeForwardTablesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeForwardTablesRequest;

DescribeForwardTablesRequest::DescribeForwardTablesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeForwardTables")
{}

DescribeForwardTablesRequest::~DescribeForwardTablesRequest()
{}

long DescribeForwardTablesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeForwardTablesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeForwardTablesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeForwardTablesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeForwardTablesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeForwardTablesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeForwardTablesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeForwardTablesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeForwardTablesRequest::getForwardTableId()const
{
	return forwardTableId_;
}

void DescribeForwardTablesRequest::setForwardTableId(const std::string& forwardTableId)
{
	forwardTableId_ = forwardTableId;
	setParameter("ForwardTableId", forwardTableId);
}

int DescribeForwardTablesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeForwardTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeForwardTablesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeForwardTablesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeForwardTablesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeForwardTablesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

