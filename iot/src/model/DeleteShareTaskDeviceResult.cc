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

#include <alibabacloud/iot/model/DeleteShareTaskDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

DeleteShareTaskDeviceResult::DeleteShareTaskDeviceResult() :
	ServiceResult()
{}

DeleteShareTaskDeviceResult::DeleteShareTaskDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteShareTaskDeviceResult::~DeleteShareTaskDeviceResult()
{}

void DeleteShareTaskDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Progress"].isNull())
		data_.progress = std::stoi(dataNode["Progress"].asString());
	if(!dataNode["ProgressId"].isNull())
		data_.progressId = dataNode["ProgressId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

DeleteShareTaskDeviceResult::Data DeleteShareTaskDeviceResult::getData()const
{
	return data_;
}

std::string DeleteShareTaskDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DeleteShareTaskDeviceResult::getCode()const
{
	return code_;
}

bool DeleteShareTaskDeviceResult::getSuccess()const
{
	return success_;
}

