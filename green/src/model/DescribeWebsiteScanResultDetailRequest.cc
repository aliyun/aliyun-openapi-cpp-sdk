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

#include <alibabacloud/green/model/DescribeWebsiteScanResultDetailRequest.h>

using AlibabaCloud::Green::Model::DescribeWebsiteScanResultDetailRequest;

DescribeWebsiteScanResultDetailRequest::DescribeWebsiteScanResultDetailRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeWebsiteScanResultDetail")
{}

DescribeWebsiteScanResultDetailRequest::~DescribeWebsiteScanResultDetailRequest()
{}

std::string DescribeWebsiteScanResultDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebsiteScanResultDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeWebsiteScanResultDetailRequest::getId()const
{
	return id_;
}

void DescribeWebsiteScanResultDetailRequest::setId(int id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string DescribeWebsiteScanResultDetailRequest::getLang()const
{
	return lang_;
}

void DescribeWebsiteScanResultDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeWebsiteScanResultDetailRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeWebsiteScanResultDetailRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

