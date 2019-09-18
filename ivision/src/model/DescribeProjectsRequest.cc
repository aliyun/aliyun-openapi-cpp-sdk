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

#include <alibabacloud/ivision/model/DescribeProjectsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeProjectsRequest;

DescribeProjectsRequest::DescribeProjectsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeProjects")
{}

DescribeProjectsRequest::~DescribeProjectsRequest()
{}

std::string DescribeProjectsRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeProjectsRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

long DescribeProjectsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeProjectsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeProjectsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeProjectsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DescribeProjectsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeProjectsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeProjectsRequest::getProjectIds()const
{
	return projectIds_;
}

void DescribeProjectsRequest::setProjectIds(const std::string& projectIds)
{
	projectIds_ = projectIds;
	setCoreParameter("ProjectIds", projectIds);
}

long DescribeProjectsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeProjectsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

