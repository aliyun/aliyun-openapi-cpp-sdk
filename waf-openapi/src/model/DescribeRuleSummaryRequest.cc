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

#include <alibabacloud/waf-openapi/model/DescribeRuleSummaryRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeRuleSummaryRequest;

DescribeRuleSummaryRequest::DescribeRuleSummaryRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeRuleSummary")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRuleSummaryRequest::~DescribeRuleSummaryRequest()
{}

std::string DescribeRuleSummaryRequest::getEndTimestamp()const
{
	return endTimestamp_;
}

void DescribeRuleSummaryRequest::setEndTimestamp(const std::string& endTimestamp)
{
	endTimestamp_ = endTimestamp;
	setParameter("EndTimestamp", endTimestamp);
}

std::string DescribeRuleSummaryRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeRuleSummaryRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeRuleSummaryRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRuleSummaryRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeRuleSummaryRequest::getLang()const
{
	return lang_;
}

void DescribeRuleSummaryRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeRuleSummaryRequest::getAntibotType()const
{
	return antibotType_;
}

void DescribeRuleSummaryRequest::setAntibotType(const std::string& antibotType)
{
	antibotType_ = antibotType;
	setParameter("AntibotType", antibotType);
}

std::string DescribeRuleSummaryRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeRuleSummaryRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeRuleSummaryRequest::getDomain()const
{
	return domain_;
}

void DescribeRuleSummaryRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeRuleSummaryRequest::getRegion()const
{
	return region_;
}

void DescribeRuleSummaryRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string DescribeRuleSummaryRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeRuleSummaryRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

