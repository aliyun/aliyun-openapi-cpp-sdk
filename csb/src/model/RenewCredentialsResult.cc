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

#include <alibabacloud/csb/model/RenewCredentialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

RenewCredentialsResult::RenewCredentialsResult() :
	ServiceResult()
{}

RenewCredentialsResult::RenewCredentialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RenewCredentialsResult::~RenewCredentialsResult()
{}

void RenewCredentialsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto credentialsNode = dataNode["Credentials"];
	if(!credentialsNode["GmtCreate"].isNull())
		data_.credentials.gmtCreate = std::stol(credentialsNode["GmtCreate"].asString());
	if(!credentialsNode["Id"].isNull())
		data_.credentials.id = std::stol(credentialsNode["Id"].asString());
	if(!credentialsNode["Name"].isNull())
		data_.credentials.name = credentialsNode["Name"].asString();
	if(!credentialsNode["UserId"].isNull())
		data_.credentials.userId = credentialsNode["UserId"].asString();
	auto currentCredentialNode = credentialsNode["CurrentCredential"];
	if(!currentCredentialNode["AccessKey"].isNull())
		data_.credentials.currentCredential.accessKey = currentCredentialNode["AccessKey"].asString();
	if(!currentCredentialNode["SecretKey"].isNull())
		data_.credentials.currentCredential.secretKey = currentCredentialNode["SecretKey"].asString();
	auto newCredentialNode = credentialsNode["NewCredential"];
	if(!newCredentialNode["AccessKey"].isNull())
		data_.credentials.newCredential.accessKey = newCredentialNode["AccessKey"].asString();
	if(!newCredentialNode["SecretKey"].isNull())
		data_.credentials.newCredential.secretKey = newCredentialNode["SecretKey"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RenewCredentialsResult::getMessage()const
{
	return message_;
}

RenewCredentialsResult::Data RenewCredentialsResult::getData()const
{
	return data_;
}

int RenewCredentialsResult::getCode()const
{
	return code_;
}

