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

#include <alibabacloud/aegis/model/DescribeLoginLogsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeLoginLogsRequest;

DescribeLoginLogsRequest::DescribeLoginLogsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeLoginLogs")
{}

DescribeLoginLogsRequest::~DescribeLoginLogsRequest()
{}

std::string DescribeLoginLogsRequest::getRemark()const
{
	return remark_;
}

void DescribeLoginLogsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeLoginLogsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeLoginLogsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeLoginLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLoginLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLoginLogsRequest::getTag()const
{
	return tag_;
}

void DescribeLoginLogsRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

std::string DescribeLoginLogsRequest::getTypes()const
{
	return types_;
}

void DescribeLoginLogsRequest::setTypes(const std::string& types)
{
	types_ = types;
	setCoreParameter("Types", types);
}

int DescribeLoginLogsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeLoginLogsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeLoginLogsRequest::getStatuses()const
{
	return statuses_;
}

void DescribeLoginLogsRequest::setStatuses(const std::string& statuses)
{
	statuses_ = statuses;
	setCoreParameter("Statuses", statuses);
}

