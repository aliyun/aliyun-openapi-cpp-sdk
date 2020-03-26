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

#include <alibabacloud/jarvis/model/ModifyIpWhiteBaselineRequest.h>

using AlibabaCloud::Jarvis::Model::ModifyIpWhiteBaselineRequest;

ModifyIpWhiteBaselineRequest::ModifyIpWhiteBaselineRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "ModifyIpWhiteBaseline")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyIpWhiteBaselineRequest::~ModifyIpWhiteBaselineRequest()
{}

long ModifyIpWhiteBaselineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIpWhiteBaselineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyIpWhiteBaselineRequest::getSrcIp()const
{
	return srcIp_;
}

void ModifyIpWhiteBaselineRequest::setSrcIp(const std::string& srcIp)
{
	srcIp_ = srcIp;
	setParameter("SrcIp", srcIp);
}

std::string ModifyIpWhiteBaselineRequest::getRemark()const
{
	return remark_;
}

void ModifyIpWhiteBaselineRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string ModifyIpWhiteBaselineRequest::getSourceCode()const
{
	return sourceCode_;
}

void ModifyIpWhiteBaselineRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string ModifyIpWhiteBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyIpWhiteBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int ModifyIpWhiteBaselineRequest::getId()const
{
	return id_;
}

void ModifyIpWhiteBaselineRequest::setId(int id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ModifyIpWhiteBaselineRequest::getLang()const
{
	return lang_;
}

void ModifyIpWhiteBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

