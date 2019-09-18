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

#include <alibabacloud/sddp/model/DescribeRulesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeRulesRequest;

DescribeRulesRequest::DescribeRulesRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeRules")
{}

DescribeRulesRequest::~DescribeRulesRequest()
{}

long DescribeRulesRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void DescribeRulesRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setCoreParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string DescribeRulesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRulesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeRulesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRulesRequest::getLang()const
{
	return lang_;
}

void DescribeRulesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeRulesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeRulesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

int DescribeRulesRequest::getCustomType()const
{
	return customType_;
}

void DescribeRulesRequest::setCustomType(int customType)
{
	customType_ = customType;
	setCoreParameter("CustomType", std::to_string(customType));
}

std::string DescribeRulesRequest::getName()const
{
	return name_;
}

void DescribeRulesRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int DescribeRulesRequest::getCategory()const
{
	return category_;
}

void DescribeRulesRequest::setCategory(int category)
{
	category_ = category;
	setCoreParameter("Category", std::to_string(category));
}

