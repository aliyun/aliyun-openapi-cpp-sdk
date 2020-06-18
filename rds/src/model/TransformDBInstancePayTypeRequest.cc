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

#include <alibabacloud/rds/model/TransformDBInstancePayTypeRequest.h>

using AlibabaCloud::Rds::Model::TransformDBInstancePayTypeRequest;

TransformDBInstancePayTypeRequest::TransformDBInstancePayTypeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "TransformDBInstancePayType")
{
	setMethod(HttpRequest::Method::Post);
}

TransformDBInstancePayTypeRequest::~TransformDBInstancePayTypeRequest()
{}

long TransformDBInstancePayTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void TransformDBInstancePayTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string TransformDBInstancePayTypeRequest::getClientToken()const
{
	return clientToken_;
}

void TransformDBInstancePayTypeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string TransformDBInstancePayTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void TransformDBInstancePayTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string TransformDBInstancePayTypeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void TransformDBInstancePayTypeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string TransformDBInstancePayTypeRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void TransformDBInstancePayTypeRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

std::string TransformDBInstancePayTypeRequest::getPeriod()const
{
	return period_;
}

void TransformDBInstancePayTypeRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string TransformDBInstancePayTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void TransformDBInstancePayTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string TransformDBInstancePayTypeRequest::getResource()const
{
	return resource_;
}

void TransformDBInstancePayTypeRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setParameter("Resource", resource);
}

std::string TransformDBInstancePayTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void TransformDBInstancePayTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long TransformDBInstancePayTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void TransformDBInstancePayTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int TransformDBInstancePayTypeRequest::getUsedTime()const
{
	return usedTime_;
}

void TransformDBInstancePayTypeRequest::setUsedTime(int usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", std::to_string(usedTime));
}

std::string TransformDBInstancePayTypeRequest::getPayType()const
{
	return payType_;
}

void TransformDBInstancePayTypeRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

