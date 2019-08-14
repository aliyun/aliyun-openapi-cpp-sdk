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

#include <alibabacloud/cr/model/GetCollectionRequest.h>

using AlibabaCloud::Cr::Model::GetCollectionRequest;

GetCollectionRequest::GetCollectionRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

GetCollectionRequest::~GetCollectionRequest()
{}

std::string GetCollectionRequest::getRegionId()const
{
	return regionId_;
}

void GetCollectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int GetCollectionRequest::getPageSize()const
{
	return pageSize_;
}

void GetCollectionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int GetCollectionRequest::getPage()const
{
	return page_;
}

void GetCollectionRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

