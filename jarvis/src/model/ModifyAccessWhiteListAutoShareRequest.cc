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

#include <alibabacloud/jarvis/model/ModifyAccessWhiteListAutoShareRequest.h>

using AlibabaCloud::Jarvis::Model::ModifyAccessWhiteListAutoShareRequest;

ModifyAccessWhiteListAutoShareRequest::ModifyAccessWhiteListAutoShareRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "ModifyAccessWhiteListAutoShare")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAccessWhiteListAutoShareRequest::~ModifyAccessWhiteListAutoShareRequest()
{}

std::string ModifyAccessWhiteListAutoShareRequest::getSrcIP()const
{
	return srcIP_;
}

void ModifyAccessWhiteListAutoShareRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

int ModifyAccessWhiteListAutoShareRequest::getAutoConfig()const
{
	return autoConfig_;
}

void ModifyAccessWhiteListAutoShareRequest::setAutoConfig(int autoConfig)
{
	autoConfig_ = autoConfig;
	setParameter("AutoConfig", std::to_string(autoConfig));
}

std::string ModifyAccessWhiteListAutoShareRequest::getSourceCode()const
{
	return sourceCode_;
}

void ModifyAccessWhiteListAutoShareRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string ModifyAccessWhiteListAutoShareRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyAccessWhiteListAutoShareRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyAccessWhiteListAutoShareRequest::getProductName()const
{
	return productName_;
}

void ModifyAccessWhiteListAutoShareRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string ModifyAccessWhiteListAutoShareRequest::getLang()const
{
	return lang_;
}

void ModifyAccessWhiteListAutoShareRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int ModifyAccessWhiteListAutoShareRequest::getWhiteListType()const
{
	return whiteListType_;
}

void ModifyAccessWhiteListAutoShareRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setParameter("WhiteListType", std::to_string(whiteListType));
}

