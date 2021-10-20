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

#include <alibabacloud/iot/model/QueryDeviceTunnelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceTunnelResult::QueryDeviceTunnelResult() :
	ServiceResult()
{}

QueryDeviceTunnelResult::QueryDeviceTunnelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceTunnelResult::~QueryDeviceTunnelResult()
{}

void QueryDeviceTunnelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TunnelId"].isNull())
		data_.tunnelId = dataNode["TunnelId"].asString();
	if(!dataNode["TunnelState"].isNull())
		data_.tunnelState = dataNode["TunnelState"].asString();
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["DeviceName"].isNull())
		data_.deviceName = dataNode["DeviceName"].asString();
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	if(!dataNode["DeviceConnState"].isNull())
		data_.deviceConnState = dataNode["DeviceConnState"].asString();
	if(!dataNode["SourceConnState"].isNull())
		data_.sourceConnState = dataNode["SourceConnState"].asString();
	if(!dataNode["Udi"].isNull())
		data_.udi = dataNode["Udi"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["UtcCreated"].isNull())
		data_.utcCreated = dataNode["UtcCreated"].asString();
	if(!dataNode["UtcClosed"].isNull())
		data_.utcClosed = dataNode["UtcClosed"].asString();
	if(!dataNode["ProductName"].isNull())
		data_.productName = dataNode["ProductName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryDeviceTunnelResult::Data QueryDeviceTunnelResult::getData()const
{
	return data_;
}

std::string QueryDeviceTunnelResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceTunnelResult::getCode()const
{
	return code_;
}

bool QueryDeviceTunnelResult::getSuccess()const
{
	return success_;
}

