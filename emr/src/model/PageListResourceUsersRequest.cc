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

#include <alibabacloud/emr/model/PageListResourceUsersRequest.h>

using AlibabaCloud::Emr::Model::PageListResourceUsersRequest;

PageListResourceUsersRequest::PageListResourceUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "PageListResourceUsers")
{}

PageListResourceUsersRequest::~PageListResourceUsersRequest()
{}

long PageListResourceUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PageListResourceUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PageListResourceUsersRequest::getResourceId()const
{
	return resourceId_;
}

void PageListResourceUsersRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string PageListResourceUsersRequest::getSearchKey()const
{
	return searchKey_;
}

void PageListResourceUsersRequest::setSearchKey(const std::string& searchKey)
{
	searchKey_ = searchKey;
	setCoreParameter("SearchKey", searchKey);
}

std::string PageListResourceUsersRequest::getResourceType()const
{
	return resourceType_;
}

void PageListResourceUsersRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

int PageListResourceUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void PageListResourceUsersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string PageListResourceUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PageListResourceUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PageListResourceUsersRequest::getRegionId()const
{
	return regionId_;
}

void PageListResourceUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int PageListResourceUsersRequest::getPageSize()const
{
	return pageSize_;
}

void PageListResourceUsersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

