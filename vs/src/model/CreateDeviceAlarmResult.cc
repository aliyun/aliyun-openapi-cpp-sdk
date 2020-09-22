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

#include <alibabacloud/vs/model/CreateDeviceAlarmResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

CreateDeviceAlarmResult::CreateDeviceAlarmResult() :
	ServiceResult()
{}

CreateDeviceAlarmResult::CreateDeviceAlarmResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDeviceAlarmResult::~CreateDeviceAlarmResult()
{}

void CreateDeviceAlarmResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["Expire"].isNull())
		expire_ = std::stol(value["Expire"].asString());
	if(!value["AlarmId"].isNull())
		alarmId_ = value["AlarmId"].asString();
	if(!value["AlarmDelay"].isNull())
		alarmDelay_ = std::stol(value["AlarmDelay"].asString());

}

std::string CreateDeviceAlarmResult::getAlarmId()const
{
	return alarmId_;
}

long CreateDeviceAlarmResult::getExpire()const
{
	return expire_;
}

long CreateDeviceAlarmResult::getAlarmDelay()const
{
	return alarmDelay_;
}

std::string CreateDeviceAlarmResult::getUrl()const
{
	return url_;
}

