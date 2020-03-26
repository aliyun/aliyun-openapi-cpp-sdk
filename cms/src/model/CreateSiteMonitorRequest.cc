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

#include <alibabacloud/cms/model/CreateSiteMonitorRequest.h>

using AlibabaCloud::Cms::Model::CreateSiteMonitorRequest;

CreateSiteMonitorRequest::CreateSiteMonitorRequest() :
	RpcServiceRequest("cms", "2019-01-01", "CreateSiteMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSiteMonitorRequest::~CreateSiteMonitorRequest()
{}

std::string CreateSiteMonitorRequest::getAddress()const
{
	return address_;
}

void CreateSiteMonitorRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string CreateSiteMonitorRequest::getTaskType()const
{
	return taskType_;
}

void CreateSiteMonitorRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string CreateSiteMonitorRequest::getTaskName()const
{
	return taskName_;
}

void CreateSiteMonitorRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string CreateSiteMonitorRequest::getIspCities()const
{
	return ispCities_;
}

void CreateSiteMonitorRequest::setIspCities(const std::string& ispCities)
{
	ispCities_ = ispCities;
	setParameter("IspCities", ispCities);
}

std::string CreateSiteMonitorRequest::getOptionsJson()const
{
	return optionsJson_;
}

void CreateSiteMonitorRequest::setOptionsJson(const std::string& optionsJson)
{
	optionsJson_ = optionsJson;
	setParameter("OptionsJson", optionsJson);
}

std::string CreateSiteMonitorRequest::getAlertIds()const
{
	return alertIds_;
}

void CreateSiteMonitorRequest::setAlertIds(const std::string& alertIds)
{
	alertIds_ = alertIds;
	setParameter("AlertIds", alertIds);
}

std::string CreateSiteMonitorRequest::getInterval()const
{
	return interval_;
}

void CreateSiteMonitorRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

