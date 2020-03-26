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

#include <alibabacloud/yundun-ds/model/DescribeEventCountsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeEventCountsRequest;

DescribeEventCountsRequest::DescribeEventCountsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeEventCounts")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEventCountsRequest::~DescribeEventCountsRequest()
{}

int DescribeEventCountsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeEventCountsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribeEventCountsRequest::getCountType()const
{
	return countType_;
}

void DescribeEventCountsRequest::setCountType(int countType)
{
	countType_ = countType;
	setParameter("CountType", std::to_string(countType));
}

std::string DescribeEventCountsRequest::getTypeCode()const
{
	return typeCode_;
}

void DescribeEventCountsRequest::setTypeCode(const std::string& typeCode)
{
	typeCode_ = typeCode;
	setParameter("TypeCode", typeCode);
}

std::string DescribeEventCountsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEventCountsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeEventCountsRequest::getDays()const
{
	return days_;
}

void DescribeEventCountsRequest::setDays(int days)
{
	days_ = days;
	setParameter("Days", std::to_string(days));
}

std::string DescribeEventCountsRequest::getLang()const
{
	return lang_;
}

void DescribeEventCountsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

