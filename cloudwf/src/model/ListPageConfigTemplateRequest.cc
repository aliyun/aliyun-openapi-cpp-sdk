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

#include <alibabacloud/cloudwf/model/ListPageConfigTemplateRequest.h>

using AlibabaCloud::Cloudwf::Model::ListPageConfigTemplateRequest;

ListPageConfigTemplateRequest::ListPageConfigTemplateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListPageConfigTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

ListPageConfigTemplateRequest::~ListPageConfigTemplateRequest()
{}

int ListPageConfigTemplateRequest::getLength()const
{
	return length_;
}

void ListPageConfigTemplateRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListPageConfigTemplateRequest::getSearchTempName()const
{
	return searchTempName_;
}

void ListPageConfigTemplateRequest::setSearchTempName(const std::string& searchTempName)
{
	searchTempName_ = searchTempName;
	setParameter("SearchTempName", searchTempName);
}

std::string ListPageConfigTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPageConfigTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListPageConfigTemplateRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListPageConfigTemplateRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

