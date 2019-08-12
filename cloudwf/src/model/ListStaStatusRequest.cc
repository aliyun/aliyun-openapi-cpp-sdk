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
{}

ListStaStatusRequest::~ListStaStatusRequest()
{}

std::string ListStaStatusRequest::getOrderCol()const
{
	return orderCol_;
}

void ListStaStatusRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", std::to_string(orderCol));
}

std::string ListStaStatusRequest::getSearchGroupName()const
{
	return searchGroupName_;
}

void ListStaStatusRequest::setSearchGroupName(const std::string& searchGroupName)
{
	searchGroupName_ = searchGroupName;
	setCoreParameter("SearchGroupName", std::to_string(searchGroupName));
}

int ListStaStatusRequest::getSearchStatus()const
{
	return searchStatus_;
}

void ListStaStatusRequest::setSearchStatus(int searchStatus)
{
	searchStatus_ = searchStatus;
	setCoreParameter("SearchStatus", searchStatus);
}

int ListStaStatusRequest::getLength()const
{
	return length_;
}

void ListStaStatusRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

std::string ListStaStatusRequest::getSearchUsername()const
{
	return searchUsername_;
}

void ListStaStatusRequest::setSearchUsername(const std::string& searchUsername)
{
	searchUsername_ = searchUsername;
	setCoreParameter("SearchUsername", std::to_string(searchUsername));
}

std::string ListStaStatusRequest::getOrderDir()const
{
	return orderDir_;
}

void ListStaStatusRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", std::to_string(orderDir));
}

std::string ListStaStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListStaStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ListStaStatusRequest::getSearchProtocal()const
{
	return searchProtocal_;
}

void ListStaStatusRequest::setSearchProtocal(const std::string& searchProtocal)
{
	searchProtocal_ = searchProtocal;
	setCoreParameter("SearchProtocal", std::to_string(searchProtocal));
}

std::string ListStaStatusRequest::getSearchSsid()const
{
	return searchSsid_;
}

void ListStaStatusRequest::setSearchSsid(const std::string& searchSsid)
{
	searchSsid_ = searchSsid;
	setCoreParameter("SearchSsid", std::to_string(searchSsid));
}

std::string ListStaStatusRequest::getSearchApName()const
{
	return searchApName_;
}

void ListStaStatusRequest::setSearchApName(const std::string& searchApName)
{
	searchApName_ = searchApName;
	setCoreParameter("SearchApName", std::to_string(searchApName));
}

std::string ListStaStatusRequest::getSearchIp()const
{
	return searchIp_;
}

void ListStaStatusRequest::setSearchIp(const std::string& searchIp)
{
	searchIp_ = searchIp;
	setCoreParameter("SearchIp", std::to_string(searchIp));
}

int ListStaStatusRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListStaStatusRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", pageIndex);
}

std::string ListStaStatusRequest::getSearchMac()const
{
	return searchMac_;
}

void ListStaStatusRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setCoreParameter("SearchMac", std::to_string(searchMac));
}

std::string ListStaStatusRequest::getSearchDescription()const
{
	return searchDescription_;
}

void ListStaStatusRequest::setSearchDescription(const std::string& searchDescription)
{
	searchDescription_ = searchDescription;
	setCoreParameter("SearchDescription", std::to_string(searchDescription));
}

