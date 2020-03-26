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

#include <alibabacloud/cloudwf/model/SavePortalTemplateRequest.h>

using AlibabaCloud::Cloudwf::Model::SavePortalTemplateRequest;

SavePortalTemplateRequest::SavePortalTemplateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SavePortalTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

SavePortalTemplateRequest::~SavePortalTemplateRequest()
{}

std::string SavePortalTemplateRequest::getTextContent()const
{
	return textContent_;
}

void SavePortalTemplateRequest::setTextContent(const std::string& textContent)
{
	textContent_ = textContent;
	setParameter("TextContent", textContent);
}

std::string SavePortalTemplateRequest::getTempName()const
{
	return tempName_;
}

void SavePortalTemplateRequest::setTempName(const std::string& tempName)
{
	tempName_ = tempName;
	setParameter("TempName", tempName);
}

std::string SavePortalTemplateRequest::getTextColor()const
{
	return textColor_;
}

void SavePortalTemplateRequest::setTextColor(const std::string& textColor)
{
	textColor_ = textColor;
	setParameter("TextColor", textColor);
}

long SavePortalTemplateRequest::getOssFileId()const
{
	return ossFileId_;
}

void SavePortalTemplateRequest::setOssFileId(long ossFileId)
{
	ossFileId_ = ossFileId;
	setParameter("OssFileId", std::to_string(ossFileId));
}

std::string SavePortalTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SavePortalTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SavePortalTemplateRequest::getTextAlign()const
{
	return textAlign_;
}

void SavePortalTemplateRequest::setTextAlign(const std::string& textAlign)
{
	textAlign_ = textAlign;
	setParameter("TextAlign", textAlign);
}

long SavePortalTemplateRequest::getId()const
{
	return id_;
}

void SavePortalTemplateRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

