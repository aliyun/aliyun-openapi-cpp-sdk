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

#include <alibabacloud/emr/model/AttachClusterForNoteRequest.h>

using AlibabaCloud::Emr::Model::AttachClusterForNoteRequest;

AttachClusterForNoteRequest::AttachClusterForNoteRequest() :
	RpcServiceRequest("emr", "2016-04-08", "AttachClusterForNote")
{}

AttachClusterForNoteRequest::~AttachClusterForNoteRequest()
{}

long AttachClusterForNoteRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachClusterForNoteRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AttachClusterForNoteRequest::getRegionId()const
{
	return regionId_;
}

void AttachClusterForNoteRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AttachClusterForNoteRequest::getId()const
{
	return id_;
}

void AttachClusterForNoteRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string AttachClusterForNoteRequest::getClusterId()const
{
	return clusterId_;
}

void AttachClusterForNoteRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string AttachClusterForNoteRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AttachClusterForNoteRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

