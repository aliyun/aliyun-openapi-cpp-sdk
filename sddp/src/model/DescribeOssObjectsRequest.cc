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

#include <alibabacloud/sddp/model/DescribeOssObjectsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeOssObjectsRequest;

DescribeOssObjectsRequest::DescribeOssObjectsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeOssObjects")
{}

DescribeOssObjectsRequest::~DescribeOssObjectsRequest()
{}

std::string DescribeOssObjectsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeOssObjectsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeOssObjectsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOssObjectsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeOssObjectsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeOssObjectsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

std::string DescribeOssObjectsRequest::getName()const
{
	return name_;
}

void DescribeOssObjectsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int DescribeOssObjectsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeOssObjectsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeOssObjectsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeOssObjectsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeOssObjectsRequest::getQueryName()const
{
	return queryName_;
}

void DescribeOssObjectsRequest::setQueryName(const std::string& queryName)
{
	queryName_ = queryName;
	setCoreParameter("QueryName", queryName);
}

int DescribeOssObjectsRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void DescribeOssObjectsRequest::setRiskLevelId(int riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setCoreParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string DescribeOssObjectsRequest::getLang()const
{
	return lang_;
}

void DescribeOssObjectsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeOssObjectsRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeOssObjectsRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

