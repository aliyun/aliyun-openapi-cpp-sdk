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

#include <alibabacloud/ddoscoo/model/CreateLayer7RuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateLayer7RuleRequest;

CreateLayer7RuleRequest::CreateLayer7RuleRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "CreateLayer7Rule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLayer7RuleRequest::~CreateLayer7RuleRequest()
{}

std::string CreateLayer7RuleRequest::getRules()const
{
	return rules_;
}

void CreateLayer7RuleRequest::setRules(const std::string& rules)
{
	rules_ = rules;
	setParameter("Rules", rules);
}

std::string CreateLayer7RuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateLayer7RuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateLayer7RuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateLayer7RuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int CreateLayer7RuleRequest::getRsType()const
{
	return rsType_;
}

void CreateLayer7RuleRequest::setRsType(int rsType)
{
	rsType_ = rsType;
	setParameter("RsType", std::to_string(rsType));
}

std::vector<std::string> CreateLayer7RuleRequest::getInstanceIds()const
{
	return instanceIds_;
}

void CreateLayer7RuleRequest::setInstanceIds(const std::vector<std::string>& instanceIds)
{
	instanceIds_ = instanceIds;
	for(int dep1 = 0; dep1!= instanceIds.size(); dep1++) {
		setParameter("InstanceIds."+ std::to_string(dep1), instanceIds.at(dep1));
	}
}

std::string CreateLayer7RuleRequest::getDomain()const
{
	return domain_;
}

void CreateLayer7RuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

