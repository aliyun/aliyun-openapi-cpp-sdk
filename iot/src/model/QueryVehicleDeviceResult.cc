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

#include <alibabacloud/iot/model/QueryVehicleDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryVehicleDeviceResult::QueryVehicleDeviceResult() :
	ServiceResult()
{}

QueryVehicleDeviceResult::QueryVehicleDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryVehicleDeviceResult::~QueryVehicleDeviceResult()
{}

void QueryVehicleDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["DeviceName"].isNull())
		data_.deviceName = dataNode["DeviceName"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["ModifiedTime"].isNull())
		data_.modifiedTime = std::stol(dataNode["ModifiedTime"].asString());
	if(!dataNode["Protocol"].isNull())
		data_.protocol = dataNode["Protocol"].asString();
	auto jtProtocolDeviceDataNode = dataNode["JtProtocolDeviceData"];
	if(!jtProtocolDeviceDataNode["Manufacturer"].isNull())
		data_.jtProtocolDeviceData.manufacturer = jtProtocolDeviceDataNode["Manufacturer"].asString();
	if(!jtProtocolDeviceDataNode["DeviceModel"].isNull())
		data_.jtProtocolDeviceData.deviceModel = jtProtocolDeviceDataNode["DeviceModel"].asString();
	if(!jtProtocolDeviceDataNode["DeviceId"].isNull())
		data_.jtProtocolDeviceData.deviceId = jtProtocolDeviceDataNode["DeviceId"].asString();
	if(!jtProtocolDeviceDataNode["Status"].isNull())
		data_.jtProtocolDeviceData.status = jtProtocolDeviceDataNode["Status"].asString();
	if(!jtProtocolDeviceDataNode["AuthCode"].isNull())
		data_.jtProtocolDeviceData.authCode = jtProtocolDeviceDataNode["AuthCode"].asString();
	if(!jtProtocolDeviceDataNode["Province"].isNull())
		data_.jtProtocolDeviceData.province = jtProtocolDeviceDataNode["Province"].asString();
	if(!jtProtocolDeviceDataNode["City"].isNull())
		data_.jtProtocolDeviceData.city = jtProtocolDeviceDataNode["City"].asString();
	if(!jtProtocolDeviceDataNode["VehicleColour"].isNull())
		data_.jtProtocolDeviceData.vehicleColour = jtProtocolDeviceDataNode["VehicleColour"].asString();
	if(!jtProtocolDeviceDataNode["VehicleNumber"].isNull())
		data_.jtProtocolDeviceData.vehicleNumber = jtProtocolDeviceDataNode["VehicleNumber"].asString();
	if(!jtProtocolDeviceDataNode["RegisterTime"].isNull())
		data_.jtProtocolDeviceData.registerTime = jtProtocolDeviceDataNode["RegisterTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryVehicleDeviceResult::Data QueryVehicleDeviceResult::getData()const
{
	return data_;
}

std::string QueryVehicleDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryVehicleDeviceResult::getCode()const
{
	return code_;
}

bool QueryVehicleDeviceResult::getSuccess()const
{
	return success_;
}

