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

#include <alibabacloud/cloudesl/model/SaveTemplateGroupRequest.h>

using AlibabaCloud::Cloudesl::Model::SaveTemplateGroupRequest;

SaveTemplateGroupRequest::SaveTemplateGroupRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "SaveTemplateGroup")
{
	setMethod(HttpRequest::Method::Post);
}

SaveTemplateGroupRequest::~SaveTemplateGroupRequest()
{}

std::string SaveTemplateGroupRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void SaveTemplateGroupRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

std::string SaveTemplateGroupRequest::getEslModelId()const
{
	return eslModelId_;
}

void SaveTemplateGroupRequest::setEslModelId(const std::string& eslModelId)
{
	eslModelId_ = eslModelId;
	setBodyParameter("EslModelId", eslModelId);
}

std::string SaveTemplateGroupRequest::getGroupId()const
{
	return groupId_;
}

void SaveTemplateGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

int SaveTemplateGroupRequest::getWidthPx()const
{
	return widthPx_;
}

void SaveTemplateGroupRequest::setWidthPx(int widthPx)
{
	widthPx_ = widthPx;
	setBodyParameter("WidthPx", std::to_string(widthPx));
}

std::string SaveTemplateGroupRequest::getGroupName()const
{
	return groupName_;
}

void SaveTemplateGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setBodyParameter("GroupName", groupName);
}

int SaveTemplateGroupRequest::getHeightPx()const
{
	return heightPx_;
}

void SaveTemplateGroupRequest::setHeightPx(int heightPx)
{
	heightPx_ = heightPx;
	setBodyParameter("HeightPx", std::to_string(heightPx));
}

