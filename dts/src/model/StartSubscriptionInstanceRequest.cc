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

#include <alibabacloud/dts/model/StartSubscriptionInstanceRequest.h>

using AlibabaCloud::Dts::Model::StartSubscriptionInstanceRequest;

StartSubscriptionInstanceRequest::StartSubscriptionInstanceRequest() :
	RpcServiceRequest("dts", "2020-01-01", "StartSubscriptionInstance")
{
	setMethod(HttpRequest::Method::Post);
}

StartSubscriptionInstanceRequest::~StartSubscriptionInstanceRequest()
{}

std::string StartSubscriptionInstanceRequest::getSubscriptionInstanceId()const
{
	return subscriptionInstanceId_;
}

void StartSubscriptionInstanceRequest::setSubscriptionInstanceId(const std::string& subscriptionInstanceId)
{
	subscriptionInstanceId_ = subscriptionInstanceId;
	setParameter("SubscriptionInstanceId", subscriptionInstanceId);
}

std::string StartSubscriptionInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void StartSubscriptionInstanceRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string StartSubscriptionInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartSubscriptionInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string StartSubscriptionInstanceRequest::getAccountId()const
{
	return accountId_;
}

void StartSubscriptionInstanceRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

