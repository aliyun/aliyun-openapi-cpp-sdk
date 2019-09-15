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

#include <alibabacloud/aegis/model/DescribeWebshellListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWebshellListRequest;

DescribeWebshellListRequest::DescribeWebshellListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWebshellList")
{}

DescribeWebshellListRequest::~DescribeWebshellListRequest()
{}

std::string DescribeWebshellListRequest::getRemark()const
{
	return remark_;
}

void DescribeWebshellListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeWebshellListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebshellListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeWebshellListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWebshellListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeWebshellListRequest::getTag()const
{
	return tag_;
}

void DescribeWebshellListRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

std::string DescribeWebshellListRequest::getGroupId()const
{
	return groupId_;
}

void DescribeWebshellListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

int DescribeWebshellListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWebshellListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeWebshellListRequest::getDealed()const
{
	return dealed_;
}

void DescribeWebshellListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

int DescribeWebshellListRequest::getStatus()const
{
	return status_;
}

void DescribeWebshellListRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

