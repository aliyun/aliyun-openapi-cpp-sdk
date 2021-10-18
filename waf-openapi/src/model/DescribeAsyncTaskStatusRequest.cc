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

#include <alibabacloud/waf-openapi/model/DescribeAsyncTaskStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeAsyncTaskStatusRequest;

DescribeAsyncTaskStatusRequest::DescribeAsyncTaskStatusRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "DescribeAsyncTaskStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAsyncTaskStatusRequest::~DescribeAsyncTaskStatusRequest()
{}

std::string DescribeAsyncTaskStatusRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeAsyncTaskStatusRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeAsyncTaskStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeAsyncTaskStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeAsyncTaskStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAsyncTaskStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeAsyncTaskStatusRequest::getWafRequestId()const
{
	return wafRequestId_;
}

void DescribeAsyncTaskStatusRequest::setWafRequestId(const std::string& wafRequestId)
{
	wafRequestId_ = wafRequestId;
	setParameter("WafRequestId", wafRequestId);
}

std::string DescribeAsyncTaskStatusRequest::getLang()const
{
	return lang_;
}

void DescribeAsyncTaskStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeAsyncTaskStatusRequest::getRegion()const
{
	return region_;
}

void DescribeAsyncTaskStatusRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

