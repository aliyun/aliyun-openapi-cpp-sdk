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

#include <alibabacloud/sddp/model/DescribeUseFlowRequest.h>

using AlibabaCloud::Sddp::Model::DescribeUseFlowRequest;

DescribeUseFlowRequest::DescribeUseFlowRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeUseFlow")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUseFlowRequest::~DescribeUseFlowRequest()
{}

std::string DescribeUseFlowRequest::getDateType()const
{
	return dateType_;
}

void DescribeUseFlowRequest::setDateType(const std::string& dateType)
{
	dateType_ = dateType;
	setParameter("DateType", dateType);
}

int DescribeUseFlowRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeUseFlowRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

std::string DescribeUseFlowRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeUseFlowRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeUseFlowRequest::getDays()const
{
	return days_;
}

void DescribeUseFlowRequest::setDays(int days)
{
	days_ = days;
	setParameter("Days", std::to_string(days));
}

std::string DescribeUseFlowRequest::getLang()const
{
	return lang_;
}

void DescribeUseFlowRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

