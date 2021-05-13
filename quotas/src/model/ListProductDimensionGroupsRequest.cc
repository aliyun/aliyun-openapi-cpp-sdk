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

#include <alibabacloud/quotas/model/ListProductDimensionGroupsRequest.h>

using AlibabaCloud::Quotas::Model::ListProductDimensionGroupsRequest;

ListProductDimensionGroupsRequest::ListProductDimensionGroupsRequest() :
	RpcServiceRequest("quotas", "2020-05-10", "ListProductDimensionGroups")
{
	setMethod(HttpRequest::Method::Get);
}

ListProductDimensionGroupsRequest::~ListProductDimensionGroupsRequest()
{}

std::string ListProductDimensionGroupsRequest::getProductCode()const
{
	return productCode_;
}

void ListProductDimensionGroupsRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string ListProductDimensionGroupsRequest::getNextToken()const
{
	return nextToken_;
}

void ListProductDimensionGroupsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListProductDimensionGroupsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListProductDimensionGroupsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

