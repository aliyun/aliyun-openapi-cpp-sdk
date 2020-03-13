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

#include <alibabacloud/acms-open/model/DeployConfigurationRequest.h>

using AlibabaCloud::Acms_open::Model::DeployConfigurationRequest;

DeployConfigurationRequest::DeployConfigurationRequest() :
	RoaServiceRequest("acms-open", "2020-02-06")
{
	setResourcePath("/diamond-ops/pop/configuration");
	setMethod(HttpRequest::Method::Put);
}

DeployConfigurationRequest::~DeployConfigurationRequest()
{}

std::string DeployConfigurationRequest::getDataId()const
{
	return dataId_;
}

void DeployConfigurationRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setBodyParameter("DataId", dataId);
}

std::string DeployConfigurationRequest::getAppName()const
{
	return appName_;
}

void DeployConfigurationRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string DeployConfigurationRequest::getNamespaceId()const
{
	return namespaceId_;
}

void DeployConfigurationRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setBodyParameter("NamespaceId", namespaceId);
}

std::string DeployConfigurationRequest::getType()const
{
	return type_;
}

void DeployConfigurationRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string DeployConfigurationRequest::getContent()const
{
	return content_;
}

void DeployConfigurationRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string DeployConfigurationRequest::getGroup()const
{
	return group_;
}

void DeployConfigurationRequest::setGroup(const std::string& group)
{
	group_ = group;
	setBodyParameter("Group", group);
}

std::string DeployConfigurationRequest::getDesc()const
{
	return desc_;
}

void DeployConfigurationRequest::setDesc(const std::string& desc)
{
	desc_ = desc;
	setBodyParameter("Desc", desc);
}

std::string DeployConfigurationRequest::getTags()const
{
	return tags_;
}

void DeployConfigurationRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setBodyParameter("Tags", tags);
}

