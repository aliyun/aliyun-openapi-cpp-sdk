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

#include <alibabacloud/cloudwf/model/ListBusinessDetailsRequest.h>

using AlibabaCloud::Cloudwf::Model::ListBusinessDetailsRequest;

ListBusinessDetailsRequest::ListBusinessDetailsRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListBusinessDetails")
{
	setMethod(HttpRequest::Method::Post);
}

ListBusinessDetailsRequest::~ListBusinessDetailsRequest()
{}

std::string ListBusinessDetailsRequest::getOrderCol()const
{
	return orderCol_;
}

void ListBusinessDetailsRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListBusinessDetailsRequest::getSearchName()const
{
	return searchName_;
}

void ListBusinessDetailsRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

int ListBusinessDetailsRequest::getLength()const
{
	return length_;
}

void ListBusinessDetailsRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListBusinessDetailsRequest::getOrderDir()const
{
	return orderDir_;
}

void ListBusinessDetailsRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListBusinessDetailsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListBusinessDetailsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListBusinessDetailsRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListBusinessDetailsRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

