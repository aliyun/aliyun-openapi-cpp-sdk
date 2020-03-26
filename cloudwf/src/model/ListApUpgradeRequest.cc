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

#include <alibabacloud/cloudwf/model/ListApUpgradeRequest.h>

using AlibabaCloud::Cloudwf::Model::ListApUpgradeRequest;

ListApUpgradeRequest::ListApUpgradeRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListApUpgrade")
{
	setMethod(HttpRequest::Method::Post);
}

ListApUpgradeRequest::~ListApUpgradeRequest()
{}

std::string ListApUpgradeRequest::getOrderCol()const
{
	return orderCol_;
}

void ListApUpgradeRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListApUpgradeRequest::getSearchName()const
{
	return searchName_;
}

void ListApUpgradeRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

std::string ListApUpgradeRequest::getSearchApModelName()const
{
	return searchApModelName_;
}

void ListApUpgradeRequest::setSearchApModelName(const std::string& searchApModelName)
{
	searchApModelName_ = searchApModelName;
	setParameter("SearchApModelName", searchApModelName);
}

int ListApUpgradeRequest::getLength()const
{
	return length_;
}

void ListApUpgradeRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListApUpgradeRequest::getOrderDir()const
{
	return orderDir_;
}

void ListApUpgradeRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListApUpgradeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApUpgradeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListApUpgradeRequest::getSearchMac()const
{
	return searchMac_;
}

void ListApUpgradeRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setParameter("SearchMac", searchMac);
}

int ListApUpgradeRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApUpgradeRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

