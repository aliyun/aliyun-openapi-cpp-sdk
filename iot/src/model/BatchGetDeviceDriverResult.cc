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

#include <alibabacloud/iot/model/BatchGetDeviceDriverResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

BatchGetDeviceDriverResult::BatchGetDeviceDriverResult() :
	ServiceResult()
{}

BatchGetDeviceDriverResult::BatchGetDeviceDriverResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetDeviceDriverResult::~BatchGetDeviceDriverResult()
{}

void BatchGetDeviceDriverResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeviceDriverList = value["DeviceDriverList"]["DeviceDriver"];
	for (auto value : allDeviceDriverList)
	{
		DeviceDriver deviceDriverListObject;
		if(!value["DriverId"].isNull())
			deviceDriverListObject.driverId = value["DriverId"].asString();
		if(!value["IotId"].isNull())
			deviceDriverListObject.iotId = value["IotId"].asString();
		deviceDriverList_.push_back(deviceDriverListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<BatchGetDeviceDriverResult::DeviceDriver> BatchGetDeviceDriverResult::getDeviceDriverList()const
{
	return deviceDriverList_;
}

std::string BatchGetDeviceDriverResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchGetDeviceDriverResult::getCode()const
{
	return code_;
}

bool BatchGetDeviceDriverResult::getSuccess()const
{
	return success_;
}

