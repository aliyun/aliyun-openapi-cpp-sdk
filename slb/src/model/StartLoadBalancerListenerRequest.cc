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

#include <alibabacloud/slb/model/StartLoadBalancerListenerRequest.h>

using AlibabaCloud::Slb::Model::StartLoadBalancerListenerRequest;

StartLoadBalancerListenerRequest::StartLoadBalancerListenerRequest() :
	RpcServiceRequest("slb", "2014-05-15", "StartLoadBalancerListener")
{}

StartLoadBalancerListenerRequest::~StartLoadBalancerListenerRequest()
{}

std::string StartLoadBalancerListenerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void StartLoadBalancerListenerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long StartLoadBalancerListenerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartLoadBalancerListenerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartLoadBalancerListenerRequest::getRegionId()const
{
	return regionId_;
}

void StartLoadBalancerListenerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int StartLoadBalancerListenerRequest::getListenerPort()const
{
	return listenerPort_;
}

void StartLoadBalancerListenerRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setCoreParameter("ListenerPort", std::to_string(listenerPort));
}

std::string StartLoadBalancerListenerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartLoadBalancerListenerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartLoadBalancerListenerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StartLoadBalancerListenerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long StartLoadBalancerListenerRequest::getOwnerId()const
{
	return ownerId_;
}

void StartLoadBalancerListenerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string StartLoadBalancerListenerRequest::getListenerProtocol()const
{
	return listenerProtocol_;
}

void StartLoadBalancerListenerRequest::setListenerProtocol(const std::string& listenerProtocol)
{
	listenerProtocol_ = listenerProtocol;
	setCoreParameter("ListenerProtocol", listenerProtocol);
}

std::string StartLoadBalancerListenerRequest::getTags()const
{
	return tags_;
}

void StartLoadBalancerListenerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string StartLoadBalancerListenerRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void StartLoadBalancerListenerRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

