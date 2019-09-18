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

#include <alibabacloud/ivision/model/DescribePredictTemplatesRequest.h>

using AlibabaCloud::Ivision::Model::DescribePredictTemplatesRequest;

DescribePredictTemplatesRequest::DescribePredictTemplatesRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribePredictTemplates")
{}

DescribePredictTemplatesRequest::~DescribePredictTemplatesRequest()
{}

std::string DescribePredictTemplatesRequest::getTemplateIds()const
{
	return templateIds_;
}

void DescribePredictTemplatesRequest::setTemplateIds(const std::string& templateIds)
{
	templateIds_ = templateIds;
	setCoreParameter("TemplateIds", templateIds);
}

std::string DescribePredictTemplatesRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribePredictTemplatesRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

long DescribePredictTemplatesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePredictTemplatesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePredictTemplatesRequest::getSortOrder()const
{
	return sortOrder_;
}

void DescribePredictTemplatesRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setCoreParameter("SortOrder", sortOrder);
}

std::string DescribePredictTemplatesRequest::getShowLog()const
{
	return showLog_;
}

void DescribePredictTemplatesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DescribePredictTemplatesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePredictTemplatesRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribePredictTemplatesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePredictTemplatesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePredictTemplatesRequest::getSortBy()const
{
	return sortBy_;
}

void DescribePredictTemplatesRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

