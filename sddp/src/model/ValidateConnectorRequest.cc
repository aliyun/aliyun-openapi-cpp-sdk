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

#include <alibabacloud/sddp/model/ValidateConnectorRequest.h>

using AlibabaCloud::Sddp::Model::ValidateConnectorRequest;

ValidateConnectorRequest::ValidateConnectorRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "ValidateConnector")
{}

ValidateConnectorRequest::~ValidateConnectorRequest()
{}

std::string ValidateConnectorRequest::getPassword()const
{
	return password_;
}

void ValidateConnectorRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string ValidateConnectorRequest::getSourceIp()const
{
	return sourceIp_;
}

void ValidateConnectorRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ValidateConnectorRequest::getConnector()const
{
	return connector_;
}

void ValidateConnectorRequest::setConnector(const std::string& connector)
{
	connector_ = connector;
	setCoreParameter("Connector", connector);
}

std::string ValidateConnectorRequest::getLang()const
{
	return lang_;
}

void ValidateConnectorRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int ValidateConnectorRequest::getResourceType()const
{
	return resourceType_;
}

void ValidateConnectorRequest::setResourceType(int resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

std::string ValidateConnectorRequest::getServiceRegionId()const
{
	return serviceRegionId_;
}

void ValidateConnectorRequest::setServiceRegionId(const std::string& serviceRegionId)
{
	serviceRegionId_ = serviceRegionId;
	setCoreParameter("ServiceRegionId", serviceRegionId);
}

std::string ValidateConnectorRequest::getParentId()const
{
	return parentId_;
}

void ValidateConnectorRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setCoreParameter("ParentId", parentId);
}

std::string ValidateConnectorRequest::getUserName()const
{
	return userName_;
}

void ValidateConnectorRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

