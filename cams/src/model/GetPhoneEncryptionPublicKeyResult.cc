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

#include <alibabacloud/cams/model/GetPhoneEncryptionPublicKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

GetPhoneEncryptionPublicKeyResult::GetPhoneEncryptionPublicKeyResult() :
	ServiceResult()
{}

GetPhoneEncryptionPublicKeyResult::GetPhoneEncryptionPublicKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPhoneEncryptionPublicKeyResult::~GetPhoneEncryptionPublicKeyResult()
{}

void GetPhoneEncryptionPublicKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PhoneNumber"].isNull())
		data_.phoneNumber = dataNode["PhoneNumber"].asString();
	if(!dataNode["EncryptionPublicKey"].isNull())
		data_.encryptionPublicKey = dataNode["EncryptionPublicKey"].asString();
	if(!dataNode["EncryptionPublicKeyStatus"].isNull())
		data_.encryptionPublicKeyStatus = dataNode["EncryptionPublicKeyStatus"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetPhoneEncryptionPublicKeyResult::getMessage()const
{
	return message_;
}

GetPhoneEncryptionPublicKeyResult::Data GetPhoneEncryptionPublicKeyResult::getData()const
{
	return data_;
}

std::string GetPhoneEncryptionPublicKeyResult::getCode()const
{
	return code_;
}

