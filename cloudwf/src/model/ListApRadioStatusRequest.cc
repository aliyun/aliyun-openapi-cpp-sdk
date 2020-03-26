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

#include <alibabacloud/cloudwf/model/ListApRadioStatusRequest.h>

using AlibabaCloud::Cloudwf::Model::ListApRadioStatusRequest;

ListApRadioStatusRequest::ListApRadioStatusRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListApRadioStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ListApRadioStatusRequest::~ListApRadioStatusRequest()
{}

std::string ListApRadioStatusRequest::getOrderCol()const
{
	return orderCol_;
}

void ListApRadioStatusRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListApRadioStatusRequest::getSearchName()const
{
	return searchName_;
}

void ListApRadioStatusRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

int ListApRadioStatusRequest::getSearchChannelEquals()const
{
	return searchChannelEquals_;
}

void ListApRadioStatusRequest::setSearchChannelEquals(int searchChannelEquals)
{
	searchChannelEquals_ = searchChannelEquals;
	setParameter("SearchChannelEquals", std::to_string(searchChannelEquals));
}

int ListApRadioStatusRequest::getLength()const
{
	return length_;
}

void ListApRadioStatusRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListApRadioStatusRequest::getOrderDir()const
{
	return orderDir_;
}

void ListApRadioStatusRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

int ListApRadioStatusRequest::getSearchApStatus()const
{
	return searchApStatus_;
}

void ListApRadioStatusRequest::setSearchApStatus(int searchApStatus)
{
	searchApStatus_ = searchApStatus;
	setParameter("SearchApStatus", std::to_string(searchApStatus));
}

std::string ListApRadioStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApRadioStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListApRadioStatusRequest::getSearchDisabled()const
{
	return searchDisabled_;
}

void ListApRadioStatusRequest::setSearchDisabled(int searchDisabled)
{
	searchDisabled_ = searchDisabled;
	setParameter("SearchDisabled", std::to_string(searchDisabled));
}

std::string ListApRadioStatusRequest::getSearchMac()const
{
	return searchMac_;
}

void ListApRadioStatusRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setParameter("SearchMac", searchMac);
}

std::string ListApRadioStatusRequest::getSearchApgroupName()const
{
	return searchApgroupName_;
}

void ListApRadioStatusRequest::setSearchApgroupName(const std::string& searchApgroupName)
{
	searchApgroupName_ = searchApgroupName;
	setParameter("SearchApgroupName", searchApgroupName);
}

int ListApRadioStatusRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApRadioStatusRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

