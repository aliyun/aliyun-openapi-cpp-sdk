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

#include <alibabacloud/emr/model/ListEmrMainVersionRequest.h>

using AlibabaCloud::Emr::Model::ListEmrMainVersionRequest;

ListEmrMainVersionRequest::ListEmrMainVersionRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListEmrMainVersion")
{}

ListEmrMainVersionRequest::~ListEmrMainVersionRequest()
{}

long ListEmrMainVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListEmrMainVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListEmrMainVersionRequest::getRegionId()const
{
	return regionId_;
}

void ListEmrMainVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int ListEmrMainVersionRequest::getPageSize()const
{
	return pageSize_;
}

void ListEmrMainVersionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListEmrMainVersionRequest::getEmrVersion()const
{
	return emrVersion_;
}

void ListEmrMainVersionRequest::setEmrVersion(const std::string& emrVersion)
{
	emrVersion_ = emrVersion;
	setCoreParameter("EmrVersion", std::to_string(emrVersion));
}

std::string ListEmrMainVersionRequest::getStackName()const
{
	return stackName_;
}

void ListEmrMainVersionRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", std::to_string(stackName));
}

std::string ListEmrMainVersionRequest::getStackVersion()const
{
	return stackVersion_;
}

void ListEmrMainVersionRequest::setStackVersion(const std::string& stackVersion)
{
	stackVersion_ = stackVersion;
	setCoreParameter("StackVersion", std::to_string(stackVersion));
}

int ListEmrMainVersionRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListEmrMainVersionRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListEmrMainVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListEmrMainVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

