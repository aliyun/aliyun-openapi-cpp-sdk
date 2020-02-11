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

#include <alibabacloud/pvtz/model/AddZoneRecordRequest.h>

using AlibabaCloud::Pvtz::Model::AddZoneRecordRequest;

AddZoneRecordRequest::AddZoneRecordRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "AddZoneRecord")
{
	setMethod(HttpRequest::Method::Post);
}

AddZoneRecordRequest::~AddZoneRecordRequest()
{}

std::string AddZoneRecordRequest::getRr()const
{
	return rr_;
}

void AddZoneRecordRequest::setRr(const std::string& rr)
{
	rr_ = rr;
	setParameter("Rr", rr);
}

std::string AddZoneRecordRequest::getType()const
{
	return type_;
}

void AddZoneRecordRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int AddZoneRecordRequest::getPriority()const
{
	return priority_;
}

void AddZoneRecordRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

int AddZoneRecordRequest::getTtl()const
{
	return ttl_;
}

void AddZoneRecordRequest::setTtl(int ttl)
{
	ttl_ = ttl;
	setParameter("Ttl", std::to_string(ttl));
}

std::string AddZoneRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddZoneRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string AddZoneRecordRequest::getZoneId()const
{
	return zoneId_;
}

void AddZoneRecordRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string AddZoneRecordRequest::getLang()const
{
	return lang_;
}

void AddZoneRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string AddZoneRecordRequest::getValue()const
{
	return value_;
}

void AddZoneRecordRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

