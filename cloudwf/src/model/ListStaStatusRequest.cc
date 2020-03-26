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

#include <alibabacloud/cloudwf/model/ListStaStatusRequest.h>

using AlibabaCloud::Cloudwf::Model::ListStaStatusRequest;

ListStaStatusRequest::ListStaStatusRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListStaStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ListStaStatusRequest::~ListStaStatusRequest()
{}

std::string ListStaStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListStaStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListStaStatusRequest::getSearchSsid()const
{
	return searchSsid_;
}

void ListStaStatusRequest::setSearchSsid(const std::string& searchSsid)
{
	searchSsid_ = searchSsid;
	setParameter("SearchSsid", searchSsid);
}

int ListStaStatusRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListStaStatusRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListStaStatusRequest::getSearchMac()const
{
	return searchMac_;
}

void ListStaStatusRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setParameter("SearchMac", searchMac);
}

std::string ListStaStatusRequest::getSearchDescription()const
{
	return searchDescription_;
}

void ListStaStatusRequest::setSearchDescription(const std::string& searchDescription)
{
	searchDescription_ = searchDescription;
	setParameter("SearchDescription", searchDescription);
}

std::string ListStaStatusRequest::getOrderCol()const
{
	return orderCol_;
}

void ListStaStatusRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListStaStatusRequest::getSearchGroupName()const
{
	return searchGroupName_;
}

void ListStaStatusRequest::setSearchGroupName(const std::string& searchGroupName)
{
	searchGroupName_ = searchGroupName;
	setParameter("SearchGroupName", searchGroupName);
}

int ListStaStatusRequest::getSearchStatus()const
{
	return searchStatus_;
}

void ListStaStatusRequest::setSearchStatus(int searchStatus)
{
	searchStatus_ = searchStatus;
	setParameter("SearchStatus", std::to_string(searchStatus));
}

int ListStaStatusRequest::getLength()const
{
	return length_;
}

void ListStaStatusRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListStaStatusRequest::getSearchUsername()const
{
	return searchUsername_;
}

void ListStaStatusRequest::setSearchUsername(const std::string& searchUsername)
{
	searchUsername_ = searchUsername;
	setParameter("SearchUsername", searchUsername);
}

std::string ListStaStatusRequest::getOrderDir()const
{
	return orderDir_;
}

void ListStaStatusRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListStaStatusRequest::getSearchProtocal()const
{
	return searchProtocal_;
}

void ListStaStatusRequest::setSearchProtocal(const std::string& searchProtocal)
{
	searchProtocal_ = searchProtocal;
	setParameter("SearchProtocal", searchProtocal);
}

std::string ListStaStatusRequest::getSearchApName()const
{
	return searchApName_;
}

void ListStaStatusRequest::setSearchApName(const std::string& searchApName)
{
	searchApName_ = searchApName;
	setParameter("SearchApName", searchApName);
}

std::string ListStaStatusRequest::getSearchIp()const
{
	return searchIp_;
}

void ListStaStatusRequest::setSearchIp(const std::string& searchIp)
{
	searchIp_ = searchIp;
	setParameter("SearchIp", searchIp);
}

