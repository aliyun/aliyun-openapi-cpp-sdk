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

#include <alibabacloud/ccc/model/ListCallDetailRecordsRequest.h>

using AlibabaCloud::CCC::Model::ListCallDetailRecordsRequest;

ListCallDetailRecordsRequest::ListCallDetailRecordsRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "ListCallDetailRecords")
{
	setMethod(HttpRequest::Method::Post);
}

ListCallDetailRecordsRequest::~ListCallDetailRecordsRequest()
{}

std::string ListCallDetailRecordsRequest::getContactId()const
{
	return contactId_;
}

void ListCallDetailRecordsRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setParameter("ContactId", contactId);
}

std::string ListCallDetailRecordsRequest::getOrderByField()const
{
	return orderByField_;
}

void ListCallDetailRecordsRequest::setOrderByField(const std::string& orderByField)
{
	orderByField_ = orderByField;
	setParameter("OrderByField", orderByField);
}

long ListCallDetailRecordsRequest::getStartTime()const
{
	return startTime_;
}

void ListCallDetailRecordsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int ListCallDetailRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCallDetailRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCallDetailRecordsRequest::getCalledNumber()const
{
	return calledNumber_;
}

void ListCallDetailRecordsRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

int ListCallDetailRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCallDetailRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListCallDetailRecordsRequest::getSortOrder()const
{
	return sortOrder_;
}

void ListCallDetailRecordsRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setParameter("SortOrder", sortOrder);
}

bool ListCallDetailRecordsRequest::getWithRecording()const
{
	return withRecording_;
}

void ListCallDetailRecordsRequest::setWithRecording(bool withRecording)
{
	withRecording_ = withRecording;
	setParameter("WithRecording", withRecording ? "true" : "false");
}

std::string ListCallDetailRecordsRequest::getAgentId()const
{
	return agentId_;
}

void ListCallDetailRecordsRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setParameter("AgentId", agentId);
}

std::string ListCallDetailRecordsRequest::getContactType()const
{
	return contactType_;
}

void ListCallDetailRecordsRequest::setContactType(const std::string& contactType)
{
	contactType_ = contactType;
	setParameter("ContactType", contactType);
}

long ListCallDetailRecordsRequest::getEndTime()const
{
	return endTime_;
}

void ListCallDetailRecordsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string ListCallDetailRecordsRequest::getCallingNumber()const
{
	return callingNumber_;
}

void ListCallDetailRecordsRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setParameter("CallingNumber", callingNumber);
}

std::string ListCallDetailRecordsRequest::getContactDisposition()const
{
	return contactDisposition_;
}

void ListCallDetailRecordsRequest::setContactDisposition(const std::string& contactDisposition)
{
	contactDisposition_ = contactDisposition;
	setParameter("ContactDisposition", contactDisposition);
}

std::string ListCallDetailRecordsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListCallDetailRecordsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListCallDetailRecordsRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListCallDetailRecordsRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

