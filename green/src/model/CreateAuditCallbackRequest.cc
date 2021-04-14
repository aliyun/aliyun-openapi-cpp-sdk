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

#include <alibabacloud/green/model/CreateAuditCallbackRequest.h>

using AlibabaCloud::Green::Model::CreateAuditCallbackRequest;

CreateAuditCallbackRequest::CreateAuditCallbackRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreateAuditCallback")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAuditCallbackRequest::~CreateAuditCallbackRequest()
{}

std::string CreateAuditCallbackRequest::getCallbackTypes()const
{
	return callbackTypes_;
}

void CreateAuditCallbackRequest::setCallbackTypes(const std::string& callbackTypes)
{
	callbackTypes_ = callbackTypes;
	setParameter("CallbackTypes", callbackTypes);
}

std::string CreateAuditCallbackRequest::getCallbackSuggestions()const
{
	return callbackSuggestions_;
}

void CreateAuditCallbackRequest::setCallbackSuggestions(const std::string& callbackSuggestions)
{
	callbackSuggestions_ = callbackSuggestions;
	setParameter("CallbackSuggestions", callbackSuggestions);
}

std::string CreateAuditCallbackRequest::getUrl()const
{
	return url_;
}

void CreateAuditCallbackRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

std::string CreateAuditCallbackRequest::getCryptType()const
{
	return cryptType_;
}

void CreateAuditCallbackRequest::setCryptType(const std::string& cryptType)
{
	cryptType_ = cryptType;
	setParameter("CryptType", cryptType);
}

std::string CreateAuditCallbackRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateAuditCallbackRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateAuditCallbackRequest::getName()const
{
	return name_;
}

void CreateAuditCallbackRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

