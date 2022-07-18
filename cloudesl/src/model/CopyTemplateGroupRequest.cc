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

#include <alibabacloud/cloudesl/model/CopyTemplateGroupRequest.h>

using AlibabaCloud::Cloudesl::Model::CopyTemplateGroupRequest;

CopyTemplateGroupRequest::CopyTemplateGroupRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "CopyTemplateGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CopyTemplateGroupRequest::~CopyTemplateGroupRequest()
{}

std::string CopyTemplateGroupRequest::getGroupId()const
{
	return groupId_;
}

void CopyTemplateGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

std::string CopyTemplateGroupRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void CopyTemplateGroupRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

std::string CopyTemplateGroupRequest::getEslModelId()const
{
	return eslModelId_;
}

void CopyTemplateGroupRequest::setEslModelId(const std::string& eslModelId)
{
	eslModelId_ = eslModelId;
	setBodyParameter("EslModelId", eslModelId);
}

