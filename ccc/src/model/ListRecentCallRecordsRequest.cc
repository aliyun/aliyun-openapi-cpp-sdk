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

#include <alibabacloud/ccc/model/ListRecentCallRecordsRequest.h>

using AlibabaCloud::CCC::Model::ListRecentCallRecordsRequest;

ListRecentCallRecordsRequest::ListRecentCallRecordsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListRecentCallRecords")
{
	setMethod(HttpRequest::Method::Post);
}

ListRecentCallRecordsRequest::~ListRecentCallRecordsRequest()
{}

std::string ListRecentCallRecordsRequest::getCriteria()const
{
	return criteria_;
}

void ListRecentCallRecordsRequest::setCriteria(const std::string& criteria)
{
	criteria_ = criteria;
	setParameter("Criteria", criteria);
}

long ListRecentCallRecordsRequest::getStartTime()const
{
	return startTime_;
}

void ListRecentCallRecordsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

long ListRecentCallRecordsRequest::getStopTime()const
{
	return stopTime_;
}

void ListRecentCallRecordsRequest::setStopTime(long stopTime)
{
	stopTime_ = stopTime;
	setParameter("StopTime", std::to_string(stopTime));
}

int ListRecentCallRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListRecentCallRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListRecentCallRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRecentCallRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListRecentCallRecordsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListRecentCallRecordsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListRecentCallRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void ListRecentCallRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

