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

#include <alibabacloud/emr/model/RunDiskOpsActivityRequest.h>

using AlibabaCloud::Emr::Model::RunDiskOpsActivityRequest;

RunDiskOpsActivityRequest::RunDiskOpsActivityRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RunDiskOpsActivity")
{
	setMethod(HttpRequest::Method::Post);
}

RunDiskOpsActivityRequest::~RunDiskOpsActivityRequest()
{}

std::string RunDiskOpsActivityRequest::getEventId()const
{
	return eventId_;
}

void RunDiskOpsActivityRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setParameter("EventId", eventId);
}

long RunDiskOpsActivityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RunDiskOpsActivityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RunDiskOpsActivityRequest::getCurrentStage()const
{
	return currentStage_;
}

void RunDiskOpsActivityRequest::setCurrentStage(const std::string& currentStage)
{
	currentStage_ = currentStage;
	setParameter("CurrentStage", currentStage);
}

std::string RunDiskOpsActivityRequest::getClusterId()const
{
	return clusterId_;
}

void RunDiskOpsActivityRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string RunDiskOpsActivityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RunDiskOpsActivityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RunDiskOpsActivityRequest::getInstanceId()const
{
	return instanceId_;
}

void RunDiskOpsActivityRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RunDiskOpsActivityRequest::getRegionId()const
{
	return regionId_;
}

void RunDiskOpsActivityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RunDiskOpsActivityRequest::getDiskId()const
{
	return diskId_;
}

void RunDiskOpsActivityRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

std::string RunDiskOpsActivityRequest::getCurrentState()const
{
	return currentState_;
}

void RunDiskOpsActivityRequest::setCurrentState(const std::string& currentState)
{
	currentState_ = currentState;
	setParameter("CurrentState", currentState);
}

