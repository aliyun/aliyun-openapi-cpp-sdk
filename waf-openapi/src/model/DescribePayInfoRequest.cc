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

#include <alibabacloud/waf-openapi/model/DescribePayInfoRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribePayInfoRequest;

DescribePayInfoRequest::DescribePayInfoRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "DescribePayInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePayInfoRequest::~DescribePayInfoRequest()
{}

std::string DescribePayInfoRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribePayInfoRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribePayInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePayInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribePayInfoRequest::getInstanceSource()const
{
	return instanceSource_;
}

void DescribePayInfoRequest::setInstanceSource(const std::string& instanceSource)
{
	instanceSource_ = instanceSource;
	setParameter("InstanceSource", instanceSource);
}

std::string DescribePayInfoRequest::getLang()const
{
	return lang_;
}

void DescribePayInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribePayInfoRequest::getRegion()const
{
	return region_;
}

void DescribePayInfoRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

