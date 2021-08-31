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

#include <alibabacloud/edas/model/ListOperationLogsRequest.h>

using AlibabaCloud::Edas::Model::ListOperationLogsRequest;

ListOperationLogsRequest::ListOperationLogsRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/operationlog/log_list");
	setMethod(HttpRequest::Method::Get);
}

ListOperationLogsRequest::~ListOperationLogsRequest()
{}

std::string ListOperationLogsRequest::getAppId()const
{
	return appId_;
}

void ListOperationLogsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

int ListOperationLogsRequest::getPageSize()const
{
	return pageSize_;
}

void ListOperationLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListOperationLogsRequest::getEndTime()const
{
	return endTime_;
}

void ListOperationLogsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long ListOperationLogsRequest::getBeginTime()const
{
	return beginTime_;
}

void ListOperationLogsRequest::setBeginTime(long beginTime)
{
	beginTime_ = beginTime;
	setParameter("BeginTime", std::to_string(beginTime));
}

int ListOperationLogsRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListOperationLogsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListOperationLogsRequest::getUserId()const
{
	return userId_;
}

void ListOperationLogsRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

