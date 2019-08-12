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

#include <alibabacloud/iot/model/BatchQueryDeviceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

BatchQueryDeviceDetailResult::BatchQueryDeviceDetailResult() :
	ServiceResult()
{}

BatchQueryDeviceDetailResult::BatchQueryDeviceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchQueryDeviceDetailResult::~BatchQueryDeviceDetailResult()
{}

void BatchQueryDeviceDetailResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["DataItem"];
	for (auto value : allData)
	{
		DataItem dataObject;
		if(!value["ProductKey"].isNull())
			dataObject.productKey = value["ProductKey"].asString();
		if(!value["ProductName"].isNull())
			dataObject.productName = value["ProductName"].asString();
		if(!value["DeviceName"].isNull())
			dataObject.deviceName = value["DeviceName"].asString();
		if(!value["Nickname"].isNull())
			dataObject.nickname = value["Nickname"].asString();
		if(!value["DeviceSecret"].isNull())
			dataObject.deviceSecret = value["DeviceSecret"].asString();
		if(!value["IotId"].isNull())
			dataObject.iotId = value["IotId"].asString();
		if(!value["UtcCreate"].isNull())
			dataObject.utcCreate = value["UtcCreate"].asString();
		if(!value["GmtCreate"].isNull())
			dataObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["UtcActive"].isNull())
			dataObject.utcActive = value["UtcActive"].asString();
		if(!value["GmtActive"].isNull())
			dataObject.gmtActive = value["GmtActive"].asString();
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		if(!value["FirmwareVersion"].isNull())
			dataObject.firmwareVersion = value["FirmwareVersion"].asString();
		if(!value["NodeType"].isNull())
			dataObject.nodeType = std::stoi(value["NodeType"].asString());
		if(!value["Region"].isNull())
			dataObject.region = value["Region"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<BatchQueryDeviceDetailResult::DataItem> BatchQueryDeviceDetailResult::getData()const
{
	return data_;
}

std::string BatchQueryDeviceDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchQueryDeviceDetailResult::getCode()const
{
	return code_;
}

bool BatchQueryDeviceDetailResult::getSuccess()const
{
	return success_;
}

