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

#include <alibabacloud/green/model/CreateKeywordRequest.h>

using AlibabaCloud::Green::Model::CreateKeywordRequest;

CreateKeywordRequest::CreateKeywordRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreateKeyword")
{}

CreateKeywordRequest::~CreateKeywordRequest()
{}

std::string CreateKeywordRequest::getKeywords()const
{
	return keywords_;
}

void CreateKeywordRequest::setKeywords(const std::string& keywords)
{
	keywords_ = keywords;
	setCoreParameter("Keywords", keywords);
}

int CreateKeywordRequest::getKeywordLibId()const
{
	return keywordLibId_;
}

void CreateKeywordRequest::setKeywordLibId(int keywordLibId)
{
	keywordLibId_ = keywordLibId;
	setCoreParameter("KeywordLibId", std::to_string(keywordLibId));
}

std::string CreateKeywordRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateKeywordRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateKeywordRequest::getLang()const
{
	return lang_;
}

void CreateKeywordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

