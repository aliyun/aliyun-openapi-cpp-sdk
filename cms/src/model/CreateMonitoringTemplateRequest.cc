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

#include <alibabacloud/cms/model/CreateMonitoringTemplateRequest.h>

using AlibabaCloud::Cms::Model::CreateMonitoringTemplateRequest;

CreateMonitoringTemplateRequest::CreateMonitoringTemplateRequest() :
	RpcServiceRequest("cms", "2018-03-08", "CreateMonitoringTemplate")
{}

CreateMonitoringTemplateRequest::~CreateMonitoringTemplateRequest()
{}

std::string CreateMonitoringTemplateRequest::getEventRuleTemplatesJson()const
{
	return eventRuleTemplatesJson_;
}

void CreateMonitoringTemplateRequest::setEventRuleTemplatesJson(const std::string& eventRuleTemplatesJson)
{
	eventRuleTemplatesJson_ = eventRuleTemplatesJson;
	setCoreParameter("EventRuleTemplatesJson", std::to_string(eventRuleTemplatesJson));
}

std::string CreateMonitoringTemplateRequest::getName()const
{
	return name_;
}

void CreateMonitoringTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateMonitoringTemplateRequest::get_Namespace()const
{
	return _namespace_;
}

void CreateMonitoringTemplateRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", std::to_string(_namespace));
}

std::string CreateMonitoringTemplateRequest::getDescription()const
{
	return description_;
}

void CreateMonitoringTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateMonitoringTemplateRequest::getAlertTemplatesJson()const
{
	return alertTemplatesJson_;
}

void CreateMonitoringTemplateRequest::setAlertTemplatesJson(const std::string& alertTemplatesJson)
{
	alertTemplatesJson_ = alertTemplatesJson;
	setCoreParameter("AlertTemplatesJson", std::to_string(alertTemplatesJson));
}

