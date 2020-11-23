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

#include <alibabacloud/cloudauth/model/UpdateFaceConfigRequest.h>

using AlibabaCloud::Cloudauth::Model::UpdateFaceConfigRequest;

UpdateFaceConfigRequest::UpdateFaceConfigRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "UpdateFaceConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateFaceConfigRequest::~UpdateFaceConfigRequest()
{}

std::string UpdateFaceConfigRequest::getBizName()const
{
	return bizName_;
}

void UpdateFaceConfigRequest::setBizName(const std::string& bizName)
{
	bizName_ = bizName;
	setParameter("BizName", bizName);
}

std::string UpdateFaceConfigRequest::getBizType()const
{
	return bizType_;
}

void UpdateFaceConfigRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string UpdateFaceConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateFaceConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateFaceConfigRequest::getLang()const
{
	return lang_;
}

void UpdateFaceConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

