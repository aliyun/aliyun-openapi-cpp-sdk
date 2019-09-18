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

#include <alibabacloud/r-kvstore/model/RenewInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::RenewInstanceRequest;

RenewInstanceRequest::RenewInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "RenewInstance")
{}

RenewInstanceRequest::~RenewInstanceRequest()
{}

long RenewInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenewInstanceRequest::getCouponNo()const
{
	return couponNo_;
}

void RenewInstanceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

std::string RenewInstanceRequest::getInstanceClass()const
{
	return instanceClass_;
}

void RenewInstanceRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setCoreParameter("InstanceClass", instanceClass);
}

std::string RenewInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenewInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RenewInstanceRequest::getCapacity()const
{
	return capacity_;
}

void RenewInstanceRequest::setCapacity(const std::string& capacity)
{
	capacity_ = capacity;
	setCoreParameter("Capacity", capacity);
}

std::string RenewInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RenewInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RenewInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void RenewInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

long RenewInstanceRequest::getPeriod()const
{
	return period_;
}

void RenewInstanceRequest::setPeriod(long period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

bool RenewInstanceRequest::getAutoPay()const
{
	return autoPay_;
}

void RenewInstanceRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string RenewInstanceRequest::getFromApp()const
{
	return fromApp_;
}

void RenewInstanceRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setCoreParameter("FromApp", fromApp);
}

std::string RenewInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenewInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RenewInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RenewInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

bool RenewInstanceRequest::getForceUpgrade()const
{
	return forceUpgrade_;
}

void RenewInstanceRequest::setForceUpgrade(bool forceUpgrade)
{
	forceUpgrade_ = forceUpgrade;
	setCoreParameter("ForceUpgrade", forceUpgrade ? "true" : "false");
}

