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

#include <alibabacloud/vs/model/ListBucketsRequest.h>

using AlibabaCloud::Vs::Model::ListBucketsRequest;

ListBucketsRequest::ListBucketsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ListBuckets")
{
	setMethod(HttpRequest::Method::Post);
}

ListBucketsRequest::~ListBucketsRequest()
{}

std::string ListBucketsRequest::getPrefix()const
{
	return prefix_;
}

void ListBucketsRequest::setPrefix(const std::string& prefix)
{
	prefix_ = prefix;
	setParameter("Prefix", prefix);
}

int ListBucketsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBucketsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListBucketsRequest::getPageSize()const
{
	return pageSize_;
}

void ListBucketsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListBucketsRequest::getKeyword()const
{
	return keyword_;
}

void ListBucketsRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string ListBucketsRequest::getShowLog()const
{
	return showLog_;
}

void ListBucketsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long ListBucketsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListBucketsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListBucketsRequest::getMarker()const
{
	return marker_;
}

void ListBucketsRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setParameter("Marker", marker);
}

