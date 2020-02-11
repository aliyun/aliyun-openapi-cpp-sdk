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

#include <alibabacloud/pvtz/model/SetProxyPatternRequest.h>

using AlibabaCloud::Pvtz::Model::SetProxyPatternRequest;

SetProxyPatternRequest::SetProxyPatternRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "SetProxyPattern")
{
	setMethod(HttpRequest::Method::Post);
}

SetProxyPatternRequest::~SetProxyPatternRequest()
{}

std::string SetProxyPatternRequest::getProxyPattern()const
{
	return proxyPattern_;
}

void SetProxyPatternRequest::setProxyPattern(const std::string& proxyPattern)
{
	proxyPattern_ = proxyPattern;
	setParameter("ProxyPattern", proxyPattern);
}

std::string SetProxyPatternRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SetProxyPatternRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SetProxyPatternRequest::getZoneId()const
{
	return zoneId_;
}

void SetProxyPatternRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string SetProxyPatternRequest::getLang()const
{
	return lang_;
}

void SetProxyPatternRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

