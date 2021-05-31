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

#include <alibabacloud/dbfs/model/UpdateConstantsRequest.h>

using AlibabaCloud::DBFS::Model::UpdateConstantsRequest;

UpdateConstantsRequest::UpdateConstantsRequest() :
	RpcServiceRequest("dbfs", "2020-04-18", "UpdateConstants")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateConstantsRequest::~UpdateConstantsRequest()
{}

int UpdateConstantsRequest::getPageNumber()const
{
	return pageNumber_;
}

void UpdateConstantsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string UpdateConstantsRequest::getRegionId()const
{
	return regionId_;
}

void UpdateConstantsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateConstantsRequest::getConstantsData()const
{
	return constantsData_;
}

void UpdateConstantsRequest::setConstantsData(const std::string& constantsData)
{
	constantsData_ = constantsData;
	setParameter("ConstantsData", constantsData);
}

int UpdateConstantsRequest::getPageSize()const
{
	return pageSize_;
}

void UpdateConstantsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

