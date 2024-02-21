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

#include <alibabacloud/linkvisual/model/QueryGbSubDeviceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryGbSubDeviceListResult::QueryGbSubDeviceListResult() :
	ServiceResult()
{}

QueryGbSubDeviceListResult::QueryGbSubDeviceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryGbSubDeviceListResult::~QueryGbSubDeviceListResult()
{}

void QueryGbSubDeviceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allGbSubDeviceListNode = dataNode["GbSubDeviceList"]["gbSubDevice"];
	for (auto dataNodeGbSubDeviceListgbSubDevice : allGbSubDeviceListNode)
	{
		Data::GbSubDevice gbSubDeviceObject;
		if(!dataNodeGbSubDeviceListgbSubDevice["ProductKey"].isNull())
			gbSubDeviceObject.productKey = dataNodeGbSubDeviceListgbSubDevice["ProductKey"].asString();
		if(!dataNodeGbSubDeviceListgbSubDevice["DeviceName"].isNull())
			gbSubDeviceObject.deviceName = dataNodeGbSubDeviceListgbSubDevice["DeviceName"].asString();
		if(!dataNodeGbSubDeviceListgbSubDevice["DeviceId"].isNull())
			gbSubDeviceObject.deviceId = dataNodeGbSubDeviceListgbSubDevice["DeviceId"].asString();
		if(!dataNodeGbSubDeviceListgbSubDevice["DeviceEnable"].isNull())
			gbSubDeviceObject.deviceEnable = std::stoi(dataNodeGbSubDeviceListgbSubDevice["DeviceEnable"].asString());
		if(!dataNodeGbSubDeviceListgbSubDevice["IotId"].isNull())
			gbSubDeviceObject.iotId = dataNodeGbSubDeviceListgbSubDevice["IotId"].asString();
		data_.gbSubDeviceList.push_back(gbSubDeviceObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryGbSubDeviceListResult::Data QueryGbSubDeviceListResult::getData()const
{
	return data_;
}

std::string QueryGbSubDeviceListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryGbSubDeviceListResult::getCode()const
{
	return code_;
}

bool QueryGbSubDeviceListResult::getSuccess()const
{
	return success_;
}

