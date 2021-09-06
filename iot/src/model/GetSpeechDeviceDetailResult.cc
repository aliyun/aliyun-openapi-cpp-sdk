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

#include <alibabacloud/iot/model/GetSpeechDeviceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetSpeechDeviceDetailResult::GetSpeechDeviceDetailResult() :
	ServiceResult()
{}

GetSpeechDeviceDetailResult::GetSpeechDeviceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSpeechDeviceDetailResult::~GetSpeechDeviceDetailResult()
{}

void GetSpeechDeviceDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["DeviceName"].isNull())
		data_.deviceName = dataNode["DeviceName"].asString();
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["AvailableSpace"].isNull())
		data_.availableSpace = std::stof(dataNode["AvailableSpace"].asString());
	if(!dataNode["TotalSpace"].isNull())
		data_.totalSpace = std::stof(dataNode["TotalSpace"].asString());
	if(!dataNode["SpeechListUpdateTime"].isNull())
		data_.speechListUpdateTime = std::stol(dataNode["SpeechListUpdateTime"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetSpeechDeviceDetailResult::Data GetSpeechDeviceDetailResult::getData()const
{
	return data_;
}

std::string GetSpeechDeviceDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetSpeechDeviceDetailResult::getCode()const
{
	return code_;
}

bool GetSpeechDeviceDetailResult::getSuccess()const
{
	return success_;
}

