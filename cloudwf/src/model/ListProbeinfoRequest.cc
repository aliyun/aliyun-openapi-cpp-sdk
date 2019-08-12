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
{}

ListProbeinfoRequest::~ListProbeinfoRequest()
{}

std::string ListProbeinfoRequest::getOrderCol()const
{
	return orderCol_;
}

void ListProbeinfoRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", std::to_string(orderCol));
}

std::string ListProbeinfoRequest::getSearchUserMac()const
{
	return searchUserMac_;
}

void ListProbeinfoRequest::setSearchUserMac(const std::string& searchUserMac)
{
	searchUserMac_ = searchUserMac;
	setCoreParameter("SearchUserMac", std::to_string(searchUserMac));
}

std::string ListProbeinfoRequest::getSearchSensorMac()const
{
	return searchSensorMac_;
}

void ListProbeinfoRequest::setSearchSensorMac(const std::string& searchSensorMac)
{
	searchSensorMac_ = searchSensorMac;
	setCoreParameter("SearchSensorMac", std::to_string(searchSensorMac));
}

int ListProbeinfoRequest::getLength()const
{
	return length_;
}

void ListProbeinfoRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

std::string ListProbeinfoRequest::getSearchSensorName()const
{
	return searchSensorName_;
}

void ListProbeinfoRequest::setSearchSensorName(const std::string& searchSensorName)
{
	searchSensorName_ = searchSensorName;
	setCoreParameter("SearchSensorName", std::to_string(searchSensorName));
}

int ListProbeinfoRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListProbeinfoRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", pageIndex);
}

std::string ListProbeinfoRequest::getOrderDir()const
{
	return orderDir_;
}

void ListProbeinfoRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", std::to_string(orderDir));
}

std::string ListProbeinfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListProbeinfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

