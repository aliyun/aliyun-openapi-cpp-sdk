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

#include <alibabacloud/cloudwf/model/ListUmengPagePermission4RootRequest.h>

using AlibabaCloud::Cloudwf::Model::ListUmengPagePermission4RootRequest;

ListUmengPagePermission4RootRequest::ListUmengPagePermission4RootRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListUmengPagePermission4Root")
{}

ListUmengPagePermission4RootRequest::~ListUmengPagePermission4RootRequest()
{}

std::string ListUmengPagePermission4RootRequest::getOrderCol()const
{
	return orderCol_;
}

void ListUmengPagePermission4RootRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", orderCol);
}

int ListUmengPagePermission4RootRequest::getLength()const
{
	return length_;
}

void ListUmengPagePermission4RootRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

std::string ListUmengPagePermission4RootRequest::getSearchEmail()const
{
	return searchEmail_;
}

void ListUmengPagePermission4RootRequest::setSearchEmail(const std::string& searchEmail)
{
	searchEmail_ = searchEmail;
	setCoreParameter("SearchEmail", searchEmail);
}

int ListUmengPagePermission4RootRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListUmengPagePermission4RootRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", pageIndex);
}

std::string ListUmengPagePermission4RootRequest::getOrderDir()const
{
	return orderDir_;
}

void ListUmengPagePermission4RootRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", orderDir);
}

std::string ListUmengPagePermission4RootRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUmengPagePermission4RootRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

