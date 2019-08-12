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

#include <alibabacloud/emr/model/DetachClusterForNoteRequest.h>

using AlibabaCloud::Emr::Model::DetachClusterForNoteRequest;

DetachClusterForNoteRequest::DetachClusterForNoteRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DetachClusterForNote")
{}

DetachClusterForNoteRequest::~DetachClusterForNoteRequest()
{}

long DetachClusterForNoteRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachClusterForNoteRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DetachClusterForNoteRequest::getRegionId()const
{
	return regionId_;
}

void DetachClusterForNoteRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DetachClusterForNoteRequest::getId()const
{
	return id_;
}

void DetachClusterForNoteRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string DetachClusterForNoteRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachClusterForNoteRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

