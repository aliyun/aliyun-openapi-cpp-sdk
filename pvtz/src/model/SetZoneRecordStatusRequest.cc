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

#include <alibabacloud/pvtz/model/SetZoneRecordStatusRequest.h>

using AlibabaCloud::Pvtz::Model::SetZoneRecordStatusRequest;

SetZoneRecordStatusRequest::SetZoneRecordStatusRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "SetZoneRecordStatus")
{
	setMethod(HttpRequest::Method::Post);
}

SetZoneRecordStatusRequest::~SetZoneRecordStatusRequest()
{}

long SetZoneRecordStatusRequest::getRecordId()const
{
	return recordId_;
}

void SetZoneRecordStatusRequest::setRecordId(long recordId)
{
	recordId_ = recordId;
	setParameter("RecordId", std::to_string(recordId));
}

std::string SetZoneRecordStatusRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SetZoneRecordStatusRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SetZoneRecordStatusRequest::getLang()const
{
	return lang_;
}

void SetZoneRecordStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string SetZoneRecordStatusRequest::getStatus()const
{
	return status_;
}

void SetZoneRecordStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

