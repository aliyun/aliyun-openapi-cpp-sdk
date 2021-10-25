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

#include <alibabacloud/emr/model/DescribeDiskOpsActivityRequest.h>

using AlibabaCloud::Emr::Model::DescribeDiskOpsActivityRequest;

DescribeDiskOpsActivityRequest::DescribeDiskOpsActivityRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeDiskOpsActivity")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDiskOpsActivityRequest::~DescribeDiskOpsActivityRequest()
{}

std::string DescribeDiskOpsActivityRequest::getEventId()const
{
	return eventId_;
}

void DescribeDiskOpsActivityRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setParameter("EventId", eventId);
}

long DescribeDiskOpsActivityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDiskOpsActivityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDiskOpsActivityRequest::getCurrentStage()const
{
	return currentStage_;
}

void DescribeDiskOpsActivityRequest::setCurrentStage(const std::string& currentStage)
{
	currentStage_ = currentStage;
	setParameter("CurrentStage", currentStage);
}

std::string DescribeDiskOpsActivityRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeDiskOpsActivityRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeDiskOpsActivityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDiskOpsActivityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDiskOpsActivityRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDiskOpsActivityRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeDiskOpsActivityRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDiskOpsActivityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDiskOpsActivityRequest::getDiskId()const
{
	return diskId_;
}

void DescribeDiskOpsActivityRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

std::string DescribeDiskOpsActivityRequest::getCurrentState()const
{
	return currentState_;
}

void DescribeDiskOpsActivityRequest::setCurrentState(const std::string& currentState)
{
	currentState_ = currentState;
	setParameter("CurrentState", currentState);
}

