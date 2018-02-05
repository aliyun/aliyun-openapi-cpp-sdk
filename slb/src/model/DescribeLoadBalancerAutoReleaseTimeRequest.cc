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

#include <alibabacloud/slb/model/DescribeLoadBalancerAutoReleaseTimeRequest.h>

using AlibabaCloud::Slb::Model::DescribeLoadBalancerAutoReleaseTimeRequest;

DescribeLoadBalancerAutoReleaseTimeRequest::DescribeLoadBalancerAutoReleaseTimeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeLoadBalancerAutoReleaseTime")
{}

DescribeLoadBalancerAutoReleaseTimeRequest::~DescribeLoadBalancerAutoReleaseTimeRequest()
{}

std::string DescribeLoadBalancerAutoReleaseTimeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeLoadBalancerAutoReleaseTimeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeLoadBalancerAutoReleaseTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLoadBalancerAutoReleaseTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeLoadBalancerAutoReleaseTimeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancerAutoReleaseTimeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeLoadBalancerAutoReleaseTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLoadBalancerAutoReleaseTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLoadBalancerAutoReleaseTimeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancerAutoReleaseTimeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeLoadBalancerAutoReleaseTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLoadBalancerAutoReleaseTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeLoadBalancerAutoReleaseTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLoadBalancerAutoReleaseTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLoadBalancerAutoReleaseTimeRequest::getTags()const
{
	return tags_;
}

void DescribeLoadBalancerAutoReleaseTimeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

