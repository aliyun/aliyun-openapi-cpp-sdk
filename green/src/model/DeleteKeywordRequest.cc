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

#include <alibabacloud/green/model/DeleteKeywordRequest.h>

using AlibabaCloud::Green::Model::DeleteKeywordRequest;

DeleteKeywordRequest::DeleteKeywordRequest() :
	RpcServiceRequest("green", "2017-08-23", "DeleteKeyword")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteKeywordRequest::~DeleteKeywordRequest()
{}

std::string DeleteKeywordRequest::getKeywords()const
{
	return keywords_;
}

void DeleteKeywordRequest::setKeywords(const std::string& keywords)
{
	keywords_ = keywords;
	setParameter("Keywords", keywords);
}

std::string DeleteKeywordRequest::getKeywordLibId()const
{
	return keywordLibId_;
}

void DeleteKeywordRequest::setKeywordLibId(const std::string& keywordLibId)
{
	keywordLibId_ = keywordLibId;
	setParameter("KeywordLibId", keywordLibId);
}

std::string DeleteKeywordRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteKeywordRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteKeywordRequest::getIds()const
{
	return ids_;
}

void DeleteKeywordRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setParameter("Ids", ids);
}

std::string DeleteKeywordRequest::getLang()const
{
	return lang_;
}

void DeleteKeywordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

