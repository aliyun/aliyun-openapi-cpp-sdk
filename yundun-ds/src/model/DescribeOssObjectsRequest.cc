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

#include <alibabacloud/yundun-ds/model/DescribeOssObjectsRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeOssObjectsRequest;

DescribeOssObjectsRequest::DescribeOssObjectsRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeOssObjects")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOssObjectsRequest::~DescribeOssObjectsRequest()
{}

std::string DescribeOssObjectsRequest::getQueryName()const
{
	return queryName_;
}

void DescribeOssObjectsRequest::setQueryName(const std::string& queryName)
{
	queryName_ = queryName;
	setParameter("QueryName", queryName);
}

int DescribeOssObjectsRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void DescribeOssObjectsRequest::setRiskLevelId(int riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string DescribeOssObjectsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOssObjectsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeOssObjectsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeOssObjectsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeOssObjectsRequest::getLang()const
{
	return lang_;
}

void DescribeOssObjectsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int DescribeOssObjectsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeOssObjectsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribeOssObjectsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeOssObjectsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeOssObjectsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeOssObjectsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeOssObjectsRequest::getName()const
{
	return name_;
}

void DescribeOssObjectsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long DescribeOssObjectsRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeOssObjectsRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", std::to_string(ruleId));
}

