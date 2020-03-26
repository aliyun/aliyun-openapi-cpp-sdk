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

#include <alibabacloud/yundun-ds/model/DescribeDataAssetsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeDataAssetsRequest;

DescribeDataAssetsRequest::DescribeDataAssetsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeDataAssets")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDataAssetsRequest::~DescribeDataAssetsRequest()
{}

std::string DescribeDataAssetsRequest::getRiskLevels()const
{
	return riskLevels_;
}

void DescribeDataAssetsRequest::setRiskLevels(const std::string& riskLevels)
{
	riskLevels_ = riskLevels;
	setParameter("RiskLevels", riskLevels);
}

int DescribeDataAssetsRequest::getRangeId()const
{
	return rangeId_;
}

void DescribeDataAssetsRequest::setRangeId(int rangeId)
{
	rangeId_ = rangeId;
	setParameter("RangeId", std::to_string(rangeId));
}

std::string DescribeDataAssetsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataAssetsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeDataAssetsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDataAssetsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDataAssetsRequest::getLang()const
{
	return lang_;
}

void DescribeDataAssetsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeDataAssetsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDataAssetsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribeDataAssetsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDataAssetsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeDataAssetsRequest::getName()const
{
	return name_;
}

void DescribeDataAssetsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long DescribeDataAssetsRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeDataAssetsRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", std::to_string(ruleId));
}

