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

#include <alibabacloud/sddp/model/DescribeTablesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeTablesRequest;

DescribeTablesRequest::DescribeTablesRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeTables")
{}

DescribeTablesRequest::~DescribeTablesRequest()
{}

std::string DescribeTablesRequest::getProductCode()const
{
	return productCode_;
}

void DescribeTablesRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

long DescribeTablesRequest::getProductId()const
{
	return productId_;
}

void DescribeTablesRequest::setProductId(long productId)
{
	productId_ = productId;
	setCoreParameter("ProductId", std::to_string(productId));
}

int DescribeTablesRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeTablesRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

long DescribeTablesRequest::getPackageId()const
{
	return packageId_;
}

void DescribeTablesRequest::setPackageId(long packageId)
{
	packageId_ = packageId;
	setCoreParameter("PackageId", std::to_string(packageId));
}

int DescribeTablesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeTablesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeTablesRequest::getQueryName()const
{
	return queryName_;
}

void DescribeTablesRequest::setQueryName(const std::string& queryName)
{
	queryName_ = queryName;
	setCoreParameter("QueryName", queryName);
}

long DescribeTablesRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void DescribeTablesRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setCoreParameter("RiskLevelId", std::to_string(riskLevelId));
}

long DescribeTablesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeTablesRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeTablesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeTablesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeTablesRequest::getName()const
{
	return name_;
}

void DescribeTablesRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int DescribeTablesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTablesRequest::getLang()const
{
	return lang_;
}

void DescribeTablesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeTablesRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeTablesRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

int DescribeTablesRequest::getQueryType()const
{
	return queryType_;
}

void DescribeTablesRequest::setQueryType(int queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", std::to_string(queryType));
}

