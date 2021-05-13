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

#include <alibabacloud/quotas/model/ListProductQuotasRequest.h>

using AlibabaCloud::Quotas::Model::ListProductQuotasRequest;

ListProductQuotasRequest::ListProductQuotasRequest() :
	RpcServiceRequest("quotas", "2020-05-10", "ListProductQuotas")
{
	setMethod(HttpRequest::Method::Post);
}

ListProductQuotasRequest::~ListProductQuotasRequest()
{}

std::string ListProductQuotasRequest::getProductCode()const
{
	return productCode_;
}

void ListProductQuotasRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setBodyParameter("ProductCode", productCode);
}

std::string ListProductQuotasRequest::getQuotaActionCode()const
{
	return quotaActionCode_;
}

void ListProductQuotasRequest::setQuotaActionCode(const std::string& quotaActionCode)
{
	quotaActionCode_ = quotaActionCode;
	setBodyParameter("QuotaActionCode", quotaActionCode);
}

std::string ListProductQuotasRequest::getGroupCode()const
{
	return groupCode_;
}

void ListProductQuotasRequest::setGroupCode(const std::string& groupCode)
{
	groupCode_ = groupCode;
	setBodyParameter("GroupCode", groupCode);
}

std::string ListProductQuotasRequest::getNextToken()const
{
	return nextToken_;
}

void ListProductQuotasRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setBodyParameter("NextToken", nextToken);
}

std::string ListProductQuotasRequest::getSortOrder()const
{
	return sortOrder_;
}

void ListProductQuotasRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setBodyParameter("SortOrder", sortOrder);
}

std::string ListProductQuotasRequest::getKeyWord()const
{
	return keyWord_;
}

void ListProductQuotasRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setBodyParameter("KeyWord", keyWord);
}

std::string ListProductQuotasRequest::getQuotaCategory()const
{
	return quotaCategory_;
}

void ListProductQuotasRequest::setQuotaCategory(const std::string& quotaCategory)
{
	quotaCategory_ = quotaCategory;
	setBodyParameter("QuotaCategory", quotaCategory);
}

int ListProductQuotasRequest::getMaxResults()const
{
	return maxResults_;
}

void ListProductQuotasRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setBodyParameter("MaxResults", std::to_string(maxResults));
}

std::string ListProductQuotasRequest::getSortField()const
{
	return sortField_;
}

void ListProductQuotasRequest::setSortField(const std::string& sortField)
{
	sortField_ = sortField;
	setBodyParameter("SortField", sortField);
}

std::vector<ListProductQuotasRequest::Dimensions> ListProductQuotasRequest::getDimensions()const
{
	return dimensions_;
}

void ListProductQuotasRequest::setDimensions(const std::vector<Dimensions>& dimensions)
{
	dimensions_ = dimensions;
	for(int dep1 = 0; dep1!= dimensions.size(); dep1++) {
		auto dimensionsObj = dimensions.at(dep1);
		std::string dimensionsObjStr = "Dimensions." + std::to_string(dep1 + 1);
		setParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
		setParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
	}
}

