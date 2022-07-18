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

#include <alibabacloud/cloudesl/model/CopyLayoutRequest.h>

using AlibabaCloud::Cloudesl::Model::CopyLayoutRequest;

CopyLayoutRequest::CopyLayoutRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "CopyLayout")
{
	setMethod(HttpRequest::Method::Post);
}

CopyLayoutRequest::~CopyLayoutRequest()
{}

long CopyLayoutRequest::getLayoutId()const
{
	return layoutId_;
}

void CopyLayoutRequest::setLayoutId(long layoutId)
{
	layoutId_ = layoutId;
	setBodyParameter("LayoutId", std::to_string(layoutId));
}

std::string CopyLayoutRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void CopyLayoutRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setBodyParameter("TemplateVersion", templateVersion);
}

std::string CopyLayoutRequest::getEslModelId()const
{
	return eslModelId_;
}

void CopyLayoutRequest::setEslModelId(const std::string& eslModelId)
{
	eslModelId_ = eslModelId;
	setBodyParameter("EslModelId", eslModelId);
}

