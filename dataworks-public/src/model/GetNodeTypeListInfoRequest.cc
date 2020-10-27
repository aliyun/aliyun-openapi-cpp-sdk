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

#include <alibabacloud/dataworks-public/model/GetNodeTypeListInfoRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetNodeTypeListInfoRequest;

GetNodeTypeListInfoRequest::GetNodeTypeListInfoRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "GetNodeTypeListInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetNodeTypeListInfoRequest::~GetNodeTypeListInfoRequest()
{}

int GetNodeTypeListInfoRequest::getPageSize()const
{
	return pageSize_;
}

void GetNodeTypeListInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string GetNodeTypeListInfoRequest::getKeyword()const
{
	return keyword_;
}

void GetNodeTypeListInfoRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setBodyParameter("Keyword", keyword);
}

std::string GetNodeTypeListInfoRequest::getLocale()const
{
	return locale_;
}

void GetNodeTypeListInfoRequest::setLocale(const std::string& locale)
{
	locale_ = locale;
	setBodyParameter("Locale", locale);
}

long GetNodeTypeListInfoRequest::getProjectId()const
{
	return projectId_;
}

void GetNodeTypeListInfoRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

std::string GetNodeTypeListInfoRequest::getProjectIdentifier()const
{
	return projectIdentifier_;
}

void GetNodeTypeListInfoRequest::setProjectIdentifier(const std::string& projectIdentifier)
{
	projectIdentifier_ = projectIdentifier;
	setBodyParameter("ProjectIdentifier", projectIdentifier);
}

int GetNodeTypeListInfoRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetNodeTypeListInfoRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

