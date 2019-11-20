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

#include <alibabacloud/dds/model/RenewDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::RenewDBInstanceRequest;

RenewDBInstanceRequest::RenewDBInstanceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "RenewDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RenewDBInstanceRequest::~RenewDBInstanceRequest()
{}

long RenewDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenewDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RenewDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string RenewDBInstanceRequest::getCouponNo()const
{
	return couponNo_;
}

void RenewDBInstanceRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

std::string RenewDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenewDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RenewDBInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RenewDBInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RenewDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RenewDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string RenewDBInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void RenewDBInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

int RenewDBInstanceRequest::getPeriod()const
{
	return period_;
}

void RenewDBInstanceRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

bool RenewDBInstanceRequest::getAutoPay()const
{
	return autoPay_;
}

void RenewDBInstanceRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string RenewDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenewDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RenewDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

