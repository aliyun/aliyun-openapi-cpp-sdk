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

#include <alibabacloud/aegis/model/DescribeJoinRuleListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeJoinRuleListRequest;

DescribeJoinRuleListRequest::DescribeJoinRuleListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeJoinRuleList")
{}

DescribeJoinRuleListRequest::~DescribeJoinRuleListRequest()
{}

std::string DescribeJoinRuleListRequest::getWarnLevel()const
{
	return warnLevel_;
}

void DescribeJoinRuleListRequest::setWarnLevel(const std::string& warnLevel)
{
	warnLevel_ = warnLevel;
	setCoreParameter("WarnLevel", warnLevel);
}

long DescribeJoinRuleListRequest::getRemark()const
{
	return remark_;
}

void DescribeJoinRuleListRequest::setRemark(long remark)
{
	remark_ = remark;
	setCoreParameter("Remark", std::to_string(remark));
}

int DescribeJoinRuleListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeJoinRuleListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeJoinRuleListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeJoinRuleListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeJoinRuleListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeJoinRuleListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

