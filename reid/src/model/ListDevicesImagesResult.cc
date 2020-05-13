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

#include <alibabacloud/reid/model/ListDevicesImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

ListDevicesImagesResult::ListDevicesImagesResult() :
	ServiceResult()
{}

ListDevicesImagesResult::ListDevicesImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDevicesImagesResult::~ListDevicesImagesResult()
{}

void ListDevicesImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeviceImagesNode = value["DeviceImages"]["DeviceImage"];
	for (auto valueDeviceImagesDeviceImage : allDeviceImagesNode)
	{
		DeviceImage deviceImagesObject;
		if(!valueDeviceImagesDeviceImage["IpcId"].isNull())
			deviceImagesObject.ipcId = std::stol(valueDeviceImagesDeviceImage["IpcId"].asString());
		if(!valueDeviceImagesDeviceImage["ImageUrl"].isNull())
			deviceImagesObject.imageUrl = valueDeviceImagesDeviceImage["ImageUrl"].asString();
		deviceImages_.push_back(deviceImagesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::vector<ListDevicesImagesResult::DeviceImage> ListDevicesImagesResult::getDeviceImages()const
{
	return deviceImages_;
}

std::string ListDevicesImagesResult::getMessage()const
{
	return message_;
}

std::string ListDevicesImagesResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListDevicesImagesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDevicesImagesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListDevicesImagesResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListDevicesImagesResult::getCode()const
{
	return code_;
}

bool ListDevicesImagesResult::getSuccess()const
{
	return success_;
}

