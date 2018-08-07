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

#include <alibabacloud/iot/model/QueryDeviceByNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceByNameResult::QueryDeviceByNameResult() :
	ServiceResult()
{}

QueryDeviceByNameResult::QueryDeviceByNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceByNameResult::~QueryDeviceByNameResult()
{}

void QueryDeviceByNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto deviceInfoNode = value["DeviceInfo"];
	if(!deviceInfoNode["DeviceId"].isNull())
		deviceInfo_.deviceId = deviceInfoNode["DeviceId"].asString();
	if(!deviceInfoNode["DeviceSecret"].isNull())
		deviceInfo_.deviceSecret = deviceInfoNode["DeviceSecret"].asString();
	if(!deviceInfoNode["ProductKey"].isNull())
		deviceInfo_.productKey = deviceInfoNode["ProductKey"].asString();
	if(!deviceInfoNode["DeviceStatus"].isNull())
		deviceInfo_.deviceStatus = deviceInfoNode["DeviceStatus"].asString();
	if(!deviceInfoNode["DeviceName"].isNull())
		deviceInfo_.deviceName = deviceInfoNode["DeviceName"].asString();
	if(!deviceInfoNode["DeviceType"].isNull())
		deviceInfo_.deviceType = deviceInfoNode["DeviceType"].asString();
	if(!deviceInfoNode["ClientIp"].isNull())
		deviceInfo_.clientIp = deviceInfoNode["ClientIp"].asString();
	if(!deviceInfoNode["GmtCreate"].isNull())
		deviceInfo_.gmtCreate = deviceInfoNode["GmtCreate"].asString();
	if(!deviceInfoNode["GmtModified"].isNull())
		deviceInfo_.gmtModified = deviceInfoNode["GmtModified"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDeviceByNameResult::DeviceInfo QueryDeviceByNameResult::getDeviceInfo()const
{
	return deviceInfo_;
}

std::string QueryDeviceByNameResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceByNameResult::getCode()const
{
	return code_;
}

bool QueryDeviceByNameResult::getSuccess()const
{
	return success_;
}

