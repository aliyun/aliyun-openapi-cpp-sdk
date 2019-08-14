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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto deviceInfoNode = value["DeviceInfo"];
	if(!deviceInfoNode["DeviceId"].isNull())
		deviceInfo_.deviceId = deviceInfoNode["DeviceId"].asString();
	if(!deviceInfoNode["DeviceType"].isNull())
		deviceInfo_.deviceType = deviceInfoNode["DeviceType"].asString();
	if(!deviceInfoNode["Account"].isNull())
		deviceInfo_.account = deviceInfoNode["Account"].asString();
	if(!deviceInfoNode["DeviceToken"].isNull())
		deviceInfo_.deviceToken = deviceInfoNode["DeviceToken"].asString();
	if(!deviceInfoNode["Tags"].isNull())
		deviceInfo_.tags = deviceInfoNode["Tags"].asString();
	if(!deviceInfoNode["Alias"].isNull())
		deviceInfo_.alias = deviceInfoNode["Alias"].asString();
	if(!deviceInfoNode["LastOnlineTime"].isNull())
		deviceInfo_.lastOnlineTime = deviceInfoNode["LastOnlineTime"].asString();
	if(!deviceInfoNode["Online"].isNull())
		deviceInfo_.online = deviceInfoNode["Online"].asString() == "true";
	if(!deviceInfoNode["PhoneNumber"].isNull())
		deviceInfo_.phoneNumber = deviceInfoNode["PhoneNumber"].asString();
	if(!deviceInfoNode["PushEnabled"].isNull())
		deviceInfo_.pushEnabled = deviceInfoNode["PushEnabled"].asString() == "true";

}

QueryDeviceInfoResult::DeviceInfo QueryDeviceInfoResult::getDeviceInfo()const
{
	return deviceInfo_;
}

