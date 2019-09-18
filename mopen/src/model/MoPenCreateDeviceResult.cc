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

#include <alibabacloud/mopen/model/MoPenCreateDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MoPen;
using namespace AlibabaCloud::MoPen::Model;

MoPenCreateDeviceResult::MoPenCreateDeviceResult() :
	ServiceResult()
{}

MoPenCreateDeviceResult::MoPenCreateDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MoPenCreateDeviceResult::~MoPenCreateDeviceResult()
{}

void MoPenCreateDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DeviceName"].isNull())
		data_.deviceName = dataNode["DeviceName"].asString();
	if(!dataNode["Product"].isNull())
		data_.product = dataNode["Product"].asString();
	if(!dataNode["DeviceSecret"].isNull())
		data_.deviceSecret = dataNode["DeviceSecret"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::string MoPenCreateDeviceResult::getDescription()const
{
	return description_;
}

std::string MoPenCreateDeviceResult::getMessage()const
{
	return message_;
}

MoPenCreateDeviceResult::Data MoPenCreateDeviceResult::getData()const
{
	return data_;
}

bool MoPenCreateDeviceResult::getCode()const
{
	return code_;
}

bool MoPenCreateDeviceResult::getSuccess()const
{
	return success_;
}

