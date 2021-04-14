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

#include <alibabacloud/geoip/model/DescribeGeoipInstanceDataInfosRequest.h>

using AlibabaCloud::Geoip::Model::DescribeGeoipInstanceDataInfosRequest;

DescribeGeoipInstanceDataInfosRequest::DescribeGeoipInstanceDataInfosRequest() :
	RpcServiceRequest("geoip", "2020-01-01", "DescribeGeoipInstanceDataInfos")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGeoipInstanceDataInfosRequest::~DescribeGeoipInstanceDataInfosRequest()
{}

std::string DescribeGeoipInstanceDataInfosRequest::getLocationDataType()const
{
	return locationDataType_;
}

void DescribeGeoipInstanceDataInfosRequest::setLocationDataType(const std::string& locationDataType)
{
	locationDataType_ = locationDataType;
	setParameter("LocationDataType", locationDataType);
}

std::string DescribeGeoipInstanceDataInfosRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeGeoipInstanceDataInfosRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeGeoipInstanceDataInfosRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeGeoipInstanceDataInfosRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeGeoipInstanceDataInfosRequest::getLang()const
{
	return lang_;
}

void DescribeGeoipInstanceDataInfosRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

