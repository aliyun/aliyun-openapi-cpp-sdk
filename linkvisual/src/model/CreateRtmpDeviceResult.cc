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

#include <alibabacloud/linkvisual/model/CreateRtmpDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

CreateRtmpDeviceResult::CreateRtmpDeviceResult() :
	ServiceResult()
{}

CreateRtmpDeviceResult::CreateRtmpDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRtmpDeviceResult::~CreateRtmpDeviceResult()
{}

void CreateRtmpDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DeviceName"].isNull())
		data_.deviceName = dataNode["DeviceName"].asString();
	if(!dataNode["StreamName"].isNull())
		data_.streamName = dataNode["StreamName"].asString();
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

CreateRtmpDeviceResult::Data CreateRtmpDeviceResult::getData()const
{
	return data_;
}

std::string CreateRtmpDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateRtmpDeviceResult::getCode()const
{
	return code_;
}

bool CreateRtmpDeviceResult::getSuccess()const
{
	return success_;
}

