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

#include <alibabacloud/schedulerx2/model/GetAppGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

GetAppGroupResult::GetAppGroupResult() :
	ServiceResult()
{}

GetAppGroupResult::GetAppGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppGroupResult::~GetAppGroupResult()
{}

void GetAppGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["MaxJobs"].isNull())
		data_.maxJobs = std::stoi(dataNode["MaxJobs"].asString());
	if(!dataNode["GroupId"].isNull())
		data_.groupId = dataNode["GroupId"].asString();
	if(!dataNode["AlarmJson"].isNull())
		data_.alarmJson = dataNode["AlarmJson"].asString();
	if(!dataNode["MetricsThresholdJson"].isNull())
		data_.metricsThresholdJson = dataNode["MetricsThresholdJson"].asString();
	if(!dataNode["MonitorConfigJson"].isNull())
		data_.monitorConfigJson = dataNode["MonitorConfigJson"].asString();
	if(!dataNode["MaxConcurrency"].isNull())
		data_.maxConcurrency = std::stoi(dataNode["MaxConcurrency"].asString());
	if(!dataNode["CurJobs"].isNull())
		data_.curJobs = std::stoi(dataNode["CurJobs"].asString());
	if(!dataNode["RunningInstanceNum"].isNull())
		data_.runningInstanceNum = std::stoi(dataNode["RunningInstanceNum"].asString());
	if(!dataNode["ReadyInstanceNum"].isNull())
		data_.readyInstanceNum = std::stoi(dataNode["ReadyInstanceNum"].asString());
	if(!dataNode["AppGroupId"].isNull())
		data_.appGroupId = std::stol(dataNode["AppGroupId"].asString());
	if(!dataNode["AppKey"].isNull())
		data_.appKey = dataNode["AppKey"].asString();
	if(!dataNode["Xattrs"].isNull())
		data_.xattrs = dataNode["Xattrs"].asString();
	if(!dataNode["AppVersion"].isNull())
		data_.appVersion = dataNode["AppVersion"].asString();
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["MonitorContactsJson"].isNull())
		data_.monitorContactsJson = dataNode["MonitorContactsJson"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetAppGroupResult::getMessage()const
{
	return message_;
}

GetAppGroupResult::Data GetAppGroupResult::getData()const
{
	return data_;
}

int GetAppGroupResult::getCode()const
{
	return code_;
}

bool GetAppGroupResult::getSuccess()const
{
	return success_;
}

