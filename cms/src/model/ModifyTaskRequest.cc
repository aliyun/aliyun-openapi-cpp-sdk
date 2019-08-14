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

#include <alibabacloud/cms/model/ModifyTaskRequest.h>

using AlibabaCloud::Cms::Model::ModifyTaskRequest;

ModifyTaskRequest::ModifyTaskRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ModifyTask")
{}

ModifyTaskRequest::~ModifyTaskRequest()
{}

std::string ModifyTaskRequest::getCaller()const
{
	return caller_;
}

void ModifyTaskRequest::setCaller(const std::string& caller)
{
	caller_ = caller;
	setCoreParameter("Caller", caller);
}

std::string ModifyTaskRequest::getAddress()const
{
	return address_;
}

void ModifyTaskRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", address);
}

std::string ModifyTaskRequest::getIspCity()const
{
	return ispCity_;
}

void ModifyTaskRequest::setIspCity(const std::string& ispCity)
{
	ispCity_ = ispCity;
	setCoreParameter("IspCity", ispCity);
}

std::string ModifyTaskRequest::getAlertIds()const
{
	return alertIds_;
}

void ModifyTaskRequest::setAlertIds(const std::string& alertIds)
{
	alertIds_ = alertIds;
	setCoreParameter("AlertIds", alertIds);
}

std::string ModifyTaskRequest::getOptions()const
{
	return options_;
}

void ModifyTaskRequest::setOptions(const std::string& options)
{
	options_ = options;
	setCoreParameter("Options", options);
}

std::string ModifyTaskRequest::getTaskName()const
{
	return taskName_;
}

void ModifyTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", taskName);
}

std::string ModifyTaskRequest::getInterval()const
{
	return interval_;
}

void ModifyTaskRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string ModifyTaskRequest::getAlertRule()const
{
	return alertRule_;
}

void ModifyTaskRequest::setAlertRule(const std::string& alertRule)
{
	alertRule_ = alertRule;
	setCoreParameter("AlertRule", alertRule);
}

std::string ModifyTaskRequest::getTaskId()const
{
	return taskId_;
}

void ModifyTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

