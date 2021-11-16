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

#include <alibabacloud/ddoscoo/model/AddLayer7CCRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::AddLayer7CCRuleRequest;

AddLayer7CCRuleRequest::AddLayer7CCRuleRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "AddLayer7CCRule")
{
	setMethod(HttpRequest::Method::Post);
}

AddLayer7CCRuleRequest::~AddLayer7CCRuleRequest()
{}

std::string AddLayer7CCRuleRequest::getMode()const
{
	return mode_;
}

void AddLayer7CCRuleRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string AddLayer7CCRuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AddLayer7CCRuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AddLayer7CCRuleRequest::getAct()const
{
	return act_;
}

void AddLayer7CCRuleRequest::setAct(const std::string& act)
{
	act_ = act;
	setParameter("Act", act);
}

std::string AddLayer7CCRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void AddLayer7CCRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int AddLayer7CCRuleRequest::getCount()const
{
	return count_;
}

void AddLayer7CCRuleRequest::setCount(int count)
{
	count_ = count;
	setParameter("Count", std::to_string(count));
}

int AddLayer7CCRuleRequest::getTtl()const
{
	return ttl_;
}

void AddLayer7CCRuleRequest::setTtl(int ttl)
{
	ttl_ = ttl;
	setParameter("Ttl", std::to_string(ttl));
}

std::string AddLayer7CCRuleRequest::getUri()const
{
	return uri_;
}

void AddLayer7CCRuleRequest::setUri(const std::string& uri)
{
	uri_ = uri;
	setParameter("Uri", uri);
}

std::string AddLayer7CCRuleRequest::getDomain()const
{
	return domain_;
}

void AddLayer7CCRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string AddLayer7CCRuleRequest::getName()const
{
	return name_;
}

void AddLayer7CCRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int AddLayer7CCRuleRequest::getInterval()const
{
	return interval_;
}

void AddLayer7CCRuleRequest::setInterval(int interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

