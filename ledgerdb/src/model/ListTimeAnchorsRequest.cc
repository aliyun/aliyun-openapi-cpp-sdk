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

#include <alibabacloud/ledgerdb/model/ListTimeAnchorsRequest.h>

using AlibabaCloud::Ledgerdb::Model::ListTimeAnchorsRequest;

ListTimeAnchorsRequest::ListTimeAnchorsRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "ListTimeAnchors")
{
	setMethod(HttpRequest::Method::Get);
}

ListTimeAnchorsRequest::~ListTimeAnchorsRequest()
{}

bool ListTimeAnchorsRequest::getReverse()const
{
	return reverse_;
}

void ListTimeAnchorsRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setParameter("Reverse", reverse ? "true" : "false");
}

std::string ListTimeAnchorsRequest::getLedgerId()const
{
	return ledgerId_;
}

void ListTimeAnchorsRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setParameter("LedgerId", ledgerId);
}

std::string ListTimeAnchorsRequest::getNextToken()const
{
	return nextToken_;
}

void ListTimeAnchorsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListTimeAnchorsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListTimeAnchorsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

