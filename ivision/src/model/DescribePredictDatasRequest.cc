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

#include <alibabacloud/ivision/model/DescribePredictDatasRequest.h>

using AlibabaCloud::Ivision::Model::DescribePredictDatasRequest;

DescribePredictDatasRequest::DescribePredictDatasRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribePredictDatas")
{}

DescribePredictDatasRequest::~DescribePredictDatasRequest()
{}

std::string DescribePredictDatasRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribePredictDatasRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

std::string DescribePredictDatasRequest::getDataIds()const
{
	return dataIds_;
}

void DescribePredictDatasRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

long DescribePredictDatasRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePredictDatasRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePredictDatasRequest::getProbabilityThreshold()const
{
	return probabilityThreshold_;
}

void DescribePredictDatasRequest::setProbabilityThreshold(const std::string& probabilityThreshold)
{
	probabilityThreshold_ = probabilityThreshold;
	setCoreParameter("ProbabilityThreshold", probabilityThreshold);
}

std::string DescribePredictDatasRequest::getOverlapThreshold()const
{
	return overlapThreshold_;
}

void DescribePredictDatasRequest::setOverlapThreshold(const std::string& overlapThreshold)
{
	overlapThreshold_ = overlapThreshold;
	setCoreParameter("OverlapThreshold", overlapThreshold);
}

std::string DescribePredictDatasRequest::getProjectId()const
{
	return projectId_;
}

void DescribePredictDatasRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribePredictDatasRequest::getShowLog()const
{
	return showLog_;
}

void DescribePredictDatasRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribePredictDatasRequest::getModelId()const
{
	return modelId_;
}

void DescribePredictDatasRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

std::string DescribePredictDatasRequest::getTagId()const
{
	return tagId_;
}

void DescribePredictDatasRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

long DescribePredictDatasRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePredictDatasRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

long DescribePredictDatasRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePredictDatasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePredictDatasRequest::getIterationId()const
{
	return iterationId_;
}

void DescribePredictDatasRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

