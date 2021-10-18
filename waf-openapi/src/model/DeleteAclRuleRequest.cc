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

#include <alibabacloud/waf-openapi/model/DeleteAclRuleRequest.h>

using AlibabaCloud::Waf_openapi::Model::DeleteAclRuleRequest;

DeleteAclRuleRequest::DeleteAclRuleRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "DeleteAclRule")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAclRuleRequest::~DeleteAclRuleRequest()
{}

std::string DeleteAclRuleRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteAclRuleRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteAclRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteAclRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteAclRuleRequest::getDomain()const
{
	return domain_;
}

void DeleteAclRuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DeleteAclRuleRequest::getLang()const
{
	return lang_;
}

void DeleteAclRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

long DeleteAclRuleRequest::getRuleId()const
{
	return ruleId_;
}

void DeleteAclRuleRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", std::to_string(ruleId));
}

std::string DeleteAclRuleRequest::getRegion()const
{
	return region_;
}

void DeleteAclRuleRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

