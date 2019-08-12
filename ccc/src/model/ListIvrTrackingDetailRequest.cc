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

#include <alibabacloud/ccc/model/ListIvrTrackingDetailRequest.h>

using AlibabaCloud::CCC::Model::ListIvrTrackingDetailRequest;

ListIvrTrackingDetailRequest::ListIvrTrackingDetailRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListIvrTrackingDetail")
{}

ListIvrTrackingDetailRequest::~ListIvrTrackingDetailRequest()
{}

std::string ListIvrTrackingDetailRequest::getCallingNumber()const
{
	return callingNumber_;
}

void ListIvrTrackingDetailRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setCoreParameter("CallingNumber", callingNumber);
}

std::string ListIvrTrackingDetailRequest::getInstanceId()const
{
	return instanceId_;
}

void ListIvrTrackingDetailRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListIvrTrackingDetailRequest::getContactId()const
{
	return contactId_;
}

void ListIvrTrackingDetailRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setCoreParameter("ContactId", contactId);
}

std::string ListIvrTrackingDetailRequest::getCalledNumber()const
{
	return calledNumber_;
}

void ListIvrTrackingDetailRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setCoreParameter("CalledNumber", calledNumber);
}

int ListIvrTrackingDetailRequest::getPageSize()const
{
	return pageSize_;
}

void ListIvrTrackingDetailRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListIvrTrackingDetailRequest::getStartTime()const
{
	return startTime_;
}

void ListIvrTrackingDetailRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long ListIvrTrackingDetailRequest::getStopTime()const
{
	return stopTime_;
}

void ListIvrTrackingDetailRequest::setStopTime(long stopTime)
{
	stopTime_ = stopTime;
	setCoreParameter("StopTime", stopTime);
}

int ListIvrTrackingDetailRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListIvrTrackingDetailRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListIvrTrackingDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListIvrTrackingDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

