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

#include <alibabacloud/cams/model/CreatePhoneMessageQrdlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

CreatePhoneMessageQrdlResult::CreatePhoneMessageQrdlResult() :
	ServiceResult()
{}

CreatePhoneMessageQrdlResult::CreatePhoneMessageQrdlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePhoneMessageQrdlResult::~CreatePhoneMessageQrdlResult()
{}

void CreatePhoneMessageQrdlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PhoneNumber"].isNull())
		data_.phoneNumber = dataNode["PhoneNumber"].asString();
	if(!dataNode["QrdlCode"].isNull())
		data_.qrdlCode = dataNode["QrdlCode"].asString();
	if(!dataNode["GenerateQrImage"].isNull())
		data_.generateQrImage = dataNode["GenerateQrImage"].asString();
	if(!dataNode["PrefilledMessage"].isNull())
		data_.prefilledMessage = dataNode["PrefilledMessage"].asString();
	if(!dataNode["DeepLinkUrl"].isNull())
		data_.deepLinkUrl = dataNode["DeepLinkUrl"].asString();
	if(!dataNode["QrImageUrl"].isNull())
		data_.qrImageUrl = dataNode["QrImageUrl"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreatePhoneMessageQrdlResult::getMessage()const
{
	return message_;
}

CreatePhoneMessageQrdlResult::Data CreatePhoneMessageQrdlResult::getData()const
{
	return data_;
}

std::string CreatePhoneMessageQrdlResult::getCode()const
{
	return code_;
}

