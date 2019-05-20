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

#include <alibabacloud/yundun-ds/model/DescribePackagesRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribePackagesRequest;

DescribePackagesRequest::DescribePackagesRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribePackages")
{}

DescribePackagesRequest::~DescribePackagesRequest()
{}

long DescribePackagesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribePackagesRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribePackagesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePackagesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribePackagesRequest::getProductId()const
{
	return productId_;
}

void DescribePackagesRequest::setProductId(long productId)
{
	productId_ = productId;
	setCoreParameter("ProductId", std::to_string(productId));
}

int DescribePackagesRequest::getFeatureType()const
{
	return featureType_;
}

void DescribePackagesRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

std::string DescribePackagesRequest::getName()const
{
	return name_;
}

void DescribePackagesRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int DescribePackagesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePackagesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribePackagesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePackagesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribePackagesRequest::getQueryName()const
{
	return queryName_;
}

void DescribePackagesRequest::setQueryName(const std::string& queryName)
{
	queryName_ = queryName;
	setCoreParameter("QueryName", queryName);
}

long DescribePackagesRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void DescribePackagesRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setCoreParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string DescribePackagesRequest::getLang()const
{
	return lang_;
}

void DescribePackagesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribePackagesRequest::getRuleId()const
{
	return ruleId_;
}

void DescribePackagesRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

int DescribePackagesRequest::getQueryType()const
{
	return queryType_;
}

void DescribePackagesRequest::setQueryType(int queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", std::to_string(queryType));
}

