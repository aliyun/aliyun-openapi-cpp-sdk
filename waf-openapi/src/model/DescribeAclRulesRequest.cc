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

#include <alibabacloud/waf-openapi/model/DescribeAclRulesRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeAclRulesRequest;

DescribeAclRulesRequest::DescribeAclRulesRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "DescribeAclRules")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAclRulesRequest::~DescribeAclRulesRequest()
{}

std::string DescribeAclRulesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAclRulesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeAclRulesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAclRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAclRulesRequest::getLang()const
{
	return lang_;
}

void DescribeAclRulesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeAclRulesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAclRulesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAclRulesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeAclRulesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeAclRulesRequest::getDomain()const
{
	return domain_;
}

void DescribeAclRulesRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeAclRulesRequest::getRegion()const
{
	return region_;
}

void DescribeAclRulesRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

