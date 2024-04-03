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

#include <alibabacloud/cloudauth/model/ModifyDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

ModifyDeviceInfoResult::ModifyDeviceInfoResult() :
	ServiceResult()
{}

ModifyDeviceInfoResult::ModifyDeviceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyDeviceInfoResult::~ModifyDeviceInfoResult()
{}

void ModifyDeviceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UserDeviceId"].isNull())
		userDeviceId_ = value["UserDeviceId"].asString();
	if(!value["DeviceId"].isNull())
		deviceId_ = value["DeviceId"].asString();
	if(!value["ExpiredDay"].isNull())
		expiredDay_ = value["ExpiredDay"].asString();
	if(!value["BeginDay"].isNull())
		beginDay_ = value["BeginDay"].asString();
	if(!value["BizType"].isNull())
		bizType_ = value["BizType"].asString();

}

std::string ModifyDeviceInfoResult::getExpiredDay()const
{
	return expiredDay_;
}

std::string ModifyDeviceInfoResult::getBeginDay()const
{
	return beginDay_;
}

std::string ModifyDeviceInfoResult::getDeviceId()const
{
	return deviceId_;
}

std::string ModifyDeviceInfoResult::getBizType()const
{
	return bizType_;
}

std::string ModifyDeviceInfoResult::getUserDeviceId()const
{
	return userDeviceId_;
}

