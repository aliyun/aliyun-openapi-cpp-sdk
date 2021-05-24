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

#include <alibabacloud/dts/model/CreateSubscriptionInstanceRequest.h>

using AlibabaCloud::Dts::Model::CreateSubscriptionInstanceRequest;

CreateSubscriptionInstanceRequest::CreateSubscriptionInstanceRequest() :
	RpcServiceRequest("dts", "2020-01-01", "CreateSubscriptionInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSubscriptionInstanceRequest::~CreateSubscriptionInstanceRequest()
{}

std::string CreateSubscriptionInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateSubscriptionInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CreateSubscriptionInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSubscriptionInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSubscriptionInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSubscriptionInstanceRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

int CreateSubscriptionInstanceRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateSubscriptionInstanceRequest::setUsedTime(int usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", std::to_string(usedTime));
}

std::string CreateSubscriptionInstanceRequest::getSourceEndpointInstanceType()const
{
	return sourceEndpointInstanceType_;
}

void CreateSubscriptionInstanceRequest::setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType)
{
	sourceEndpointInstanceType_ = sourceEndpointInstanceType;
	setParameter("SourceEndpointInstanceType", sourceEndpointInstanceType);
}

std::string CreateSubscriptionInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSubscriptionInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateSubscriptionInstanceRequest::getAccountId()const
{
	return accountId_;
}

void CreateSubscriptionInstanceRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string CreateSubscriptionInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateSubscriptionInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSubscriptionInstanceRequest::getRegion()const
{
	return region_;
}

void CreateSubscriptionInstanceRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string CreateSubscriptionInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateSubscriptionInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

