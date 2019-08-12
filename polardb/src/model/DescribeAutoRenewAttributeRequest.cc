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

#include <alibabacloud/polardb/model/DescribeAutoRenewAttributeRequest.h>

using AlibabaCloud::Polardb::Model::DescribeAutoRenewAttributeRequest;

DescribeAutoRenewAttributeRequest::DescribeAutoRenewAttributeRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeAutoRenewAttribute")
{}

DescribeAutoRenewAttributeRequest::~DescribeAutoRenewAttributeRequest()
{}

long DescribeAutoRenewAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeAutoRenewAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAutoRenewAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAutoRenewAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAutoRenewAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAutoRenewAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeAutoRenewAttributeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoRenewAttributeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeAutoRenewAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAutoRenewAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeAutoRenewAttributeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoRenewAttributeRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeAutoRenewAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAutoRenewAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAutoRenewAttributeRequest::getDBClusterIds()const
{
	return dBClusterIds_;
}

void DescribeAutoRenewAttributeRequest::setDBClusterIds(const std::string& dBClusterIds)
{
	dBClusterIds_ = dBClusterIds;
	setCoreParameter("DBClusterIds", dBClusterIds);
}

