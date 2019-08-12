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

#include <alibabacloud/slb/model/ModifyLoadBalancerInstanceSpecRequest.h>

using AlibabaCloud::Slb::Model::ModifyLoadBalancerInstanceSpecRequest;

ModifyLoadBalancerInstanceSpecRequest::ModifyLoadBalancerInstanceSpecRequest() :
	RpcServiceRequest("slb", "2014-05-15", "ModifyLoadBalancerInstanceSpec")
{}

ModifyLoadBalancerInstanceSpecRequest::~ModifyLoadBalancerInstanceSpecRequest()
{}

std::string ModifyLoadBalancerInstanceSpecRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void ModifyLoadBalancerInstanceSpecRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", std::to_string(access_key_id));
}

std::string ModifyLoadBalancerInstanceSpecRequest::getLoadBalancerSpec()const
{
	return loadBalancerSpec_;
}

void ModifyLoadBalancerInstanceSpecRequest::setLoadBalancerSpec(const std::string& loadBalancerSpec)
{
	loadBalancerSpec_ = loadBalancerSpec;
	setCoreParameter("LoadBalancerSpec", std::to_string(loadBalancerSpec));
}

long ModifyLoadBalancerInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyLoadBalancerInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyLoadBalancerInstanceSpecRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void ModifyLoadBalancerInstanceSpecRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", std::to_string(loadBalancerId));
}

bool ModifyLoadBalancerInstanceSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyLoadBalancerInstanceSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyLoadBalancerInstanceSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyLoadBalancerInstanceSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyLoadBalancerInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyLoadBalancerInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyLoadBalancerInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyLoadBalancerInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifyLoadBalancerInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyLoadBalancerInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyLoadBalancerInstanceSpecRequest::getTags()const
{
	return tags_;
}

void ModifyLoadBalancerInstanceSpecRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

