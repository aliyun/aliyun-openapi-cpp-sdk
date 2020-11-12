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

#include <alibabacloud/actiontrail/model/LookupEventsRequest.h>

using AlibabaCloud::Actiontrail::Model::LookupEventsRequest;

LookupEventsRequest::LookupEventsRequest() :
	RpcServiceRequest("actiontrail", "2017-12-04", "LookupEvents")
{
	setMethod(HttpRequest::Method::Post);
}

LookupEventsRequest::~LookupEventsRequest()
{}

std::string LookupEventsRequest::getRequest()const
{
	return request_;
}

void LookupEventsRequest::setRequest(const std::string& request)
{
	request_ = request;
	setParameter("Request", request);
}

std::string LookupEventsRequest::getStartTime()const
{
	return startTime_;
}

void LookupEventsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string LookupEventsRequest::getEventName()const
{
	return eventName_;
}

void LookupEventsRequest::setEventName(const std::string& eventName)
{
	eventName_ = eventName;
	setParameter("EventName", eventName);
}

std::string LookupEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void LookupEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string LookupEventsRequest::getNextToken()const
{
	return nextToken_;
}

void LookupEventsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string LookupEventsRequest::getServiceName()const
{
	return serviceName_;
}

void LookupEventsRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::string LookupEventsRequest::getEvent()const
{
	return event_;
}

void LookupEventsRequest::setEvent(const std::string& event)
{
	event_ = event;
	setParameter("Event", event);
}

std::string LookupEventsRequest::getEventAccessKeyId()const
{
	return eventAccessKeyId_;
}

void LookupEventsRequest::setEventAccessKeyId(const std::string& eventAccessKeyId)
{
	eventAccessKeyId_ = eventAccessKeyId;
	setParameter("EventAccessKeyId", eventAccessKeyId);
}

std::string LookupEventsRequest::getEndTime()const
{
	return endTime_;
}

void LookupEventsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string LookupEventsRequest::getEventRW()const
{
	return eventRW_;
}

void LookupEventsRequest::setEventRW(const std::string& eventRW)
{
	eventRW_ = eventRW;
	setParameter("EventRW", eventRW);
}

std::string LookupEventsRequest::getResourceType()const
{
	return resourceType_;
}

void LookupEventsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string LookupEventsRequest::getMaxResults()const
{
	return maxResults_;
}

void LookupEventsRequest::setMaxResults(const std::string& maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", maxResults);
}

std::string LookupEventsRequest::getEventType()const
{
	return eventType_;
}

void LookupEventsRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

std::string LookupEventsRequest::getResourceName()const
{
	return resourceName_;
}

void LookupEventsRequest::setResourceName(const std::string& resourceName)
{
	resourceName_ = resourceName;
	setParameter("ResourceName", resourceName);
}

std::string LookupEventsRequest::getUser()const
{
	return user_;
}

void LookupEventsRequest::setUser(const std::string& user)
{
	user_ = user;
	setParameter("User", user);
}

