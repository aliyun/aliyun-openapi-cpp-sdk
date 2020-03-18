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

#include <alibabacloud/acm/model/CreateConfigurationRequest.h>

using AlibabaCloud::Acm::Model::CreateConfigurationRequest;

CreateConfigurationRequest::CreateConfigurationRequest() :
	RoaServiceRequest("acm", "2020-02-06")
{
	setResourcePath("/diamond-ops/pop/configuration");
	setMethod(HttpRequest::Method::Post);
}

CreateConfigurationRequest::~CreateConfigurationRequest()
{}

std::string CreateConfigurationRequest::getDataId()const
{
	return dataId_;
}

void CreateConfigurationRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setBodyParameter("DataId", dataId);
}

std::string CreateConfigurationRequest::getAppName()const
{
	return appName_;
}

void CreateConfigurationRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string CreateConfigurationRequest::getNamespaceId()const
{
	return namespaceId_;
}

void CreateConfigurationRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setBodyParameter("NamespaceId", namespaceId);
}

std::string CreateConfigurationRequest::getType()const
{
	return type_;
}

void CreateConfigurationRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string CreateConfigurationRequest::getContent()const
{
	return content_;
}

void CreateConfigurationRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string CreateConfigurationRequest::getGroup()const
{
	return group_;
}

void CreateConfigurationRequest::setGroup(const std::string& group)
{
	group_ = group;
	setBodyParameter("Group", group);
}

std::string CreateConfigurationRequest::getDesc()const
{
	return desc_;
}

void CreateConfigurationRequest::setDesc(const std::string& desc)
{
	desc_ = desc;
	setBodyParameter("Desc", desc);
}

std::string CreateConfigurationRequest::getTags()const
{
	return tags_;
}

void CreateConfigurationRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setBodyParameter("Tags", tags);
}

