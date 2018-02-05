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

#include <alibabacloud/slb/model/DescribeLoadBalancerAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeLoadBalancerAttributeRequest;

DescribeLoadBalancerAttributeRequest::DescribeLoadBalancerAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeLoadBalancerAttribute")
{}

DescribeLoadBalancerAttributeRequest::~DescribeLoadBalancerAttributeRequest()
{}

std::string DescribeLoadBalancerAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeLoadBalancerAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeLoadBalancerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLoadBalancerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeLoadBalancerAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancerAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeLoadBalancerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeLoadBalancerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLoadBalancerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLoadBalancerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLoadBalancerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeLoadBalancerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLoadBalancerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLoadBalancerAttributeRequest::getTags()const
{
	return tags_;
}

void DescribeLoadBalancerAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

