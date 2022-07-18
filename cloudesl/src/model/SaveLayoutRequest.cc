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

#include <alibabacloud/cloudesl/model/SaveLayoutRequest.h>

using AlibabaCloud::Cloudesl::Model::SaveLayoutRequest;

SaveLayoutRequest::SaveLayoutRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "SaveLayout")
{
	setMethod(HttpRequest::Method::Post);
}

SaveLayoutRequest::~SaveLayoutRequest()
{}

std::string SaveLayoutRequest::getLayoutId()const
{
	return layoutId_;
}

void SaveLayoutRequest::setLayoutId(const std::string& layoutId)
{
	layoutId_ = layoutId;
	setBodyParameter("LayoutId", layoutId);
}

std::string SaveLayoutRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void SaveLayoutRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

std::string SaveLayoutRequest::getLayoutName()const
{
	return layoutName_;
}

void SaveLayoutRequest::setLayoutName(const std::string& layoutName)
{
	layoutName_ = layoutName;
	setBodyParameter("LayoutName", layoutName);
}

std::string SaveLayoutRequest::getEslModelId()const
{
	return eslModelId_;
}

void SaveLayoutRequest::setEslModelId(const std::string& eslModelId)
{
	eslModelId_ = eslModelId;
	setBodyParameter("EslModelId", eslModelId);
}

