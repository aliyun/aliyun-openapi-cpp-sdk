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

#include <alibabacloud/cloudauth/model/CreateFaceConfigRequest.h>

using AlibabaCloud::Cloudauth::Model::CreateFaceConfigRequest;

CreateFaceConfigRequest::CreateFaceConfigRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "CreateFaceConfig")
{
	setMethod(HttpRequest::Method::Post);
}

CreateFaceConfigRequest::~CreateFaceConfigRequest()
{}

std::string CreateFaceConfigRequest::getBizName()const
{
	return bizName_;
}

void CreateFaceConfigRequest::setBizName(const std::string& bizName)
{
	bizName_ = bizName;
	setParameter("BizName", bizName);
}

std::string CreateFaceConfigRequest::getBizType()const
{
	return bizType_;
}

void CreateFaceConfigRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string CreateFaceConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateFaceConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateFaceConfigRequest::getLang()const
{
	return lang_;
}

void CreateFaceConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

