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

#include <alibabacloud/iot/model/QueryProjectShareDeviceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryProjectShareDeviceListResult::QueryProjectShareDeviceListResult() :
	ServiceResult()
{}

QueryProjectShareDeviceListResult::QueryProjectShareDeviceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryProjectShareDeviceListResult::~QueryProjectShareDeviceListResult()
{}

void QueryProjectShareDeviceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageId"].isNull())
		data_.pageId = std::stoi(dataNode["PageId"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allDeviceListNode = dataNode["DeviceList"]["items"];
	for (auto dataNodeDeviceListitems : allDeviceListNode)
	{
		Data::Items itemsObject;
		if(!dataNodeDeviceListitems["ProductKey"].isNull())
			itemsObject.productKey = dataNodeDeviceListitems["ProductKey"].asString();
		if(!dataNodeDeviceListitems["DeviceName"].isNull())
			itemsObject.deviceName = dataNodeDeviceListitems["DeviceName"].asString();
		if(!dataNodeDeviceListitems["Sharable"].isNull())
			itemsObject.sharable = std::stol(dataNodeDeviceListitems["Sharable"].asString());
		if(!dataNodeDeviceListitems["IotId"].isNull())
			itemsObject.iotId = dataNodeDeviceListitems["IotId"].asString();
		data_.deviceList.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryProjectShareDeviceListResult::Data QueryProjectShareDeviceListResult::getData()const
{
	return data_;
}

std::string QueryProjectShareDeviceListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryProjectShareDeviceListResult::getCode()const
{
	return code_;
}

bool QueryProjectShareDeviceListResult::getSuccess()const
{
	return success_;
}

