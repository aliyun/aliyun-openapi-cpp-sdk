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

#include <alibabacloud/sas/model/ModifyAntiBruteForceRuleRequest.h>

using AlibabaCloud::Sas::Model::ModifyAntiBruteForceRuleRequest;

ModifyAntiBruteForceRuleRequest::ModifyAntiBruteForceRuleRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyAntiBruteForceRule")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAntiBruteForceRuleRequest::~ModifyAntiBruteForceRuleRequest()
{}

long ModifyAntiBruteForceRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAntiBruteForceRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyAntiBruteForceRuleRequest::getForbiddenTime()const
{
	return forbiddenTime_;
}

void ModifyAntiBruteForceRuleRequest::setForbiddenTime(int forbiddenTime)
{
	forbiddenTime_ = forbiddenTime;
	setParameter("ForbiddenTime", std::to_string(forbiddenTime));
}

int ModifyAntiBruteForceRuleRequest::getFailCount()const
{
	return failCount_;
}

void ModifyAntiBruteForceRuleRequest::setFailCount(int failCount)
{
	failCount_ = failCount;
	setParameter("FailCount", std::to_string(failCount));
}

std::string ModifyAntiBruteForceRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyAntiBruteForceRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

bool ModifyAntiBruteForceRuleRequest::getEnableSmartRule()const
{
	return enableSmartRule_;
}

void ModifyAntiBruteForceRuleRequest::setEnableSmartRule(bool enableSmartRule)
{
	enableSmartRule_ = enableSmartRule;
	setParameter("EnableSmartRule", enableSmartRule ? "true" : "false");
}

std::vector<std::string> ModifyAntiBruteForceRuleRequest::getUuidList()const
{
	return uuidList_;
}

void ModifyAntiBruteForceRuleRequest::setUuidList(const std::vector<std::string>& uuidList)
{
	uuidList_ = uuidList;
	for(int dep1 = 0; dep1!= uuidList.size(); dep1++) {
		setParameter("UuidList."+ std::to_string(dep1), uuidList.at(dep1));
	}
}

long ModifyAntiBruteForceRuleRequest::getId()const
{
	return id_;
}

void ModifyAntiBruteForceRuleRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ModifyAntiBruteForceRuleRequest::getName()const
{
	return name_;
}

void ModifyAntiBruteForceRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ModifyAntiBruteForceRuleRequest::getSpan()const
{
	return span_;
}

void ModifyAntiBruteForceRuleRequest::setSpan(int span)
{
	span_ = span;
	setParameter("Span", std::to_string(span));
}

bool ModifyAntiBruteForceRuleRequest::getDefaultRule()const
{
	return defaultRule_;
}

void ModifyAntiBruteForceRuleRequest::setDefaultRule(bool defaultRule)
{
	defaultRule_ = defaultRule;
	setParameter("DefaultRule", defaultRule ? "true" : "false");
}

