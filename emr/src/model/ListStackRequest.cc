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

#include <alibabacloud/emr/model/ListStackRequest.h>

using AlibabaCloud::Emr::Model::ListStackRequest;

ListStackRequest::ListStackRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListStack")
{}

ListStackRequest::~ListStackRequest()
{}

long ListStackRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListStackRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListStackRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListStackRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListStackRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListStackRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListStackRequest::getRegionId()const
{
	return regionId_;
}

void ListStackRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListStackRequest::getPageSize()const
{
	return pageSize_;
}

void ListStackRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListStackRequest::getStackName()const
{
	return stackName_;
}

void ListStackRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", stackName);
}

std::string ListStackRequest::getStackVersion()const
{
	return stackVersion_;
}

void ListStackRequest::setStackVersion(const std::string& stackVersion)
{
	stackVersion_ = stackVersion;
	setCoreParameter("StackVersion", stackVersion);
}

