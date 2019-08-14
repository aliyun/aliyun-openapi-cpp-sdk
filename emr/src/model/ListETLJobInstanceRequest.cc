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

#include <alibabacloud/emr/model/ListETLJobInstanceRequest.h>

using AlibabaCloud::Emr::Model::ListETLJobInstanceRequest;

ListETLJobInstanceRequest::ListETLJobInstanceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListETLJobInstance")
{}

ListETLJobInstanceRequest::~ListETLJobInstanceRequest()
{}

long ListETLJobInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListETLJobInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListETLJobInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ListETLJobInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListETLJobInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ListETLJobInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListETLJobInstanceRequest::getEtlJobId()const
{
	return etlJobId_;
}

void ListETLJobInstanceRequest::setEtlJobId(const std::string& etlJobId)
{
	etlJobId_ = etlJobId;
	setCoreParameter("EtlJobId", etlJobId);
}

int ListETLJobInstanceRequest::getPageSize()const
{
	return pageSize_;
}

void ListETLJobInstanceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int ListETLJobInstanceRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListETLJobInstanceRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListETLJobInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListETLJobInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListETLJobInstanceRequest::getStatus()const
{
	return status_;
}

void ListETLJobInstanceRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

