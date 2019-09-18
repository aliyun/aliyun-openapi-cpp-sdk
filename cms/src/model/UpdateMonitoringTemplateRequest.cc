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

#include <alibabacloud/cms/model/UpdateMonitoringTemplateRequest.h>

using AlibabaCloud::Cms::Model::UpdateMonitoringTemplateRequest;

UpdateMonitoringTemplateRequest::UpdateMonitoringTemplateRequest() :
	RpcServiceRequest("cms", "2018-03-08", "UpdateMonitoringTemplate")
{}

UpdateMonitoringTemplateRequest::~UpdateMonitoringTemplateRequest()
{}

std::string UpdateMonitoringTemplateRequest::getEventRuleTemplatesJson()const
{
	return eventRuleTemplatesJson_;
}

void UpdateMonitoringTemplateRequest::setEventRuleTemplatesJson(const std::string& eventRuleTemplatesJson)
{
	eventRuleTemplatesJson_ = eventRuleTemplatesJson;
	setCoreParameter("EventRuleTemplatesJson", eventRuleTemplatesJson);
}

long UpdateMonitoringTemplateRequest::getRestVersion()const
{
	return restVersion_;
}

void UpdateMonitoringTemplateRequest::setRestVersion(long restVersion)
{
	restVersion_ = restVersion;
	setCoreParameter("RestVersion", std::to_string(restVersion));
}

std::string UpdateMonitoringTemplateRequest::getDescription()const
{
	return description_;
}

void UpdateMonitoringTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string UpdateMonitoringTemplateRequest::getAlertTemplatesJson()const
{
	return alertTemplatesJson_;
}

void UpdateMonitoringTemplateRequest::setAlertTemplatesJson(const std::string& alertTemplatesJson)
{
	alertTemplatesJson_ = alertTemplatesJson;
	setCoreParameter("AlertTemplatesJson", alertTemplatesJson);
}

std::string UpdateMonitoringTemplateRequest::getName()const
{
	return name_;
}

void UpdateMonitoringTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long UpdateMonitoringTemplateRequest::getId()const
{
	return id_;
}

void UpdateMonitoringTemplateRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

