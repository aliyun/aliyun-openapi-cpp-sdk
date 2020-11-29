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

#include <alibabacloud/dts/model/DeleteConsumerGroupRequest.h>

using AlibabaCloud::Dts::Model::DeleteConsumerGroupRequest;

DeleteConsumerGroupRequest::DeleteConsumerGroupRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DeleteConsumerGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteConsumerGroupRequest::~DeleteConsumerGroupRequest()
{}

std::string DeleteConsumerGroupRequest::getConsumerGroupID()const
{
	return consumerGroupID_;
}

void DeleteConsumerGroupRequest::setConsumerGroupID(const std::string& consumerGroupID)
{
	consumerGroupID_ = consumerGroupID;
	setParameter("ConsumerGroupID", consumerGroupID);
}

std::string DeleteConsumerGroupRequest::getSubscriptionInstanceId()const
{
	return subscriptionInstanceId_;
}

void DeleteConsumerGroupRequest::setSubscriptionInstanceId(const std::string& subscriptionInstanceId)
{
	subscriptionInstanceId_ = subscriptionInstanceId;
	setParameter("SubscriptionInstanceId", subscriptionInstanceId);
}

std::string DeleteConsumerGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteConsumerGroupRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DeleteConsumerGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteConsumerGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteConsumerGroupRequest::getAccountId()const
{
	return accountId_;
}

void DeleteConsumerGroupRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

