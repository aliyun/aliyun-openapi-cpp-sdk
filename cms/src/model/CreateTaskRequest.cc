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

#include <alibabacloud/cms/model/CreateTaskRequest.h>

using AlibabaCloud::Cms::Model::CreateTaskRequest;

CreateTaskRequest::CreateTaskRequest() :
	RpcServiceRequest("cms", "2018-03-08", "CreateTask")
{}

CreateTaskRequest::~CreateTaskRequest()
{}

std::string CreateTaskRequest::getCaller()const
{
	return caller_;
}

void CreateTaskRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setParameter("Caller", caller);
}

std::string CreateTaskRequest::getAddress()const
{
	return address_;
}

void CreateTaskRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string CreateTaskRequest::getTaskType()const
{
	return taskType_;
}

void CreateTaskRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string CreateTaskRequest::getIspCity()const
{
	return ispCity_;
}

void CreateTaskRequest::setIspCity(const std::string& ispCity)
{
	ispCity_ = ispCity;
	setParameter("IspCity", ispCity);
}

std::string CreateTaskRequest::getAlertIds()const
{
	return alertIds_;
}

void CreateTaskRequest::setAlertIds(const std::string& alertIds)
{
	alertIds_ = alertIds;
	setParameter("AlertIds", alertIds);
}

std::string CreateTaskRequest::getOptions()const
{
	return options_;
}

void CreateTaskRequest::setOptions(const std::string& options)
{
	options_ = options;
	setParameter("Options", options);
}

std::string CreateTaskRequest::getTaskName()const
{
	return taskName_;
}

void CreateTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string CreateTaskRequest::getInterval()const
{
	return interval_;
}

void CreateTaskRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string CreateTaskRequest::getAlertRule()const
{
	return alertRule_;
}

void CreateTaskRequest::setAlertRule(const std::string& alertRule)
{
	alertRule_ = alertRule;
	setParameter("AlertRule", alertRule);
}

