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

#include <alibabacloud/dbfs/model/GetSynchronizConstantsRequest.h>

using AlibabaCloud::DBFS::Model::GetSynchronizConstantsRequest;

GetSynchronizConstantsRequest::GetSynchronizConstantsRequest() :
	RpcServiceRequest("dbfs", "2020-04-18", "GetSynchronizConstants")
{
	setMethod(HttpRequest::Method::Post);
}

GetSynchronizConstantsRequest::~GetSynchronizConstantsRequest()
{}

int GetSynchronizConstantsRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetSynchronizConstantsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetSynchronizConstantsRequest::getRegionId()const
{
	return regionId_;
}

void GetSynchronizConstantsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int GetSynchronizConstantsRequest::getPageSize()const
{
	return pageSize_;
}

void GetSynchronizConstantsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

