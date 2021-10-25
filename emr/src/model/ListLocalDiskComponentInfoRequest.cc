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

#include <alibabacloud/emr/model/ListLocalDiskComponentInfoRequest.h>

using AlibabaCloud::Emr::Model::ListLocalDiskComponentInfoRequest;

ListLocalDiskComponentInfoRequest::ListLocalDiskComponentInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListLocalDiskComponentInfo")
{
	setMethod(HttpRequest::Method::Post);
}

ListLocalDiskComponentInfoRequest::~ListLocalDiskComponentInfoRequest()
{}

long ListLocalDiskComponentInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListLocalDiskComponentInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListLocalDiskComponentInfoRequest::getClusterId()const
{
	return clusterId_;
}

void ListLocalDiskComponentInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListLocalDiskComponentInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListLocalDiskComponentInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListLocalDiskComponentInfoRequest::getInstanceId()const
{
	return instanceId_;
}

void ListLocalDiskComponentInfoRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListLocalDiskComponentInfoRequest::getRegionId()const
{
	return regionId_;
}

void ListLocalDiskComponentInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

