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

#include <alibabacloud/sddp/model/ModifyDataLimitRequest.h>

using AlibabaCloud::Sddp::Model::ModifyDataLimitRequest;

ModifyDataLimitRequest::ModifyDataLimitRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "ModifyDataLimit")
{}

ModifyDataLimitRequest::~ModifyDataLimitRequest()
{}

std::string ModifyDataLimitRequest::getPassword()const
{
	return password_;
}

void ModifyDataLimitRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string ModifyDataLimitRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyDataLimitRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyDataLimitRequest::getConnector()const
{
	return connector_;
}

void ModifyDataLimitRequest::setConnector(const std::string& connector)
{
	connector_ = connector;
	setCoreParameter("Connector", connector);
}

long ModifyDataLimitRequest::getId()const
{
	return id_;
}

void ModifyDataLimitRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ModifyDataLimitRequest::getLang()const
{
	return lang_;
}

void ModifyDataLimitRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int ModifyDataLimitRequest::getResourceType()const
{
	return resourceType_;
}

void ModifyDataLimitRequest::setResourceType(int resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

std::string ModifyDataLimitRequest::getServiceRegionId()const
{
	return serviceRegionId_;
}

void ModifyDataLimitRequest::setServiceRegionId(const std::string& serviceRegionId)
{
	serviceRegionId_ = serviceRegionId;
	setCoreParameter("ServiceRegionId", serviceRegionId);
}

std::string ModifyDataLimitRequest::getUserName()const
{
	return userName_;
}

void ModifyDataLimitRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

