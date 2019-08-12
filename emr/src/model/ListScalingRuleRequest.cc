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

#include <alibabacloud/emr/model/ListScalingRuleRequest.h>

using AlibabaCloud::Emr::Model::ListScalingRuleRequest;

ListScalingRuleRequest::ListScalingRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListScalingRule")
{}

ListScalingRuleRequest::~ListScalingRuleRequest()
{}

long ListScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void ListScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListScalingRuleRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void ListScalingRuleRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setCoreParameter("HostGroupId", std::to_string(hostGroupId));
}

int ListScalingRuleRequest::getPageSize()const
{
	return pageSize_;
}

void ListScalingRuleRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void ListScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

int ListScalingRuleRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListScalingRuleRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

