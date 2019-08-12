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

#include <alibabacloud/sddp/model/DescribeInstancesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeInstances")
{}

DescribeInstancesRequest::~DescribeInstancesRequest()
{}

std::string DescribeInstancesRequest::getProductCode()const
{
	return productCode_;
}

void DescribeInstancesRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

std::string DescribeInstancesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeInstancesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeInstancesRequest::getProductId()const
{
	return productId_;
}

void DescribeInstancesRequest::setProductId(long productId)
{
	productId_ = productId;
	setCoreParameter("ProductId", std::to_string(productId));
}

int DescribeInstancesRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeInstancesRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

std::string DescribeInstancesRequest::getName()const
{
	return name_;
}

void DescribeInstancesRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int DescribeInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeInstancesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeInstancesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeInstancesRequest::getQueryName()const
{
	return queryName_;
}

void DescribeInstancesRequest::setQueryName(const std::string& queryName)
{
	queryName_ = queryName;
	setCoreParameter("QueryName", queryName);
}

long DescribeInstancesRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void DescribeInstancesRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setCoreParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string DescribeInstancesRequest::getLang()const
{
	return lang_;
}

void DescribeInstancesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeInstancesRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeInstancesRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

int DescribeInstancesRequest::getQueryType()const
{
	return queryType_;
}

void DescribeInstancesRequest::setQueryType(int queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", std::to_string(queryType));
}

