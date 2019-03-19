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

#include <alibabacloud/bssopenapi/model/QueryProductListRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryProductListRequest;

QueryProductListRequest::QueryProductListRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryProductList")
{}

QueryProductListRequest::~QueryProductListRequest()
{}

bool QueryProductListRequest::getQueryTotalCount()const
{
	return queryTotalCount_;
}

void QueryProductListRequest::setQueryTotalCount(bool queryTotalCount)
{
	queryTotalCount_ = queryTotalCount;
	setParameter("QueryTotalCount", queryTotalCount ? "true" : "false");
}

int QueryProductListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryProductListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int QueryProductListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryProductListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

