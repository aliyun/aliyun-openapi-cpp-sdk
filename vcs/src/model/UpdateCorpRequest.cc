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

#include <alibabacloud/vcs/model/UpdateCorpRequest.h>

using AlibabaCloud::Vcs::Model::UpdateCorpRequest;

UpdateCorpRequest::UpdateCorpRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UpdateCorp")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateCorpRequest::~UpdateCorpRequest()
{}

std::string UpdateCorpRequest::getIsvSubId()const
{
	return isvSubId_;
}

void UpdateCorpRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string UpdateCorpRequest::getCorpId()const
{
	return corpId_;
}

void UpdateCorpRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UpdateCorpRequest::getParentCorpId()const
{
	return parentCorpId_;
}

void UpdateCorpRequest::setParentCorpId(const std::string& parentCorpId)
{
	parentCorpId_ = parentCorpId;
	setBodyParameter("ParentCorpId", parentCorpId);
}

std::string UpdateCorpRequest::getDescription()const
{
	return description_;
}

void UpdateCorpRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateCorpRequest::getIconPath()const
{
	return iconPath_;
}

void UpdateCorpRequest::setIconPath(const std::string& iconPath)
{
	iconPath_ = iconPath;
	setBodyParameter("IconPath", iconPath);
}

std::string UpdateCorpRequest::getAppName()const
{
	return appName_;
}

void UpdateCorpRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string UpdateCorpRequest::getCorpName()const
{
	return corpName_;
}

void UpdateCorpRequest::setCorpName(const std::string& corpName)
{
	corpName_ = corpName;
	setBodyParameter("CorpName", corpName);
}

