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

#include <alibabacloud/aegis/model/DescribeRuleListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeRuleListRequest;

DescribeRuleListRequest::DescribeRuleListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeRuleList")
{}

DescribeRuleListRequest::~DescribeRuleListRequest()
{}

std::string DescribeRuleListRequest::getWarnLevel()const
{
	return warnLevel_;
}

void DescribeRuleListRequest::setWarnLevel(const std::string& warnLevel)
{
	warnLevel_ = warnLevel;
	setCoreParameter("WarnLevel", warnLevel);
}

std::string DescribeRuleListRequest::getRemark()const
{
	return remark_;
}

void DescribeRuleListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeRuleListRequest::getExGroupId()const
{
	return exGroupId_;
}

void DescribeRuleListRequest::setExGroupId(const std::string& exGroupId)
{
	exGroupId_ = exGroupId;
	setCoreParameter("ExGroupId", exGroupId);
}

std::string DescribeRuleListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRuleListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeRuleListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRuleListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeRuleListRequest::getId()const
{
	return id_;
}

void DescribeRuleListRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string DescribeRuleListRequest::getLang()const
{
	return lang_;
}

void DescribeRuleListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeRuleListRequest::getGroupId()const
{
	return groupId_;
}

void DescribeRuleListRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

int DescribeRuleListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeRuleListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

