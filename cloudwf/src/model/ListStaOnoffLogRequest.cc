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

#include <alibabacloud/cloudwf/model/ListStaOnoffLogRequest.h>

using AlibabaCloud::Cloudwf::Model::ListStaOnoffLogRequest;

ListStaOnoffLogRequest::ListStaOnoffLogRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListStaOnoffLog")
{}

ListStaOnoffLogRequest::~ListStaOnoffLogRequest()
{}

std::string ListStaOnoffLogRequest::getOrderCol()const
{
	return orderCol_;
}

void ListStaOnoffLogRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", orderCol);
}

int ListStaOnoffLogRequest::getLength()const
{
	return length_;
}

void ListStaOnoffLogRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

std::string ListStaOnoffLogRequest::getSearchUsername()const
{
	return searchUsername_;
}

void ListStaOnoffLogRequest::setSearchUsername(const std::string& searchUsername)
{
	searchUsername_ = searchUsername;
	setCoreParameter("SearchUsername", searchUsername);
}

std::string ListStaOnoffLogRequest::getOrderDir()const
{
	return orderDir_;
}

void ListStaOnoffLogRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", orderDir);
}

std::string ListStaOnoffLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListStaOnoffLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListStaOnoffLogRequest::getSearchSsid()const
{
	return searchSsid_;
}

void ListStaOnoffLogRequest::setSearchSsid(const std::string& searchSsid)
{
	searchSsid_ = searchSsid;
	setCoreParameter("SearchSsid", searchSsid);
}

std::string ListStaOnoffLogRequest::getSearchApName()const
{
	return searchApName_;
}

void ListStaOnoffLogRequest::setSearchApName(const std::string& searchApName)
{
	searchApName_ = searchApName;
	setCoreParameter("SearchApName", searchApName);
}

int ListStaOnoffLogRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListStaOnoffLogRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

long ListStaOnoffLogRequest::getId()const
{
	return id_;
}

void ListStaOnoffLogRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

