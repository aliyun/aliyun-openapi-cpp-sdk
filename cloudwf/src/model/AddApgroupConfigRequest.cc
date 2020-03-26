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

#include <alibabacloud/cloudwf/model/AddApgroupConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::AddApgroupConfigRequest;

AddApgroupConfigRequest::AddApgroupConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "AddApgroupConfig")
{
	setMethod(HttpRequest::Method::Post);
}

AddApgroupConfigRequest::~AddApgroupConfigRequest()
{}

std::string AddApgroupConfigRequest::getDescription()const
{
	return description_;
}

void AddApgroupConfigRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AddApgroupConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddApgroupConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long AddApgroupConfigRequest::getParentApgroupId()const
{
	return parentApgroupId_;
}

void AddApgroupConfigRequest::setParentApgroupId(long parentApgroupId)
{
	parentApgroupId_ = parentApgroupId;
	setParameter("ParentApgroupId", std::to_string(parentApgroupId));
}

std::string AddApgroupConfigRequest::getName()const
{
	return name_;
}

void AddApgroupConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

