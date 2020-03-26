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

#include <alibabacloud/geoip/model/DescribeIpv6LocationRequest.h>

using AlibabaCloud::Geoip::Model::DescribeIpv6LocationRequest;

DescribeIpv6LocationRequest::DescribeIpv6LocationRequest() :
	RpcServiceRequest("geoip", "2020-01-01", "DescribeIpv6Location")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeIpv6LocationRequest::~DescribeIpv6LocationRequest()
{}

std::string DescribeIpv6LocationRequest::getIp()const
{
	return ip_;
}

void DescribeIpv6LocationRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string DescribeIpv6LocationRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeIpv6LocationRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeIpv6LocationRequest::getLang()const
{
	return lang_;
}

void DescribeIpv6LocationRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

