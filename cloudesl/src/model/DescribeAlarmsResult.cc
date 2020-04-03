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

#include <alibabacloud/cloudesl/model/DescribeAlarmsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeAlarmsResult::DescribeAlarmsResult() :
	ServiceResult()
{}

DescribeAlarmsResult::DescribeAlarmsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmsResult::~DescribeAlarmsResult()
{}

void DescribeAlarmsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlarmsNode = value["Alarms"]["AlarmInfo"];
	for (auto valueAlarmsAlarmInfo : allAlarmsNode)
	{
		AlarmInfo alarmsObject;
		if(!valueAlarmsAlarmInfo["Remark"].isNull())
			alarmsObject.remark = valueAlarmsAlarmInfo["Remark"].asString();
		if(!valueAlarmsAlarmInfo["StoreId"].isNull())
			alarmsObject.storeId = valueAlarmsAlarmInfo["StoreId"].asString();
		if(!valueAlarmsAlarmInfo["DeviceBarCode"].isNull())
			alarmsObject.deviceBarCode = valueAlarmsAlarmInfo["DeviceBarCode"].asString();
		if(!valueAlarmsAlarmInfo["DealUserId"].isNull())
			alarmsObject.dealUserId = valueAlarmsAlarmInfo["DealUserId"].asString();
		if(!valueAlarmsAlarmInfo["DeviceType"].isNull())
			alarmsObject.deviceType = valueAlarmsAlarmInfo["DeviceType"].asString();
		if(!valueAlarmsAlarmInfo["ItemTitle"].isNull())
			alarmsObject.itemTitle = valueAlarmsAlarmInfo["ItemTitle"].asString();
		if(!valueAlarmsAlarmInfo["AlarmTime"].isNull())
			alarmsObject.alarmTime = valueAlarmsAlarmInfo["AlarmTime"].asString();
		if(!valueAlarmsAlarmInfo["ErrorType"].isNull())
			alarmsObject.errorType = valueAlarmsAlarmInfo["ErrorType"].asString();
		if(!valueAlarmsAlarmInfo["DeviceMac"].isNull())
			alarmsObject.deviceMac = valueAlarmsAlarmInfo["DeviceMac"].asString();
		if(!valueAlarmsAlarmInfo["AlarmId"].isNull())
			alarmsObject.alarmId = valueAlarmsAlarmInfo["AlarmId"].asString();
		if(!valueAlarmsAlarmInfo["RetryGmtCreate"].isNull())
			alarmsObject.retryGmtCreate = valueAlarmsAlarmInfo["RetryGmtCreate"].asString();
		if(!valueAlarmsAlarmInfo["RetryGmtModified"].isNull())
			alarmsObject.retryGmtModified = valueAlarmsAlarmInfo["RetryGmtModified"].asString();
		if(!valueAlarmsAlarmInfo["ItemBarCode"].isNull())
			alarmsObject.itemBarCode = valueAlarmsAlarmInfo["ItemBarCode"].asString();
		if(!valueAlarmsAlarmInfo["RetryTimes"].isNull())
			alarmsObject.retryTimes = std::stol(valueAlarmsAlarmInfo["RetryTimes"].asString());
		if(!valueAlarmsAlarmInfo["DealTime"].isNull())
			alarmsObject.dealTime = valueAlarmsAlarmInfo["DealTime"].asString();
		if(!valueAlarmsAlarmInfo["AlarmType"].isNull())
			alarmsObject.alarmType = valueAlarmsAlarmInfo["AlarmType"].asString();
		if(!valueAlarmsAlarmInfo["AlarmStatus"].isNull())
			alarmsObject.alarmStatus = valueAlarmsAlarmInfo["AlarmStatus"].asString();
		alarms_.push_back(alarmsObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int DescribeAlarmsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAlarmsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeAlarmsResult::getMessage()const
{
	return message_;
}

int DescribeAlarmsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAlarmsResult::AlarmInfo> DescribeAlarmsResult::getAlarms()const
{
	return alarms_;
}

std::string DescribeAlarmsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeAlarmsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeAlarmsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeAlarmsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeAlarmsResult::getCode()const
{
	return code_;
}

bool DescribeAlarmsResult::getSuccess()const
{
	return success_;
}

