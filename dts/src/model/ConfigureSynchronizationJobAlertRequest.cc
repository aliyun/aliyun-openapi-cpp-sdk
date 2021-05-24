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

#include <alibabacloud/dts/model/ConfigureSynchronizationJobAlertRequest.h>

using AlibabaCloud::Dts::Model::ConfigureSynchronizationJobAlertRequest;

ConfigureSynchronizationJobAlertRequest::ConfigureSynchronizationJobAlertRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ConfigureSynchronizationJobAlert")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigureSynchronizationJobAlertRequest::~ConfigureSynchronizationJobAlertRequest()
{}

std::string ConfigureSynchronizationJobAlertRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConfigureSynchronizationJobAlertRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ConfigureSynchronizationJobAlertRequest::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

void ConfigureSynchronizationJobAlertRequest::setSynchronizationJobId(const std::string& synchronizationJobId)
{
	synchronizationJobId_ = synchronizationJobId;
	setParameter("SynchronizationJobId", synchronizationJobId);
}

std::string ConfigureSynchronizationJobAlertRequest::getAccountId()const
{
	return accountId_;
}

void ConfigureSynchronizationJobAlertRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ConfigureSynchronizationJobAlertRequest::getRegionId()const
{
	return regionId_;
}

void ConfigureSynchronizationJobAlertRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ConfigureSynchronizationJobAlertRequest::getDelayAlertPhone()const
{
	return delayAlertPhone_;
}

void ConfigureSynchronizationJobAlertRequest::setDelayAlertPhone(const std::string& delayAlertPhone)
{
	delayAlertPhone_ = delayAlertPhone;
	setParameter("DelayAlertPhone", delayAlertPhone);
}

std::string ConfigureSynchronizationJobAlertRequest::getDelayOverSeconds()const
{
	return delayOverSeconds_;
}

void ConfigureSynchronizationJobAlertRequest::setDelayOverSeconds(const std::string& delayOverSeconds)
{
	delayOverSeconds_ = delayOverSeconds;
	setParameter("DelayOverSeconds", delayOverSeconds);
}

std::string ConfigureSynchronizationJobAlertRequest::getDelayAlertStatus()const
{
	return delayAlertStatus_;
}

void ConfigureSynchronizationJobAlertRequest::setDelayAlertStatus(const std::string& delayAlertStatus)
{
	delayAlertStatus_ = delayAlertStatus;
	setParameter("DelayAlertStatus", delayAlertStatus);
}

std::string ConfigureSynchronizationJobAlertRequest::getOwnerId()const
{
	return ownerId_;
}

void ConfigureSynchronizationJobAlertRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ConfigureSynchronizationJobAlertRequest::getErrorAlertPhone()const
{
	return errorAlertPhone_;
}

void ConfigureSynchronizationJobAlertRequest::setErrorAlertPhone(const std::string& errorAlertPhone)
{
	errorAlertPhone_ = errorAlertPhone;
	setParameter("ErrorAlertPhone", errorAlertPhone);
}

std::string ConfigureSynchronizationJobAlertRequest::getErrorAlertStatus()const
{
	return errorAlertStatus_;
}

void ConfigureSynchronizationJobAlertRequest::setErrorAlertStatus(const std::string& errorAlertStatus)
{
	errorAlertStatus_ = errorAlertStatus;
	setParameter("ErrorAlertStatus", errorAlertStatus);
}

std::string ConfigureSynchronizationJobAlertRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void ConfigureSynchronizationJobAlertRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

