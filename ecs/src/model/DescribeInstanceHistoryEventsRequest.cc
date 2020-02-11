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

#include <alibabacloud/ecs/model/DescribeInstanceHistoryEventsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceHistoryEventsRequest;

DescribeInstanceHistoryEventsRequest::DescribeInstanceHistoryEventsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceHistoryEvents")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceHistoryEventsRequest::~DescribeInstanceHistoryEventsRequest()
{}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getEventId()const
{
	return eventId_;
}

void DescribeInstanceHistoryEventsRequest::setEventId(const std::vector<std::string>& eventId)
{
	eventId_ = eventId;
	for(int dep1 = 0; dep1!= eventId.size(); dep1++) {
		setParameter("EventId."+ std::to_string(dep1), eventId.at(dep1));
	}
}

long DescribeInstanceHistoryEventsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceHistoryEventsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceHistoryEventsRequest::getEventCycleStatus()const
{
	return eventCycleStatus_;
}

void DescribeInstanceHistoryEventsRequest::setEventCycleStatus(const std::string& eventCycleStatus)
{
	eventCycleStatus_ = eventCycleStatus;
	setParameter("EventCycleStatus", eventCycleStatus);
}

int DescribeInstanceHistoryEventsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceHistoryEventsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstanceHistoryEventsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceHistoryEventsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeInstanceHistoryEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceHistoryEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getInstanceEventCycleStatus()const
{
	return instanceEventCycleStatus_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceEventCycleStatus(const std::vector<std::string>& instanceEventCycleStatus)
{
	instanceEventCycleStatus_ = instanceEventCycleStatus;
	for(int dep1 = 0; dep1!= instanceEventCycleStatus.size(); dep1++) {
		setParameter("InstanceEventCycleStatus."+ std::to_string(dep1), instanceEventCycleStatus.at(dep1));
	}
}

std::string DescribeInstanceHistoryEventsRequest::getEventPublishTimeEnd()const
{
	return eventPublishTimeEnd_;
}

void DescribeInstanceHistoryEventsRequest::setEventPublishTimeEnd(const std::string& eventPublishTimeEnd)
{
	eventPublishTimeEnd_ = eventPublishTimeEnd;
	setParameter("EventPublishTimeEnd", eventPublishTimeEnd);
}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getInstanceEventType()const
{
	return instanceEventType_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceEventType(const std::vector<std::string>& instanceEventType)
{
	instanceEventType_ = instanceEventType;
	for(int dep1 = 0; dep1!= instanceEventType.size(); dep1++) {
		setParameter("InstanceEventType."+ std::to_string(dep1), instanceEventType.at(dep1));
	}
}

std::string DescribeInstanceHistoryEventsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceHistoryEventsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceHistoryEventsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstanceHistoryEventsRequest::getNotBeforeStart()const
{
	return notBeforeStart_;
}

void DescribeInstanceHistoryEventsRequest::setNotBeforeStart(const std::string& notBeforeStart)
{
	notBeforeStart_ = notBeforeStart;
	setParameter("NotBeforeStart", notBeforeStart);
}

long DescribeInstanceHistoryEventsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstanceHistoryEventsRequest::getEventPublishTimeStart()const
{
	return eventPublishTimeStart_;
}

void DescribeInstanceHistoryEventsRequest::setEventPublishTimeStart(const std::string& eventPublishTimeStart)
{
	eventPublishTimeStart_ = eventPublishTimeStart;
	setParameter("EventPublishTimeStart", eventPublishTimeStart);
}

std::string DescribeInstanceHistoryEventsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeInstanceHistoryEventsRequest::getNotBeforeEnd()const
{
	return notBeforeEnd_;
}

void DescribeInstanceHistoryEventsRequest::setNotBeforeEnd(const std::string& notBeforeEnd)
{
	notBeforeEnd_ = notBeforeEnd;
	setParameter("NotBeforeEnd", notBeforeEnd);
}

std::string DescribeInstanceHistoryEventsRequest::getEventType()const
{
	return eventType_;
}

void DescribeInstanceHistoryEventsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

