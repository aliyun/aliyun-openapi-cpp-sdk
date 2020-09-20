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

#include <alibabacloud/vcs/model/CreateCorpRequest.h>

using AlibabaCloud::Vcs::Model::CreateCorpRequest;

CreateCorpRequest::CreateCorpRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "CreateCorp")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCorpRequest::~CreateCorpRequest()
{}

std::string CreateCorpRequest::getAlgorithmType()const
{
	return algorithmType_;
}

void CreateCorpRequest::setAlgorithmType(const std::string& algorithmType)
{
	algorithmType_ = algorithmType;
	setBodyParameter("AlgorithmType", algorithmType);
}

std::string CreateCorpRequest::getIsvSubId()const
{
	return isvSubId_;
}

void CreateCorpRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string CreateCorpRequest::getParentCorpId()const
{
	return parentCorpId_;
}

void CreateCorpRequest::setParentCorpId(const std::string& parentCorpId)
{
	parentCorpId_ = parentCorpId;
	setBodyParameter("ParentCorpId", parentCorpId);
}

std::string CreateCorpRequest::getDescription()const
{
	return description_;
}

void CreateCorpRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateCorpRequest::getIconPath()const
{
	return iconPath_;
}

void CreateCorpRequest::setIconPath(const std::string& iconPath)
{
	iconPath_ = iconPath;
	setBodyParameter("IconPath", iconPath);
}

std::string CreateCorpRequest::getAppName()const
{
	return appName_;
}

void CreateCorpRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string CreateCorpRequest::getCorpName()const
{
	return corpName_;
}

void CreateCorpRequest::setCorpName(const std::string& corpName)
{
	corpName_ = corpName;
	setBodyParameter("CorpName", corpName);
}

