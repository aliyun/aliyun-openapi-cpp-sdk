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

#include <alibabacloud/cloudauth/model/CreateWhitelistRequest.h>

using AlibabaCloud::Cloudauth::Model::CreateWhitelistRequest;

CreateWhitelistRequest::CreateWhitelistRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "CreateWhitelist")
{
	setMethod(HttpRequest::Method::Post);
}

CreateWhitelistRequest::~CreateWhitelistRequest()
{}

std::string CreateWhitelistRequest::getValidDay()const
{
	return validDay_;
}

void CreateWhitelistRequest::setValidDay(const std::string& validDay)
{
	validDay_ = validDay;
	setParameter("ValidDay", validDay);
}

std::string CreateWhitelistRequest::getBizType()const
{
	return bizType_;
}

void CreateWhitelistRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string CreateWhitelistRequest::getIdCardNum()const
{
	return idCardNum_;
}

void CreateWhitelistRequest::setIdCardNum(const std::string& idCardNum)
{
	idCardNum_ = idCardNum;
	setParameter("IdCardNum", idCardNum);
}

std::string CreateWhitelistRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateWhitelistRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateWhitelistRequest::getBizId()const
{
	return bizId_;
}

void CreateWhitelistRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string CreateWhitelistRequest::getLang()const
{
	return lang_;
}

void CreateWhitelistRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

