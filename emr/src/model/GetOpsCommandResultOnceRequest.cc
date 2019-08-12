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

#include <alibabacloud/emr/model/GetOpsCommandResultOnceRequest.h>

using AlibabaCloud::Emr::Model::GetOpsCommandResultOnceRequest;

GetOpsCommandResultOnceRequest::GetOpsCommandResultOnceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetOpsCommandResultOnce")
{}

GetOpsCommandResultOnceRequest::~GetOpsCommandResultOnceRequest()
{}

long GetOpsCommandResultOnceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetOpsCommandResultOnceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetOpsCommandResultOnceRequest::getRegionId()const
{
	return regionId_;
}

void GetOpsCommandResultOnceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string GetOpsCommandResultOnceRequest::getClusterId()const
{
	return clusterId_;
}

void GetOpsCommandResultOnceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

long GetOpsCommandResultOnceRequest::getTaskId()const
{
	return taskId_;
}

void GetOpsCommandResultOnceRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string GetOpsCommandResultOnceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetOpsCommandResultOnceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

