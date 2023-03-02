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

#include <alibabacloud/ltl/model/ListDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

ListDeviceResult::ListDeviceResult() :
	ServiceResult()
{}

ListDeviceResult::ListDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeviceResult::~ListDeviceResult()
{}

void ListDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Num"].isNull())
		data_.num = std::stoi(dataNode["Num"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Size"].isNull())
		data_.size = std::stoi(dataNode["Size"].asString());
	auto allPageDataNode = dataNode["PageData"]["DeviceInfo"];
	for (auto dataNodePageDataDeviceInfo : allPageDataNode)
	{
		Data::DeviceInfo deviceInfoObject;
		if(!dataNodePageDataDeviceInfo["Status"].isNull())
			deviceInfoObject.status = dataNodePageDataDeviceInfo["Status"].asString();
		if(!dataNodePageDataDeviceInfo["LastSaveTime"].isNull())
			deviceInfoObject.lastSaveTime = std::stol(dataNodePageDataDeviceInfo["LastSaveTime"].asString());
		if(!dataNodePageDataDeviceInfo["DeviceId"].isNull())
			deviceInfoObject.deviceId = dataNodePageDataDeviceInfo["DeviceId"].asString();
		if(!dataNodePageDataDeviceInfo["IotId"].isNull())
			deviceInfoObject.iotId = dataNodePageDataDeviceInfo["IotId"].asString();
		data_.pageData.push_back(deviceInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListDeviceResult::getMessage()const
{
	return message_;
}

ListDeviceResult::Data ListDeviceResult::getData()const
{
	return data_;
}

int ListDeviceResult::getCode()const
{
	return code_;
}

bool ListDeviceResult::getSuccess()const
{
	return success_;
}

