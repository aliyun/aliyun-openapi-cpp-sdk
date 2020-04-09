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

#include <alibabacloud/waf-openapi/model/DescribeDomainStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeDomainStatusRequest;

DescribeDomainStatusRequest::DescribeDomainStatusRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeDomainStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainStatusRequest::~DescribeDomainStatusRequest()
{}

std::string DescribeDomainStatusRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDomainStatusRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDomainStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDomainStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeDomainStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDomainStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeDomainStatusRequest::getDomain()const
{
	return domain_;
}

void DescribeDomainStatusRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeDomainStatusRequest::getLang()const
{
	return lang_;
}

void DescribeDomainStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

