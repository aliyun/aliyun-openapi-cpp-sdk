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

#include <alibabacloud/jarvis/model/DeleteIpWhiteBaselineRequest.h>

using AlibabaCloud::Jarvis::Model::DeleteIpWhiteBaselineRequest;

DeleteIpWhiteBaselineRequest::DeleteIpWhiteBaselineRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DeleteIpWhiteBaseline")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteIpWhiteBaselineRequest::~DeleteIpWhiteBaselineRequest()
{}

long DeleteIpWhiteBaselineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteIpWhiteBaselineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteIpWhiteBaselineRequest::getWblIpList()const
{
	return wblIpList_;
}

void DeleteIpWhiteBaselineRequest::setWblIpList(const std::string& wblIpList)
{
	wblIpList_ = wblIpList;
	setParameter("WblIpList", wblIpList);
}

std::string DeleteIpWhiteBaselineRequest::getSourceCode()const
{
	return sourceCode_;
}

void DeleteIpWhiteBaselineRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DeleteIpWhiteBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteIpWhiteBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteIpWhiteBaselineRequest::getLang()const
{
	return lang_;
}

void DeleteIpWhiteBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

