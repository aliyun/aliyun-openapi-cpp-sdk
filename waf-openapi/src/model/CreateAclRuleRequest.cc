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

#include <alibabacloud/waf-openapi/model/CreateAclRuleRequest.h>

using AlibabaCloud::Waf_openapi::Model::CreateAclRuleRequest;

CreateAclRuleRequest::CreateAclRuleRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "CreateAclRule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAclRuleRequest::~CreateAclRuleRequest()
{}

std::string CreateAclRuleRequest::getRules()const
{
	return rules_;
}

void CreateAclRuleRequest::setRules(const std::string& rules)
{
	rules_ = rules;
	setParameter("Rules", rules);
}

std::string CreateAclRuleRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateAclRuleRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateAclRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateAclRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateAclRuleRequest::getDomain()const
{
	return domain_;
}

void CreateAclRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string CreateAclRuleRequest::getLang()const
{
	return lang_;
}

void CreateAclRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateAclRuleRequest::getRegion()const
{
	return region_;
}

void CreateAclRuleRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

