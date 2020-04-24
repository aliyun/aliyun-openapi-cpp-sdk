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

#include <alibabacloud/ledgerdb/model/DescribeLedgersRequest.h>

using AlibabaCloud::Ledgerdb::Model::DescribeLedgersRequest;

DescribeLedgersRequest::DescribeLedgersRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "DescribeLedgers")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeLedgersRequest::~DescribeLedgersRequest()
{}

std::string DescribeLedgersRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeLedgersRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int DescribeLedgersRequest::getMaxResults()const
{
	return maxResults_;
}

void DescribeLedgersRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

