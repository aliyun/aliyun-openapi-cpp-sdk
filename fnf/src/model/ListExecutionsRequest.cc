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

#include <alibabacloud/fnf/model/ListExecutionsRequest.h>

using AlibabaCloud::Fnf::Model::ListExecutionsRequest;

ListExecutionsRequest::ListExecutionsRequest() :
	RpcServiceRequest("fnf", "2019-03-15", "ListExecutions")
{
	setMethod(HttpRequest::Method::Get);
}

ListExecutionsRequest::~ListExecutionsRequest()
{}

std::string ListExecutionsRequest::getNextToken()const
{
	return nextToken_;
}

void ListExecutionsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListExecutionsRequest::getRequestId()const
{
	return requestId_;
}

void ListExecutionsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

int ListExecutionsRequest::getLimit()const
{
	return limit_;
}

void ListExecutionsRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string ListExecutionsRequest::getFlowName()const
{
	return flowName_;
}

void ListExecutionsRequest::setFlowName(const std::string& flowName)
{
	flowName_ = flowName;
	setParameter("FlowName", flowName);
}

std::string ListExecutionsRequest::getStatus()const
{
	return status_;
}

void ListExecutionsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

