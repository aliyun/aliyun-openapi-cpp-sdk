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

#include <alibabacloud/cloudwf/model/ListApStaStatusRequest.h>

using AlibabaCloud::Cloudwf::Model::ListApStaStatusRequest;

ListApStaStatusRequest::ListApStaStatusRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListApStaStatus")
{}

ListApStaStatusRequest::~ListApStaStatusRequest()
{}

std::string ListApStaStatusRequest::getOrderCol()const
{
	return orderCol_;
}

void ListApStaStatusRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", std::to_string(orderCol));
}

std::string ListApStaStatusRequest::getSearchProtocal()const
{
	return searchProtocal_;
}

void ListApStaStatusRequest::setSearchProtocal(const std::string& searchProtocal)
{
	searchProtocal_ = searchProtocal;
	setCoreParameter("SearchProtocal", std::to_string(searchProtocal));
}

std::string ListApStaStatusRequest::getSearchSsid()const
{
	return searchSsid_;
}

void ListApStaStatusRequest::setSearchSsid(const std::string& searchSsid)
{
	searchSsid_ = searchSsid;
	setCoreParameter("SearchSsid", std::to_string(searchSsid));
}

std::string ListApStaStatusRequest::getSearchIp()const
{
	return searchIp_;
}

void ListApStaStatusRequest::setSearchIp(const std::string& searchIp)
{
	searchIp_ = searchIp;
	setCoreParameter("SearchIp", std::to_string(searchIp));
}

int ListApStaStatusRequest::getLength()const
{
	return length_;
}

void ListApStaStatusRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

std::string ListApStaStatusRequest::getSearchUsername()const
{
	return searchUsername_;
}

void ListApStaStatusRequest::setSearchUsername(const std::string& searchUsername)
{
	searchUsername_ = searchUsername;
	setCoreParameter("SearchUsername", std::to_string(searchUsername));
}

std::string ListApStaStatusRequest::getSearchMac()const
{
	return searchMac_;
}

void ListApStaStatusRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setCoreParameter("SearchMac", std::to_string(searchMac));
}

int ListApStaStatusRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApStaStatusRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", pageIndex);
}

long ListApStaStatusRequest::getId()const
{
	return id_;
}

void ListApStaStatusRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string ListApStaStatusRequest::getOrderDir()const
{
	return orderDir_;
}

void ListApStaStatusRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", std::to_string(orderDir));
}

std::string ListApStaStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApStaStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

