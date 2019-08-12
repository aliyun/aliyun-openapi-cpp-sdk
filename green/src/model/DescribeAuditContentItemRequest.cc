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

#include <alibabacloud/green/model/DescribeAuditContentItemRequest.h>

using AlibabaCloud::Green::Model::DescribeAuditContentItemRequest;

DescribeAuditContentItemRequest::DescribeAuditContentItemRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeAuditContentItem")
{}

DescribeAuditContentItemRequest::~DescribeAuditContentItemRequest()
{}

int DescribeAuditContentItemRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeAuditContentItemRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", totalCount);
}

std::string DescribeAuditContentItemRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAuditContentItemRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeAuditContentItemRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAuditContentItemRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeAuditContentItemRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAuditContentItemRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeAuditContentItemRequest::getLang()const
{
	return lang_;
}

void DescribeAuditContentItemRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeAuditContentItemRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeAuditContentItemRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string DescribeAuditContentItemRequest::getTaskId()const
{
	return taskId_;
}

void DescribeAuditContentItemRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

