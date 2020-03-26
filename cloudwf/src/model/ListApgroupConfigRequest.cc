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

#include <alibabacloud/cloudwf/model/ListApgroupConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::ListApgroupConfigRequest;

ListApgroupConfigRequest::ListApgroupConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListApgroupConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ListApgroupConfigRequest::~ListApgroupConfigRequest()
{}

std::string ListApgroupConfigRequest::getOrderCol()const
{
	return orderCol_;
}

void ListApgroupConfigRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListApgroupConfigRequest::getSearchName()const
{
	return searchName_;
}

void ListApgroupConfigRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

int ListApgroupConfigRequest::getLength()const
{
	return length_;
}

void ListApgroupConfigRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListApgroupConfigRequest::getOrderDir()const
{
	return orderDir_;
}

void ListApgroupConfigRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListApgroupConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApgroupConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListApgroupConfigRequest::getSearchCompany()const
{
	return searchCompany_;
}

void ListApgroupConfigRequest::setSearchCompany(const std::string& searchCompany)
{
	searchCompany_ = searchCompany;
	setParameter("SearchCompany", searchCompany);
}

int ListApgroupConfigRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApgroupConfigRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

