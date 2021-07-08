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

#include <alibabacloud/moguan-sdk/model/RegisterDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Moguan_sdk;
using namespace AlibabaCloud::Moguan_sdk::Model;

RegisterDeviceResult::RegisterDeviceResult() :
	ServiceResult()
{}

RegisterDeviceResult::RegisterDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RegisterDeviceResult::~RegisterDeviceResult()
{}

void RegisterDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Rid"].isNull())
		data_.rid = dataNode["Rid"].asString();
	if(!dataNode["License"].isNull())
		data_.license = dataNode["License"].asString();
	if(!dataNode["Signature"].isNull())
		data_.signature = dataNode["Signature"].asString();
	if(!dataNode["PublicKey"].isNull())
		data_.publicKey = dataNode["PublicKey"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string RegisterDeviceResult::getMessage()const
{
	return message_;
}

RegisterDeviceResult::Data RegisterDeviceResult::getData()const
{
	return data_;
}

int RegisterDeviceResult::getErrorCode()const
{
	return errorCode_;
}

std::string RegisterDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

