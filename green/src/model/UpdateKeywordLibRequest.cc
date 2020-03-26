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

#include <alibabacloud/green/model/UpdateKeywordLibRequest.h>

using AlibabaCloud::Green::Model::UpdateKeywordLibRequest;

UpdateKeywordLibRequest::UpdateKeywordLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateKeywordLib")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateKeywordLibRequest::~UpdateKeywordLibRequest()
{}

std::string UpdateKeywordLibRequest::getMatchMode()const
{
	return matchMode_;
}

void UpdateKeywordLibRequest::setMatchMode(const std::string& matchMode)
{
	matchMode_ = matchMode;
	setParameter("MatchMode", matchMode);
}

std::string UpdateKeywordLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateKeywordLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

bool UpdateKeywordLibRequest::getEnable()const
{
	return enable_;
}

void UpdateKeywordLibRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

int UpdateKeywordLibRequest::getId()const
{
	return id_;
}

void UpdateKeywordLibRequest::setId(int id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string UpdateKeywordLibRequest::getLang()const
{
	return lang_;
}

void UpdateKeywordLibRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string UpdateKeywordLibRequest::getBizTypes()const
{
	return bizTypes_;
}

void UpdateKeywordLibRequest::setBizTypes(const std::string& bizTypes)
{
	bizTypes_ = bizTypes;
	setParameter("BizTypes", bizTypes);
}

std::string UpdateKeywordLibRequest::getName()const
{
	return name_;
}

void UpdateKeywordLibRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

