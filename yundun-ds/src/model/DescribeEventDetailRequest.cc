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

#include <alibabacloud/yundun-ds/model/DescribeEventDetailRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeEventDetailRequest;

DescribeEventDetailRequest::DescribeEventDetailRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeEventDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEventDetailRequest::~DescribeEventDetailRequest()
{}

long DescribeEventDetailRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeEventDetailRequest::setFeatureType(long featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

std::string DescribeEventDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEventDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeEventDetailRequest::getId()const
{
	return id_;
}

void DescribeEventDetailRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string DescribeEventDetailRequest::getLang()const
{
	return lang_;
}

void DescribeEventDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

