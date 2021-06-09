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

#include <alibabacloud/aliyuncvc/model/GetDeviceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

GetDeviceListResult::GetDeviceListResult() :
	ServiceResult()
{}

GetDeviceListResult::GetDeviceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDeviceListResult::~GetDeviceListResult()
{}

void GetDeviceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = std::stoi(valueDataDataItem["Status"].asString());
		if(!valueDataDataItem["CastScreenCode"].isNull())
			dataObject.castScreenCode = valueDataDataItem["CastScreenCode"].asString();
		if(!valueDataDataItem["IP"].isNull())
			dataObject.iP = valueDataDataItem["IP"].asString();
		if(!valueDataDataItem["Port"].isNull())
			dataObject.port = valueDataDataItem["Port"].asString();
		if(!valueDataDataItem["SN"].isNull())
			dataObject.sN = valueDataDataItem["SN"].asString();
		if(!valueDataDataItem["ActivationCode"].isNull())
			dataObject.activationCode = valueDataDataItem["ActivationCode"].asString();
		if(!valueDataDataItem["Mac"].isNull())
			dataObject.mac = valueDataDataItem["Mac"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetDeviceListResult::getMessage()const
{
	return message_;
}

std::vector<GetDeviceListResult::DataItem> GetDeviceListResult::getData()const
{
	return data_;
}

int GetDeviceListResult::getErrorCode()const
{
	return errorCode_;
}

bool GetDeviceListResult::getSuccess()const
{
	return success_;
}

