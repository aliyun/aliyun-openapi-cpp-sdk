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

#include <alibabacloud/rds/model/DescribeDedicatedHostsRequest.h>

using AlibabaCloud::Rds::Model::DescribeDedicatedHostsRequest;

DescribeDedicatedHostsRequest::DescribeDedicatedHostsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDedicatedHosts")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostsRequest::~DescribeDedicatedHostsRequest()
{}

long DescribeDedicatedHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeDedicatedHostsRequest::getOrderId()const
{
	return orderId_;
}

void DescribeDedicatedHostsRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", std::to_string(orderId));
}

long DescribeDedicatedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDedicatedHostsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDedicatedHostsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDedicatedHostsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDedicatedHostsRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setCoreParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

