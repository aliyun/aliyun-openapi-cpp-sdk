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

#include <alibabacloud/r-kvstore/model/RenewMultiInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::RenewMultiInstanceRequest;

RenewMultiInstanceRequest::RenewMultiInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "RenewMultiInstance")
{}

RenewMultiInstanceRequest::~RenewMultiInstanceRequest()
{}

long RenewMultiInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewMultiInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long RenewMultiInstanceRequest::getPeriod()const
{
	return period_;
}

void RenewMultiInstanceRequest::setPeriod(long period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

bool RenewMultiInstanceRequest::getAutoPay()const
{
	return autoPay_;
}

void RenewMultiInstanceRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string RenewMultiInstanceRequest::getFromApp()const
{
	return fromApp_;
}

void RenewMultiInstanceRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setCoreParameter("FromApp", std::to_string(fromApp));
}

std::string RenewMultiInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewMultiInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string RenewMultiInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenewMultiInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string RenewMultiInstanceRequest::getCouponNo()const
{
	return couponNo_;
}

void RenewMultiInstanceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", std::to_string(couponNo));
}

long RenewMultiInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewMultiInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RenewMultiInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenewMultiInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string RenewMultiInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RenewMultiInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string RenewMultiInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RenewMultiInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string RenewMultiInstanceRequest::getInstanceIds()const
{
	return instanceIds_;
}

void RenewMultiInstanceRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", std::to_string(instanceIds));
}

std::string RenewMultiInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void RenewMultiInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", std::to_string(businessInfo));
}

