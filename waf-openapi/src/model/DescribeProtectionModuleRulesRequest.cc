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

#include <alibabacloud/waf-openapi/model/DescribeProtectionModuleRulesRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeProtectionModuleRulesRequest;

DescribeProtectionModuleRulesRequest::DescribeProtectionModuleRulesRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "DescribeProtectionModuleRules")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeProtectionModuleRulesRequest::~DescribeProtectionModuleRulesRequest()
{}

std::string DescribeProtectionModuleRulesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeProtectionModuleRulesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeProtectionModuleRulesRequest::getDefense()const
{
	return defense_;
}

void DescribeProtectionModuleRulesRequest::setDefense(const std::string& defense)
{
	defense_ = defense;
	setParameter("Defense", defense);
}

int DescribeProtectionModuleRulesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeProtectionModuleRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeProtectionModuleRulesRequest::getLang()const
{
	return lang_;
}

void DescribeProtectionModuleRulesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeProtectionModuleRulesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeProtectionModuleRulesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeProtectionModuleRulesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeProtectionModuleRulesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeProtectionModuleRulesRequest::getDomain()const
{
	return domain_;
}

void DescribeProtectionModuleRulesRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeProtectionModuleRulesRequest::getRegion()const
{
	return region_;
}

void DescribeProtectionModuleRulesRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

