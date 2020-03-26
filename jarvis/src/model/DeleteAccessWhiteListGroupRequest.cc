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

#include <alibabacloud/jarvis/model/DeleteAccessWhiteListGroupRequest.h>

using AlibabaCloud::Jarvis::Model::DeleteAccessWhiteListGroupRequest;

DeleteAccessWhiteListGroupRequest::DeleteAccessWhiteListGroupRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DeleteAccessWhiteListGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAccessWhiteListGroupRequest::~DeleteAccessWhiteListGroupRequest()
{}

std::string DeleteAccessWhiteListGroupRequest::getSourceCode()const
{
	return sourceCode_;
}

void DeleteAccessWhiteListGroupRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DeleteAccessWhiteListGroupRequest::getGroupIdList()const
{
	return groupIdList_;
}

void DeleteAccessWhiteListGroupRequest::setGroupIdList(const std::string& groupIdList)
{
	groupIdList_ = groupIdList;
	setParameter("GroupIdList", groupIdList);
}

std::string DeleteAccessWhiteListGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteAccessWhiteListGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteAccessWhiteListGroupRequest::getLang()const
{
	return lang_;
}

void DeleteAccessWhiteListGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

