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

#include <alibabacloud/yundun-ds/model/DescribeColumnsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeColumnsRequest;

DescribeColumnsRequest::DescribeColumnsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeColumns")
{}

DescribeColumnsRequest::~DescribeColumnsRequest()
{}

std::string DescribeColumnsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeColumnsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeColumnsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeColumnsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", featureType);
}

std::string DescribeColumnsRequest::getRiskLevels()const
{
	return riskLevels_;
}

void DescribeColumnsRequest::setRiskLevels(const std::string& riskLevels)
{
	riskLevels_ = riskLevels;
	setCoreParameter("RiskLevels", std::to_string(riskLevels));
}

std::string DescribeColumnsRequest::getName()const
{
	return name_;
}

void DescribeColumnsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

int DescribeColumnsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeColumnsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeColumnsRequest::getTableId()const
{
	return tableId_;
}

void DescribeColumnsRequest::setTableId(long tableId)
{
	tableId_ = tableId;
	setCoreParameter("TableId", tableId);
}

int DescribeColumnsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeColumnsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeColumnsRequest::getQueryName()const
{
	return queryName_;
}

void DescribeColumnsRequest::setQueryName(const std::string& queryName)
{
	queryName_ = queryName;
	setCoreParameter("QueryName", std::to_string(queryName));
}

std::string DescribeColumnsRequest::getLang()const
{
	return lang_;
}

void DescribeColumnsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

long DescribeColumnsRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeColumnsRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", ruleId);
}

