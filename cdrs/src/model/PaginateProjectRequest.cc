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

#include <alibabacloud/cdrs/model/PaginateProjectRequest.h>

using AlibabaCloud::CDRS::Model::PaginateProjectRequest;

PaginateProjectRequest::PaginateProjectRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "PaginateProject")
{
	setMethod(HttpRequest::Method::Post);
}

PaginateProjectRequest::~PaginateProjectRequest()
{}

std::string PaginateProjectRequest::getType()const
{
	return type_;
}

void PaginateProjectRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

long PaginateProjectRequest::getPageNumber()const
{
	return pageNumber_;
}

void PaginateProjectRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

bool PaginateProjectRequest::getCountTotalNum()const
{
	return countTotalNum_;
}

void PaginateProjectRequest::setCountTotalNum(bool countTotalNum)
{
	countTotalNum_ = countTotalNum;
	setBodyParameter("CountTotalNum", countTotalNum ? "true" : "false");
}

std::string PaginateProjectRequest::getAppName()const
{
	return appName_;
}

void PaginateProjectRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string PaginateProjectRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void PaginateProjectRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setBodyParameter("_NameSpace", _nameSpace);
}

long PaginateProjectRequest::getPageSize()const
{
	return pageSize_;
}

void PaginateProjectRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string PaginateProjectRequest::getNameLike()const
{
	return nameLike_;
}

void PaginateProjectRequest::setNameLike(const std::string& nameLike)
{
	nameLike_ = nameLike;
	setBodyParameter("NameLike", nameLike);
}

