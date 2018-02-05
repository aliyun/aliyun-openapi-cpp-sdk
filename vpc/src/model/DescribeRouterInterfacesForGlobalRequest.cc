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

#include <alibabacloud/vpc/model/DescribeRouterInterfacesForGlobalRequest.h>

using AlibabaCloud::Vpc::Model::DescribeRouterInterfacesForGlobalRequest;

DescribeRouterInterfacesForGlobalRequest::DescribeRouterInterfacesForGlobalRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeRouterInterfacesForGlobal")
{}

DescribeRouterInterfacesForGlobalRequest::~DescribeRouterInterfacesForGlobalRequest()
{}

long DescribeRouterInterfacesForGlobalRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRouterInterfacesForGlobalRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRouterInterfacesForGlobalRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRouterInterfacesForGlobalRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRouterInterfacesForGlobalRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRouterInterfacesForGlobalRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeRouterInterfacesForGlobalRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRouterInterfacesForGlobalRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeRouterInterfacesForGlobalRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRouterInterfacesForGlobalRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeRouterInterfacesForGlobalRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouterInterfacesForGlobalRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRouterInterfacesForGlobalRequest::getStatus()const
{
	return status_;
}

void DescribeRouterInterfacesForGlobalRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

