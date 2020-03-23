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

#include <alibabacloud/rds/model/CreateDedicatedHostRequest.h>

using AlibabaCloud::Rds::Model::CreateDedicatedHostRequest;

CreateDedicatedHostRequest::CreateDedicatedHostRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateDedicatedHost")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDedicatedHostRequest::~CreateDedicatedHostRequest()
{}

long CreateDedicatedHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDedicatedHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDedicatedHostRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDedicatedHostRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDedicatedHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDedicatedHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDedicatedHostRequest::getHostName()const
{
	return hostName_;
}

void CreateDedicatedHostRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string CreateDedicatedHostRequest::getRegionId()const
{
	return regionId_;
}

void CreateDedicatedHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDedicatedHostRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void CreateDedicatedHostRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string CreateDedicatedHostRequest::getPeriod()const
{
	return period_;
}

void CreateDedicatedHostRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CreateDedicatedHostRequest::getHostClass()const
{
	return hostClass_;
}

void CreateDedicatedHostRequest::setHostClass(const std::string& hostClass)
{
	hostClass_ = hostClass;
	setParameter("HostClass", hostClass);
}

std::string CreateDedicatedHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDedicatedHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateDedicatedHostRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDedicatedHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDedicatedHostRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateDedicatedHostRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", usedTime);
}

std::string CreateDedicatedHostRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateDedicatedHostRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateDedicatedHostRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateDedicatedHostRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew);
}

std::string CreateDedicatedHostRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDedicatedHostRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDedicatedHostRequest::getPayType()const
{
	return payType_;
}

void CreateDedicatedHostRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

