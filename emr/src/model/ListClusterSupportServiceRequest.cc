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

#include <alibabacloud/emr/model/ListClusterSupportServiceRequest.h>

using AlibabaCloud::Emr::Model::ListClusterSupportServiceRequest;

ListClusterSupportServiceRequest::ListClusterSupportServiceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListClusterSupportService")
{}

ListClusterSupportServiceRequest::~ListClusterSupportServiceRequest()
{}

long ListClusterSupportServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListClusterSupportServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListClusterSupportServiceRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterSupportServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListClusterSupportServiceRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterSupportServiceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string ListClusterSupportServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterSupportServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

