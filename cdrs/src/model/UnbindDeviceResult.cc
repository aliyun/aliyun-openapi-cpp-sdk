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

#include <alibabacloud/cdrs/model/UnbindDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

UnbindDeviceResult::UnbindDeviceResult() :
	ServiceResult()
{}

UnbindDeviceResult::UnbindDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UnbindDeviceResult::~UnbindDeviceResult()
{}

void UnbindDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["Success"].isNull())
			dataObject.success = valueDataDatas["Success"].asString() == "true";
		if(!valueDataDatas["Code"].isNull())
			dataObject.code = valueDataDatas["Code"].asString();
		if(!valueDataDatas["Message"].isNull())
			dataObject.message = valueDataDatas["Message"].asString();
		if(!valueDataDatas["DeviceId"].isNull())
			dataObject.deviceId = valueDataDatas["DeviceId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UnbindDeviceResult::getMessage()const
{
	return message_;
}

std::vector<UnbindDeviceResult::Datas> UnbindDeviceResult::getData()const
{
	return data_;
}

std::string UnbindDeviceResult::getCode()const
{
	return code_;
}

