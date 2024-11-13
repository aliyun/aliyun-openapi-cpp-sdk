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

#include <alibabacloud/push/model/QueryDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

QueryDeviceInfoResult::QueryDeviceInfoResult() :
	ServiceResult()
{}

QueryDeviceInfoResult::QueryDeviceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceInfoResult::~QueryDeviceInfoResult()
{}

void QueryDeviceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto deviceInfoNode = value["DeviceInfo"];
	if(!deviceInfoNode["Account"].isNull())
		deviceInfo_.account = deviceInfoNode["Account"].asString();
	if(!deviceInfoNode["Alias"].isNull())
		deviceInfo_.alias = deviceInfoNode["Alias"].asString();
	if(!deviceInfoNode["Brand"].isNull())
		deviceInfo_.brand = deviceInfoNode["Brand"].asString();
	if(!deviceInfoNode["DeviceId"].isNull())
		deviceInfo_.deviceId = deviceInfoNode["DeviceId"].asString();
	if(!deviceInfoNode["DeviceToken"].isNull())
		deviceInfo_.deviceToken = deviceInfoNode["DeviceToken"].asString();
	if(!deviceInfoNode["DeviceType"].isNull())
		deviceInfo_.deviceType = deviceInfoNode["DeviceType"].asString();
	if(!deviceInfoNode["LastOnlineTime"].isNull())
		deviceInfo_.lastOnlineTime = deviceInfoNode["LastOnlineTime"].asString();
	if(!deviceInfoNode["Model"].isNull())
		deviceInfo_.model = deviceInfoNode["Model"].asString();
	if(!deviceInfoNode["Online"].isNull())
		deviceInfo_.online = deviceInfoNode["Online"].asString() == "true";
	if(!deviceInfoNode["PhoneNumber"].isNull())
		deviceInfo_.phoneNumber = deviceInfoNode["PhoneNumber"].asString();
	if(!deviceInfoNode["PushEnabled"].isNull())
		deviceInfo_.pushEnabled = deviceInfoNode["PushEnabled"].asString() == "true";
	if(!deviceInfoNode["Tags"].isNull())
		deviceInfo_.tags = deviceInfoNode["Tags"].asString();

}

QueryDeviceInfoResult::DeviceInfo QueryDeviceInfoResult::getDeviceInfo()const
{
	return deviceInfo_;
}

