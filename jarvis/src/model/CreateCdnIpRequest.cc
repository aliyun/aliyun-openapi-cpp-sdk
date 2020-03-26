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

#include <alibabacloud/jarvis/model/CreateCdnIpRequest.h>

using AlibabaCloud::Jarvis::Model::CreateCdnIpRequest;

CreateCdnIpRequest::CreateCdnIpRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateCdnIp")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCdnIpRequest::~CreateCdnIpRequest()
{}

long CreateCdnIpRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCdnIpRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCdnIpRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateCdnIpRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string CreateCdnIpRequest::getCdnIpList()const
{
	return cdnIpList_;
}

void CreateCdnIpRequest::setCdnIpList(const std::string& cdnIpList)
{
	cdnIpList_ = cdnIpList;
	setParameter("CdnIpList", cdnIpList);
}

std::string CreateCdnIpRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCdnIpRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateCdnIpRequest::getLang()const
{
	return lang_;
}

void CreateCdnIpRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

