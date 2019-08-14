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

#include <alibabacloud/cloudwf/model/ListAccountConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::ListAccountConfigRequest;

ListAccountConfigRequest::ListAccountConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListAccountConfig")
{}

ListAccountConfigRequest::~ListAccountConfigRequest()
{}

std::string ListAccountConfigRequest::getOrderCol()const
{
	return orderCol_;
}

void ListAccountConfigRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", orderCol);
}

int ListAccountConfigRequest::getLength()const
{
	return length_;
}

void ListAccountConfigRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

std::string ListAccountConfigRequest::getSearchEmail()const
{
	return searchEmail_;
}

void ListAccountConfigRequest::setSearchEmail(const std::string& searchEmail)
{
	searchEmail_ = searchEmail;
	setCoreParameter("SearchEmail", searchEmail);
}

int ListAccountConfigRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListAccountConfigRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListAccountConfigRequest::getOrderDir()const
{
	return orderDir_;
}

void ListAccountConfigRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", orderDir);
}

std::string ListAccountConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAccountConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

