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

#include <alibabacloud/rds/model/RenewInstanceRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

RenewInstanceRequest::RenewInstanceRequest() :
	RdsRequest("RenewInstance")
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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenewInstanceRequest::getPeriod()const
{
	return period_;
}

void RenewInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string RenewInstanceRequest::getAutoPay()const
{
	return autoPay_;
}

void RenewInstanceRequest::setAutoPay(const std::string& autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay);
}

std::string RenewInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RenewInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RenewInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RenewInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long RenewInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void RenewInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

std::string RenewInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenewInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

