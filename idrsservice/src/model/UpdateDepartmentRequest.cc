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

#include <alibabacloud/idrsservice/model/UpdateDepartmentRequest.h>

using AlibabaCloud::Idrsservice::Model::UpdateDepartmentRequest;

UpdateDepartmentRequest::UpdateDepartmentRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "UpdateDepartment")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDepartmentRequest::~UpdateDepartmentRequest()
{}

std::string UpdateDepartmentRequest::getDescription()const
{
	return description_;
}

void UpdateDepartmentRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateDepartmentRequest::getLabel()const
{
	return label_;
}

void UpdateDepartmentRequest::setLabel(const std::string& label)
{
	label_ = label;
	setBodyParameter("Label", label);
}

std::string UpdateDepartmentRequest::getName()const
{
	return name_;
}

void UpdateDepartmentRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string UpdateDepartmentRequest::getId()const
{
	return id_;
}

void UpdateDepartmentRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

