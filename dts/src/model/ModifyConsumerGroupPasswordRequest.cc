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

#include <alibabacloud/dts/model/ModifyConsumerGroupPasswordRequest.h>

using AlibabaCloud::Dts::Model::ModifyConsumerGroupPasswordRequest;

ModifyConsumerGroupPasswordRequest::ModifyConsumerGroupPasswordRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ModifyConsumerGroupPassword")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyConsumerGroupPasswordRequest::~ModifyConsumerGroupPasswordRequest()
{}

std::string ModifyConsumerGroupPasswordRequest::getConsumerGroupName()const
{
	return consumerGroupName_;
}

void ModifyConsumerGroupPasswordRequest::setConsumerGroupName(const std::string& consumerGroupName)
{
	consumerGroupName_ = consumerGroupName;
	setParameter("ConsumerGroupName", consumerGroupName);
}

std::string ModifyConsumerGroupPasswordRequest::getConsumerGroupID()const
{
	return consumerGroupID_;
}

void ModifyConsumerGroupPasswordRequest::setConsumerGroupID(const std::string& consumerGroupID)
{
	consumerGroupID_ = consumerGroupID;
	setParameter("ConsumerGroupID", consumerGroupID);
}

std::string ModifyConsumerGroupPasswordRequest::getSubscriptionInstanceId()const
{
	return subscriptionInstanceId_;
}

void ModifyConsumerGroupPasswordRequest::setSubscriptionInstanceId(const std::string& subscriptionInstanceId)
{
	subscriptionInstanceId_ = subscriptionInstanceId;
	setParameter("SubscriptionInstanceId", subscriptionInstanceId);
}

std::string ModifyConsumerGroupPasswordRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyConsumerGroupPasswordRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ModifyConsumerGroupPasswordRequest::getConsumerGroupNewPassword()const
{
	return consumerGroupNewPassword_;
}

void ModifyConsumerGroupPasswordRequest::setConsumerGroupNewPassword(const std::string& consumerGroupNewPassword)
{
	consumerGroupNewPassword_ = consumerGroupNewPassword;
	setParameter("ConsumerGroupNewPassword", consumerGroupNewPassword);
}

std::string ModifyConsumerGroupPasswordRequest::getConsumerGroupPassword()const
{
	return consumerGroupPassword_;
}

void ModifyConsumerGroupPasswordRequest::setConsumerGroupPassword(const std::string& consumerGroupPassword)
{
	consumerGroupPassword_ = consumerGroupPassword;
	setParameter("ConsumerGroupPassword", consumerGroupPassword);
}

std::string ModifyConsumerGroupPasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyConsumerGroupPasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyConsumerGroupPasswordRequest::getAccountId()const
{
	return accountId_;
}

void ModifyConsumerGroupPasswordRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ModifyConsumerGroupPasswordRequest::getConsumerGroupUserName()const
{
	return consumerGroupUserName_;
}

void ModifyConsumerGroupPasswordRequest::setConsumerGroupUserName(const std::string& consumerGroupUserName)
{
	consumerGroupUserName_ = consumerGroupUserName;
	setParameter("ConsumerGroupUserName", consumerGroupUserName);
}

std::string ModifyConsumerGroupPasswordRequest::getRegionId()const
{
	return regionId_;
}

void ModifyConsumerGroupPasswordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

