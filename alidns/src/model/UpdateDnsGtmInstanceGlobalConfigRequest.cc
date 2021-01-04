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

#include <alibabacloud/alidns/model/UpdateDnsGtmInstanceGlobalConfigRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDnsGtmInstanceGlobalConfigRequest;

UpdateDnsGtmInstanceGlobalConfigRequest::UpdateDnsGtmInstanceGlobalConfigRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "UpdateDnsGtmInstanceGlobalConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDnsGtmInstanceGlobalConfigRequest::~UpdateDnsGtmInstanceGlobalConfigRequest()
{}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getAlertGroup()const
{
	return alertGroup_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setAlertGroup(const std::string& alertGroup)
{
	alertGroup_ = alertGroup;
	setParameter("AlertGroup", alertGroup);
}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getCnameType()const
{
	return cnameType_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setCnameType(const std::string& cnameType)
{
	cnameType_ = cnameType;
	setParameter("CnameType", cnameType);
}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getLang()const
{
	return lang_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::vector<UpdateDnsGtmInstanceGlobalConfigRequest::AlertConfig> UpdateDnsGtmInstanceGlobalConfigRequest::getAlertConfig()const
{
	return alertConfig_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setAlertConfig(const std::vector<AlertConfig>& alertConfig)
{
	alertConfig_ = alertConfig;
	for(int dep1 = 0; dep1!= alertConfig.size(); dep1++) {
		auto alertConfigObj = alertConfig.at(dep1);
		std::string alertConfigObjStr = "AlertConfig." + std::to_string(dep1 + 1);
		setParameter(alertConfigObjStr + ".SmsNotice", alertConfigObj.smsNotice ? "true" : "false");
		setParameter(alertConfigObjStr + ".NoticeType", alertConfigObj.noticeType);
		setParameter(alertConfigObjStr + ".EmailNotice", alertConfigObj.emailNotice ? "true" : "false");
	}
}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getPublicCnameMode()const
{
	return publicCnameMode_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setPublicCnameMode(const std::string& publicCnameMode)
{
	publicCnameMode_ = publicCnameMode;
	setParameter("PublicCnameMode", publicCnameMode);
}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getPublicUserDomainName()const
{
	return publicUserDomainName_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setPublicUserDomainName(const std::string& publicUserDomainName)
{
	publicUserDomainName_ = publicUserDomainName;
	setParameter("PublicUserDomainName", publicUserDomainName);
}

int UpdateDnsGtmInstanceGlobalConfigRequest::getTtl()const
{
	return ttl_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setTtl(int ttl)
{
	ttl_ = ttl;
	setParameter("Ttl", std::to_string(ttl));
}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getInstanceName()const
{
	return instanceName_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string UpdateDnsGtmInstanceGlobalConfigRequest::getPublicZoneName()const
{
	return publicZoneName_;
}

void UpdateDnsGtmInstanceGlobalConfigRequest::setPublicZoneName(const std::string& publicZoneName)
{
	publicZoneName_ = publicZoneName;
	setParameter("PublicZoneName", publicZoneName);
}

