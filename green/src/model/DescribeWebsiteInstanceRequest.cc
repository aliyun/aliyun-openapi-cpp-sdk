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

#include <alibabacloud/green/model/DescribeWebsiteInstanceRequest.h>

using AlibabaCloud::Green::Model::DescribeWebsiteInstanceRequest;

DescribeWebsiteInstanceRequest::DescribeWebsiteInstanceRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeWebsiteInstance")
{}

DescribeWebsiteInstanceRequest::~DescribeWebsiteInstanceRequest()
{}

int DescribeWebsiteInstanceRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeWebsiteInstanceRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", totalCount);
}

std::string DescribeWebsiteInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeWebsiteInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeWebsiteInstanceRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebsiteInstanceRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeWebsiteInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWebsiteInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeWebsiteInstanceRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWebsiteInstanceRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeWebsiteInstanceRequest::getLang()const
{
	return lang_;
}

void DescribeWebsiteInstanceRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

