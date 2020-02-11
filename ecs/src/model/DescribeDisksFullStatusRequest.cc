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

#include <alibabacloud/ecs/model/DescribeDisksFullStatusRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDisksFullStatusRequest;

DescribeDisksFullStatusRequest::DescribeDisksFullStatusRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDisksFullStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDisksFullStatusRequest::~DescribeDisksFullStatusRequest()
{}

std::vector<std::string> DescribeDisksFullStatusRequest::getEventId()const
{
	return eventId_;
}

void DescribeDisksFullStatusRequest::setEventId(const std::vector<std::string>& eventId)
{
	eventId_ = eventId;
	for(int dep1 = 0; dep1!= eventId.size(); dep1++) {
		setParameter("EventId."+ std::to_string(dep1), eventId.at(dep1));
	}
}

long DescribeDisksFullStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDisksFullStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeDisksFullStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDisksFullStatusRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDisksFullStatusRequest::getEventTimeStart()const
{
	return eventTimeStart_;
}

void DescribeDisksFullStatusRequest::setEventTimeStart(const std::string& eventTimeStart)
{
	eventTimeStart_ = eventTimeStart;
	setParameter("EventTimeStart", eventTimeStart);
}

std::string DescribeDisksFullStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDisksFullStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeDisksFullStatusRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDisksFullStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> DescribeDisksFullStatusRequest::getDiskId()const
{
	return diskId_;
}

void DescribeDisksFullStatusRequest::setDiskId(const std::vector<std::string>& diskId)
{
	diskId_ = diskId;
	for(int dep1 = 0; dep1!= diskId.size(); dep1++) {
		setParameter("DiskId."+ std::to_string(dep1), diskId.at(dep1));
	}
}

std::string DescribeDisksFullStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDisksFullStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDisksFullStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDisksFullStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDisksFullStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDisksFullStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDisksFullStatusRequest::getEventTimeEnd()const
{
	return eventTimeEnd_;
}

void DescribeDisksFullStatusRequest::setEventTimeEnd(const std::string& eventTimeEnd)
{
	eventTimeEnd_ = eventTimeEnd;
	setParameter("EventTimeEnd", eventTimeEnd);
}

std::string DescribeDisksFullStatusRequest::getHealthStatus()const
{
	return healthStatus_;
}

void DescribeDisksFullStatusRequest::setHealthStatus(const std::string& healthStatus)
{
	healthStatus_ = healthStatus;
	setParameter("HealthStatus", healthStatus);
}

std::string DescribeDisksFullStatusRequest::getEventType()const
{
	return eventType_;
}

void DescribeDisksFullStatusRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

std::string DescribeDisksFullStatusRequest::getStatus()const
{
	return status_;
}

void DescribeDisksFullStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

