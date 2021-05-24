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

#include <alibabacloud/dts/model/CreateConsumerGroupRequest.h>

using AlibabaCloud::Dts::Model::CreateConsumerGroupRequest;

CreateConsumerGroupRequest::CreateConsumerGroupRequest() :
	RpcServiceRequest("dts", "2020-01-01", "CreateConsumerGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateConsumerGroupRequest::~CreateConsumerGroupRequest()
{}

std::string CreateConsumerGroupRequest::getConsumerGroupName()const
{
	return consumerGroupName_;
}

void CreateConsumerGroupRequest::setConsumerGroupName(const std::string& consumerGroupName)
{
	consumerGroupName_ = consumerGroupName;
	setParameter("ConsumerGroupName", consumerGroupName);
}

std::string CreateConsumerGroupRequest::getSubscriptionInstanceId()const
{
	return subscriptionInstanceId_;
}

void CreateConsumerGroupRequest::setSubscriptionInstanceId(const std::string& subscriptionInstanceId)
{
	subscriptionInstanceId_ = subscriptionInstanceId;
	setParameter("SubscriptionInstanceId", subscriptionInstanceId);
}

std::string CreateConsumerGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateConsumerGroupRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string CreateConsumerGroupRequest::getConsumerGroupPassword()const
{
	return consumerGroupPassword_;
}

void CreateConsumerGroupRequest::setConsumerGroupPassword(const std::string& consumerGroupPassword)
{
	consumerGroupPassword_ = consumerGroupPassword;
	setParameter("ConsumerGroupPassword", consumerGroupPassword);
}

std::string CreateConsumerGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateConsumerGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateConsumerGroupRequest::getAccountId()const
{
	return accountId_;
}

void CreateConsumerGroupRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string CreateConsumerGroupRequest::getConsumerGroupUserName()const
{
	return consumerGroupUserName_;
}

void CreateConsumerGroupRequest::setConsumerGroupUserName(const std::string& consumerGroupUserName)
{
	consumerGroupUserName_ = consumerGroupUserName;
	setParameter("ConsumerGroupUserName", consumerGroupUserName);
}

std::string CreateConsumerGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateConsumerGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

