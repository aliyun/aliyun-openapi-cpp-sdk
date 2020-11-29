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

#include <alibabacloud/dts/model/ModifyConsumptionTimestampRequest.h>

using AlibabaCloud::Dts::Model::ModifyConsumptionTimestampRequest;

ModifyConsumptionTimestampRequest::ModifyConsumptionTimestampRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ModifyConsumptionTimestamp")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyConsumptionTimestampRequest::~ModifyConsumptionTimestampRequest()
{}

std::string ModifyConsumptionTimestampRequest::getSubscriptionInstanceId()const
{
	return subscriptionInstanceId_;
}

void ModifyConsumptionTimestampRequest::setSubscriptionInstanceId(const std::string& subscriptionInstanceId)
{
	subscriptionInstanceId_ = subscriptionInstanceId;
	setParameter("SubscriptionInstanceId", subscriptionInstanceId);
}

std::string ModifyConsumptionTimestampRequest::getConsumptionTimestamp()const
{
	return consumptionTimestamp_;
}

void ModifyConsumptionTimestampRequest::setConsumptionTimestamp(const std::string& consumptionTimestamp)
{
	consumptionTimestamp_ = consumptionTimestamp;
	setParameter("ConsumptionTimestamp", consumptionTimestamp);
}

std::string ModifyConsumptionTimestampRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyConsumptionTimestampRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ModifyConsumptionTimestampRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyConsumptionTimestampRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyConsumptionTimestampRequest::getAccountId()const
{
	return accountId_;
}

void ModifyConsumptionTimestampRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

