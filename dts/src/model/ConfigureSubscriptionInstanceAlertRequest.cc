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

#include <alibabacloud/dts/model/ConfigureSubscriptionInstanceAlertRequest.h>

using AlibabaCloud::Dts::Model::ConfigureSubscriptionInstanceAlertRequest;

ConfigureSubscriptionInstanceAlertRequest::ConfigureSubscriptionInstanceAlertRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ConfigureSubscriptionInstanceAlert")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigureSubscriptionInstanceAlertRequest::~ConfigureSubscriptionInstanceAlertRequest()
{}

std::string ConfigureSubscriptionInstanceAlertRequest::getDelayOverSeconds()const
{
	return delayOverSeconds_;
}

void ConfigureSubscriptionInstanceAlertRequest::setDelayOverSeconds(const std::string& delayOverSeconds)
{
	delayOverSeconds_ = delayOverSeconds;
	setParameter("DelayOverSeconds", delayOverSeconds);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getDelayAlertStatus()const
{
	return delayAlertStatus_;
}

void ConfigureSubscriptionInstanceAlertRequest::setDelayAlertStatus(const std::string& delayAlertStatus)
{
	delayAlertStatus_ = delayAlertStatus;
	setParameter("DelayAlertStatus", delayAlertStatus);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getSubscriptionInstanceId()const
{
	return subscriptionInstanceId_;
}

void ConfigureSubscriptionInstanceAlertRequest::setSubscriptionInstanceId(const std::string& subscriptionInstanceId)
{
	subscriptionInstanceId_ = subscriptionInstanceId;
	setParameter("SubscriptionInstanceId", subscriptionInstanceId);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getOwnerId()const
{
	return ownerId_;
}

void ConfigureSubscriptionInstanceAlertRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConfigureSubscriptionInstanceAlertRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getAccountId()const
{
	return accountId_;
}

void ConfigureSubscriptionInstanceAlertRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getErrorAlertPhone()const
{
	return errorAlertPhone_;
}

void ConfigureSubscriptionInstanceAlertRequest::setErrorAlertPhone(const std::string& errorAlertPhone)
{
	errorAlertPhone_ = errorAlertPhone;
	setParameter("ErrorAlertPhone", errorAlertPhone);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getRegionId()const
{
	return regionId_;
}

void ConfigureSubscriptionInstanceAlertRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getDelayAlertPhone()const
{
	return delayAlertPhone_;
}

void ConfigureSubscriptionInstanceAlertRequest::setDelayAlertPhone(const std::string& delayAlertPhone)
{
	delayAlertPhone_ = delayAlertPhone;
	setParameter("DelayAlertPhone", delayAlertPhone);
}

std::string ConfigureSubscriptionInstanceAlertRequest::getErrorAlertStatus()const
{
	return errorAlertStatus_;
}

void ConfigureSubscriptionInstanceAlertRequest::setErrorAlertStatus(const std::string& errorAlertStatus)
{
	errorAlertStatus_ = errorAlertStatus;
	setParameter("ErrorAlertStatus", errorAlertStatus);
}

