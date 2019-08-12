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

#include <alibabacloud/domain/model/QueryTaskInfoHistoryRequest.h>

using AlibabaCloud::Domain::Model::QueryTaskInfoHistoryRequest;

QueryTaskInfoHistoryRequest::QueryTaskInfoHistoryRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryTaskInfoHistory")
{}

QueryTaskInfoHistoryRequest::~QueryTaskInfoHistoryRequest()
{}

long QueryTaskInfoHistoryRequest::getBeginCreateTime()const
{
	return beginCreateTime_;
}

void QueryTaskInfoHistoryRequest::setBeginCreateTime(long beginCreateTime)
{
	beginCreateTime_ = beginCreateTime;
	setCoreParameter("BeginCreateTime", beginCreateTime);
}

long QueryTaskInfoHistoryRequest::getEndCreateTime()const
{
	return endCreateTime_;
}

void QueryTaskInfoHistoryRequest::setEndCreateTime(long endCreateTime)
{
	endCreateTime_ = endCreateTime;
	setCoreParameter("EndCreateTime", endCreateTime);
}

std::string QueryTaskInfoHistoryRequest::getTaskNoCursor()const
{
	return taskNoCursor_;
}

void QueryTaskInfoHistoryRequest::setTaskNoCursor(const std::string& taskNoCursor)
{
	taskNoCursor_ = taskNoCursor;
	setCoreParameter("TaskNoCursor", std::to_string(taskNoCursor));
}

std::string QueryTaskInfoHistoryRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryTaskInfoHistoryRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

int QueryTaskInfoHistoryRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTaskInfoHistoryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryTaskInfoHistoryRequest::getLang()const
{
	return lang_;
}

void QueryTaskInfoHistoryRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

long QueryTaskInfoHistoryRequest::getCreateTimeCursor()const
{
	return createTimeCursor_;
}

void QueryTaskInfoHistoryRequest::setCreateTimeCursor(long createTimeCursor)
{
	createTimeCursor_ = createTimeCursor;
	setCoreParameter("CreateTimeCursor", createTimeCursor);
}

