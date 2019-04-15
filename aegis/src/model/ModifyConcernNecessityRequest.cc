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

#include <alibabacloud/aegis/model/ModifyConcernNecessityRequest.h>

using AlibabaCloud::Aegis::Model::ModifyConcernNecessityRequest;

ModifyConcernNecessityRequest::ModifyConcernNecessityRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyConcernNecessity")
{}

ModifyConcernNecessityRequest::~ModifyConcernNecessityRequest()
{}

std::string ModifyConcernNecessityRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyConcernNecessityRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyConcernNecessityRequest::getLang()const
{
	return lang_;
}

void ModifyConcernNecessityRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ModifyConcernNecessityRequest::getConcernNecessity()const
{
	return concernNecessity_;
}

void ModifyConcernNecessityRequest::setConcernNecessity(const std::string& concernNecessity)
{
	concernNecessity_ = concernNecessity;
	setCoreParameter("ConcernNecessity", concernNecessity);
}

