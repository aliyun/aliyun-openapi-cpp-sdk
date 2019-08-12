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

#include <alibabacloud/rds/model/DescribeDBInstanceByTagsRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceByTagsRequest;

DescribeDBInstanceByTagsRequest::DescribeDBInstanceByTagsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceByTags")
{}

DescribeDBInstanceByTagsRequest::~DescribeDBInstanceByTagsRequest()
{}

long DescribeDBInstanceByTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceByTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDBInstanceByTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceByTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeDBInstanceByTagsRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeDBInstanceByTagsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string DescribeDBInstanceByTagsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstanceByTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeDBInstanceByTagsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceByTagsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeDBInstanceByTagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDBInstanceByTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeDBInstanceByTagsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceByTagsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long DescribeDBInstanceByTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceByTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeDBInstanceByTagsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDBInstanceByTagsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDBInstanceByTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceByTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeDBInstanceByTagsRequest::getProxyId()const
{
	return proxyId_;
}

void DescribeDBInstanceByTagsRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setCoreParameter("ProxyId", std::to_string(proxyId));
}

