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

#include <alibabacloud/green/model/CreateImageLibRequest.h>

using AlibabaCloud::Green::Model::CreateImageLibRequest;

CreateImageLibRequest::CreateImageLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreateImageLib")
{
	setMethod(HttpRequest::Method::Post);
}

CreateImageLibRequest::~CreateImageLibRequest()
{}

std::string CreateImageLibRequest::getServiceModule()const
{
	return serviceModule_;
}

void CreateImageLibRequest::setServiceModule(const std::string& serviceModule)
{
	serviceModule_ = serviceModule;
	setParameter("ServiceModule", serviceModule);
}

std::string CreateImageLibRequest::getScene()const
{
	return scene_;
}

void CreateImageLibRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string CreateImageLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateImageLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

bool CreateImageLibRequest::getEnable()const
{
	return enable_;
}

void CreateImageLibRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string CreateImageLibRequest::getBizTypes()const
{
	return bizTypes_;
}

void CreateImageLibRequest::setBizTypes(const std::string& bizTypes)
{
	bizTypes_ = bizTypes;
	setParameter("BizTypes", bizTypes);
}

std::string CreateImageLibRequest::getName()const
{
	return name_;
}

void CreateImageLibRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateImageLibRequest::getCategory()const
{
	return category_;
}

void CreateImageLibRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

