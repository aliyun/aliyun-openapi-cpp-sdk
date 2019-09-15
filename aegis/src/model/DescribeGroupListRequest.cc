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

#include <alibabacloud/aegis/model/DescribeGroupListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeGroupListRequest;

DescribeGroupListRequest::DescribeGroupListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeGroupList")
{}

DescribeGroupListRequest::~DescribeGroupListRequest()
{}

std::string DescribeGroupListRequest::getWarnLevel()const
{
	return warnLevel_;
}

void DescribeGroupListRequest::setWarnLevel(const std::string& warnLevel)
{
	warnLevel_ = warnLevel;
	setCoreParameter("WarnLevel", warnLevel);
}

long DescribeGroupListRequest::getRuleGroupId()const
{
	return ruleGroupId_;
}

void DescribeGroupListRequest::setRuleGroupId(long ruleGroupId)
{
	ruleGroupId_ = ruleGroupId;
	setCoreParameter("RuleGroupId", std::to_string(ruleGroupId));
}

long DescribeGroupListRequest::getExGroupId()const
{
	return exGroupId_;
}

void DescribeGroupListRequest::setExGroupId(long exGroupId)
{
	exGroupId_ = exGroupId;
	setCoreParameter("ExGroupId", std::to_string(exGroupId));
}

std::string DescribeGroupListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeGroupListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeGroupListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGroupListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeGroupListRequest::getLang()const
{
	return lang_;
}

void DescribeGroupListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeGroupListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeGroupListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

