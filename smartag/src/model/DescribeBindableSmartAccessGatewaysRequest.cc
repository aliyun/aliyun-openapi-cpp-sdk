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

#include <alibabacloud/smartag/model/DescribeBindableSmartAccessGatewaysRequest.h>

using AlibabaCloud::Smartag::Model::DescribeBindableSmartAccessGatewaysRequest;

DescribeBindableSmartAccessGatewaysRequest::DescribeBindableSmartAccessGatewaysRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeBindableSmartAccessGateways")
{}

DescribeBindableSmartAccessGatewaysRequest::~DescribeBindableSmartAccessGatewaysRequest()
{}

long DescribeBindableSmartAccessGatewaysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBindableSmartAccessGatewaysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBindableSmartAccessGatewaysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBindableSmartAccessGatewaysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeBindableSmartAccessGatewaysRequest::getCrossAccount()const
{
	return crossAccount_;
}

void DescribeBindableSmartAccessGatewaysRequest::setCrossAccount(bool crossAccount)
{
	crossAccount_ = crossAccount;
	setCoreParameter("CrossAccount", crossAccount ? "true" : "false");
}

std::string DescribeBindableSmartAccessGatewaysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBindableSmartAccessGatewaysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBindableSmartAccessGatewaysRequest::getCcnId()const
{
	return ccnId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setCcnId(const std::string& ccnId)
{
	ccnId_ = ccnId;
	setCoreParameter("CcnId", ccnId);
}

std::string DescribeBindableSmartAccessGatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBindableSmartAccessGatewaysRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeBindableSmartAccessGatewaysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeBindableSmartAccessGatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBindableSmartAccessGatewaysRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

