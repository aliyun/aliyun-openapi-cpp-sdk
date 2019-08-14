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

#include <alibabacloud/alidns/model/AddGtmAccessStrategyRequest.h>

using AlibabaCloud::Alidns::Model::AddGtmAccessStrategyRequest;

AddGtmAccessStrategyRequest::AddGtmAccessStrategyRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "AddGtmAccessStrategy")
{}

AddGtmAccessStrategyRequest::~AddGtmAccessStrategyRequest()
{}

std::string AddGtmAccessStrategyRequest::getStrategyName()const
{
	return strategyName_;
}

void AddGtmAccessStrategyRequest::setStrategyName(const std::string& strategyName)
{
	strategyName_ = strategyName;
	setCoreParameter("StrategyName", strategyName);
}

std::string AddGtmAccessStrategyRequest::getDefaultAddrPoolId()const
{
	return defaultAddrPoolId_;
}

void AddGtmAccessStrategyRequest::setDefaultAddrPoolId(const std::string& defaultAddrPoolId)
{
	defaultAddrPoolId_ = defaultAddrPoolId;
	setCoreParameter("DefaultAddrPoolId", defaultAddrPoolId);
}

std::string AddGtmAccessStrategyRequest::getAccessLines()const
{
	return accessLines_;
}

void AddGtmAccessStrategyRequest::setAccessLines(const std::string& accessLines)
{
	accessLines_ = accessLines;
	setCoreParameter("AccessLines", accessLines);
}

std::string AddGtmAccessStrategyRequest::getInstanceId()const
{
	return instanceId_;
}

void AddGtmAccessStrategyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AddGtmAccessStrategyRequest::getFailoverAddrPoolId()const
{
	return failoverAddrPoolId_;
}

void AddGtmAccessStrategyRequest::setFailoverAddrPoolId(const std::string& failoverAddrPoolId)
{
	failoverAddrPoolId_ = failoverAddrPoolId;
	setCoreParameter("FailoverAddrPoolId", failoverAddrPoolId);
}

std::string AddGtmAccessStrategyRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddGtmAccessStrategyRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string AddGtmAccessStrategyRequest::getLang()const
{
	return lang_;
}

void AddGtmAccessStrategyRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

