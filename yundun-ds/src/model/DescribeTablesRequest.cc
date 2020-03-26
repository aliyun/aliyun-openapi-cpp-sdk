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

#include <alibabacloud/yundun-ds/model/DescribeTablesRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeTablesRequest;

DescribeTablesRequest::DescribeTablesRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeTables")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTablesRequest::~DescribeTablesRequest()
{}

long DescribeTablesRequest::getProductId()const
{
	return productId_;
}

void DescribeTablesRequest::setProductId(long productId)
{
	productId_ = productId;
	setParameter("ProductId", std::to_string(productId));
}

long DescribeTablesRequest::getPackageId()const
{
	return packageId_;
}

void DescribeTablesRequest::setPackageId(long packageId)
{
	packageId_ = packageId;
	setParameter("PackageId", std::to_string(packageId));
}

std::string DescribeTablesRequest::getQueryName()const
{
	return queryName_;
}

void DescribeTablesRequest::setQueryName(const std::string& queryName)
{
	queryName_ = queryName;
	setParameter("QueryName", queryName);
}

long DescribeTablesRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void DescribeTablesRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string DescribeTablesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeTablesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeTablesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTablesRequest::getLang()const
{
	return lang_;
}

void DescribeTablesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeTablesRequest::getQueryType()const
{
	return queryType_;
}

void DescribeTablesRequest::setQueryType(int queryType)
{
	queryType_ = queryType;
	setParameter("QueryType", std::to_string(queryType));
}

int DescribeTablesRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeTablesRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribeTablesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeTablesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeTablesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeTablesRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeTablesRequest::getName()const
{
	return name_;
}

void DescribeTablesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long DescribeTablesRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeTablesRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", std::to_string(ruleId));
}

