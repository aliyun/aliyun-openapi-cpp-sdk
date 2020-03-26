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

#include <alibabacloud/slb/model/DescribeLoadBalancerHTTPListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeLoadBalancerHTTPListenerAttributeRequest;

DescribeLoadBalancerHTTPListenerAttributeRequest::DescribeLoadBalancerHTTPListenerAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeLoadBalancerHTTPListenerAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLoadBalancerHTTPListenerAttributeRequest::~DescribeLoadBalancerHTTPListenerAttributeRequest()
{}

std::string DescribeLoadBalancerHTTPListenerAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeLoadBalancerHTTPListenerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeLoadBalancerHTTPListenerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeLoadBalancerHTTPListenerAttributeRequest::getListenerPort()const
{
	return listenerPort_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string DescribeLoadBalancerHTTPListenerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLoadBalancerHTTPListenerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeLoadBalancerHTTPListenerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLoadBalancerHTTPListenerAttributeRequest::getTags()const
{
	return tags_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string DescribeLoadBalancerHTTPListenerAttributeRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancerHTTPListenerAttributeRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

