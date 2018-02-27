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

#include <alibabacloud/ccc/model/ListRecordingsRequest.h>

using AlibabaCloud::CCC::Model::ListRecordingsRequest;

ListRecordingsRequest::ListRecordingsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListRecordings")
{}

ListRecordingsRequest::~ListRecordingsRequest()
{}

std::string ListRecordingsRequest::getAgentId()const
{
	return agentId_;
}

void ListRecordingsRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setParameter("AgentId", agentId);
}

std::string ListRecordingsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListRecordingsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListRecordingsRequest::getCriteria()const
{
	return criteria_;
}

void ListRecordingsRequest::setCriteria(const std::string& criteria)
{
	criteria_ = criteria;
	setParameter("Criteria", criteria);
}

std::string ListRecordingsRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void ListRecordingsRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

int ListRecordingsRequest::getPageSize()const
{
	return pageSize_;
}

void ListRecordingsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListRecordingsRequest::getStartTime()const
{
	return startTime_;
}

void ListRecordingsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

long ListRecordingsRequest::getStopTime()const
{
	return stopTime_;
}

void ListRecordingsRequest::setStopTime(long stopTime)
{
	stopTime_ = stopTime;
	setParameter("StopTime", std::to_string(stopTime));
}

int ListRecordingsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListRecordingsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListRecordingsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRecordingsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

