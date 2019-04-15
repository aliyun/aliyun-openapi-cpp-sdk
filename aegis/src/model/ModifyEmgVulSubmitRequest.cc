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

#include <alibabacloud/aegis/model/ModifyEmgVulSubmitRequest.h>

using AlibabaCloud::Aegis::Model::ModifyEmgVulSubmitRequest;

ModifyEmgVulSubmitRequest::ModifyEmgVulSubmitRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyEmgVulSubmit")
{}

ModifyEmgVulSubmitRequest::~ModifyEmgVulSubmitRequest()
{}

std::string ModifyEmgVulSubmitRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyEmgVulSubmitRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyEmgVulSubmitRequest::getName()const
{
	return name_;
}

void ModifyEmgVulSubmitRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyEmgVulSubmitRequest::getUserAgreement()const
{
	return userAgreement_;
}

void ModifyEmgVulSubmitRequest::setUserAgreement(const std::string& userAgreement)
{
	userAgreement_ = userAgreement;
	setCoreParameter("UserAgreement", userAgreement);
}

std::string ModifyEmgVulSubmitRequest::getLang()const
{
	return lang_;
}

void ModifyEmgVulSubmitRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

