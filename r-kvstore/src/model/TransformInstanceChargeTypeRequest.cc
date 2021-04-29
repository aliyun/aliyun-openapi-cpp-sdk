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

#include <alibabacloud/r-kvstore/model/TransformInstanceChargeTypeRequest.h>

using AlibabaCloud::R_kvstore::Model::TransformInstanceChargeTypeRequest;

TransformInstanceChargeTypeRequest::TransformInstanceChargeTypeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "TransformInstanceChargeType")
{
	setMethod(HttpRequest::Method::Post);
}

TransformInstanceChargeTypeRequest::~TransformInstanceChargeTypeRequest()
{}

long TransformInstanceChargeTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void TransformInstanceChargeTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string TransformInstanceChargeTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void TransformInstanceChargeTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string TransformInstanceChargeTypeRequest::getSecurityToken()const
{
	return securityToken_;
}

void TransformInstanceChargeTypeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long TransformInstanceChargeTypeRequest::getPeriod()const
{
	return period_;
}

void TransformInstanceChargeTypeRequest::setPeriod(long period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

bool TransformInstanceChargeTypeRequest::getAutoPay()const
{
	return autoPay_;
}

void TransformInstanceChargeTypeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string TransformInstanceChargeTypeRequest::getFromApp()const
{
	return fromApp_;
}

void TransformInstanceChargeTypeRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setParameter("FromApp", fromApp);
}

std::string TransformInstanceChargeTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void TransformInstanceChargeTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string TransformInstanceChargeTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void TransformInstanceChargeTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long TransformInstanceChargeTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void TransformInstanceChargeTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string TransformInstanceChargeTypeRequest::getInstanceId()const
{
	return instanceId_;
}

void TransformInstanceChargeTypeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string TransformInstanceChargeTypeRequest::getChargeType()const
{
	return chargeType_;
}

void TransformInstanceChargeTypeRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

