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

#include <alibabacloud/r-kvstore/model/ModifyInstanceSpecRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceSpecRequest;

ModifyInstanceSpecRequest::ModifyInstanceSpecRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceSpec")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceSpecRequest::~ModifyInstanceSpecRequest()
{}

long ModifyInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceSpecRequest::getCouponNo()const
{
	return couponNo_;
}

void ModifyInstanceSpecRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

std::string ModifyInstanceSpecRequest::getInstanceClass()const
{
	return instanceClass_;
}

void ModifyInstanceSpecRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setCoreParameter("InstanceClass", instanceClass);
}

std::string ModifyInstanceSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyInstanceSpecRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceSpecRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyInstanceSpecRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void ModifyInstanceSpecRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string ModifyInstanceSpecRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void ModifyInstanceSpecRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

bool ModifyInstanceSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyInstanceSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getFromApp()const
{
	return fromApp_;
}

void ModifyInstanceSpecRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setCoreParameter("FromApp", fromApp);
}

std::string ModifyInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceSpecRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceSpecRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

bool ModifyInstanceSpecRequest::getForceUpgrade()const
{
	return forceUpgrade_;
}

void ModifyInstanceSpecRequest::setForceUpgrade(bool forceUpgrade)
{
	forceUpgrade_ = forceUpgrade;
	setCoreParameter("ForceUpgrade", forceUpgrade ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getOrderType()const
{
	return orderType_;
}

void ModifyInstanceSpecRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", orderType);
}

