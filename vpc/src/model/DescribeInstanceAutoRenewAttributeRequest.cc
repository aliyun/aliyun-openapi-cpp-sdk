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

#include <alibabacloud/vpc/model/DescribeInstanceAutoRenewAttributeRequest.h>

using AlibabaCloud::Vpc::Model::DescribeInstanceAutoRenewAttributeRequest;

DescribeInstanceAutoRenewAttributeRequest::DescribeInstanceAutoRenewAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeInstanceAutoRenewAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

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

int DescribeInstanceAutoRenewAttributeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceAutoRenewAttributeRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
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

std::string DescribeInstanceAutoRenewAttributeRequest::getRenewalStatus()const
{
	return renewalStatus_;
}

void DescribeInstanceAutoRenewAttributeRequest::setRenewalStatus(const std::string& renewalStatus)
{
	renewalStatus_ = renewalStatus;
	setParameter("RenewalStatus", renewalStatus);
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

std::string DescribeInstanceAutoRenewAttributeRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeInstanceAutoRenewAttributeRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
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

long DescribeInstanceAutoRenewAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstanceAutoRenewAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceAutoRenewAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

