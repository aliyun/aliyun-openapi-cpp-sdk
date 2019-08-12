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

#include <alibabacloud/cloudwf/model/ListSubAccountPermissionRequest.h>

using AlibabaCloud::Cloudwf::Model::ListSubAccountPermissionRequest;

ListSubAccountPermissionRequest::ListSubAccountPermissionRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListSubAccountPermission")
{}

ListSubAccountPermissionRequest::~ListSubAccountPermissionRequest()
{}

long ListSubAccountPermissionRequest::getSearchUid()const
{
	return searchUid_;
}

void ListSubAccountPermissionRequest::setSearchUid(long searchUid)
{
	searchUid_ = searchUid;
	setCoreParameter("SearchUid", std::to_string(searchUid));
}

int ListSubAccountPermissionRequest::getLength()const
{
	return length_;
}

void ListSubAccountPermissionRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

int ListSubAccountPermissionRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListSubAccountPermissionRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListSubAccountPermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListSubAccountPermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

