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

#include <alibabacloud/cloudwf/model/ListBriefApConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::ListBriefApConfigRequest;

ListBriefApConfigRequest::ListBriefApConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListBriefApConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ListBriefApConfigRequest::~ListBriefApConfigRequest()
{}

std::string ListBriefApConfigRequest::getOrderCol()const
{
	return orderCol_;
}

void ListBriefApConfigRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListBriefApConfigRequest::getSearchName()const
{
	return searchName_;
}

void ListBriefApConfigRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

int ListBriefApConfigRequest::getLength()const
{
	return length_;
}

void ListBriefApConfigRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListBriefApConfigRequest::getOrderDir()const
{
	return orderDir_;
}

void ListBriefApConfigRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListBriefApConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListBriefApConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListBriefApConfigRequest::getSearchScan()const
{
	return searchScan_;
}

void ListBriefApConfigRequest::setSearchScan(int searchScan)
{
	searchScan_ = searchScan;
	setParameter("SearchScan", std::to_string(searchScan));
}

std::string ListBriefApConfigRequest::getSearchMac()const
{
	return searchMac_;
}

void ListBriefApConfigRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setParameter("SearchMac", searchMac);
}

int ListBriefApConfigRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListBriefApConfigRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListBriefApConfigRequest::getSearchModel()const
{
	return searchModel_;
}

void ListBriefApConfigRequest::setSearchModel(const std::string& searchModel)
{
	searchModel_ = searchModel;
	setParameter("SearchModel", searchModel);
}

