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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRulesRequest::~DescribeRulesRequest()
{}

int DescribeRulesRequest::getWarnLevel()const
{
	return warnLevel_;
}

void DescribeRulesRequest::setWarnLevel(int warnLevel)
{
	warnLevel_ = warnLevel;
	setParameter("WarnLevel", std::to_string(warnLevel));
}

int DescribeRulesRequest::getProductCode()const
{
	return productCode_;
}

void DescribeRulesRequest::setProductCode(int productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", std::to_string(productCode));
}

long DescribeRulesRequest::getProductId()const
{
	return productId_;
}

void DescribeRulesRequest::setProductId(long productId)
{
	productId_ = productId;
	setParameter("ProductId", std::to_string(productId));
}

long DescribeRulesRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void DescribeRulesRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string DescribeRulesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRulesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeRulesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRulesRequest::getLang()const
{
	return lang_;
}

void DescribeRulesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

bool DescribeRulesRequest::getKeywordCompatible()const
{
	return keywordCompatible_;
}

void DescribeRulesRequest::setKeywordCompatible(bool keywordCompatible)
{
	keywordCompatible_ = keywordCompatible;
	setParameter("KeywordCompatible", keywordCompatible ? "true" : "false");
}

int DescribeRulesRequest::getRuleType()const
{
	return ruleType_;
}

void DescribeRulesRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", std::to_string(ruleType));
}

std::string DescribeRulesRequest::getGroupId()const
{
	return groupId_;
}

void DescribeRulesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

int DescribeRulesRequest::getContentCategory()const
{
	return contentCategory_;
}

void DescribeRulesRequest::setContentCategory(int contentCategory)
{
	contentCategory_ = contentCategory;
	setParameter("ContentCategory", std::to_string(contentCategory));
}

int DescribeRulesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeRulesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

int DescribeRulesRequest::getCustomType()const
{
	return customType_;
}

void DescribeRulesRequest::setCustomType(int customType)
{
	customType_ = customType;
	setParameter("CustomType", std::to_string(customType));
}

std::string DescribeRulesRequest::getName()const
{
	return name_;
}

void DescribeRulesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescribeRulesRequest::getCategory()const
{
	return category_;
}

void DescribeRulesRequest::setCategory(int category)
{
	category_ = category;
	setParameter("Category", std::to_string(category));
}

int DescribeRulesRequest::getStatus()const
{
	return status_;
}

void DescribeRulesRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

