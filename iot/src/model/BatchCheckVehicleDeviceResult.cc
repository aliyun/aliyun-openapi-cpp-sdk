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

#include <alibabacloud/iot/model/BatchCheckVehicleDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

BatchCheckVehicleDeviceResult::BatchCheckVehicleDeviceResult() :
	ServiceResult()
{}

BatchCheckVehicleDeviceResult::BatchCheckVehicleDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchCheckVehicleDeviceResult::~BatchCheckVehicleDeviceResult()
{}

void BatchCheckVehicleDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allInvalidDetailListNode = dataNode["InvalidDetailList"]["InvalidDetailListItem"];
	for (auto dataNodeInvalidDetailListInvalidDetailListItem : allInvalidDetailListNode)
	{
		Data::InvalidDetailListItem invalidDetailListItemObject;
		if(!dataNodeInvalidDetailListInvalidDetailListItem["Manufacturer"].isNull())
			invalidDetailListItemObject.manufacturer = dataNodeInvalidDetailListInvalidDetailListItem["Manufacturer"].asString();
		if(!dataNodeInvalidDetailListInvalidDetailListItem["DeviceModel"].isNull())
			invalidDetailListItemObject.deviceModel = dataNodeInvalidDetailListInvalidDetailListItem["DeviceModel"].asString();
		if(!dataNodeInvalidDetailListInvalidDetailListItem["DeviceId"].isNull())
			invalidDetailListItemObject.deviceId = dataNodeInvalidDetailListInvalidDetailListItem["DeviceId"].asString();
		if(!dataNodeInvalidDetailListInvalidDetailListItem["DeviceName"].isNull())
			invalidDetailListItemObject.deviceName = dataNodeInvalidDetailListInvalidDetailListItem["DeviceName"].asString();
		if(!dataNodeInvalidDetailListInvalidDetailListItem["ErrorMsg"].isNull())
			invalidDetailListItemObject.errorMsg = dataNodeInvalidDetailListInvalidDetailListItem["ErrorMsg"].asString();
		data_.invalidDetailList.push_back(invalidDetailListItemObject);
	}
		auto allInvalidManufacturerList = dataNode["InvalidManufacturerList"]["invalidManufacturerList"];
		for (auto value : allInvalidManufacturerList)
			data_.invalidManufacturerList.push_back(value.asString());
		auto allInvalidDeviceModelList = dataNode["InvalidDeviceModelList"]["invalidDeviceModelList"];
		for (auto value : allInvalidDeviceModelList)
			data_.invalidDeviceModelList.push_back(value.asString());
		auto allInvalidDeviceIdList = dataNode["InvalidDeviceIdList"]["invalidDeviceIdList"];
		for (auto value : allInvalidDeviceIdList)
			data_.invalidDeviceIdList.push_back(value.asString());
		auto allRepeatedDeviceIdList = dataNode["RepeatedDeviceIdList"]["repeatedDeviceIdList"];
		for (auto value : allRepeatedDeviceIdList)
			data_.repeatedDeviceIdList.push_back(value.asString());
		auto allInvalidDeviceNameList = dataNode["InvalidDeviceNameList"]["InvalidDeviceNameList"];
		for (auto value : allInvalidDeviceNameList)
			data_.invalidDeviceNameList.push_back(value.asString());
		auto allRepeatedDeviceNameList = dataNode["RepeatedDeviceNameList"]["RepeatedDeviceNameList"];
		for (auto value : allRepeatedDeviceNameList)
			data_.repeatedDeviceNameList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

BatchCheckVehicleDeviceResult::Data BatchCheckVehicleDeviceResult::getData()const
{
	return data_;
}

std::string BatchCheckVehicleDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchCheckVehicleDeviceResult::getCode()const
{
	return code_;
}

bool BatchCheckVehicleDeviceResult::getSuccess()const
{
	return success_;
}

