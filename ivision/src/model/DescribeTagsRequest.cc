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

#include <alibabacloud/ivision/model/DescribeTagsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeTags")
{}

DescribeTagsRequest::~DescribeTagsRequest()
{}

std::string DescribeTagsRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeTagsRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

long DescribeTagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTagsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTagsRequest::getProjectId()const
{
	return projectId_;
}

void DescribeTagsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeTagsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTagsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribeTagsRequest::getModelId()const
{
	return modelId_;
}

void DescribeTagsRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

std::string DescribeTagsRequest::getTagIds()const
{
	return tagIds_;
}

void DescribeTagsRequest::setTagIds(const std::string& tagIds)
{
	tagIds_ = tagIds;
	setCoreParameter("TagIds", tagIds);
}

long DescribeTagsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeTagsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribeTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTagsRequest::getIterationId()const
{
	return iterationId_;
}

void DescribeTagsRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

