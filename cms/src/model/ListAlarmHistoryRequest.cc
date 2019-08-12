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

#include <alibabacloud/cms/model/ListAlarmHistoryRequest.h>

using AlibabaCloud::Cms::Model::ListAlarmHistoryRequest;

ListAlarmHistoryRequest::ListAlarmHistoryRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ListAlarmHistory")
{}

ListAlarmHistoryRequest::~ListAlarmHistoryRequest()
{}

std::string ListAlarmHistoryRequest::getCursor()const
{
	return cursor_;
}

void ListAlarmHistoryRequest::setCursor(const std::string& cursor)
{
	cursor_ = cursor;
	setCoreParameter("Cursor", std::to_string(cursor));
}

int ListAlarmHistoryRequest::getSize()const
{
	return size_;
}

void ListAlarmHistoryRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", size);
}

std::string ListAlarmHistoryRequest::getEndTime()const
{
	return endTime_;
}

void ListAlarmHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string ListAlarmHistoryRequest::getId()const
{
	return id_;
}

void ListAlarmHistoryRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ListAlarmHistoryRequest::getStartTime()const
{
	return startTime_;
}

void ListAlarmHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string ListAlarmHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAlarmHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

