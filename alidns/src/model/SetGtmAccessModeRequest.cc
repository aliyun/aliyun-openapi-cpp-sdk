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

#include <alibabacloud/alidns/model/SetGtmAccessModeRequest.h>

using AlibabaCloud::Alidns::Model::SetGtmAccessModeRequest;

SetGtmAccessModeRequest::SetGtmAccessModeRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "SetGtmAccessMode")
{}

SetGtmAccessModeRequest::~SetGtmAccessModeRequest()
{}

std::string SetGtmAccessModeRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SetGtmAccessModeRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SetGtmAccessModeRequest::getStrategyId()const
{
	return strategyId_;
}

void SetGtmAccessModeRequest::setStrategyId(const std::string& strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", strategyId);
}

std::string SetGtmAccessModeRequest::getLang()const
{
	return lang_;
}

void SetGtmAccessModeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string SetGtmAccessModeRequest::getAccessMode()const
{
	return accessMode_;
}

void SetGtmAccessModeRequest::setAccessMode(const std::string& accessMode)
{
	accessMode_ = accessMode;
	setCoreParameter("AccessMode", accessMode);
}

