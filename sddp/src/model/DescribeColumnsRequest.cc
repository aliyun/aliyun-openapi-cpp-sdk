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

#include <alibabacloud/sddp/model/DescribeColumnsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeColumnsRequest;

DescribeColumnsRequest::DescribeColumnsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeColumns")
{}

DescribeColumnsRequest::~DescribeColumnsRequest()
{}

std::string DescribeColumnsRequest::getProductCode()const
{
	return productCode_;
}

void DescribeColumnsRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

long DescribeColumnsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeColumnsRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeColumnsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeColumnsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
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
	setCoreParameter("RiskLevels", riskLevels);
}

std::string DescribeColumnsRequest::getName()const
{
	return name_;
}

void DescribeColumnsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
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
	setCoreParameter("QueryName", queryName);
}

std::string DescribeColumnsRequest::getLang()const
{
	return lang_;
}

void DescribeColumnsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
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

