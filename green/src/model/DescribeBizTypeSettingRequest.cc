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

#include <alibabacloud/green/model/DescribeBizTypeSettingRequest.h>

using AlibabaCloud::Green::Model::DescribeBizTypeSettingRequest;

DescribeBizTypeSettingRequest::DescribeBizTypeSettingRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeBizTypeSetting")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBizTypeSettingRequest::~DescribeBizTypeSettingRequest()
{}

std::string DescribeBizTypeSettingRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeBizTypeSettingRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeBizTypeSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeBizTypeSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeBizTypeSettingRequest::getBizTypeName()const
{
	return bizTypeName_;
}

void DescribeBizTypeSettingRequest::setBizTypeName(const std::string& bizTypeName)
{
	bizTypeName_ = bizTypeName;
	setParameter("BizTypeName", bizTypeName);
}

