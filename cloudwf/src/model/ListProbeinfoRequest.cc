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

#include <alibabacloud/cloudwf/model/ListProbeinfoRequest.h>

using AlibabaCloud::Cloudwf::Model::ListProbeinfoRequest;

ListProbeinfoRequest::ListProbeinfoRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListProbeinfo")
{
	setMethod(HttpRequest::Method::Post);
}

ListProbeinfoRequest::~ListProbeinfoRequest()
{}

std::string ListProbeinfoRequest::getOrderCol()const
{
	return orderCol_;
}

void ListProbeinfoRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListProbeinfoRequest::getSearchUserMac()const
{
	return searchUserMac_;
}

void ListProbeinfoRequest::setSearchUserMac(const std::string& searchUserMac)
{
	searchUserMac_ = searchUserMac;
	setParameter("SearchUserMac", searchUserMac);
}

std::string ListProbeinfoRequest::getSearchSensorMac()const
{
	return searchSensorMac_;
}

void ListProbeinfoRequest::setSearchSensorMac(const std::string& searchSensorMac)
{
	searchSensorMac_ = searchSensorMac;
	setParameter("SearchSensorMac", searchSensorMac);
}

int ListProbeinfoRequest::getLength()const
{
	return length_;
}

void ListProbeinfoRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListProbeinfoRequest::getSearchSensorName()const
{
	return searchSensorName_;
}

void ListProbeinfoRequest::setSearchSensorName(const std::string& searchSensorName)
{
	searchSensorName_ = searchSensorName;
	setParameter("SearchSensorName", searchSensorName);
}

std::string ListProbeinfoRequest::getOrderDir()const
{
	return orderDir_;
}

void ListProbeinfoRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListProbeinfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListProbeinfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListProbeinfoRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListProbeinfoRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

