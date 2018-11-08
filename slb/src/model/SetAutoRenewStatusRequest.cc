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

#include <alibabacloud/slb/model/SetAutoRenewStatusRequest.h>

using AlibabaCloud::Slb::Model::SetAutoRenewStatusRequest;

SetAutoRenewStatusRequest::SetAutoRenewStatusRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetAutoRenewStatus")
{}

SetAutoRenewStatusRequest::~SetAutoRenewStatusRequest()
{}

std::string SetAutoRenewStatusRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetAutoRenewStatusRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetAutoRenewStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetAutoRenewStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int SetAutoRenewStatusRequest::getRenewalDuration()const
{
	return renewalDuration_;
}

void SetAutoRenewStatusRequest::setRenewalDuration(int renewalDuration)
{
	renewalDuration_ = renewalDuration;
	setParameter("RenewalDuration", std::to_string(renewalDuration));
}

std::string SetAutoRenewStatusRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetAutoRenewStatusRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetAutoRenewStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetAutoRenewStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetAutoRenewStatusRequest::getRegionId()const
{
	return regionId_;
}

void SetAutoRenewStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetAutoRenewStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetAutoRenewStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SetAutoRenewStatusRequest::getRenewalStatus()const
{
	return renewalStatus_;
}

void SetAutoRenewStatusRequest::setRenewalStatus(const std::string& renewalStatus)
{
	renewalStatus_ = renewalStatus;
	setParameter("RenewalStatus", renewalStatus);
}

std::string SetAutoRenewStatusRequest::getRenewalCycUnit()const
{
	return renewalCycUnit_;
}

void SetAutoRenewStatusRequest::setRenewalCycUnit(const std::string& renewalCycUnit)
{
	renewalCycUnit_ = renewalCycUnit;
	setParameter("RenewalCycUnit", renewalCycUnit);
}

long SetAutoRenewStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void SetAutoRenewStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetAutoRenewStatusRequest::getTags()const
{
	return tags_;
}

void SetAutoRenewStatusRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

