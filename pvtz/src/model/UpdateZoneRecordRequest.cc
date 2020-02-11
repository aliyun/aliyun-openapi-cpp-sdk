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

#include <alibabacloud/pvtz/model/UpdateZoneRecordRequest.h>

using AlibabaCloud::Pvtz::Model::UpdateZoneRecordRequest;

UpdateZoneRecordRequest::UpdateZoneRecordRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "UpdateZoneRecord")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateZoneRecordRequest::~UpdateZoneRecordRequest()
{}

std::string UpdateZoneRecordRequest::getRr()const
{
	return rr_;
}

void UpdateZoneRecordRequest::setRr(const std::string& rr)
{
	rr_ = rr;
	setParameter("Rr", rr);
}

std::string UpdateZoneRecordRequest::getType()const
{
	return type_;
}

void UpdateZoneRecordRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int UpdateZoneRecordRequest::getPriority()const
{
	return priority_;
}

void UpdateZoneRecordRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

int UpdateZoneRecordRequest::getTtl()const
{
	return ttl_;
}

void UpdateZoneRecordRequest::setTtl(int ttl)
{
	ttl_ = ttl;
	setParameter("Ttl", std::to_string(ttl));
}

long UpdateZoneRecordRequest::getRecordId()const
{
	return recordId_;
}

void UpdateZoneRecordRequest::setRecordId(long recordId)
{
	recordId_ = recordId;
	setParameter("RecordId", std::to_string(recordId));
}

std::string UpdateZoneRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateZoneRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string UpdateZoneRecordRequest::getLang()const
{
	return lang_;
}

void UpdateZoneRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string UpdateZoneRecordRequest::getValue()const
{
	return value_;
}

void UpdateZoneRecordRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

