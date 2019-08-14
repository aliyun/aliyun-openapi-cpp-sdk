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

#include <alibabacloud/cloudwf/model/ListApStatusRequest.h>

using AlibabaCloud::Cloudwf::Model::ListApStatusRequest;

ListApStatusRequest::ListApStatusRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListApStatus")
{}

ListApStatusRequest::~ListApStatusRequest()
{}

std::string ListApStatusRequest::getOrderCol()const
{
	return orderCol_;
}

void ListApStatusRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", orderCol);
}

std::string ListApStatusRequest::getSearchName()const
{
	return searchName_;
}

void ListApStatusRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setCoreParameter("SearchName", searchName);
}

std::string ListApStatusRequest::getSearchGroupName()const
{
	return searchGroupName_;
}

void ListApStatusRequest::setSearchGroupName(const std::string& searchGroupName)
{
	searchGroupName_ = searchGroupName;
	setCoreParameter("SearchGroupName", searchGroupName);
}

int ListApStatusRequest::getSearchStatus()const
{
	return searchStatus_;
}

void ListApStatusRequest::setSearchStatus(int searchStatus)
{
	searchStatus_ = searchStatus;
	setCoreParameter("SearchStatus", std::to_string(searchStatus));
}

std::string ListApStatusRequest::getSearchWanIp()const
{
	return searchWanIp_;
}

void ListApStatusRequest::setSearchWanIp(const std::string& searchWanIp)
{
	searchWanIp_ = searchWanIp;
	setCoreParameter("SearchWanIp", searchWanIp);
}

std::string ListApStatusRequest::getSearchApModelName()const
{
	return searchApModelName_;
}

void ListApStatusRequest::setSearchApModelName(const std::string& searchApModelName)
{
	searchApModelName_ = searchApModelName;
	setCoreParameter("SearchApModelName", searchApModelName);
}

int ListApStatusRequest::getLength()const
{
	return length_;
}

void ListApStatusRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

std::string ListApStatusRequest::getOrderDir()const
{
	return orderDir_;
}

void ListApStatusRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", orderDir);
}

std::string ListApStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int ListApStatusRequest::getSearchBssEquals()const
{
	return searchBssEquals_;
}

void ListApStatusRequest::setSearchBssEquals(int searchBssEquals)
{
	searchBssEquals_ = searchBssEquals;
	setCoreParameter("SearchBssEquals", std::to_string(searchBssEquals));
}

long ListApStatusRequest::getSearchSwVersion()const
{
	return searchSwVersion_;
}

void ListApStatusRequest::setSearchSwVersion(long searchSwVersion)
{
	searchSwVersion_ = searchSwVersion;
	setCoreParameter("SearchSwVersion", std::to_string(searchSwVersion));
}

std::string ListApStatusRequest::getSearchCompanyName()const
{
	return searchCompanyName_;
}

void ListApStatusRequest::setSearchCompanyName(const std::string& searchCompanyName)
{
	searchCompanyName_ = searchCompanyName;
	setCoreParameter("SearchCompanyName", searchCompanyName);
}

std::string ListApStatusRequest::getSearchMac()const
{
	return searchMac_;
}

void ListApStatusRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setCoreParameter("SearchMac", searchMac);
}

int ListApStatusRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApStatusRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

