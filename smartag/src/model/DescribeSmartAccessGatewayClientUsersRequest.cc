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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayClientUsersRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSmartAccessGatewayClientUsersRequest;

DescribeSmartAccessGatewayClientUsersRequest::DescribeSmartAccessGatewayClientUsersRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSmartAccessGatewayClientUsers")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSmartAccessGatewayClientUsersRequest::~DescribeSmartAccessGatewayClientUsersRequest()
{}

long DescribeSmartAccessGatewayClientUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeSmartAccessGatewayClientUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSmartAccessGatewayClientUsersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeSmartAccessGatewayClientUsersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSmartAccessGatewayClientUsersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSmartAccessGatewayClientUsersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSmartAccessGatewayClientUsersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSmartAccessGatewayClientUsersRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string DescribeSmartAccessGatewayClientUsersRequest::getUserName()const
{
	return userName_;
}

void DescribeSmartAccessGatewayClientUsersRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

