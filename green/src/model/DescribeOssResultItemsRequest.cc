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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOssResultItemsRequest::~DescribeOssResultItemsRequest()
{}

float DescribeOssResultItemsRequest::getMinScore()const
{
	return minScore_;
}

void DescribeOssResultItemsRequest::setMinScore(float minScore)
{
	minScore_ = minScore;
	setParameter("MinScore", std::to_string(minScore));
}

float DescribeOssResultItemsRequest::getMaxScore()const
{
	return maxScore_;
}

void DescribeOssResultItemsRequest::setMaxScore(float maxScore)
{
	maxScore_ = maxScore;
	setParameter("MaxScore", std::to_string(maxScore));
}

long DescribeOssResultItemsRequest::getStockTaskId()const
{
	return stockTaskId_;
}

void DescribeOssResultItemsRequest::setStockTaskId(long stockTaskId)
{
	stockTaskId_ = stockTaskId;
	setParameter("StockTaskId", std::to_string(stockTaskId));
}

std::string DescribeOssResultItemsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeOssResultItemsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeOssResultItemsRequest::getScene()const
{
	return scene_;
}

void DescribeOssResultItemsRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string DescribeOssResultItemsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOssResultItemsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeOssResultItemsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeOssResultItemsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeOssResultItemsRequest::getLang()const
{
	return lang_;
}

void DescribeOssResultItemsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

bool DescribeOssResultItemsRequest::getStock()const
{
	return stock_;
}

void DescribeOssResultItemsRequest::setStock(bool stock)
{
	stock_ = stock;
	setParameter("Stock", stock ? "true" : "false");
}

int DescribeOssResultItemsRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeOssResultItemsRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setParameter("TotalCount", std::to_string(totalCount));
}

std::string DescribeOssResultItemsRequest::getSuggestion()const
{
	return suggestion_;
}

void DescribeOssResultItemsRequest::setSuggestion(const std::string& suggestion)
{
	suggestion_ = suggestion;
	setParameter("Suggestion", suggestion);
}

int DescribeOssResultItemsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeOssResultItemsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeOssResultItemsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeOssResultItemsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeOssResultItemsRequest::getQueryId()const
{
	return queryId_;
}

void DescribeOssResultItemsRequest::setQueryId(const std::string& queryId)
{
	queryId_ = queryId;
	setParameter("QueryId", queryId);
}

std::string DescribeOssResultItemsRequest::getBucket()const
{
	return bucket_;
}

void DescribeOssResultItemsRequest::setBucket(const std::string& bucket)
{
	bucket_ = bucket;
	setParameter("Bucket", bucket);
}

std::string DescribeOssResultItemsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeOssResultItemsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeOssResultItemsRequest::getObject()const
{
	return object_;
}

void DescribeOssResultItemsRequest::setObject(const std::string& object)
{
	object_ = object;
	setParameter("Object", object);
}

