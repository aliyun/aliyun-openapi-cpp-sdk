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

#include <alibabacloud/alidns/model/QueryCreateInstancePriceRequest.h>

using AlibabaCloud::Alidns::Model::QueryCreateInstancePriceRequest;

QueryCreateInstancePriceRequest::QueryCreateInstancePriceRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "QueryCreateInstancePrice")
{}

QueryCreateInstancePriceRequest::~QueryCreateInstancePriceRequest()
{}

int QueryCreateInstancePriceRequest::getMonth()const
{
	return month_;
}

void QueryCreateInstancePriceRequest::setMonth(int month)
{
	month_ = month;
	setCoreParameter("Month", month);
}

std::string QueryCreateInstancePriceRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryCreateInstancePriceRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string QueryCreateInstancePriceRequest::getLang()const
{
	return lang_;
}

void QueryCreateInstancePriceRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string QueryCreateInstancePriceRequest::getInstanceVersion()const
{
	return instanceVersion_;
}

void QueryCreateInstancePriceRequest::setInstanceVersion(const std::string& instanceVersion)
{
	instanceVersion_ = instanceVersion;
	setCoreParameter("InstanceVersion", std::to_string(instanceVersion));
}

long QueryCreateInstancePriceRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCreateInstancePriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryCreateInstancePriceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCreateInstancePriceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

