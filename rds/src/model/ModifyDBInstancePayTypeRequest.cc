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

#include <alibabacloud/rds/model/ModifyDBInstancePayTypeRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstancePayTypeRequest;

ModifyDBInstancePayTypeRequest::ModifyDBInstancePayTypeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstancePayType")
{}

ModifyDBInstancePayTypeRequest::~ModifyDBInstancePayTypeRequest()
{}

long ModifyDBInstancePayTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstancePayTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyDBInstancePayTypeRequest::getPeriod()const
{
	return period_;
}

void ModifyDBInstancePayTypeRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string ModifyDBInstancePayTypeRequest::getAgentId()const
{
	return agentId_;
}

void ModifyDBInstancePayTypeRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", std::to_string(agentId));
}

std::string ModifyDBInstancePayTypeRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyDBInstancePayTypeRequest::setAutoPay(const std::string& autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", std::to_string(autoPay));
}

std::string ModifyDBInstancePayTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstancePayTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyDBInstancePayTypeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDBInstancePayTypeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string ModifyDBInstancePayTypeRequest::getResource()const
{
	return resource_;
}

void ModifyDBInstancePayTypeRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", std::to_string(resource));
}

std::string ModifyDBInstancePayTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstancePayTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifyDBInstancePayTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstancePayTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int ModifyDBInstancePayTypeRequest::getUsedTime()const
{
	return usedTime_;
}

void ModifyDBInstancePayTypeRequest::setUsedTime(int usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string ModifyDBInstancePayTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstancePayTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyDBInstancePayTypeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstancePayTypeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string ModifyDBInstancePayTypeRequest::getPayType()const
{
	return payType_;
}

void ModifyDBInstancePayTypeRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", std::to_string(payType));
}

std::string ModifyDBInstancePayTypeRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void ModifyDBInstancePayTypeRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", std::to_string(businessInfo));
}

