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
	RpcServiceRequest("ccc", "2017-07-05", "ListCallDetailRecords")
{
	setMethod(HttpRequest::Method::Post);
}

ListCallDetailRecordsRequest::~ListCallDetailRecordsRequest()
{}

std::string ListCallDetailRecordsRequest::getContactType()const
{
	return contactType_;
}

void ListCallDetailRecordsRequest::setContactType(const std::string& contactType)
{
	contactType_ = contactType;
	setCoreParameter("ContactType", contactType);
}

std::string ListCallDetailRecordsRequest::getContactId()const
{
	return contactId_;
}

void ListCallDetailRecordsRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setCoreParameter("ContactId", contactId);
}

std::string ListCallDetailRecordsRequest::getCriteria()const
{
	return criteria_;
}

void ListCallDetailRecordsRequest::setCriteria(const std::string& criteria)
{
	criteria_ = criteria;
	setCoreParameter("Criteria", criteria);
}

std::string ListCallDetailRecordsRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void ListCallDetailRecordsRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setCoreParameter("PhoneNumber", phoneNumber);
}

std::string ListCallDetailRecordsRequest::getOrderBy()const
{
	return orderBy_;
}

void ListCallDetailRecordsRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", orderBy);
}

long ListCallDetailRecordsRequest::getStartTime()const
{
	return startTime_;
}

void ListCallDetailRecordsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long ListCallDetailRecordsRequest::getStopTime()const
{
	return stopTime_;
}

void ListCallDetailRecordsRequest::setStopTime(long stopTime)
{
	stopTime_ = stopTime;
	setCoreParameter("StopTime", std::to_string(stopTime));
}

int ListCallDetailRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCallDetailRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCallDetailRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListCallDetailRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListCallDetailRecordsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListCallDetailRecordsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListCallDetailRecordsRequest::getContactDisposition()const
{
	return contactDisposition_;
}

void ListCallDetailRecordsRequest::setContactDisposition(const std::string& contactDisposition)
{
	contactDisposition_ = contactDisposition;
	setCoreParameter("ContactDisposition", contactDisposition);
}

int ListCallDetailRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCallDetailRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

bool ListCallDetailRecordsRequest::getWithRecording()const
{
	return withRecording_;
}

void ListCallDetailRecordsRequest::setWithRecording(bool withRecording)
{
	withRecording_ = withRecording;
	setCoreParameter("WithRecording", withRecording ? "true" : "false");
}

