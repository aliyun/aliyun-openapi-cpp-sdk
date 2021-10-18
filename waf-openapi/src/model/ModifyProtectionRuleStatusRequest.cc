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

#include <alibabacloud/waf-openapi/model/ModifyProtectionRuleStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyProtectionRuleStatusRequest;

ModifyProtectionRuleStatusRequest::ModifyProtectionRuleStatusRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "ModifyProtectionRuleStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyProtectionRuleStatusRequest::~ModifyProtectionRuleStatusRequest()
{}

long ModifyProtectionRuleStatusRequest::getLockVersion()const
{
	return lockVersion_;
}

void ModifyProtectionRuleStatusRequest::setLockVersion(long lockVersion)
{
	lockVersion_ = lockVersion;
	setParameter("LockVersion", std::to_string(lockVersion));
}

std::string ModifyProtectionRuleStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyProtectionRuleStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyProtectionRuleStatusRequest::getDefense()const
{
	return defense_;
}

void ModifyProtectionRuleStatusRequest::setDefense(const std::string& defense)
{
	defense_ = defense;
	setParameter("Defense", defense);
}

long ModifyProtectionRuleStatusRequest::getId()const
{
	return id_;
}

void ModifyProtectionRuleStatusRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ModifyProtectionRuleStatusRequest::getLang()const
{
	return lang_;
}

void ModifyProtectionRuleStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int ModifyProtectionRuleStatusRequest::getRuleStatus()const
{
	return ruleStatus_;
}

void ModifyProtectionRuleStatusRequest::setRuleStatus(int ruleStatus)
{
	ruleStatus_ = ruleStatus;
	setParameter("RuleStatus", std::to_string(ruleStatus));
}

std::string ModifyProtectionRuleStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyProtectionRuleStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyProtectionRuleStatusRequest::getDomain()const
{
	return domain_;
}

void ModifyProtectionRuleStatusRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string ModifyProtectionRuleStatusRequest::getRegion()const
{
	return region_;
}

void ModifyProtectionRuleStatusRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

