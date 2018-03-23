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

#include <alibabacloud/push/model/QueryPushListRequest.h>

using AlibabaCloud::Push::Model::QueryPushListRequest;

QueryPushListRequest::QueryPushListRequest() :
	RpcServiceRequest("push", "2016-08-01", "QueryPushList")
{}

QueryPushListRequest::~QueryPushListRequest()
{}

int QueryPushListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryPushListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryPushListRequest::getEndTime()const
{
	return endTime_;
}

void QueryPushListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long QueryPushListRequest::getAppKey()const
{
	return appKey_;
}

void QueryPushListRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", std::to_string(appKey));
}

std::string QueryPushListRequest::getStartTime()const
{
	return startTime_;
}

void QueryPushListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int QueryPushListRequest::getPage()const
{
	return page_;
}

void QueryPushListRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string QueryPushListRequest::getPushType()const
{
	return pushType_;
}

void QueryPushListRequest::setPushType(const std::string& pushType)
{
	pushType_ = pushType;
	setParameter("PushType", pushType);
}

std::string QueryPushListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryPushListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

