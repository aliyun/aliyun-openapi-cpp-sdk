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

#include <alibabacloud/slb/model/DescribeLoadBalancerUDPListenerAttributeRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerUDPListenerAttributeRequest::DescribeLoadBalancerUDPListenerAttributeRequest() :
	SlbRequest("DescribeLoadBalancerUDPListenerAttribute")
{}

DescribeLoadBalancerUDPListenerAttributeRequest::~DescribeLoadBalancerUDPListenerAttributeRequest()
{}

std::string DescribeLoadBalancerUDPListenerAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeLoadBalancerUDPListenerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeLoadBalancerUDPListenerAttributeRequest::getListenerPort()const
{
	return listenerPort_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string DescribeLoadBalancerUDPListenerAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeLoadBalancerUDPListenerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeLoadBalancerUDPListenerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLoadBalancerUDPListenerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeLoadBalancerUDPListenerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLoadBalancerUDPListenerAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLoadBalancerUDPListenerAttributeRequest::getTags()const
{
	return tags_;
}

void DescribeLoadBalancerUDPListenerAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

