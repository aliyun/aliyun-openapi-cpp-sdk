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

#include <alibabacloud/geoip/model/DescribeGeoipInstancesRequest.h>

using AlibabaCloud::Geoip::Model::DescribeGeoipInstancesRequest;

DescribeGeoipInstancesRequest::DescribeGeoipInstancesRequest() :
	RpcServiceRequest("geoip", "2020-01-01", "DescribeGeoipInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGeoipInstancesRequest::~DescribeGeoipInstancesRequest()
{}

std::string DescribeGeoipInstancesRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeGeoipInstancesRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeGeoipInstancesRequest::getLang()const
{
	return lang_;
}

void DescribeGeoipInstancesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

