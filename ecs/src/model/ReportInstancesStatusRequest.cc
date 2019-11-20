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

#include <alibabacloud/ecs/model/ReportInstancesStatusRequest.h>

using AlibabaCloud::Ecs::Model::ReportInstancesStatusRequest;

ReportInstancesStatusRequest::ReportInstancesStatusRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReportInstancesStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ReportInstancesStatusRequest::~ReportInstancesStatusRequest()
{}

std::string ReportInstancesStatusRequest::getReason()const
{
	return reason_;
}

void ReportInstancesStatusRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setCoreParameter("Reason", reason);
}

long ReportInstancesStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportInstancesStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReportInstancesStatusRequest::getDescription()const
{
	return description_;
}

void ReportInstancesStatusRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ReportInstancesStatusRequest::getStartTime()const
{
	return startTime_;
}

void ReportInstancesStatusRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string ReportInstancesStatusRequest::getRegionId()const
{
	return regionId_;
}

void ReportInstancesStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<std::string> ReportInstancesStatusRequest::getDiskId()const
{
	return diskId_;
}

void ReportInstancesStatusRequest::setDiskId(const std::vector<std::string>& diskId)
{
	diskId_ = diskId;
	for(int dep1 = 0; dep1!= diskId.size(); dep1++) {
		setCoreParameter("DiskId."+ std::to_string(dep1), diskId.at(dep1));
	}
}

std::string ReportInstancesStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportInstancesStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportInstancesStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportInstancesStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ReportInstancesStatusRequest::getEndTime()const
{
	return endTime_;
}

void ReportInstancesStatusRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long ReportInstancesStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportInstancesStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> ReportInstancesStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ReportInstancesStatusRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setCoreParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

std::vector<std::string> ReportInstancesStatusRequest::getDevice()const
{
	return device_;
}

void ReportInstancesStatusRequest::setDevice(const std::vector<std::string>& device)
{
	device_ = device;
	for(int dep1 = 0; dep1!= device.size(); dep1++) {
		setCoreParameter("Device."+ std::to_string(dep1), device.at(dep1));
	}
}

