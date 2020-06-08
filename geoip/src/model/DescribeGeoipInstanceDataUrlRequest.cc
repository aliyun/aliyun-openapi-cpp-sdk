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

#include <alibabacloud/geoip/model/DescribeGeoipInstanceDataUrlRequest.h>

using AlibabaCloud::Geoip::Model::DescribeGeoipInstanceDataUrlRequest;

DescribeGeoipInstanceDataUrlRequest::DescribeGeoipInstanceDataUrlRequest() :
	RpcServiceRequest("geoip", "2020-01-01", "DescribeGeoipInstanceDataUrl")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGeoipInstanceDataUrlRequest::~DescribeGeoipInstanceDataUrlRequest()
{}

std::string DescribeGeoipInstanceDataUrlRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeGeoipInstanceDataUrlRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeGeoipInstanceDataUrlRequest::getDataType()const
{
	return dataType_;
}

void DescribeGeoipInstanceDataUrlRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setParameter("DataType", dataType);
}

std::string DescribeGeoipInstanceDataUrlRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeGeoipInstanceDataUrlRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeGeoipInstanceDataUrlRequest::getLang()const
{
	return lang_;
}

void DescribeGeoipInstanceDataUrlRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

