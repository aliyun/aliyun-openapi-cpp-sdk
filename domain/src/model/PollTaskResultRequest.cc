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

#include <alibabacloud/domain/model/PollTaskResultRequest.h>

using AlibabaCloud::Domain::Model::PollTaskResultRequest;

PollTaskResultRequest::PollTaskResultRequest() :
	RpcServiceRequest("domain", "2018-01-29", "PollTaskResult")
{}

PollTaskResultRequest::~PollTaskResultRequest()
{}

std::string PollTaskResultRequest::getInstanceId()const
{
	return instanceId_;
}

void PollTaskResultRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string PollTaskResultRequest::getUserClientIp()const
{
	return userClientIp_;
}

void PollTaskResultRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string PollTaskResultRequest::getTaskNo()const
{
	return taskNo_;
}

void PollTaskResultRequest::setTaskNo(const std::string& taskNo)
{
	taskNo_ = taskNo;
	setCoreParameter("TaskNo", taskNo);
}

std::string PollTaskResultRequest::getDomainName()const
{
	return domainName_;
}

void PollTaskResultRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

int PollTaskResultRequest::getPageSize()const
{
	return pageSize_;
}

void PollTaskResultRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string PollTaskResultRequest::getLang()const
{
	return lang_;
}

void PollTaskResultRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int PollTaskResultRequest::getPageNum()const
{
	return pageNum_;
}

void PollTaskResultRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

int PollTaskResultRequest::getTaskResultStatus()const
{
	return taskResultStatus_;
}

void PollTaskResultRequest::setTaskResultStatus(int taskResultStatus)
{
	taskResultStatus_ = taskResultStatus;
	setCoreParameter("TaskResultStatus", std::to_string(taskResultStatus));
}

