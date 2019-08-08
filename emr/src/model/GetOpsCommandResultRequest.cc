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

#include <alibabacloud/emr/model/GetOpsCommandResultRequest.h>

using AlibabaCloud::Emr::Model::GetOpsCommandResultRequest;

GetOpsCommandResultRequest::GetOpsCommandResultRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetOpsCommandResult")
{}

GetOpsCommandResultRequest::~GetOpsCommandResultRequest()
{}

long GetOpsCommandResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetOpsCommandResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetOpsCommandResultRequest::getRegionId()const
{
	return regionId_;
}

void GetOpsCommandResultRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long GetOpsCommandResultRequest::getEndCursor()const
{
	return endCursor_;
}

void GetOpsCommandResultRequest::setEndCursor(long endCursor)
{
	endCursor_ = endCursor;
	setCoreParameter("EndCursor", std::to_string(endCursor));
}

long GetOpsCommandResultRequest::getStartCursor()const
{
	return startCursor_;
}

void GetOpsCommandResultRequest::setStartCursor(long startCursor)
{
	startCursor_ = startCursor;
	setCoreParameter("StartCursor", std::to_string(startCursor));
}

std::string GetOpsCommandResultRequest::getClusterId()const
{
	return clusterId_;
}

void GetOpsCommandResultRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

long GetOpsCommandResultRequest::getTaskId()const
{
	return taskId_;
}

void GetOpsCommandResultRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

std::string GetOpsCommandResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetOpsCommandResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

