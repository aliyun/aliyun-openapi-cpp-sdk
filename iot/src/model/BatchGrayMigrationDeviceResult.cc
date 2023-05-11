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

#include <alibabacloud/iot/model/BatchGrayMigrationDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

BatchGrayMigrationDeviceResult::BatchGrayMigrationDeviceResult() :
	ServiceResult()
{}

BatchGrayMigrationDeviceResult::BatchGrayMigrationDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGrayMigrationDeviceResult::~BatchGrayMigrationDeviceResult()
{}

void BatchGrayMigrationDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDetailsNode = dataNode["Details"]["item"];
	for (auto dataNodeDetailsitem : allDetailsNode)
	{
		Data::Item itemObject;
		if(!dataNodeDetailsitem["DeviceName"].isNull())
			itemObject.deviceName = dataNodeDetailsitem["DeviceName"].asString();
		if(!dataNodeDetailsitem["Status"].isNull())
			itemObject.status = dataNodeDetailsitem["Status"].asString();
		if(!dataNodeDetailsitem["Code"].isNull())
			itemObject.code = std::stoi(dataNodeDetailsitem["Code"].asString());
		if(!dataNodeDetailsitem["Message"].isNull())
			itemObject.message = dataNodeDetailsitem["Message"].asString();
		data_.details.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

BatchGrayMigrationDeviceResult::Data BatchGrayMigrationDeviceResult::getData()const
{
	return data_;
}

std::string BatchGrayMigrationDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchGrayMigrationDeviceResult::getCode()const
{
	return code_;
}

bool BatchGrayMigrationDeviceResult::getSuccess()const
{
	return success_;
}

