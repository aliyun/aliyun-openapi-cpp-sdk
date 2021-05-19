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

#include <alibabacloud/scsp/model/GetCallsPerDayRequest.h>

using AlibabaCloud::Scsp::Model::GetCallsPerDayRequest;

GetCallsPerDayRequest::GetCallsPerDayRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetCallsPerDay")
{
	setMethod(HttpRequest::Method::Get);
}

GetCallsPerDayRequest::~GetCallsPerDayRequest()
{}

std::string GetCallsPerDayRequest::getInstanceId()const
{
	return instanceId_;
}

void GetCallsPerDayRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetCallsPerDayRequest::getDataIdStart()const
{
	return dataIdStart_;
}

void GetCallsPerDayRequest::setDataIdStart(const std::string& dataIdStart)
{
	dataIdStart_ = dataIdStart;
	setParameter("DataIdStart", dataIdStart);
}

std::string GetCallsPerDayRequest::getDataIdEnd()const
{
	return dataIdEnd_;
}

void GetCallsPerDayRequest::setDataIdEnd(const std::string& dataIdEnd)
{
	dataIdEnd_ = dataIdEnd;
	setParameter("DataIdEnd", dataIdEnd);
}

std::string GetCallsPerDayRequest::getDataId()const
{
	return dataId_;
}

void GetCallsPerDayRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setParameter("DataId", dataId);
}

std::string GetCallsPerDayRequest::getHourId()const
{
	return hourId_;
}

void GetCallsPerDayRequest::setHourId(const std::string& hourId)
{
	hourId_ = hourId;
	setParameter("HourId", hourId);
}

std::string GetCallsPerDayRequest::getMinuteId()const
{
	return minuteId_;
}

void GetCallsPerDayRequest::setMinuteId(const std::string& minuteId)
{
	minuteId_ = minuteId;
	setParameter("MinuteId", minuteId);
}

std::string GetCallsPerDayRequest::getPhoneNumbers()const
{
	return phoneNumbers_;
}

void GetCallsPerDayRequest::setPhoneNumbers(const std::string& phoneNumbers)
{
	phoneNumbers_ = phoneNumbers;
	setParameter("PhoneNumbers", phoneNumbers);
}

std::string GetCallsPerDayRequest::getHavePhoneNumbers()const
{
	return havePhoneNumbers_;
}

void GetCallsPerDayRequest::setHavePhoneNumbers(const std::string& havePhoneNumbers)
{
	havePhoneNumbers_ = havePhoneNumbers;
	setParameter("HavePhoneNumbers", havePhoneNumbers);
}

long GetCallsPerDayRequest::getPageNo()const
{
	return pageNo_;
}

void GetCallsPerDayRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

long GetCallsPerDayRequest::getPageSize()const
{
	return pageSize_;
}

void GetCallsPerDayRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

