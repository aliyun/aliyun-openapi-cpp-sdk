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

#include <alibabacloud/cloudesl/model/DescribeAlarmsRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeAlarmsRequest;

DescribeAlarmsRequest::DescribeAlarmsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribeAlarms")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAlarmsRequest::~DescribeAlarmsRequest()
{}

std::string DescribeAlarmsRequest::getStoreId()const
{
	return storeId_;
}

void DescribeAlarmsRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribeAlarmsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAlarmsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeAlarmsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAlarmsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAlarmsRequest::getAlarmType()const
{
	return alarmType_;
}

void DescribeAlarmsRequest::setAlarmType(const std::string& alarmType)
{
	alarmType_ = alarmType;
	setBodyParameter("AlarmType", alarmType);
}

std::string DescribeAlarmsRequest::getAlarmStatus()const
{
	return alarmStatus_;
}

void DescribeAlarmsRequest::setAlarmStatus(const std::string& alarmStatus)
{
	alarmStatus_ = alarmStatus;
	setBodyParameter("AlarmStatus", alarmStatus);
}

std::string DescribeAlarmsRequest::getErrorType()const
{
	return errorType_;
}

void DescribeAlarmsRequest::setErrorType(const std::string& errorType)
{
	errorType_ = errorType;
	setBodyParameter("ErrorType", errorType);
}

std::string DescribeAlarmsRequest::getAlarmId()const
{
	return alarmId_;
}

void DescribeAlarmsRequest::setAlarmId(const std::string& alarmId)
{
	alarmId_ = alarmId;
	setBodyParameter("AlarmId", alarmId);
}

std::string DescribeAlarmsRequest::getDeviceMac()const
{
	return deviceMac_;
}

void DescribeAlarmsRequest::setDeviceMac(const std::string& deviceMac)
{
	deviceMac_ = deviceMac;
	setBodyParameter("DeviceMac", deviceMac);
}

