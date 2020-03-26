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

#include <alibabacloud/jarvis/model/CreateIpWhiteBaselineRequest.h>

using AlibabaCloud::Jarvis::Model::CreateIpWhiteBaselineRequest;

CreateIpWhiteBaselineRequest::CreateIpWhiteBaselineRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateIpWhiteBaseline")
{
	setMethod(HttpRequest::Method::Post);
}

CreateIpWhiteBaselineRequest::~CreateIpWhiteBaselineRequest()
{}

long CreateIpWhiteBaselineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateIpWhiteBaselineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateIpWhiteBaselineRequest::getSrcIp()const
{
	return srcIp_;
}

void CreateIpWhiteBaselineRequest::setSrcIp(const std::string& srcIp)
{
	srcIp_ = srcIp;
	setParameter("SrcIp", srcIp);
}

std::string CreateIpWhiteBaselineRequest::getRemark()const
{
	return remark_;
}

void CreateIpWhiteBaselineRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string CreateIpWhiteBaselineRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateIpWhiteBaselineRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string CreateIpWhiteBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateIpWhiteBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateIpWhiteBaselineRequest::getLang()const
{
	return lang_;
}

void CreateIpWhiteBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

