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

#include <alibabacloud/jarvis/model/ModifyUidWhiteListAutoShareRequest.h>

using AlibabaCloud::Jarvis::Model::ModifyUidWhiteListAutoShareRequest;

ModifyUidWhiteListAutoShareRequest::ModifyUidWhiteListAutoShareRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "ModifyUidWhiteListAutoShare")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyUidWhiteListAutoShareRequest::~ModifyUidWhiteListAutoShareRequest()
{}

int ModifyUidWhiteListAutoShareRequest::getAutoConfig()const
{
	return autoConfig_;
}

void ModifyUidWhiteListAutoShareRequest::setAutoConfig(int autoConfig)
{
	autoConfig_ = autoConfig;
	setParameter("AutoConfig", std::to_string(autoConfig));
}

std::string ModifyUidWhiteListAutoShareRequest::getSourceCode()const
{
	return sourceCode_;
}

void ModifyUidWhiteListAutoShareRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string ModifyUidWhiteListAutoShareRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyUidWhiteListAutoShareRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyUidWhiteListAutoShareRequest::getProductName()const
{
	return productName_;
}

void ModifyUidWhiteListAutoShareRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string ModifyUidWhiteListAutoShareRequest::getLang()const
{
	return lang_;
}

void ModifyUidWhiteListAutoShareRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ModifyUidWhiteListAutoShareRequest::getSrcUid()const
{
	return srcUid_;
}

void ModifyUidWhiteListAutoShareRequest::setSrcUid(const std::string& srcUid)
{
	srcUid_ = srcUid;
	setParameter("SrcUid", srcUid);
}

int ModifyUidWhiteListAutoShareRequest::getWhiteListType()const
{
	return whiteListType_;
}

void ModifyUidWhiteListAutoShareRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setParameter("WhiteListType", std::to_string(whiteListType));
}

