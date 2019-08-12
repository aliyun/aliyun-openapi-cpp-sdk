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

#include <alibabacloud/cloudwf/model/ListPortalTemplateRequest.h>

using AlibabaCloud::Cloudwf::Model::ListPortalTemplateRequest;

ListPortalTemplateRequest::ListPortalTemplateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListPortalTemplate")
{}

ListPortalTemplateRequest::~ListPortalTemplateRequest()
{}

std::string ListPortalTemplateRequest::getOrderCol()const
{
	return orderCol_;
}

void ListPortalTemplateRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setCoreParameter("OrderCol", orderCol);
}

int ListPortalTemplateRequest::getLength()const
{
	return length_;
}

void ListPortalTemplateRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", length);
}

int ListPortalTemplateRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListPortalTemplateRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", pageIndex);
}

std::string ListPortalTemplateRequest::getOrderDir()const
{
	return orderDir_;
}

void ListPortalTemplateRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setCoreParameter("OrderDir", orderDir);
}

std::string ListPortalTemplateRequest::getSearchTempName()const
{
	return searchTempName_;
}

void ListPortalTemplateRequest::setSearchTempName(const std::string& searchTempName)
{
	searchTempName_ = searchTempName;
	setCoreParameter("SearchTempName", searchTempName);
}

std::string ListPortalTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPortalTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

