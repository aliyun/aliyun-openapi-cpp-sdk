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

#include <alibabacloud/emr/model/ListHostPoolRequest.h>

using AlibabaCloud::Emr::Model::ListHostPoolRequest;

ListHostPoolRequest::ListHostPoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListHostPool")
{}

ListHostPoolRequest::~ListHostPoolRequest()
{}

long ListHostPoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListHostPoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListHostPoolRequest::getRegionId()const
{
	return regionId_;
}

void ListHostPoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListHostPoolRequest::getPageSize()const
{
	return pageSize_;
}

void ListHostPoolRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int ListHostPoolRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListHostPoolRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListHostPoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListHostPoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

