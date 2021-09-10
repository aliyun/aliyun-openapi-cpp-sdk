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

#include <alibabacloud/cloudauth/model/CreateWhitelistSettingRequest.h>

using AlibabaCloud::Cloudauth::Model::CreateWhitelistSettingRequest;

CreateWhitelistSettingRequest::CreateWhitelistSettingRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "CreateWhitelistSetting")
{
	setMethod(HttpRequest::Method::Post);
}

CreateWhitelistSettingRequest::~CreateWhitelistSettingRequest()
{}

std::string CreateWhitelistSettingRequest::getCertifyId()const
{
	return certifyId_;
}

void CreateWhitelistSettingRequest::setCertifyId(const std::string& certifyId)
{
	certifyId_ = certifyId;
	setParameter("CertifyId", certifyId);
}

std::string CreateWhitelistSettingRequest::getCertNo()const
{
	return certNo_;
}

void CreateWhitelistSettingRequest::setCertNo(const std::string& certNo)
{
	certNo_ = certNo;
	setParameter("CertNo", certNo);
}

std::string CreateWhitelistSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateWhitelistSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateWhitelistSettingRequest::getLang()const
{
	return lang_;
}

void CreateWhitelistSettingRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int CreateWhitelistSettingRequest::getValidDay()const
{
	return validDay_;
}

void CreateWhitelistSettingRequest::setValidDay(int validDay)
{
	validDay_ = validDay;
	setParameter("ValidDay", std::to_string(validDay));
}

std::string CreateWhitelistSettingRequest::getServiceCode()const
{
	return serviceCode_;
}

void CreateWhitelistSettingRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setParameter("ServiceCode", serviceCode);
}

long CreateWhitelistSettingRequest::getSceneId()const
{
	return sceneId_;
}

void CreateWhitelistSettingRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", std::to_string(sceneId));
}

