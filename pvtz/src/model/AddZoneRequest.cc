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

#include <alibabacloud/pvtz/model/AddZoneRequest.h>

using AlibabaCloud::Pvtz::Model::AddZoneRequest;

AddZoneRequest::AddZoneRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "AddZone")
{
	setMethod(HttpRequest::Method::Post);
}

AddZoneRequest::~AddZoneRequest()
{}

std::string AddZoneRequest::getProxyPattern()const
{
	return proxyPattern_;
}

void AddZoneRequest::setProxyPattern(const std::string& proxyPattern)
{
	proxyPattern_ = proxyPattern;
	setParameter("ProxyPattern", proxyPattern);
}

std::string AddZoneRequest::getZoneName()const
{
	return zoneName_;
}

void AddZoneRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setParameter("ZoneName", zoneName);
}

std::string AddZoneRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AddZoneRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AddZoneRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddZoneRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string AddZoneRequest::getLang()const
{
	return lang_;
}

void AddZoneRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

