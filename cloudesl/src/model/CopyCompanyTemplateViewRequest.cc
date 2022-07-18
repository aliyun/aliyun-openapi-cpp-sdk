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

#include <alibabacloud/cloudesl/model/CopyCompanyTemplateViewRequest.h>

using AlibabaCloud::Cloudesl::Model::CopyCompanyTemplateViewRequest;

CopyCompanyTemplateViewRequest::CopyCompanyTemplateViewRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "CopyCompanyTemplateView")
{
	setMethod(HttpRequest::Method::Post);
}

CopyCompanyTemplateViewRequest::~CopyCompanyTemplateViewRequest()
{}

std::string CopyCompanyTemplateViewRequest::getExtraParams()const
{
	return extraParams_;
}

void CopyCompanyTemplateViewRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string CopyCompanyTemplateViewRequest::getTargetName()const
{
	return targetName_;
}

void CopyCompanyTemplateViewRequest::setTargetName(const std::string& targetName)
{
	targetName_ = targetName;
	setBodyParameter("TargetName", targetName);
}

std::string CopyCompanyTemplateViewRequest::getModelId()const
{
	return modelId_;
}

void CopyCompanyTemplateViewRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setBodyParameter("ModelId", modelId);
}

std::string CopyCompanyTemplateViewRequest::getTargetVersion()const
{
	return targetVersion_;
}

void CopyCompanyTemplateViewRequest::setTargetVersion(const std::string& targetVersion)
{
	targetVersion_ = targetVersion;
	setBodyParameter("TargetVersion", targetVersion);
}

std::string CopyCompanyTemplateViewRequest::getTemplateId()const
{
	return templateId_;
}

void CopyCompanyTemplateViewRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setBodyParameter("TemplateId", templateId);
}

long CopyCompanyTemplateViewRequest::getTargetGroupId()const
{
	return targetGroupId_;
}

void CopyCompanyTemplateViewRequest::setTargetGroupId(long targetGroupId)
{
	targetGroupId_ = targetGroupId;
	setBodyParameter("TargetGroupId", std::to_string(targetGroupId));
}

