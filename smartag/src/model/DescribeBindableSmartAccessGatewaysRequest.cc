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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBindableSmartAccessGatewaysRequest::~DescribeBindableSmartAccessGatewaysRequest()
{}

long DescribeBindableSmartAccessGatewaysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBindableSmartAccessGatewaysRequest::getCcnId()const
{
	return ccnId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setCcnId(const std::string& ccnId)
{
	ccnId_ = ccnId;
	setParameter("CcnId", ccnId);
}

int DescribeBindableSmartAccessGatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBindableSmartAccessGatewaysRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeBindableSmartAccessGatewaysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeBindableSmartAccessGatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBindableSmartAccessGatewaysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBindableSmartAccessGatewaysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBindableSmartAccessGatewaysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBindableSmartAccessGatewaysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBindableSmartAccessGatewaysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeBindableSmartAccessGatewaysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeBindableSmartAccessGatewaysRequest::getCrossAccount()const
{
	return crossAccount_;
}

void DescribeBindableSmartAccessGatewaysRequest::setCrossAccount(bool crossAccount)
{
	crossAccount_ = crossAccount;
	setParameter("CrossAccount", crossAccount ? "true" : "false");
}

std::string DescribeBindableSmartAccessGatewaysRequest::getName()const
{
	return name_;
}

void DescribeBindableSmartAccessGatewaysRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribeBindableSmartAccessGatewaysRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeBindableSmartAccessGatewaysRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

