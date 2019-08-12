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

#include <alibabacloud/push/model/ListPushRecordsRequest.h>

using AlibabaCloud::Push::Model::ListPushRecordsRequest;

ListPushRecordsRequest::ListPushRecordsRequest() :
	RpcServiceRequest("push", "2016-08-01", "ListPushRecords")
{}

ListPushRecordsRequest::~ListPushRecordsRequest()
{}

int ListPushRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void ListPushRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListPushRecordsRequest::getEndTime()const
{
	return endTime_;
}

void ListPushRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long ListPushRecordsRequest::getAppKey()const
{
	return appKey_;
}

void ListPushRecordsRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", appKey);
}

std::string ListPushRecordsRequest::getStartTime()const
{
	return startTime_;
}

void ListPushRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

int ListPushRecordsRequest::getPage()const
{
	return page_;
}

void ListPushRecordsRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", page);
}

std::string ListPushRecordsRequest::getPushType()const
{
	return pushType_;
}

void ListPushRecordsRequest::setPushType(const std::string& pushType)
{
	pushType_ = pushType;
	setCoreParameter("PushType", std::to_string(pushType));
}

std::string ListPushRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPushRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

