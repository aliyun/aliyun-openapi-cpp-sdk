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

#include <alibabacloud/ddoscoo/model/CreateWebCCRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateWebCCRuleRequest;

CreateWebCCRuleRequest::CreateWebCCRuleRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "CreateWebCCRule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateWebCCRuleRequest::~CreateWebCCRuleRequest()
{}

std::string CreateWebCCRuleRequest::getMode()const
{
	return mode_;
}

void CreateWebCCRuleRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string CreateWebCCRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateWebCCRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateWebCCRuleRequest::getAct()const
{
	return act_;
}

void CreateWebCCRuleRequest::setAct(const std::string& act)
{
	act_ = act;
	setParameter("Act", act);
}

std::string CreateWebCCRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateWebCCRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int CreateWebCCRuleRequest::getCount()const
{
	return count_;
}

void CreateWebCCRuleRequest::setCount(int count)
{
	count_ = count;
	setParameter("Count", std::to_string(count));
}

int CreateWebCCRuleRequest::getTtl()const
{
	return ttl_;
}

void CreateWebCCRuleRequest::setTtl(int ttl)
{
	ttl_ = ttl;
	setParameter("Ttl", std::to_string(ttl));
}

std::string CreateWebCCRuleRequest::getUri()const
{
	return uri_;
}

void CreateWebCCRuleRequest::setUri(const std::string& uri)
{
	uri_ = uri;
	setParameter("Uri", uri);
}

std::string CreateWebCCRuleRequest::getDomain()const
{
	return domain_;
}

void CreateWebCCRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string CreateWebCCRuleRequest::getName()const
{
	return name_;
}

void CreateWebCCRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int CreateWebCCRuleRequest::getInterval()const
{
	return interval_;
}

void CreateWebCCRuleRequest::setInterval(int interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

