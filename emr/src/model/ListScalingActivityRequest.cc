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

#include <alibabacloud/emr/model/ListScalingActivityRequest.h>

using AlibabaCloud::Emr::Model::ListScalingActivityRequest;

ListScalingActivityRequest::ListScalingActivityRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListScalingActivity")
{}

ListScalingActivityRequest::~ListScalingActivityRequest()
{}

long ListScalingActivityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListScalingActivityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListScalingActivityRequest::getRegionId()const
{
	return regionId_;
}

void ListScalingActivityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListScalingActivityRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void ListScalingActivityRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setCoreParameter("HostGroupId", hostGroupId);
}

int ListScalingActivityRequest::getPageSize()const
{
	return pageSize_;
}

void ListScalingActivityRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListScalingActivityRequest::getClusterId()const
{
	return clusterId_;
}

void ListScalingActivityRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListScalingActivityRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListScalingActivityRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListScalingActivityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListScalingActivityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

