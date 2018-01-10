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

#include <alibabacloud/slb/model/ModifyLoadBalancerInternetSpecRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

ModifyLoadBalancerInternetSpecRequest::ModifyLoadBalancerInternetSpecRequest() :
	SlbRequest("ModifyLoadBalancerInternetSpec")
{}

ModifyLoadBalancerInternetSpecRequest::~ModifyLoadBalancerInternetSpecRequest()
{}

std::string ModifyLoadBalancerInternetSpecRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void ModifyLoadBalancerInternetSpecRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long ModifyLoadBalancerInternetSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyLoadBalancerInternetSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ModifyLoadBalancerInternetSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyLoadBalancerInternetSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", std::to_string(autoPay));
}

std::string ModifyLoadBalancerInternetSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyLoadBalancerInternetSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifyLoadBalancerInternetSpecRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyLoadBalancerInternetSpecRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string ModifyLoadBalancerInternetSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyLoadBalancerInternetSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyLoadBalancerInternetSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyLoadBalancerInternetSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyLoadBalancerInternetSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyLoadBalancerInternetSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyLoadBalancerInternetSpecRequest::getTags()const
{
	return tags_;
}

void ModifyLoadBalancerInternetSpecRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string ModifyLoadBalancerInternetSpecRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void ModifyLoadBalancerInternetSpecRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string ModifyLoadBalancerInternetSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyLoadBalancerInternetSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyLoadBalancerInternetSpecRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void ModifyLoadBalancerInternetSpecRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

