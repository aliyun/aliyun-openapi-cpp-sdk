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

#include <alibabacloud/rds/model/RenewDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::RenewDBInstanceRequest;

RenewDBInstanceRequest::RenewDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RenewDBInstance")
{}

RenewDBInstanceRequest::~RenewDBInstanceRequest()
{}

long RenewDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenewDBInstanceRequest::getPeriod()const
{
	return period_;
}

void RenewDBInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string RenewDBInstanceRequest::getAutoPay()const
{
	return autoPay_;
}

void RenewDBInstanceRequest::setAutoPay(const std::string& autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay);
}

std::string RenewDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RenewDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RenewDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RenewDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long RenewDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenewDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

