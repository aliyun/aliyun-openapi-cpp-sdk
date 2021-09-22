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

#include <alibabacloud/alidns/model/ValidateDnsGtmCnameRrCanUseRequest.h>

using AlibabaCloud::Alidns::Model::ValidateDnsGtmCnameRrCanUseRequest;

ValidateDnsGtmCnameRrCanUseRequest::ValidateDnsGtmCnameRrCanUseRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "ValidateDnsGtmCnameRrCanUse")
{
	setMethod(HttpRequest::Method::Post);
}

ValidateDnsGtmCnameRrCanUseRequest::~ValidateDnsGtmCnameRrCanUseRequest()
{}

std::string ValidateDnsGtmCnameRrCanUseRequest::getCnameMode()const
{
	return cnameMode_;
}

void ValidateDnsGtmCnameRrCanUseRequest::setCnameMode(const std::string& cnameMode)
{
	cnameMode_ = cnameMode;
	setParameter("CnameMode", cnameMode);
}

std::string ValidateDnsGtmCnameRrCanUseRequest::getCnameZone()const
{
	return cnameZone_;
}

void ValidateDnsGtmCnameRrCanUseRequest::setCnameZone(const std::string& cnameZone)
{
	cnameZone_ = cnameZone;
	setParameter("CnameZone", cnameZone);
}

std::string ValidateDnsGtmCnameRrCanUseRequest::getCnameRr()const
{
	return cnameRr_;
}

void ValidateDnsGtmCnameRrCanUseRequest::setCnameRr(const std::string& cnameRr)
{
	cnameRr_ = cnameRr;
	setParameter("CnameRr", cnameRr);
}

std::string ValidateDnsGtmCnameRrCanUseRequest::getCnameType()const
{
	return cnameType_;
}

void ValidateDnsGtmCnameRrCanUseRequest::setCnameType(const std::string& cnameType)
{
	cnameType_ = cnameType;
	setParameter("CnameType", cnameType);
}

std::string ValidateDnsGtmCnameRrCanUseRequest::getInstanceId()const
{
	return instanceId_;
}

void ValidateDnsGtmCnameRrCanUseRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ValidateDnsGtmCnameRrCanUseRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ValidateDnsGtmCnameRrCanUseRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string ValidateDnsGtmCnameRrCanUseRequest::getLang()const
{
	return lang_;
}

void ValidateDnsGtmCnameRrCanUseRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

