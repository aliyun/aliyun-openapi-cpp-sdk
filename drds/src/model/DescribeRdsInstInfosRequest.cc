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

#include <alibabacloud/drds/model/DescribeRdsInstInfosRequest.h>

using AlibabaCloud::Drds::Model::DescribeRdsInstInfosRequest;

DescribeRdsInstInfosRequest::DescribeRdsInstInfosRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeRdsInstInfos")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRdsInstInfosRequest::~DescribeRdsInstInfosRequest()
{}

int DescribeRdsInstInfosRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRdsInstInfosRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRdsInstInfosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRdsInstInfosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRdsInstInfosRequest::getSearch()const
{
	return search_;
}

void DescribeRdsInstInfosRequest::setSearch(const std::string& search)
{
	search_ = search;
	setParameter("Search", search);
}

int DescribeRdsInstInfosRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRdsInstInfosRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

