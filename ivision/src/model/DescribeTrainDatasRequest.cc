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

#include <alibabacloud/ivision/model/DescribeTrainDatasRequest.h>

using AlibabaCloud::Ivision::Model::DescribeTrainDatasRequest;

DescribeTrainDatasRequest::DescribeTrainDatasRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeTrainDatas")
{}

DescribeTrainDatasRequest::~DescribeTrainDatasRequest()
{}

std::string DescribeTrainDatasRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeTrainDatasRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

std::string DescribeTrainDatasRequest::getTagStatus()const
{
	return tagStatus_;
}

void DescribeTrainDatasRequest::setTagStatus(const std::string& tagStatus)
{
	tagStatus_ = tagStatus;
	setCoreParameter("TagStatus", tagStatus);
}

long DescribeTrainDatasRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTrainDatasRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTrainDatasRequest::getProjectId()const
{
	return projectId_;
}

void DescribeTrainDatasRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeTrainDatasRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTrainDatasRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribeTrainDatasRequest::getTagId()const
{
	return tagId_;
}

void DescribeTrainDatasRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

long DescribeTrainDatasRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeTrainDatasRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeTrainDatasRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTrainDatasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTrainDatasRequest::getIterationId()const
{
	return iterationId_;
}

void DescribeTrainDatasRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

