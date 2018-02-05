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

#include <alibabacloud/rds/model/DescribeInstanceAutoRenewAttributeRequest.h>

using AlibabaCloud::Rds::Model::DescribeInstanceAutoRenewAttributeRequest;

DescribeInstanceAutoRenewAttributeRequest::DescribeInstanceAutoRenewAttributeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeInstanceAutoRenewAttribute")
{}

DescribeInstanceAutoRenewAttributeRequest::~DescribeInstanceAutoRenewAttributeRequest()
{}

long DescribeInstanceAutoRenewAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceAutoRenewAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeInstanceAutoRenewAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceAutoRenewAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeInstanceAutoRenewAttributeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceAutoRenewAttributeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstanceAutoRenewAttributeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DescribeInstanceAutoRenewAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeInstanceAutoRenewAttributeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceAutoRenewAttributeRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstanceAutoRenewAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInstanceAutoRenewAttributeRequest::getProxyId()const
{
	return proxyId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setParameter("ProxyId", proxyId);
}

