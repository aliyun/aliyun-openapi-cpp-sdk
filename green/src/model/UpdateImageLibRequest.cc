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

#include <alibabacloud/green/model/UpdateImageLibRequest.h>

using AlibabaCloud::Green::Model::UpdateImageLibRequest;

UpdateImageLibRequest::UpdateImageLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateImageLib")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateImageLibRequest::~UpdateImageLibRequest()
{}

std::string UpdateImageLibRequest::getScene()const
{
	return scene_;
}

void UpdateImageLibRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string UpdateImageLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateImageLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

bool UpdateImageLibRequest::getEnable()const
{
	return enable_;
}

void UpdateImageLibRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

int UpdateImageLibRequest::getId()const
{
	return id_;
}

void UpdateImageLibRequest::setId(int id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string UpdateImageLibRequest::getBizTypes()const
{
	return bizTypes_;
}

void UpdateImageLibRequest::setBizTypes(const std::string& bizTypes)
{
	bizTypes_ = bizTypes;
	setParameter("BizTypes", bizTypes);
}

std::string UpdateImageLibRequest::getName()const
{
	return name_;
}

void UpdateImageLibRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateImageLibRequest::getCategory()const
{
	return category_;
}

void UpdateImageLibRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

