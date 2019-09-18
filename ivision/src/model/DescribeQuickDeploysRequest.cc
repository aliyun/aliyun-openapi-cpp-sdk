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

#include <alibabacloud/ivision/model/DescribeQuickDeploysRequest.h>

using AlibabaCloud::Ivision::Model::DescribeQuickDeploysRequest;

DescribeQuickDeploysRequest::DescribeQuickDeploysRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeQuickDeploys")
{}

DescribeQuickDeploysRequest::~DescribeQuickDeploysRequest()
{}

long DescribeQuickDeploysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeQuickDeploysRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeQuickDeploysRequest::getProjectId()const
{
	return projectId_;
}

void DescribeQuickDeploysRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeQuickDeploysRequest::getShowLog()const
{
	return showLog_;
}

void DescribeQuickDeploysRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DescribeQuickDeploysRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeQuickDeploysRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeQuickDeploysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeQuickDeploysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeQuickDeploysRequest::getIterationId()const
{
	return iterationId_;
}

void DescribeQuickDeploysRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

