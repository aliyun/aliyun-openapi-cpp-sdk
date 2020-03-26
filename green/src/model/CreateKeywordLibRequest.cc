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

#include <alibabacloud/green/model/CreateKeywordLibRequest.h>

using AlibabaCloud::Green::Model::CreateKeywordLibRequest;

CreateKeywordLibRequest::CreateKeywordLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreateKeywordLib")
{
	setMethod(HttpRequest::Method::Post);
}

CreateKeywordLibRequest::~CreateKeywordLibRequest()
{}

std::string CreateKeywordLibRequest::getLanguage()const
{
	return language_;
}

void CreateKeywordLibRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setParameter("Language", language);
}

std::string CreateKeywordLibRequest::getServiceModule()const
{
	return serviceModule_;
}

void CreateKeywordLibRequest::setServiceModule(const std::string& serviceModule)
{
	serviceModule_ = serviceModule;
	setParameter("ServiceModule", serviceModule);
}

std::string CreateKeywordLibRequest::getMatchMode()const
{
	return matchMode_;
}

void CreateKeywordLibRequest::setMatchMode(const std::string& matchMode)
{
	matchMode_ = matchMode;
	setParameter("MatchMode", matchMode);
}

std::string CreateKeywordLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateKeywordLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateKeywordLibRequest::getLibType()const
{
	return libType_;
}

void CreateKeywordLibRequest::setLibType(const std::string& libType)
{
	libType_ = libType;
	setParameter("LibType", libType);
}

bool CreateKeywordLibRequest::getEnable()const
{
	return enable_;
}

void CreateKeywordLibRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string CreateKeywordLibRequest::getLang()const
{
	return lang_;
}

void CreateKeywordLibRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateKeywordLibRequest::getBizTypes()const
{
	return bizTypes_;
}

void CreateKeywordLibRequest::setBizTypes(const std::string& bizTypes)
{
	bizTypes_ = bizTypes;
	setParameter("BizTypes", bizTypes);
}

std::string CreateKeywordLibRequest::getResourceType()const
{
	return resourceType_;
}

void CreateKeywordLibRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string CreateKeywordLibRequest::getName()const
{
	return name_;
}

void CreateKeywordLibRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateKeywordLibRequest::getCategory()const
{
	return category_;
}

void CreateKeywordLibRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

