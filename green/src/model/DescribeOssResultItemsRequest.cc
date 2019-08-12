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

#include <alibabacloud/green/model/DescribeOssResultItemsRequest.h>

using AlibabaCloud::Green::Model::DescribeOssResultItemsRequest;

DescribeOssResultItemsRequest::DescribeOssResultItemsRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeOssResultItems")
{}

DescribeOssResultItemsRequest::~DescribeOssResultItemsRequest()
{}

int DescribeOssResultItemsRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeOssResultItemsRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", totalCount);
}

float DescribeOssResultItemsRequest::getMinScore()const
{
	return minScore_;
}

void DescribeOssResultItemsRequest::setMinScore(float minScore)
{
	minScore_ = minScore;
	setCoreParameter("MinScore", minScore);
}

std::string DescribeOssResultItemsRequest::getSuggestion()const
{
	return suggestion_;
}

void DescribeOssResultItemsRequest::setSuggestion(const std::string& suggestion)
{
	suggestion_ = suggestion;
	setCoreParameter("Suggestion", std::to_string(suggestion));
}

int DescribeOssResultItemsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeOssResultItemsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

float DescribeOssResultItemsRequest::getMaxScore()const
{
	return maxScore_;
}

void DescribeOssResultItemsRequest::setMaxScore(float maxScore)
{
	maxScore_ = maxScore;
	setCoreParameter("MaxScore", maxScore);
}

std::string DescribeOssResultItemsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeOssResultItemsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", std::to_string(startDate));
}

std::string DescribeOssResultItemsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeOssResultItemsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

std::string DescribeOssResultItemsRequest::getScene()const
{
	return scene_;
}

void DescribeOssResultItemsRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setCoreParameter("Scene", std::to_string(scene));
}

std::string DescribeOssResultItemsRequest::getQueryId()const
{
	return queryId_;
}

void DescribeOssResultItemsRequest::setQueryId(const std::string& queryId)
{
	queryId_ = queryId;
	setCoreParameter("QueryId", std::to_string(queryId));
}

std::string DescribeOssResultItemsRequest::getBucket()const
{
	return bucket_;
}

void DescribeOssResultItemsRequest::setBucket(const std::string& bucket)
{
	bucket_ = bucket;
	setCoreParameter("Bucket", std::to_string(bucket));
}

std::string DescribeOssResultItemsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeOssResultItemsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", std::to_string(endDate));
}

std::string DescribeOssResultItemsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOssResultItemsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeOssResultItemsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeOssResultItemsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeOssResultItemsRequest::getLang()const
{
	return lang_;
}

void DescribeOssResultItemsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

bool DescribeOssResultItemsRequest::getStock()const
{
	return stock_;
}

void DescribeOssResultItemsRequest::setStock(bool stock)
{
	stock_ = stock;
	setCoreParameter("Stock", stock ? "true" : "false");
}

std::string DescribeOssResultItemsRequest::getObject()const
{
	return object_;
}

void DescribeOssResultItemsRequest::setObject(const std::string& object)
{
	object_ = object;
	setCoreParameter("Object", std::to_string(object));
}

