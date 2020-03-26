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

#include <alibabacloud/yundun-ds/model/DescribeDataLimitSetRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeDataLimitSetRequest;

DescribeDataLimitSetRequest::DescribeDataLimitSetRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeDataLimitSet")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDataLimitSetRequest::~DescribeDataLimitSetRequest()
{}

int DescribeDataLimitSetRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeDataLimitSetRequest::setResourceType(int resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", std::to_string(resourceType));
}

std::string DescribeDataLimitSetRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataLimitSetRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeDataLimitSetRequest::getLang()const
{
	return lang_;
}

void DescribeDataLimitSetRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

