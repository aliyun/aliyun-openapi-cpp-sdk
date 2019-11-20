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

#include <alibabacloud/cms/model/GetMonitoringTemplateRequest.h>

using AlibabaCloud::Cms::Model::GetMonitoringTemplateRequest;

GetMonitoringTemplateRequest::GetMonitoringTemplateRequest() :
	RpcServiceRequest("cms", "2018-03-08", "GetMonitoringTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

GetMonitoringTemplateRequest::~GetMonitoringTemplateRequest()
{}

std::string GetMonitoringTemplateRequest::getName()const
{
	return name_;
}

void GetMonitoringTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string GetMonitoringTemplateRequest::getId()const
{
	return id_;
}

void GetMonitoringTemplateRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

