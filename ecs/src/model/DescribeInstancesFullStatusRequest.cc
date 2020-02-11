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

#include <alibabacloud/ecs/model/DescribeInstancesFullStatusRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstancesFullStatusRequest;

DescribeInstancesFullStatusRequest::DescribeInstancesFullStatusRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstancesFullStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstancesFullStatusRequest::~DescribeInstancesFullStatusRequest()
{}

std::vector<std::string> DescribeInstancesFullStatusRequest::getEventId()const
{
	return eventId_;
}

void DescribeInstancesFullStatusRequest::setEventId(const std::vector<std::string>& eventId)
{
	eventId_ = eventId;
	for(int dep1 = 0; dep1!= eventId.size(); dep1++) {
		setParameter("EventId."+ std::to_string(dep1), eventId.at(dep1));
	}
}

long DescribeInstancesFullStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstancesFullStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeInstancesFullStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesFullStatusRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstancesFullStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstancesFullStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeInstancesFullStatusRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesFullStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstancesFullStatusRequest::getEventPublishTimeEnd()const
{
	return eventPublishTimeEnd_;
}

void DescribeInstancesFullStatusRequest::setEventPublishTimeEnd(const std::string& eventPublishTimeEnd)
{
	eventPublishTimeEnd_ = eventPublishTimeEnd;
	setParameter("EventPublishTimeEnd", eventPublishTimeEnd);
}

std::vector<std::string> DescribeInstancesFullStatusRequest::getInstanceEventType()const
{
	return instanceEventType_;
}

void DescribeInstancesFullStatusRequest::setInstanceEventType(const std::vector<std::string>& instanceEventType)
{
	instanceEventType_ = instanceEventType;
	for(int dep1 = 0; dep1!= instanceEventType.size(); dep1++) {
		setParameter("InstanceEventType."+ std::to_string(dep1), instanceEventType.at(dep1));
	}
}

std::string DescribeInstancesFullStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstancesFullStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstancesFullStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstancesFullStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstancesFullStatusRequest::getNotBeforeStart()const
{
	return notBeforeStart_;
}

void DescribeInstancesFullStatusRequest::setNotBeforeStart(const std::string& notBeforeStart)
{
	notBeforeStart_ = notBeforeStart;
	setParameter("NotBeforeStart", notBeforeStart);
}

long DescribeInstancesFullStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstancesFullStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstancesFullStatusRequest::getEventPublishTimeStart()const
{
	return eventPublishTimeStart_;
}

void DescribeInstancesFullStatusRequest::setEventPublishTimeStart(const std::string& eventPublishTimeStart)
{
	eventPublishTimeStart_ = eventPublishTimeStart;
	setParameter("EventPublishTimeStart", eventPublishTimeStart);
}

std::vector<std::string> DescribeInstancesFullStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstancesFullStatusRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

std::string DescribeInstancesFullStatusRequest::getNotBeforeEnd()const
{
	return notBeforeEnd_;
}

void DescribeInstancesFullStatusRequest::setNotBeforeEnd(const std::string& notBeforeEnd)
{
	notBeforeEnd_ = notBeforeEnd;
	setParameter("NotBeforeEnd", notBeforeEnd);
}

std::string DescribeInstancesFullStatusRequest::getHealthStatus()const
{
	return healthStatus_;
}

void DescribeInstancesFullStatusRequest::setHealthStatus(const std::string& healthStatus)
{
	healthStatus_ = healthStatus;
	setParameter("HealthStatus", healthStatus);
}

std::string DescribeInstancesFullStatusRequest::getEventType()const
{
	return eventType_;
}

void DescribeInstancesFullStatusRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

std::string DescribeInstancesFullStatusRequest::getStatus()const
{
	return status_;
}

void DescribeInstancesFullStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

