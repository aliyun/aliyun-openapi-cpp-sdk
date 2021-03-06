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

#include <alibabacloud/aliyuncvc/model/GetDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

GetDeviceInfoResult::GetDeviceInfoResult() :
	ServiceResult()
{}

GetDeviceInfoResult::GetDeviceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDeviceInfoResult::~GetDeviceInfoResult()
{}

void GetDeviceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto deviceNode = value["Device"];
	if(!deviceNode["Status"].isNull())
		device_.status = std::stoi(deviceNode["Status"].asString());
	if(!deviceNode["CastScreenCode"].isNull())
		device_.castScreenCode = deviceNode["CastScreenCode"].asString();
	if(!deviceNode["IP"].isNull())
		device_.iP = deviceNode["IP"].asString();
	if(!deviceNode["Port"].isNull())
		device_.port = deviceNode["Port"].asString();
	if(!deviceNode["Sn"].isNull())
		device_.sn = deviceNode["Sn"].asString();
	if(!deviceNode["Ssid"].isNull())
		device_.ssid = deviceNode["Ssid"].asString();
	if(!deviceNode["ActivationCode"].isNull())
		device_.activationCode = deviceNode["ActivationCode"].asString();
	if(!deviceNode["Mac"].isNull())
		device_.mac = deviceNode["Mac"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetDeviceInfoResult::getMessage()const
{
	return message_;
}

GetDeviceInfoResult::Device GetDeviceInfoResult::getDevice()const
{
	return device_;
}

int GetDeviceInfoResult::getErrorCode()const
{
	return errorCode_;
}

bool GetDeviceInfoResult::getSuccess()const
{
	return success_;
}

