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
{}

ModifyUidWhiteListAutoShareRequest::~ModifyUidWhiteListAutoShareRequest()
{}

std::string ModifyUidWhiteListAutoShareRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyUidWhiteListAutoShareRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int ModifyUidWhiteListAutoShareRequest::getAutoConfig()const
{
	return autoConfig_;
}

void ModifyUidWhiteListAutoShareRequest::setAutoConfig(int autoConfig)
{
	autoConfig_ = autoConfig;
	setCoreParameter("AutoConfig", autoConfig);
}

std::string ModifyUidWhiteListAutoShareRequest::getProductName()const
{
	return productName_;
}

void ModifyUidWhiteListAutoShareRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", productName);
}

int ModifyUidWhiteListAutoShareRequest::getWhiteListType()const
{
	return whiteListType_;
}

void ModifyUidWhiteListAutoShareRequest::setWhiteListType(int whiteListType)
{
	whiteListType_ = whiteListType;
	setCoreParameter("WhiteListType", whiteListType);
}

std::string ModifyUidWhiteListAutoShareRequest::getLang()const
{
	return lang_;
}

void ModifyUidWhiteListAutoShareRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ModifyUidWhiteListAutoShareRequest::getSrcUid()const
{
	return srcUid_;
}

void ModifyUidWhiteListAutoShareRequest::setSrcUid(const std::string& srcUid)
{
	srcUid_ = srcUid;
	setCoreParameter("SrcUid", srcUid);
}

std::string ModifyUidWhiteListAutoShareRequest::getSourceCode()const
{
	return sourceCode_;
}

void ModifyUidWhiteListAutoShareRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

