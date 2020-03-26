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

#include <alibabacloud/jarvis/model/DeleteUidWhiteBaselineRequest.h>

using AlibabaCloud::Jarvis::Model::DeleteUidWhiteBaselineRequest;

DeleteUidWhiteBaselineRequest::DeleteUidWhiteBaselineRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DeleteUidWhiteBaseline")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteUidWhiteBaselineRequest::~DeleteUidWhiteBaselineRequest()
{}

long DeleteUidWhiteBaselineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteUidWhiteBaselineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteUidWhiteBaselineRequest::getWblUidList()const
{
	return wblUidList_;
}

void DeleteUidWhiteBaselineRequest::setWblUidList(const std::string& wblUidList)
{
	wblUidList_ = wblUidList;
	setParameter("WblUidList", wblUidList);
}

std::string DeleteUidWhiteBaselineRequest::getSourceCode()const
{
	return sourceCode_;
}

void DeleteUidWhiteBaselineRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DeleteUidWhiteBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteUidWhiteBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteUidWhiteBaselineRequest::getLang()const
{
	return lang_;
}

void DeleteUidWhiteBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

