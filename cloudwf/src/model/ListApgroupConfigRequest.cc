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
{}

ListApgroupConfigRequest::~ListApgroupConfigRequest()
{}

std::string ListApgroupConfigRequest::getOrderCol()const
{
	return orderCol_;
}

void ListApgroupConfigRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", orderCol);
}

std::string ListApgroupConfigRequest::getSearchName()const
{
	return searchName_;
}

void ListApgroupConfigRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setCoreParameter("SearchName", searchName);
}

std::string ListApgroupConfigRequest::getSearchCompany()const
{
	return searchCompany_;
}

void ListApgroupConfigRequest::setSearchCompany(const std::string& searchCompany)
{
	searchCompany_ = searchCompany;
	setCoreParameter("SearchCompany", searchCompany);
}

int ListApgroupConfigRequest::getLength()const
{
	return length_;
}

void ListApgroupConfigRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

int ListApgroupConfigRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApgroupConfigRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListApgroupConfigRequest::getOrderDir()const
{
	return orderDir_;
}

void ListApgroupConfigRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", orderDir);
}

std::string ListApgroupConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApgroupConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

