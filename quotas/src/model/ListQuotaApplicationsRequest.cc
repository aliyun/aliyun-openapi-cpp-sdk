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

#include <alibabacloud/quotas/model/ListQuotaApplicationsRequest.h>

using AlibabaCloud::Quotas::Model::ListQuotaApplicationsRequest;

ListQuotaApplicationsRequest::ListQuotaApplicationsRequest() :
	RpcServiceRequest("quotas", "2020-05-10", "ListQuotaApplications")
{
	setMethod(HttpRequest::Method::Post);
}

ListQuotaApplicationsRequest::~ListQuotaApplicationsRequest()
{}

std::string ListQuotaApplicationsRequest::getProductCode()const
{
	return productCode_;
}

void ListQuotaApplicationsRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setBodyParameter("ProductCode", productCode);
}

std::string ListQuotaApplicationsRequest::getQuotaActionCode()const
{
	return quotaActionCode_;
}

void ListQuotaApplicationsRequest::setQuotaActionCode(const std::string& quotaActionCode)
{
	quotaActionCode_ = quotaActionCode;
	setBodyParameter("QuotaActionCode", quotaActionCode);
}

std::string ListQuotaApplicationsRequest::getNextToken()const
{
	return nextToken_;
}

void ListQuotaApplicationsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setBodyParameter("NextToken", nextToken);
}

std::string ListQuotaApplicationsRequest::getKeyWord()const
{
	return keyWord_;
}

void ListQuotaApplicationsRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setBodyParameter("KeyWord", keyWord);
}

std::string ListQuotaApplicationsRequest::getQuotaCategory()const
{
	return quotaCategory_;
}

void ListQuotaApplicationsRequest::setQuotaCategory(const std::string& quotaCategory)
{
	quotaCategory_ = quotaCategory;
	setBodyParameter("QuotaCategory", quotaCategory);
}

int ListQuotaApplicationsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListQuotaApplicationsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setBodyParameter("MaxResults", std::to_string(maxResults));
}

std::string ListQuotaApplicationsRequest::getStatus()const
{
	return status_;
}

void ListQuotaApplicationsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

std::vector<ListQuotaApplicationsRequest::Dimensions> ListQuotaApplicationsRequest::getDimensions()const
{
	return dimensions_;
}

void ListQuotaApplicationsRequest::setDimensions(const std::vector<Dimensions>& dimensions)
{
	dimensions_ = dimensions;
	for(int dep1 = 0; dep1!= dimensions.size(); dep1++) {
		auto dimensionsObj = dimensions.at(dep1);
		std::string dimensionsObjStr = "Dimensions." + std::to_string(dep1 + 1);
		setParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
		setParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
	}
}

