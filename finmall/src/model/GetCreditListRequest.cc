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

#include <alibabacloud/finmall/model/GetCreditListRequest.h>

using AlibabaCloud::Finmall::Model::GetCreditListRequest;

GetCreditListRequest::GetCreditListRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "GetCreditList")
{}

GetCreditListRequest::~GetCreditListRequest()
{}

std::string GetCreditListRequest::getQueryExpression()const
{
	return queryExpression_;
}

void GetCreditListRequest::setQueryExpression(const std::string& queryExpression)
{
	queryExpression_ = queryExpression;
	setParameter("QueryExpression", queryExpression);
}

int GetCreditListRequest::getPageSize()const
{
	return pageSize_;
}

void GetCreditListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetCreditListRequest::getUserId()const
{
	return userId_;
}

void GetCreditListRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

int GetCreditListRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetCreditListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

