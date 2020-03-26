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

#include <alibabacloud/arms/model/SearchRetcodeAppByPageRequest.h>

using AlibabaCloud::ARMS::Model::SearchRetcodeAppByPageRequest;

SearchRetcodeAppByPageRequest::SearchRetcodeAppByPageRequest() :
	RpcServiceRequest("arms", "2019-08-08", "SearchRetcodeAppByPage")
{
	setMethod(HttpRequest::Method::Post);
}

SearchRetcodeAppByPageRequest::~SearchRetcodeAppByPageRequest()
{}

std::string SearchRetcodeAppByPageRequest::getRegionId()const
{
	return regionId_;
}

void SearchRetcodeAppByPageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SearchRetcodeAppByPageRequest::getRetcodeAppName()const
{
	return retcodeAppName_;
}

void SearchRetcodeAppByPageRequest::setRetcodeAppName(const std::string& retcodeAppName)
{
	retcodeAppName_ = retcodeAppName;
	setParameter("RetcodeAppName", retcodeAppName);
}

int SearchRetcodeAppByPageRequest::getPageSize()const
{
	return pageSize_;
}

void SearchRetcodeAppByPageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int SearchRetcodeAppByPageRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchRetcodeAppByPageRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

