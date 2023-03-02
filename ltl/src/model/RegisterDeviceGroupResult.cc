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

#include <alibabacloud/ltl/model/RegisterDeviceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

RegisterDeviceGroupResult::RegisterDeviceGroupResult() :
	ServiceResult()
{}

RegisterDeviceGroupResult::RegisterDeviceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RegisterDeviceGroupResult::~RegisterDeviceGroupResult()
{}

void RegisterDeviceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string RegisterDeviceGroupResult::getMessage()const
{
	return message_;
}

std::string RegisterDeviceGroupResult::getData()const
{
	return data_;
}

int RegisterDeviceGroupResult::getCode()const
{
	return code_;
}

bool RegisterDeviceGroupResult::getSuccess()const
{
	return success_;
}

