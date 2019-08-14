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

#include <alibabacloud/domain/model/QueryTaskDetailListRequest.h>

using AlibabaCloud::Domain::Model::QueryTaskDetailListRequest;

QueryTaskDetailListRequest::QueryTaskDetailListRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryTaskDetailList")
{}

QueryTaskDetailListRequest::~QueryTaskDetailListRequest()
{}

int QueryTaskDetailListRequest::getTaskStatus()const
{
	return taskStatus_;
}

void QueryTaskDetailListRequest::setTaskStatus(int taskStatus)
{
	taskStatus_ = taskStatus;
	setCoreParameter("TaskStatus", std::to_string(taskStatus));
}

std::string QueryTaskDetailListRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryTaskDetailListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string QueryTaskDetailListRequest::getTaskNo()const
{
	return taskNo_;
}

void QueryTaskDetailListRequest::setTaskNo(const std::string& taskNo)
{
	taskNo_ = taskNo;
	setCoreParameter("TaskNo", taskNo);
}

std::string QueryTaskDetailListRequest::getDomainName()const
{
	return domainName_;
}

void QueryTaskDetailListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string QueryTaskDetailListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryTaskDetailListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

int QueryTaskDetailListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTaskDetailListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string QueryTaskDetailListRequest::getLang()const
{
	return lang_;
}

void QueryTaskDetailListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int QueryTaskDetailListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTaskDetailListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

