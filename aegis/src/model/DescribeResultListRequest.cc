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

#include <alibabacloud/aegis/model/DescribeResultListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeResultListRequest;

DescribeResultListRequest::DescribeResultListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeResultList")
{}

DescribeResultListRequest::~DescribeResultListRequest()
{}

std::string DescribeResultListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeResultListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeResultListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeResultListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeResultListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeResultListRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeResultListRequest::getRuleName()const
{
	return ruleName_;
}

void DescribeResultListRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", std::to_string(ruleName));
}

std::string DescribeResultListRequest::getRemark()const
{
	return remark_;
}

void DescribeResultListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", std::to_string(remark));
}

std::string DescribeResultListRequest::getUuidList()const
{
	return uuidList_;
}

void DescribeResultListRequest::setUuidList(const std::string& uuidList)
{
	uuidList_ = uuidList;
	setCoreParameter("UuidList", std::to_string(uuidList));
}

std::string DescribeResultListRequest::getDealed()const
{
	return dealed_;
}

void DescribeResultListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", std::to_string(dealed));
}

int DescribeResultListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeResultListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

long DescribeResultListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeResultListRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

