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

#include <alibabacloud/cusanalytic_sc_online/model/DescribeHistoryActionDataRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::DescribeHistoryActionDataRequest;

DescribeHistoryActionDataRequest::DescribeHistoryActionDataRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "DescribeHistoryActionData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeHistoryActionDataRequest::~DescribeHistoryActionDataRequest()
{}

long DescribeHistoryActionDataRequest::getTsEnd()const
{
	return tsEnd_;
}

void DescribeHistoryActionDataRequest::setTsEnd(long tsEnd)
{
	tsEnd_ = tsEnd;
	setBodyParameter("TsEnd", std::to_string(tsEnd));
}

std::string DescribeHistoryActionDataRequest::getStoreId()const
{
	return storeId_;
}

void DescribeHistoryActionDataRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribeHistoryActionDataRequest::getPageLimit()const
{
	return pageLimit_;
}

void DescribeHistoryActionDataRequest::setPageLimit(int pageLimit)
{
	pageLimit_ = pageLimit;
	setBodyParameter("PageLimit", std::to_string(pageLimit));
}

int DescribeHistoryActionDataRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeHistoryActionDataRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

long DescribeHistoryActionDataRequest::getTsStart()const
{
	return tsStart_;
}

void DescribeHistoryActionDataRequest::setTsStart(long tsStart)
{
	tsStart_ = tsStart;
	setBodyParameter("TsStart", std::to_string(tsStart));
}

