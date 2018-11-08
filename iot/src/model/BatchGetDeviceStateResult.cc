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

#include <alibabacloud/iot/model/BatchGetDeviceStateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

BatchGetDeviceStateResult::BatchGetDeviceStateResult() :
	ServiceResult()
{}

BatchGetDeviceStateResult::BatchGetDeviceStateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetDeviceStateResult::~BatchGetDeviceStateResult()
{}

void BatchGetDeviceStateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDeviceStatusList = value["DeviceStatusList"]["DeviceStatus"];
	for (auto value : allDeviceStatusList)
	{
		DeviceStatus deviceStatusListObject;
		if(!value["DeviceId"].isNull())
			deviceStatusListObject.deviceId = value["DeviceId"].asString();
		if(!value["DeviceName"].isNull())
			deviceStatusListObject.deviceName = value["DeviceName"].asString();
		if(!value["Status"].isNull())
			deviceStatusListObject.status = value["Status"].asString();
		if(!value["AsAddress"].isNull())
			deviceStatusListObject.asAddress = value["AsAddress"].asString();
		if(!value["LastOnlineTime"].isNull())
			deviceStatusListObject.lastOnlineTime = value["LastOnlineTime"].asString();
		deviceStatusList_.push_back(deviceStatusListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<BatchGetDeviceStateResult::DeviceStatus> BatchGetDeviceStateResult::getDeviceStatusList()const
{
	return deviceStatusList_;
}

std::string BatchGetDeviceStateResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchGetDeviceStateResult::getCode()const
{
	return code_;
}

bool BatchGetDeviceStateResult::getSuccess()const
{
	return success_;
}

