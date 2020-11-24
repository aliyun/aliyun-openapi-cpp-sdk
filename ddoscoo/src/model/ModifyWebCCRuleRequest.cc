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

#include <alibabacloud/ddoscoo/model/ModifyWebCCRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebCCRuleRequest;

ModifyWebCCRuleRequest::ModifyWebCCRuleRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebCCRule")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyWebCCRuleRequest::~ModifyWebCCRuleRequest()
{}

std::string ModifyWebCCRuleRequest::getMode()const
{
	return mode_;
}

void ModifyWebCCRuleRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string ModifyWebCCRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyWebCCRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyWebCCRuleRequest::getAct()const
{
	return act_;
}

void ModifyWebCCRuleRequest::setAct(const std::string& act)
{
	act_ = act;
	setParameter("Act", act);
}

std::string ModifyWebCCRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWebCCRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int ModifyWebCCRuleRequest::getCount()const
{
	return count_;
}

void ModifyWebCCRuleRequest::setCount(int count)
{
	count_ = count;
	setParameter("Count", std::to_string(count));
}

int ModifyWebCCRuleRequest::getTtl()const
{
	return ttl_;
}

void ModifyWebCCRuleRequest::setTtl(int ttl)
{
	ttl_ = ttl;
	setParameter("Ttl", std::to_string(ttl));
}

std::string ModifyWebCCRuleRequest::getUri()const
{
	return uri_;
}

void ModifyWebCCRuleRequest::setUri(const std::string& uri)
{
	uri_ = uri;
	setParameter("Uri", uri);
}

std::string ModifyWebCCRuleRequest::getDomain()const
{
	return domain_;
}

void ModifyWebCCRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string ModifyWebCCRuleRequest::getName()const
{
	return name_;
}

void ModifyWebCCRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ModifyWebCCRuleRequest::getInterval()const
{
	return interval_;
}

void ModifyWebCCRuleRequest::setInterval(int interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

