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

#include <alibabacloud/green/model/DeleteKeywordLibRequest.h>

using AlibabaCloud::Green::Model::DeleteKeywordLibRequest;

DeleteKeywordLibRequest::DeleteKeywordLibRequest() :
	RpcServiceRequest("green", "2017-08-23", "DeleteKeywordLib")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteKeywordLibRequest::~DeleteKeywordLibRequest()
{}

std::string DeleteKeywordLibRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteKeywordLibRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DeleteKeywordLibRequest::getId()const
{
	return id_;
}

void DeleteKeywordLibRequest::setId(int id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string DeleteKeywordLibRequest::getLang()const
{
	return lang_;
}

void DeleteKeywordLibRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

